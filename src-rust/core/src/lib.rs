//! # rdw-core
//!
//! Core types and traits for the Rust Data Recovery Wizard (RDW) engine.
//!
//! This crate defines the **common interface contracts** that every filesystem parser,
//! carving engine, and storage backend must implement. The design is informed by
//! clean-room analysis of the EaseUS Data Recovery Wizard architecture — see
//! `docs/reverse-engineering/02_fs_parser_architecture.md` for the source mapping.
//!
//! ## Design principles
//!
//! 1. **Memory safety first** — no `unsafe` in public APIs; all byte parsing uses `zerocopy` or `bytemuck`.
//! 2. **Send + Sync everywhere** — the engine is multi-threaded; parsers must be thread-safe.
//! 3. **Trait objects, not generics** — we use `dyn Trait` so the engine can mix-and-match
//!    parsers at runtime (just like EaseUS loads FS DLLs dynamically).
//! 4. **No FS-specific leaks across crates** — unlike EaseUS's `CResidentNTFSDataRunList`
//!    that appears in every FS DLL, our `DataRunList` is generic.
//! 5. **Async-friendly but not async-by-default** — sync APIs are easier to test; the engine
//!    layer adds async via `tokio::task::spawn_blocking`.

#![forbid(unsafe_code)]
#![warn(missing_docs, missing_debug_implementations, rust_2018_idioms)]
#![cfg_attr(docsrs, feature(doc_cfg))]

// Re-exports
pub mod data_run;
pub mod error;
pub mod file;
pub mod fs;
pub mod partition;
pub mod progress;
pub mod scan;
pub mod storage;

pub use data_run::{DataRun, DataRunList, NonResidentData, ResidentData};
pub use error::{CoreError, CoreResult};
pub use file::{
    FileAttributes, FileEntry, FileMetadata, FileProperties, FileState, FileTimestamps,
};
pub use fs::{
    CompleteSearcher, FileSystemSearcher, FileSystemType, QuickSearcher, SearchedPartitionInfo,
};
pub use partition::{Partition, PartitionFlag, PartitionTable, PartitionType};
pub use progress::{Progress, ProgressCallback, ProgressEvent, ScanPhase};
pub use scan::{ScanMode, ScanOptions, ScanResult, ScanStats};
pub use storage::{BlockRange, CachedStorageDevice, StorageDevice};
