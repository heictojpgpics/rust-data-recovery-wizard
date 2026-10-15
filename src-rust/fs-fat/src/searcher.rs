//! FAT searcher — implements `FileSystemSearcher`, `QuickSearcher`, `CompleteSearcher`.

use crate::{
    bpb::{FatBpb, FatType},
    dir_entry::{DirEntry, LfnDirEntry},
    fat_table::{Fat12Table, Fat16Table, Fat32Table, FatTable},
};
use rdw_core::{
    error::{CoreError, CoreResult},
    file::{FileEntry, FileProperties, FileState, FileTimestamps},
    fs::{
        CompleteSearcher, FileSystemSearcher, FileSystemType, QuickSearcher, SearchedPartitionInfo,
    },
    progress::{Progress, ScanPhase},
    scan::{ScanOptions, ScanResult, ScanStats},
    storage::StorageDevice,
};

/// FAT searcher.
#[derive(Debug, Default)]
pub struct FatSearcher {
    bpb: Option<FatBpb>,
    label: String,
}

impl FatSearcher {
    /// Construct a new FAT searcher.
    pub fn new() -> Self {
        Self::default()
    }

    /// Read and parse the BPB from the first sector.
    pub fn read_bpb(&mut self, device: &dyn StorageDevice) -> CoreResult<FatBpb> {
        let mut sector = vec![0u8; 512];
        device.read_blocks(0, &mut sector)?;
        let bpb = FatBpb::parse(&sector)?;
        self.bpb = Some(bpb.clone());
        // Extract volume label.
        let label_str = std::str::from_utf8(&bpb.volume_label)
            .unwrap_or("")
            .trim_end_matches(' ')
            .to_string();
        self.label = label_str;
        Ok(bpb)
    }

    /// Read a single cluster into a buffer.
    pub fn read_cluster(
        &self,
        device: &dyn StorageDevice,
        bpb: &FatBpb,
        cluster: u32,
    ) -> CoreResult<Vec<u8>> {
        let lba = bpb.cluster_to_lba(cluster);
        let bytes = bpb.bytes_per_cluster as usize;
        let mut buf = vec![0u8; bytes];
        device.read_blocks(lba, &mut buf)?;
        Ok(buf)
    }

    /// Read a directory's contents (root or sub-directory).
    ///
    /// Returns a list of (SFN entry, optional LFN string, optional deleted flag).
    pub fn read_directory(
        &self,
        device: &dyn StorageDevice,
        bpb: &FatBpb,
        fat_table: &dyn FatTable,
        first_cluster: u32,
        is_root: bool,
    ) -> CoreResult<Vec<(DirEntry, Option<String>)>> {
        // For FAT12/16 root dir: read from root_dir_start_sector for root_dir_sectors.
        // For FAT32 root dir: it's a cluster chain starting at root_cluster.
        // For sub-directories: cluster chain starting at first_cluster.
        let mut entries: Vec<(DirEntry, Option<String>)> = Vec::new();
        let mut raw_bytes: Vec<u8> = Vec::new();

        if is_root && matches!(bpb.fat_type, FatType::Fat12 | FatType::Fat16) {
            // Fixed root directory.
            let start_lba = bpb.root_dir_start_sector;
            let n_sectors = bpb.root_dir_sectors as u64;
            let bs = bpb.bytes_per_sector as usize;
            raw_bytes.resize((n_sectors as usize) * bs, 0);
            for i in 0..n_sectors {
                let mut sector = vec![0u8; bs];
                device.read_blocks(start_lba + i, &mut sector)?;
                raw_bytes[i as usize * bs..(i as usize + 1) * bs].copy_from_slice(&sector);
            }
        } else {
            // Cluster chain.
            let chain = if is_root && matches!(bpb.fat_type, FatType::Fat32) {
                fat_table.follow_chain(bpb.root_cluster, bpb.total_clusters)?
            } else {
                fat_table.follow_chain(first_cluster, bpb.total_clusters)?
            };
            for cluster in chain {
                let buf = self.read_cluster(device, bpb, cluster)?;
                raw_bytes.extend_from_slice(&buf);
            }
        }

        // Parse 32-byte entries.
        let mut pending_lfns: Vec<LfnDirEntry> = Vec::new();
        for chunk in raw_bytes.as_chunks::<32>().0 {
            let mut entry_buf = [0u8; 32];
            entry_buf.copy_from_slice(chunk);
            // End of directory.
            if entry_buf[0] == 0 {
                break;
            }
            // LFN entry?
            if DirEntry::is_lfn_raw(&entry_buf) {
                if let Ok(lfn) = LfnDirEntry::parse(&entry_buf) {
                    pending_lfns.push(lfn);
                    continue;
                }
            }
            // SFN entry.
            if let Some(sfn) = DirEntry::parse(&entry_buf)? {
                // Try to assemble the LFN.
                let lfn_string = if !pending_lfns.is_empty() {
                    // Verify checksum and order.
                    let expected_checksum = LfnDirEntry::checksum(&sfn.short_name_raw);
                    let all_match = pending_lfns.iter().all(|l| l.checksum == expected_checksum);
                    if all_match {
                        // Sort by sequence number (descending — last LFN is first in physical order).
                        pending_lfns.sort_by_key(|l| !l.is_last);
                        let mut full = String::new();
                        for l in &pending_lfns {
                            full.push_str(&l.chars_string());
                        }
                        Some(full)
                    } else {
                        None
                    }
                } else {
                    None
                };
                pending_lfns.clear();
                entries.push((sfn, lfn_string));
            }
        }

        Ok(entries)
    }

