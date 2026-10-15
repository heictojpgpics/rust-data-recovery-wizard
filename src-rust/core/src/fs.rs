//! Filesystem searcher traits.
//!
//! Reconstructed from EaseUS's `IFileSystemSearchController` hierarchy — see
//! `docs/reverse-engineering/02_fs_parser_architecture.md`.
//!
//! ## Two-scan model
//!
//! EaseUS exposes two scan modes per filesystem:
//!
//! 1. **Quick scan** — walks only filesystem metadata (MFT, FAT table, B-trees) and
//!    reconstructs the file tree. Fast (seconds to minutes).
//! 2. **Complete scan** — quick scan + RAW carving + lost file detection + USN
//!    journal replay. Slow (minutes to hours).
//!
//! We mirror this with two subtraits of `FileSystemSearcher`.

use crate::error::CoreResult;
use crate::progress::Progress;
use crate::scan::{ScanOptions, ScanResult};

/// The type of filesystem a searcher implements.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
#[repr(u8)]
pub enum FileSystemType {
    /// NTFS (Windows NT and later)
    Ntfs = 0,
    /// FAT12 (floppy disks, very small volumes)
    Fat12 = 1,
    /// FAT16 (small partitions, older cameras)
    Fat16 = 2,
    /// FAT32 (USB sticks, SD cards < 32 GB)
    Fat32 = 3,
    /// exFAT (large SD cards, external SSDs)
    ExFat = 4,
    /// HFS+ (Mac OS Extended)
    HfsPlus = 5,
    /// ext2/3/4 (Linux)
    Ext = 6,
    /// Btrfs (Linux)
    Btrfs = 7,
    /// ReFS (Windows Server 2012+)
    ReFs = 8,
    /// ZFS (FreeBSD, Solaris, NAS)
    Zfs = 9,
    /// Unknown / raw (no FS detected — carving only)
    Raw = 10,
}

impl FileSystemType {
    /// Human-readable name.
    pub fn name(&self) -> &'static str {
        match self {
            Self::Ntfs => "NTFS",
            Self::Fat12 => "FAT12",
            Self::Fat16 => "FAT16",
            Self::Fat32 => "FAT32",
            Self::ExFat => "exFAT",
            Self::HfsPlus => "HFS+",
            Self::Ext => "ext2/3/4",
            Self::Btrfs => "Btrfs",
            Self::ReFs => "ReFS",
            Self::Zfs => "ZFS",
            Self::Raw => "RAW",
        }
    }
}

impl std::fmt::Display for FileSystemType {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(self.name())
    }
}

/// Result of a partition scan.
#[derive(Debug, Clone, Default, serde::Serialize, serde::Deserialize)]
pub struct SearchedPartitionInfo {
    /// Total files found (live + deleted + lost).
    pub total_files: u64,
    /// Live (not deleted) files.
    pub live_files: u64,
    /// Deleted files (in FS metadata, marked deleted).
    pub deleted_files: u64,
    /// Lost files (found only by carving).
    pub lost_files: u64,
    /// Total bytes of file content.
    pub total_bytes: u64,
    /// Bytes of deleted/lost file content.
    pub recoverable_bytes: u64,
    /// Cluster / block size in bytes.
    pub block_size: u32,
    /// Total clusters / blocks in partition.
    pub total_blocks: u64,
    /// Used clusters / blocks (per FS bitmap).
    pub used_blocks: u64,
}

/// Base trait for all filesystem searchers.
///
/// Implementors provide FS detection + scanning. The two subtraits
/// [`QuickSearcher`] and [`CompleteSearcher`] split scanning into
/// fast and slow paths.
pub trait FileSystemSearcher: Send + Sync {
    /// The filesystem type this searcher handles.
    fn fs_type(&self) -> FileSystemType;

    /// Detect whether the supplied storage device contains this filesystem.
    ///
    /// Should be cheap (read 1-2 blocks). Returns `Ok(true)` if the FS signature
    /// matches, `Ok(false)` otherwise, `Err` on I/O failure.
    fn detect(&self, device: &dyn crate::storage::StorageDevice) -> CoreResult<bool>;

    /// Returns the cluster / block size this filesystem uses.
    ///
    /// Must be valid after [`detect`](Self::detect) returns `Ok(true)`.
    fn block_size(&self) -> u32;

    /// Returns a display-friendly label for the volume (e.g. "MyBook (D:)").
    fn volume_label(&self) -> &str;
}

/// Quick scan: walks FS metadata only.
pub trait QuickSearcher: FileSystemSearcher {
    /// Run the quick scan.
    fn quick_scan(
        &mut self,
        device: &dyn crate::storage::StorageDevice,
        options: &ScanOptions,
        progress: &Progress,
    ) -> CoreResult<ScanResult>;
}

/// Complete scan: quick scan + RAW carving + lost file detection.
pub trait CompleteSearcher: FileSystemSearcher {
    /// Run the complete (deep) scan.
    fn complete_scan(
        &mut self,
        device: &dyn crate::storage::StorageDevice,
        options: &ScanOptions,
        progress: &Progress,
    ) -> CoreResult<ScanResult>;
}
