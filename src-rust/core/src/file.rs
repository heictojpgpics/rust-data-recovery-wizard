//! File metadata types.

use crate::data_run::DataRunList;
use std::collections::BTreeMap;

/// File timestamps (creation, modification, access, MFT/birth).
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct FileTimestamps {
    /// Creation time (Unix epoch seconds, UTC).
    pub created: i64,
    /// Last modification time.
    pub modified: i64,
    /// Last access time.
    pub accessed: i64,
    /// MFT change time (NTFS) / birth time (other FS).
    pub changed: i64,
}

/// File attribute flags (cross-FS union).
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct FileAttributes {
    /// Read-only.
    pub read_only: bool,
    /// Hidden.
    pub hidden: bool,
    /// System file.
    pub system: bool,
    /// Directory (not a regular file).
    pub directory: bool,
    /// Archive bit (backup-aware).
    pub archive: bool,
    /// Encrypted at the FS layer (e.g. EFS, BitLocker-to-Go).
    pub encrypted: bool,
    /// Compressed at the FS layer.
    pub compressed: bool,
    /// Sparse file.
    pub sparse: bool,
    /// Reparse point (symlink, junction, mount point).
    pub reparse_point: bool,
    /// Integrity-protected (ReFS integrity streams).
    pub integrity: bool,
    /// Offline (HSM-migrated).
    pub offline: bool,
    /// Pinned (cannot be HSM-migrated).
    pub pinned: bool,
}

/// File state in the filesystem.
#[derive(Debug, Clone, Copy, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub enum FileState {
    /// Live (allocated) file — visible in the FS tree.
    Live,
    /// Deleted file — entry still in FS metadata, content possibly overwritten.
    Deleted,
    /// Lost file — found only by RAW carving, no FS metadata.
    Lost,
    /// Orphaned file — has data runs but no parent directory entry.
    Orphaned,
}

impl std::fmt::Display for FileState {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(match self {
            Self::Live => "live",
            Self::Deleted => "deleted",
            Self::Lost => "lost",
            Self::Orphaned => "orphaned",
        })
    }
}

/// Additional metadata extracted by parsers (FS-specific fields go here).
#[derive(Debug, Clone, Default, serde::Serialize, serde::Deserialize)]
pub struct FileMetadata {
    /// NTFS file reference number (MFT record + sequence).
    pub ntfs_file_ref: Option<u64>,
    /// NTFS parent directory file reference.
    pub ntfs_parent_ref: Option<u64>,
    /// FAT first cluster.
    pub fat_first_cluster: Option<u32>,
    /// ext4 inode number.
    pub ext_inode: Option<u64>,
    /// HFS+ catalog node ID (CNID).
    pub hfs_cnid: Option<u32>,
    /// HFS+ parent CNID.
    pub hfs_parent_cnid: Option<u32>,
    /// File owner UID (Unix).
    pub uid: Option<u32>,
    /// File group GID (Unix).
    pub gid: Option<u32>,
    /// Unix permission bits.
    pub mode: Option<u32>,
    /// Detected file type from RAW carving analyser (e.g. "jpg", "pdf", "zip").
    pub detected_ext: Option<String>,
    /// Carving confidence score [0.0, 1.0].
    pub carving_confidence: Option<f32>,
    /// Free-form key/value pairs for FS-specific extras.
    pub extras: BTreeMap<String, String>,
}

/// File properties (size, timestamps, attributes, data runs).
#[derive(Debug, Clone, serde::Serialize, serde::Deserialize)]
pub struct FileProperties {
    /// Display name (basename).
    pub name: String,
    /// Logical size in bytes.
    pub size: u64,
    /// Allocated size on disk (may be larger due to block rounding, or smaller for sparse).
    pub allocated_size: u64,
    /// Timestamps.
    pub timestamps: FileTimestamps,
    /// Attribute flags.
    pub attributes: FileAttributes,
    /// State (live/deleted/lost/orphaned).
    pub state: FileState,
    /// Data runs describing the file content.
    pub data_runs: DataRunList,
    /// Extra metadata.
    pub metadata: FileMetadata,
}

impl FileProperties {
    /// Construct a minimal live file with the given name and size.
    pub fn new(name: impl Into<String>, size: u64) -> Self {
        Self {
            name: name.into(),
            size,
            allocated_size: size,
            timestamps: FileTimestamps::default(),
            attributes: FileAttributes::default(),
            state: FileState::Live,
            data_runs: DataRunList::new(),
            metadata: FileMetadata::default(),
        }
    }
}

/// A file entry in the scan result tree.
///
/// Carries the properties plus an optional list of child entries (for directories).
#[derive(Debug, Clone, serde::Serialize, serde::Deserialize)]
pub struct FileEntry {
    /// Properties.
    pub props: FileProperties,
    /// Children (for directories). Empty for files.
    pub children: Vec<FileEntry>,
}

impl FileEntry {
    /// Construct a file entry from properties.
    pub fn new(props: FileProperties) -> Self {
        Self {
            props,
            children: Vec::new(),
        }
    }

    /// Whether this entry is a directory.
    pub fn is_dir(&self) -> bool {
        self.props.attributes.directory
    }

    /// Total recursive size (this entry + all descendants).
    pub fn total_size(&self) -> u64 {
        let self_size = if self.is_dir() { 0 } else { self.props.size };
        self_size + self.children.iter().map(|c| c.total_size()).sum::<u64>()
    }

    /// Total recursive file count.
    pub fn total_file_count(&self) -> u64 {
        let self_count = if self.is_dir() { 0 } else { 1u64 };
        self_count
            + self
                .children
                .iter()
                .map(|c| c.total_file_count())
                .sum::<u64>()
    }
}
