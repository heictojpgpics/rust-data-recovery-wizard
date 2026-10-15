//! NTFS searcher — implements `FileSystemSearcher`, `QuickSearcher`, `CompleteSearcher`.
//!
//! This is the high-level orchestrator. It opens the device, reads the VBR,
//! locates the MFT, walks MFT records, and builds a file tree.
//!
//! v0: implements quick scan (MFT walk + tree build). Complete scan (with
//! carving) is a stub — the engine layer will compose quick scan + carving
//! engine separately.

use crate::{bitmap::NtfsBitmapBuilder, file_record::FileRecord, mft::MftRecord, vbr::NtfsVbr};
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

/// NTFS searcher.
#[derive(Debug, Default)]
pub struct NtfsSearcher {
    vbr: Option<NtfsVbr>,
    label: String,
}

impl NtfsSearcher {
    /// Construct a new NTFS searcher.
    pub fn new() -> Self {
        Self::default()
    }

    /// Read and parse the VBR from the first sector of the device.
    pub fn read_vbr(&mut self, device: &dyn StorageDevice) -> CoreResult<NtfsVbr> {
        let mut sector = vec![0u8; 512];
        device.read_blocks(0, &mut sector)?;
        let vbr = NtfsVbr::parse(&sector)?;
        self.vbr = Some(vbr.clone());
        Ok(vbr)
    }

    /// Read a single MFT record by number.
    pub fn read_mft_record(
        &self,
        device: &dyn StorageDevice,
        vbr: &NtfsVbr,
        record_number: u64,
    ) -> CoreResult<MftRecord> {
        let clusters_per_record =
            (vbr.mft_record_size as u64).div_ceil(vbr.bytes_per_cluster as u64);
        let cluster = vbr.mft_cluster + record_number * clusters_per_record;
        let lba = vbr.cluster_to_lba(cluster);
        let mut buf = vec![0u8; vbr.mft_record_size as usize];
        device.read_blocks(lba, &mut buf)?;
        MftRecord::parse(&buf, vbr.mft_record_size)
    }

    /// Walk MFT records 0..N, applying `f` to each.
    ///
    /// Stops when `f` returns `false` or when the user cancels via `progress`.
    pub fn walk_mft<F>(
        &self,
        device: &dyn StorageDevice,
        vbr: &NtfsVbr,
        progress: &Progress,
        mut f: F,
    ) -> CoreResult<u64>
    where
        F: FnMut(u64, MftRecord) -> CoreResult<bool>,
    {
        // MFT record 0 ($MFT itself) tells us the size of the MFT via its $DATA run list.
        let record_0 = self.read_mft_record(device, vbr, 0)?;
        let mut mft_size_bytes = 0u64;
        for attr_slice in record_0.attributes() {
            let attr = crate::attribute::Attribute::parse(attr_slice)?;
            if matches!(attr.attr_type(), crate::attribute::AttributeType::Data) {
                if let Some(runs) = attr.run_list() {
                    for run in runs {
                        mft_size_bytes += run.length * vbr.bytes_per_cluster as u64;
                    }
                }
                break;
            }
        }
        if mft_size_bytes == 0 {
            return Err(CoreError::corruption(
                "MFT",
                "could not determine MFT size from $MFT's $DATA attribute",
            ));
        }
        let total_records = mft_size_bytes / vbr.mft_record_size as u64;
        tracing::info!("MFT contains ~{} records", total_records);

        let mut processed = 0u64;
        for record_number in 0..total_records {
            if progress.is_cancelled() {
                return Err(CoreError::Cancelled);
            }
            if record_number % 1000 == 0
                && !progress.progress(ScanPhase::QuickScan, record_number, total_records, 0)
            {
                return Err(CoreError::Cancelled);
            }
            let record = match self.read_mft_record(device, vbr, record_number) {
                Ok(r) => r,
                Err(e) => {
                    progress.warning(format!("MFT record {}: {}", record_number, e));
                    continue;
                }
            };
            if !f(record_number, record)? {
                break;
            }
            processed += 1;
        }
        Ok(processed)
    }
}

impl FileSystemSearcher for NtfsSearcher {
    fn fs_type(&self) -> FileSystemType {
        FileSystemType::Ntfs
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
        if sector.len() < 11 {
            return Ok(false);
        }
        Ok(&sector[3..11] == b"NTFS    " && sector[0x1FE] == 0x55 && sector[0x1FF] == 0xAA)
    }

    fn block_size(&self) -> u32 {
        self.vbr
            .as_ref()
            .map(|v| v.bytes_per_cluster)
            .unwrap_or(4096)
    }

    fn volume_label(&self) -> &str {
        &self.label
    }
}

impl QuickSearcher for NtfsSearcher {
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

        let vbr = self.read_vbr(device)?;
        tracing::info!(
            "NTFS VBR: cluster_size={}, mft_cluster={}, mft_record_size={}",
            vbr.bytes_per_cluster,
            vbr.mft_cluster,
            vbr.mft_record_size
        );

        if !progress.phase(ScanPhase::QuickScan) {
            return Err(CoreError::Cancelled);
        }

        let mut file_records: Vec<(u64, FileRecord)> = Vec::new();
        let total_clusters = vbr.total_sectors / vbr.sectors_per_cluster as u64;
        let bitmap_builder = NtfsBitmapBuilder::new(total_clusters);

