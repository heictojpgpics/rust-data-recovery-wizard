//! exFAT searcher — implements `FileSystemSearcher`, `QuickSearcher`, `CompleteSearcher`.

use crate::{
    boot::ExFatBoot,
    dir_entry::{
        exfat_timestamp_to_unix, DirectoryEntry, EntryType, FileEntry, NameEntry, StreamEntry,
    },
    fat::ExFatTable,
    upcase::UpcaseTable,
};
use rdw_core::{
    error::{CoreError, CoreResult},
    file::{FileEntry as CoreFileEntry, FileProperties, FileState, FileTimestamps},
    fs::{
        CompleteSearcher, FileSystemSearcher, FileSystemType, QuickSearcher, SearchedPartitionInfo,
    },
    progress::{Progress, ScanPhase},
    scan::{ScanOptions, ScanResult, ScanStats},
    storage::StorageDevice,
};

/// exFAT searcher.
#[derive(Debug, Default)]
pub struct ExFatSearcher {
    boot: Option<ExFatBoot>,
    label: String,
}

impl ExFatSearcher {
    /// Construct a new exFAT searcher.
    pub fn new() -> Self {
        Self::default()
    }

    /// Read and parse the boot sector.
    pub fn read_boot(&mut self, device: &dyn StorageDevice) -> CoreResult<ExFatBoot> {
        let mut sector = vec![0u8; 512];
        device.read_blocks(0, &mut sector)?;
        let boot = ExFatBoot::parse(&sector)?;
        self.boot = Some(boot.clone());
        Ok(boot)
    }

    /// Read a single cluster.
    pub fn read_cluster(
        &self,
        device: &dyn StorageDevice,
        boot: &ExFatBoot,
        cluster: u32,
    ) -> CoreResult<Vec<u8>> {
        let lba = boot.cluster_to_lba(cluster);
        let bytes = boot.bytes_per_cluster as usize;
        let mut buf = vec![0u8; bytes];
        device.read_blocks(lba, &mut buf)?;
        Ok(buf)
    }

    /// Read a cluster chain (or, for contiguous files, read directly).
    pub fn read_chain(
        &self,
        device: &dyn StorageDevice,
        boot: &ExFatBoot,
        fat: &ExFatTable<'_>,
        first_cluster: u32,
        length: u64,
        is_contiguous: bool,
    ) -> CoreResult<Vec<u8>> {
        let mut out = Vec::with_capacity(length as usize);
        let cluster_size = boot.bytes_per_cluster as u64;
        let clusters_needed = length.div_ceil(cluster_size);
        if is_contiguous {
            // No FAT chain — read directly.
            for i in 0..clusters_needed {
                let cluster = first_cluster + i as u32;
                let mut buf = self.read_cluster(device, boot, cluster)?;
                out.append(&mut buf);
            }
        } else {
            // Follow FAT chain.
            let chain = fat.follow_chain(first_cluster, boot.cluster_count)?;
            for cluster in chain.into_iter().take(clusters_needed as usize) {
                let mut buf = self.read_cluster(device, boot, cluster)?;
                out.append(&mut buf);
            }
        }
        out.truncate(length as usize);
        Ok(out)
    }

    /// Read a directory's contents (returns raw 32-byte entries).
    pub fn read_directory_raw(
        &self,
        device: &dyn StorageDevice,
        boot: &ExFatBoot,
        fat: &ExFatTable<'_>,
        first_cluster: u32,
        length: u64,
        is_contiguous: bool,
    ) -> CoreResult<Vec<DirectoryEntry>> {
        let raw = self.read_chain(device, boot, fat, first_cluster, length, is_contiguous)?;
        let mut entries = Vec::new();
        for chunk in raw.as_chunks::<32>().0 {
            let mut buf = [0u8; 32];
            buf.copy_from_slice(chunk);
            if buf[0] == 0x00 {
                break;
            }
            entries.push(DirectoryEntry::parse(&buf));
        }
        Ok(entries)
    }

    /// Walk a directory and build a list of (file entry, stream entry, name).
    pub fn read_directory(
        &self,
        device: &dyn StorageDevice,
        boot: &ExFatBoot,
        fat: &ExFatTable<'_>,
        first_cluster: u32,
        length: u64,
        is_contiguous: bool,
    ) -> CoreResult<Vec<(FileEntry, StreamEntry, String)>> {
        let entries =
            self.read_directory_raw(device, boot, fat, first_cluster, length, is_contiguous)?;
        let mut results = Vec::new();
        let mut i = 0;
        while i < entries.len() {
            if !matches!(entries[i].entry_type, EntryType::File) {
                i += 1;
                continue;
            }
            // Parse file entry.
            let mut file_buf = entries[i].raw;
            // For deleted entries, the type byte's high bit is 0; we need to set it
            // to make FileEntry::parse succeed. Detect deletion by checking bit 7.
            let deleted = (file_buf[0] & 0x80) == 0;
            if deleted {
                file_buf[0] |= 0x80;
            }
            let file = FileEntry::parse(&file_buf)?;
            let sec_count = file.secondary_count as usize;
            if i + 1 + sec_count > entries.len() {
                break;
            }
            // Next entry should be the stream extension.
            let mut stream_buf = entries[i + 1].raw;
            if deleted {
                stream_buf[0] |= 0x80;
            }
            let stream = StreamEntry::parse(&stream_buf)?;
            // Following entries are name entries (up to name_length chars / 15).
            let name_chars_needed = (stream.name_length as usize).div_ceil(15).max(1);
            let mut name = String::new();
            for j in 0..name_chars_needed {
                if i + 2 + j >= entries.len() {
                    break;
                }
                let mut name_buf = entries[i + 2 + j].raw;
                if deleted {
                    name_buf[0] |= 0x80;
                }
                if let Ok(name_entry) = NameEntry::parse(&name_buf) {
                    name.push_str(&name_entry.chars_string());
                }
            }
            // Re-mark deleted if applicable.
            let mut file = file;
            file.deleted = deleted;
            let mut stream = stream;
            stream.deleted = deleted;
            results.push((file, stream, name));
            i += 2 + sec_count;
        }
        Ok(results)
    }

