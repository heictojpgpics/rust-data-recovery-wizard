//! Scan options and results.

use crate::file::FileEntry;
use crate::fs::SearchedPartitionInfo;
use std::collections::BTreeSet;

/// Scan mode (quick vs complete).
#[derive(Debug, Clone, Copy, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub enum ScanMode {
    /// Quick scan only (FS metadata walk).
    Quick,
    /// Complete scan (quick + carving + lost file detection).
    Complete,
}

impl std::fmt::Display for ScanMode {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(match self {
            Self::Quick => "quick",
            Self::Complete => "complete",
        })
    }
}

/// Options for a scan.
#[derive(Debug, Clone, serde::Serialize, serde::Deserialize)]
pub struct ScanOptions {
    /// Scan mode.
    pub mode: ScanMode,
    /// Whether to enable RAW carving (always true for Complete).
    pub enable_carving: bool,
    /// Whether to detect deleted files (always true for both modes).
    pub enable_deleted: bool,
    /// Whether to detect lost files (files with no parent directory entry).
    pub enable_lost: bool,
    /// File extensions to include (None = all).
    pub include_exts: Option<BTreeSet<String>>,
    /// File extensions to exclude (None = none).
    pub exclude_exts: Option<BTreeSet<String>>,
    /// Minimum file size in bytes (None = no minimum).
    pub min_size: Option<u64>,
    /// Maximum file size in bytes (None = no maximum).
    pub max_size: Option<u64>,
    /// BitLocker password (if the volume is encrypted).
    pub bitlocker_password: Option<String>,
    /// BitLocker recovery key (alternative to password).
    pub bitlocker_recovery_key: Option<String>,
    /// Whether to skip bad sectors (continue scanning past read errors).
    pub skip_bad_sectors: bool,
    /// Maximum number of files to find (None = unlimited).
    pub max_files: Option<u64>,
    /// Whether to compute hash of each file's content (for dedup).
    pub compute_hashes: bool,
}

impl Default for ScanOptions {
    fn default() -> Self {
        Self {
            mode: ScanMode::Complete,
            enable_carving: true,
            enable_deleted: true,
            enable_lost: true,
            include_exts: None,
            exclude_exts: None,
            min_size: None,
            max_size: None,
            bitlocker_password: None,
            bitlocker_recovery_key: None,
            skip_bad_sectors: true,
            max_files: None,
            compute_hashes: false,
        }
    }
}

/// Scan statistics.
#[derive(Debug, Clone, Default, serde::Serialize, serde::Deserialize)]
pub struct ScanStats {
    /// Wall-clock duration in milliseconds.
    pub duration_ms: u64,
    /// Total bytes scanned.
    pub bytes_scanned: u64,
    /// Total blocks scanned.
    pub blocks_scanned: u64,
    /// Number of files found.
    pub files_found: u64,
    /// Number of deleted files found.
    pub deleted_files: u64,
    /// Number of lost files found (carving).
    pub lost_files: u64,
    /// Number of directories found.
    pub directories: u64,
    /// Number of bad sectors skipped.
    pub bad_sectors: u64,
    /// Number of bytes recoverable.
    pub recoverable_bytes: u64,
    /// Average throughput in bytes/second.
    pub throughput_bps: u64,
}

/// Scan result.
#[derive(Debug, Clone, serde::Serialize, serde::Deserialize)]
pub struct ScanResult {
    /// Top-level file tree.
    pub root: FileEntry,
    /// Partition info.
    pub partition_info: SearchedPartitionInfo,
    /// Statistics.
    pub stats: ScanStats,
    /// Warnings emitted during scan.
    pub warnings: Vec<String>,
}