    /// Build a `FileEntry` from a parsed directory entry.
    pub fn build_file_entry(&self, dir_entry: &DirEntry, long_name: &Option<String>) -> FileEntry {
        let name = long_name
            .clone()
            .unwrap_or_else(|| dir_entry.short_name.clone());
        let mut props = FileProperties::new(name, dir_entry.file_size as u64);
        props.attributes.directory = dir_entry.attributes.directory;
        props.attributes.read_only = dir_entry.attributes.read_only;
        props.attributes.hidden = dir_entry.attributes.hidden;
        props.attributes.system = dir_entry.attributes.system;
        props.attributes.archive = dir_entry.attributes.archive;
        props.state = if dir_entry.deleted {
            FileState::Deleted
        } else {
            FileState::Live
        };
        props.timestamps = FileTimestamps {
            created: DirEntry::fat_to_unix(dir_entry.creation_date, dir_entry.creation_time),
            modified: DirEntry::fat_to_unix(dir_entry.write_date, dir_entry.write_time),
            accessed: DirEntry::fat_to_unix(dir_entry.access_date, 0),
            changed: DirEntry::fat_to_unix(dir_entry.write_date, dir_entry.write_time),
        };
        let cluster = dir_entry.first_cluster();
        if cluster > 0 {
            props.metadata.fat_first_cluster = Some(cluster);
        }
        FileEntry::new(props)
    }
}

impl FileSystemSearcher for FatSearcher {
    fn fs_type(&self) -> FileSystemType {
        match self.bpb.as_ref().map(|b| b.fat_type) {
            Some(FatType::Fat12) => FileSystemType::Fat12,
            Some(FatType::Fat16) => FileSystemType::Fat16,
            Some(FatType::Fat32) => FileSystemType::Fat32,
            None => FileSystemType::Fat32,
        }
    }

    fn detect(&self, device: &dyn StorageDevice) -> CoreResult<bool> {
        if device.block_size() < 512 {
            return Err(CoreError::InvalidParameter(format!(
                "block size {} too small",
                device.block_size()
            )));
        }
        let mut sector = vec![0u8; 512];
        device.read_blocks(0, &mut sector)?;
        if sector[0x1FE] != 0x55 || sector[0x1FF] != 0xAA {
            return Ok(false);
        }
        // Check FS type string at 0x36 (FAT12/16) or 0x52 (FAT32).
        let sfn_at_36 = &sector[0x36..0x3E];
        let sfn_at_52 = &sector[0x52..0x5A];
        Ok(sfn_at_36.starts_with(b"FAT12")
            || sfn_at_36.starts_with(b"FAT16")
            || sfn_at_52.starts_with(b"FAT32"))
    }

    fn block_size(&self) -> u32 {
        self.bpb
            .as_ref()
            .map(|b| b.bytes_per_cluster)
            .unwrap_or(512)
    }

    fn volume_label(&self) -> &str {
        &self.label
    }
}

