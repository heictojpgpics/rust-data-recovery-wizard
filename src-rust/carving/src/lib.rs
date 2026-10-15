//! # rdw-carving
//!
//! RAW file carving engine for the Rust Data Recovery Wizard.
//!
//! Design informed by clean-room analysis of EaseUS's `RAWSearchDLL.dll`.
//! See `docs/reverse-engineering/00_source_inventory.md` §6 and
//! `docs/reverse-engineering/02_fs_parser_architecture.md` §4.
//!
//! ## Architecture
//!
//! The carving engine has three layers:
//!
//! 1. **Analyser trait** — each file type implements `FileAnalyser` with
//!    `matches_magic()`, `validate_header()`, `validate_tail()`,
//!    `extract_metadata()`. This mirrors EaseUS's `IRawFileAnalyser` interface.
//!
//! 2. **Analyser registry** — a multimap from first-byte(s) to a list of
//!    analysers that might match. Used for fast lookup during scan.
//!    Mirrors EaseUS's `EUGetAnalyserMultimap`.
//!
//! 3. **Carver** — walks the storage device block-by-block, looks up candidate
//!    analysers, runs validation, and emits `CarvedFile` records. Mirrors
//!    EaseUS's `CRAWSearchController`.
//!
//! ## Scan strategy
//!
//! For each block (typically 4096 bytes):
//! 1. Read the block.
//! 2. Look up analysers whose magic starts with the block's first byte.
//! 3. For each candidate, run `validate_header()` on the block.
//! 4. If header validates, optionally read more blocks for `validate_tail()`.
//! 5. If both validate, emit a `CarvedFile` with the cluster range and metadata.
//!
//! For v0 we do **block-aligned scanning**. Future versions will support
//! byte-aligned scanning (slower but finds more files in fragmented volumes).

#![forbid(unsafe_code)]
#![warn(missing_docs, rust_2018_idioms)]
#![allow(missing_debug_implementations, clippy::too_many_arguments)]

pub mod analyser;
pub mod carver;
pub mod registry;
pub mod validators;

pub use analyser::{AnalyserContext, AnalyserId, FileAnalyser};
pub use carver::{CarveOptions, CarveProgress, CarveStats, CarvedFile, Carver};
pub use registry::{AnalyserRegistry, RegistryBuilder};
pub use validators::*;

use rdw_core::FileSystemType;

/// RAW carving filesystem type.
pub const FS_TYPE: FileSystemType = FileSystemType::Raw;
