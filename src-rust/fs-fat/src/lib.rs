//! # rdw-fs-fat
//!
//! FAT12/16/32 filesystem parser for the Rust Data Recovery Wizard.
//!
//! Design informed by clean-room analysis of EaseUS's `FATSearchDLL.dll`.
//! See `docs/reverse-engineering/02_fs_parser_architecture.md` §3.2 for the
//! mapped class hierarchy.
//!
//! ## What this crate does
//!
//! - Parses the FAT BPB (BIOS Parameter Block) in the first sector.
//! - Detects FAT12 vs FAT16 vs FAT32 using the standard Microsoft cluster-count rule.
//! - Reads FAT tables (12-bit / 16-bit / 28-bit entries).
//! - Walks directory entries (SFN + LFN).
//! - Follows cluster chains to read file content.
//! - Detects deleted files (entries with first byte 0xE5).
//! - Synthesizes a Recycle Bin view from `$RECYCLE.BIN` entries.
//!
//! ## What this crate does NOT do (yet)
//!
//! - LFN reconstruction across non-contiguous directory entries (planned).
//! - Recycle Bin metadata parsing (`$I` and `$R` files) (planned).
//! - ExFAT (that's a separate crate, `rdw-fs-exfat`).

#![forbid(unsafe_code)]
#![warn(missing_docs, rust_2018_idioms)]
#![allow(missing_debug_implementations)]
#![allow(clippy::too_many_arguments)]

pub mod bpb;
pub mod dir_entry;
pub mod fat_table;
pub mod searcher;

pub use bpb::{FatBpb, FatType, FatVbr};
pub use dir_entry::{DirEntry, DirEntryAttr, LfnDirEntry, ShortName};
pub use fat_table::{Fat12Table, Fat16Table, Fat32Table, FatEntry, FatTable};
pub use searcher::FatSearcher;

use rdw_core::FileSystemType;

/// FAT filesystem type (used by the searcher for FAT12/16/32 dispatch).
pub const FS_TYPE: FileSystemType = FileSystemType::Fat32;

/// FAT12 magic (cluster count threshold).
pub const FAT12_MAX_CLUSTERS: u32 = 0xFF5;
/// FAT16 magic (cluster count threshold).
pub const FAT16_MAX_CLUSTERS: u32 = 0xFFF5;
/// FAT32 magic (cluster count threshold).
pub const FAT32_MAX_CLUSTERS: u32 = 0x0FFFFFF5;

/// FAT end-of-chain marker base (low bits vary by FAT type).
pub const FAT_EOC_MASK: u32 = 0xFFFFFFF8;
/// FAT bad cluster marker.
pub const FAT_BAD_CLUSTER: u32 = 0xFFFFFFF7;

/// Deleted directory entry marker (first byte = 0xE5).
pub const DELETED_ENTRY_MARKER: u8 = 0xE5;
/// End-of-directory marker (first byte = 0x00).
pub const END_OF_DIRECTORY: u8 = 0x00;

/// LFN attribute byte (read-only + hidden + system + volume-id).
pub const LFN_ATTR: u8 = 0x0F;