    /// Build a core `FileEntry` from parsed exFAT entries.
    pub fn build_file_entry(
        &self,
        file: &FileEntry,
        stream: &StreamEntry,
        name: &str,
    ) -> CoreFileEntry {
        let mut props = FileProperties::new(name, stream.valid_data_length);
        props.attributes.directory = file.attributes.directory;
        props.attributes.read_only = file.attributes.read_only;
        props.attributes.hidden = file.attributes.hidden;
        props.attributes.system = file.attributes.system;
        props.attributes.archive = file.attributes.archive;
        props.state = if file.deleted {
            FileState::Deleted
        } else {
            FileState::Live
        };
        props.timestamps = FileTimestamps {
            created: exfat_timestamp_to_unix(file.create_timestamp),
            modified: exfat_timestamp_to_unix(file.last_modified_timestamp),
            accessed: exfat_timestamp_to_unix(file.last_access_timestamp),
            changed: exfat_timestamp_to_unix(file.last_modified_timestamp),
        };
        if stream.first_cluster >= 2 {
            props.metadata.fat_first_cluster = Some(stream.first_cluster);
        }
        CoreFileEntry::new(props)
    }
}

impl FileSystemSearcher for ExFatSearcher {
    fn fs_type(&self) -> FileSystemType {
        FileSystemType::ExFat
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
        Ok(&sector[3..11] == b"EXFAT   ")
    }

    fn block_size(&self) -> u32 {
        self.boot
            .as_ref()
            .map(|b| b.bytes_per_cluster)
            .unwrap_or(4096)
    }

    fn volume_label(&self) -> &str {
        &self.label
    }
}

impl QuickSearcher for ExFatSearcher {
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

        let boot = self.read_boot(device)?;
        tracing::info!(
            "exFAT boot: cluster_size={}, cluster_count={}, root_cluster={}",
            boot.bytes_per_cluster,
            boot.cluster_count,
            boot.root_dir_cluster
        );

        if !progress.phase(ScanPhase::QuickScan) {
            return Err(CoreError::Cancelled);
        }

        let fat = ExFatTable::new(&boot, device)?;
        let _upcase = UpcaseTable::default_ascii();

        if !progress.phase(ScanPhase::BuildingTree) {
            return Err(CoreError::Cancelled);
        }
        let mut root_props = FileProperties::new("<root>", 0);
        root_props.attributes.directory = true;
        root_props.state = FileState::Live;
        let mut root = CoreFileEntry::new(root_props);

        let mut stats = ScanStats {
            bytes_scanned: boot.volume_length * boot.bytes_per_sector as u64,
            blocks_scanned: boot.volume_length,
            ..Default::default()
        };

        let mut visited = std::collections::HashSet::new();
        // Read the root directory.
        // The root is contiguous by spec, but we still need its length — which
        // for the root we don't know until we read it. For now, read a generous
        // amount (256 clusters).
        let root_chain = fat.follow_chain(boot.root_dir_cluster, boot.cluster_count)?;
        let root_length = (root_chain.len() as u64) * boot.bytes_per_cluster as u64;
        let root_entries = self.read_directory(
            device,
            &boot,
            &fat,
            boot.root_dir_cluster,
            root_length,
            false,
        )?;
        for (file, stream, name) in &root_entries {
            let entry = self.build_file_entry(file, stream, name);
            if entry.props.attributes.directory {
                stats.directories += 1;
                if let Some(cluster) = entry.props.metadata.fat_first_cluster {
                    if cluster >= 2 && visited.insert(cluster) {
                        self.recurse_directory(
                            device,
                            &boot,
                            &fat,
                            cluster,
                            stream.data_length,
                            stream.is_contiguous(),
                            &mut root,
                            &mut visited,
                            &mut stats,
                        )?;
                    }
                }
            } else {
                stats.files_found += 1;
                if file.deleted {
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
            block_size: boot.bytes_per_cluster,
            total_blocks: boot.cluster_count as u64,
            used_blocks: 0,
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

impl CompleteSearcher for ExFatSearcher {
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

impl ExFatSearcher {
    fn recurse_directory(
        &self,
        device: &dyn StorageDevice,
        boot: &ExFatBoot,
        fat: &ExFatTable<'_>,
        first_cluster: u32,
        length: u64,
        is_contiguous: bool,
        parent: &mut CoreFileEntry,
        visited: &mut std::collections::HashSet<u32>,
        stats: &mut ScanStats,
    ) -> CoreResult<()> {
        let entries =
            self.read_directory(device, boot, fat, first_cluster, length, is_contiguous)?;
        for (file, stream, name) in &entries {
            // Skip "." and ".." (exFAT doesn't have these but just in case).
            if name == "." || name == ".." {
                continue;
            }
            let entry = self.build_file_entry(file, stream, name);
            if entry.props.attributes.directory {
                stats.directories += 1;
                if let Some(cluster) = entry.props.metadata.fat_first_cluster {
                    if cluster >= 2 && visited.insert(cluster) {
                        let mut subdir = entry.clone();
                        self.recurse_directory(
                            device,
                            boot,
                            fat,
                            cluster,
                            stream.data_length,
                            stream.is_contiguous(),
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
                if file.deleted {
                    stats.deleted_files += 1;
                }
                stats.recoverable_bytes += entry.props.size;
            }
            parent.children.push(entry);
        }
        Ok(())
    }
}