impl QuickSearcher for FatSearcher {
    fn quick_scan(
        &mut self,
        device: &dyn StorageDevice,
        _options: &ScanOptions,
        progress: &Progress,
    ) -> CoreResult<ScanResult> {
        let start = std::time::Instant::now();
        if !progress.phase(ScanPhase::Opening) {
            return Err(CoreError::Cancelled);
        }

        let bpb = self.read_bpb(device)?;
        tracing::info!(
            "FAT BPB: type={}, cluster_size={}, total_clusters={}",
            bpb.fat_type,
            bpb.bytes_per_cluster,
            bpb.total_clusters
        );

        if !progress.phase(ScanPhase::QuickScan) {
            return Err(CoreError::Cancelled);
        }

        // Build the FAT table.
        let fat_table: Box<dyn FatTable> = match bpb.fat_type {
            FatType::Fat12 => Box::new(Fat12Table::new(&bpb, device)?),
            FatType::Fat16 => Box::new(Fat16Table::new(&bpb, device)?),
            FatType::Fat32 => Box::new(Fat32Table::new(&bpb, device)?),
        };

        // Walk the root directory recursively.
        if !progress.phase(ScanPhase::BuildingTree) {
            return Err(CoreError::Cancelled);
        }
        let mut root_props = FileProperties::new("<root>", 0);
        root_props.attributes.directory = true;
        root_props.state = FileState::Live;
        let mut root = FileEntry::new(root_props);

        let mut stats = ScanStats {
            bytes_scanned: bpb.total_sectors * bpb.bytes_per_sector as u64,
            blocks_scanned: bpb.total_sectors,
            ..Default::default()
        };

        let mut visited = std::collections::HashSet::new();
        let root_entries = self.read_directory(device, &bpb, fat_table.as_ref(), 0, true)?;
        for (dir_entry, long_name) in &root_entries {
            let entry = self.build_file_entry(dir_entry, long_name);
            if entry.props.attributes.directory {
                stats.directories += 1;
                // Recurse into subdirectory.
                if let Some(cluster) = entry.props.metadata.fat_first_cluster {
                    if cluster >= 2 && visited.insert(cluster) {
                        self.recurse_directory(
                            device,
                            &bpb,
                            fat_table.as_ref(),
                            cluster,
                            &mut root,
                            &mut visited,
                            &mut stats,
                        )?;
                    }
                }
            } else {
                stats.files_found += 1;
                if dir_entry.deleted {
                    stats.deleted_files += 1;
                }
                stats.recoverable_bytes += entry.props.size;
            }
            if !progress.progress(
                ScanPhase::QuickScan,
                stats.files_found + stats.directories,
                0,
                0,
            ) {
                return Err(CoreError::Cancelled);
            }
            root.children.push(entry);
        }

        stats.duration_ms = start.elapsed().as_millis() as u64;
        let partition_info = SearchedPartitionInfo {
            total_files: stats.files_found,
            live_files: stats.files_found - stats.deleted_files,
            deleted_files: stats.deleted_files,
            lost_files: 0,
            total_bytes: stats.recoverable_bytes,
            recoverable_bytes: stats.recoverable_bytes,
            block_size: bpb.bytes_per_cluster,
            total_blocks: bpb.total_clusters as u64,
            used_blocks: 0, // TODO: walk FAT to count allocated
        };

        if !progress.phase(ScanPhase::Done) {
            return Err(CoreError::Cancelled);
        }
        let _ = progress.finished(stats.clone());

        Ok(ScanResult {
            root,
            partition_info,
            stats,
            warnings: Vec::new(),
        })
    }
}

impl CompleteSearcher for FatSearcher {
    fn complete_scan(
        &mut self,
        device: &dyn StorageDevice,
        options: &ScanOptions,
        progress: &Progress,
    ) -> CoreResult<ScanResult> {
        let result = self.quick_scan(device, options, progress)?;
        if options.enable_carving && !progress.phase(ScanPhase::Carving) {
            return Err(CoreError::Cancelled);
        }
        // TODO Phase 2: invoke rdw-carving on free clusters.
        Ok(result)
    }
}

impl FatSearcher {
    /// Recursively walk a subdirectory and add its children to `parent`.
    fn recurse_directory(
        &self,
        device: &dyn StorageDevice,
        bpb: &FatBpb,
        fat_table: &dyn FatTable,
        first_cluster: u32,
        parent: &mut FileEntry,
        visited: &mut std::collections::HashSet<u32>,
        stats: &mut ScanStats,
    ) -> CoreResult<()> {
        let entries = self.read_directory(device, bpb, fat_table, first_cluster, false)?;
        for (dir_entry, long_name) in &entries {
            // Skip "." and ".." entries.
            if dir_entry.short_name_raw[0] == b'.'
                && (dir_entry.short_name_raw[1] == b' '
                    || (dir_entry.short_name_raw[1] == b'.' && dir_entry.short_name_raw[2] == b' '))
            {
                continue;
            }
            let entry = self.build_file_entry(dir_entry, long_name);
            if entry.props.attributes.directory {
                stats.directories += 1;
                if let Some(cluster) = entry.props.metadata.fat_first_cluster {
                    if cluster >= 2 && visited.insert(cluster) {
                        let mut subdir = entry.clone();
                        self.recurse_directory(
                            device,
                            bpb,
                            fat_table,
                            cluster,
                            &mut subdir,
                            visited,
                            stats,
                        )?;
                        parent.children.push(subdir);
                        continue;
                    }
                }
            } else {
                stats.files_found += 1;
                if dir_entry.deleted {
                    stats.deleted_files += 1;
                }
                stats.recoverable_bytes += entry.props.size;
            }
            parent.children.push(entry);
        }
        Ok(())
    }
}
