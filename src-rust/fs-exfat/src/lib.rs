//! # rdw-fs-exfat
//!
//! exFAT filesystem parser for the Rust Data Recovery Wizard.
//!
//! Design informed by clean-room analysis of EaseUS's `exFATSearchDLL.dll`.
//! See `docs/reverse-engineering/02_fs_parser_architecture.md` §3.3.
//!
//! ## exFAT vs FAT12/16/32
//!
//! exFAT is fundamentally different from FAT12/16/32:
//!
//! - **No BPB-only geometry**: exFAT has a Boot Region (12 sectors) with the
//!   main boot sector + extended boot sectors + checksum sector.
//! - **Cluster-based FAT**: still uses a FAT (32-bit entries), but only for
//!   files with multiple fragments. Single-fragment files have all their
//!   info in the directory entry.
//! - **Stream-based directory entries**: each file has at least 3 directory
//!   entries — `InUse + File1` (with sub-entry `Stream` and `Name`).
//! - **No fixed root directory**: the root is just a regular directory chain
//!   whose first cluster is recorded in the boot sector.
//! - **Allocation Bitmap**: exFAT maintains a bitmap (one bit per cluster)
//!   indicating which clusters are allocated. There are two bitmaps in
//!   case of TexFAT (twin FAT).
//! - **Up-Case Table**: exFAT stores a customizable Unicode case-mapping table.

#![forbid(unsafe_code)]
#![warn(missing_docs, rust_2018_idioms)]
#![allow(missing_debug_implementations, clippy::too_many_arguments)]

pub mod bitmap;
pub mod boot;
pub mod dir_entry;
pub mod fat;
pub mod searcher;
pub mod upcase;

pub use bitmap::ExFatBitmap;
pub use boot::{ExFatBoot, ExFatVbr};
pub use dir_entry::{
    DirectoryEntry, EntryType, FileAttributes as ExFatFileAttributes, FileEntry as ExFatFileEntry,
    NameEntry as ExFatNameEntry, StreamEntry as ExFatStreamEntry,
};
pub use fat::ExFatTable;
pub use searcher::ExFatSearcher;
pub use upcase::UpcaseTable;

use rdw_core::FileSystemType;

/// exFAT filesystem type.
pub const FS_TYPE: FileSystemType = FileSystemType::ExFat;

/// exFAT volume label magic in boot sector ("EXFAT   ").
pub const EXFAT_OEM: [u8; 8] = *b"EXFAT   ";

/// exFAT boot sector signature.
pub const EXFAT_SIGNATURE: u16 = 0xAA55;

/// exFAT directory entry type: in-use bit (bit 7).
pub const IN_USE_BIT: u8 = 0x80;

/// exFAT directory entry type: secondary-importance bit (bit 6).
pub const SECONDARY_IMPORTANT_BIT: u8 = 0x40;

/// exFAT directory entry type category mask (bits 4..0).
pub const TYPE_CATEGORY_MASK: u8 = 0x1F;

/// Allocation bitmap directory entry type code (0x81).
pub const ALLOCATION_BITMAP_TYPE: u8 = 0x81;

/// Up-case table directory entry type code (0x82).
pub const UPCASE_TABLE_TYPE: u8 = 0x82;

/// Volume label directory entry type code (0x83).
pub const VOLUME_LABEL_TYPE: u8 = 0x83;

/// File directory entry type code (0x85).
pub const FILE_TYPE: u8 = 0x85;

/// Stream extension directory entry type code (0xC0).
pub const STREAM_EXTENSION_TYPE: u8 = 0xC0;

/// File name directory entry type code (0xC1).
pub const FILE_NAME_TYPE: u8 = 0xC1;

/// End-of-directory marker.
pub const END_OF_DIRECTORY: u8 = 0x00;