        let processed = self.walk_mft(device, &vbr, progress, |record_number, mft_record| {
            // Parse into a FileRecord.
            match FileRecord::from_mft_record(&mft_record) {
                Ok(fr) => file_records.push((record_number, fr)),
                Err(e) => {
                    tracing::debug!("Failed to parse MFT record {}: {}", record_number, e);
                }
            }
            Ok(true)
        })?;

        tracing::info!("Processed {} MFT records", processed);
        let bitmap = bitmap_builder.build();

        if !progress.phase(ScanPhase::BuildingTree) {
            return Err(CoreError::Cancelled);
        }
        let root = build_file_tree(&file_records, &bitmap, &vbr);

        let stats = ScanStats {
            duration_ms: start.elapsed().as_millis() as u64,
            bytes_scanned: vbr.total_bytes,
            blocks_scanned: vbr.total_sectors,
            files_found: file_records.iter().filter(|(_, r)| !r.is_directory).count() as u64,
            deleted_files: file_records
                .iter()
                .filter(|(_, r)| !r.in_use && !r.is_directory)
                .count() as u64,
            lost_files: 0,
            directories: file_records.iter().filter(|(_, r)| r.is_directory).count() as u64,
            bad_sectors: 0,
            recoverable_bytes: file_records
                .iter()
                .filter(|(_, r)| !r.is_directory)
                .map(|(_, r)| r.data.as_ref().map(|d| d.logical_size).unwrap_or(0))
                .sum(),
            throughput_bps: 0,
        };

        let partition_info = SearchedPartitionInfo {
            total_files: stats.files_found,
            live_files: stats.files_found - stats.deleted_files,
            deleted_files: stats.deleted_files,
            lost_files: 0,
            total_bytes: stats.recoverable_bytes,
            recoverable_bytes: stats.recoverable_bytes,
            block_size: vbr.bytes_per_cluster,
            total_blocks: total_clusters,
            used_blocks: bitmap.count_allocated(),
        };

        if !progress.phase(ScanPhase::Done) {
            return Err(CoreError::Cancelled);
        }
        progress.finished(stats.clone());

        Ok(ScanResult {
            root,
            partition_info,
            stats,
            warnings: Vec::new(),
        })
    }
}

impl CompleteSearcher for NtfsSearcher {
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
        // TODO Phase 2: invoke rdw-carving on free clusters identified by the bitmap.
        Ok(result)
    }
}

/// Build a file tree from a flat list of MFT records.
fn build_file_tree(
    records: &[(u64, FileRecord)],
    _bitmap: &crate::bitmap::NtfsBitmap,
    _vbr: &NtfsVbr,
) -> FileEntry {
    use std::collections::{HashMap, HashSet};
    let by_record: HashMap<u64, &FileRecord> = records.iter().map(|(n, r)| (*n, r)).collect();

    let mut root_props = FileProperties::new("<root>", 0);
    root_props.attributes.directory = true;
    root_props.state = FileState::Live;
    let mut root = FileEntry::new(root_props);

    let mut children_by_parent: HashMap<u64, Vec<u64>> = HashMap::new();
    for (n, r) in records {
        let parent = r.best_parent().unwrap_or(5);
        children_by_parent.entry(parent).or_default().push(*n);
    }

    fn build_subtree(
        record_number: u64,
        by_record: &HashMap<u64, &FileRecord>,
        children_by_parent: &HashMap<u64, Vec<u64>>,
        visited: &mut HashSet<u64>,
    ) -> Option<FileEntry> {
        if !visited.insert(record_number) {
            return None;
        }
        let fr = by_record.get(&record_number)?;
        let name = fr.best_name().unwrap_or("<unnamed>").to_string();
        let size = fr.data.as_ref().map(|d| d.logical_size).unwrap_or(0);
        let mut props = FileProperties::new(name, size);
        props.attributes.directory = fr.is_directory;
        props.state = if fr.in_use {
            FileState::Live
        } else {
            FileState::Deleted
        };
        if let Some(std) = fr.std_info {
            props.timestamps = FileTimestamps {
                created: filetime_to_unix(std.creation_time),
                modified: filetime_to_unix(std.modification_time),
                accessed: filetime_to_unix(std.read_time),
                changed: filetime_to_unix(std.mft_modification_time),
            };
        }
        props.metadata.ntfs_file_ref = Some(record_number);
        if let Some(parent) = fr.best_parent() {
            props.metadata.ntfs_parent_ref = Some(parent);
        }
        if let Some(data) = &fr.data {
            props.data_runs = data.clone();
        }
        let mut entry = FileEntry::new(props);
        if let Some(child_records) = children_by_parent.get(&record_number) {
            for child_record in child_records {
                if let Some(child_entry) =
                    build_subtree(*child_record, by_record, children_by_parent, visited)
                {
                    entry.children.push(child_entry);
                }
            }
        }
        visited.remove(&record_number);
        Some(entry)
    }

    let mut visited = HashSet::new();
    if let Some(root_dir) = build_subtree(5, &by_record, &children_by_parent, &mut visited) {
        root.children = root_dir.children;
    }

    root
}

/// Convert a Windows FILETIME (100ns ticks since 1601-01-01 UTC) to Unix epoch seconds.
fn filetime_to_unix(filetime: u64) -> i64 {
    if filetime == 0 {
        return 0;
    }
    let filetime_secs = (filetime / 10_000_000) as i64;
    filetime_secs.saturating_sub(11_644_473_600)
}
