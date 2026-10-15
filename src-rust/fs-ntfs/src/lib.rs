//! # rdw-fs-ntfs
//!
//! NTFS filesystem parser for the Rust Data Recovery Wizard.
//!
//! Design informed by clean-room analysis of EaseUS's `NTFSSearchDLL.dll`.
//! See `docs/reverse-engineering/02_fs_parser_architecture.md` §3.1.

#![forbid(unsafe_code)]
#![warn(missing_docs, rust_2018_idioms)]
#![allow(missing_debug_implementations)]

pub mod attribute;
pub mod bitmap;
pub mod file_record;
pub mod mft;
pub mod searcher;
pub mod vbr;

pub use attribute::{
    Attribute, AttributeHeader, AttributeType, NonResidentAttribute, ResidentAttribute,
};
pub use file_record::{FileRecord, FileRecordBuilder};
pub use mft::{MftRecord, MftRecordHeader, FILE_RECORD_SIZE};
pub use searcher::NtfsSearcher;
pub use vbr::NtfsVbr;

use rdw_core::FileSystemType;

/// NTFS filesystem type.
pub const FS_TYPE: FileSystemType = FileSystemType::Ntfs;

/// NTFS magic number ("FILE" for file records).
pub const FILE_RECORD_MAGIC: [u8; 4] = *b"FILE";
/// Bad record magic.
pub const BAD_RECORD_MAGIC: [u8; 4] = *b"BAAD";
/// CHKDSK magic.
pub const CHKDSK_MAGIC: [u8; 4] = *b"CHKD";
