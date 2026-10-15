//! File analyser trait — the contract every format-specific analyser must implement.
//!
//! Equivalent to EaseUS's `IRawFileAnalyser` interface (see
//! `docs/reverse-engineering/decompiled/RAWSearchDLL.dll/`).

use rdw_core::{file::FileMetadata, CoreResult};

/// A unique identifier for an analyser (used for logging + dedup).
pub type AnalyserId = &'static str;

/// Context passed to analysers during validation.
///
/// Provides access to the storage device so analysers can read beyond the
/// current block (e.g. to validate a ZIP central directory at end of file).
pub struct AnalyserContext<'a> {
    /// The storage device being scanned.
    pub device: &'a dyn rdw_core::storage::StorageDevice,
    /// The starting LBA of the candidate file.
    pub start_lba: u64,
    /// The block buffer that triggered the candidate match.
    pub block_buf: &'a [u8],
    /// The block size in bytes.
    pub block_size: u32,
    /// Total file size estimate (may grow as more blocks are read).
    pub estimated_size: u64,
}

impl<'a> std::fmt::Debug for AnalyserContext<'a> {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.debug_struct("AnalyserContext")
            .field("start_lba", &self.start_lba)
            .field("block_size", &self.block_size)
            .field("estimated_size", &self.estimated_size)
            .field("block_buf_len", &self.block_buf.len())
            .finish()
    }
}

/// A file analyser — knows how to validate + extract metadata for one file type.
///
/// Each analyser is responsible for:
/// 1. **Matching magic bytes** in the candidate block.
/// 2. **Validating header structure** (beyond just magic).
/// 3. **Determining file size** (often requires reading the tail).
/// 4. **Extracting metadata** (timestamps, original filename, etc.).
pub trait FileAnalyser: Send + Sync {
    /// Unique analyser ID (e.g. "jpg", "pdf", "zip").
    fn id(&self) -> AnalyserId;

    /// File extension (without dot) that this analyser produces.
    fn extension(&self) -> &str;

    /// File category (Graphic, Document, etc.).
    fn category(&self) -> rdw_signatures::FileCategory;

    /// First byte(s) of the magic — used by the registry for fast lookup.
    fn magic_prefix(&self) -> &[u8];

    /// Whether the magic bytes match at the start of `block_buf`.
    fn matches_magic(&self, ctx: &AnalyserContext<'_>) -> bool;

    /// Validate header structure beyond magic. Returns `Ok(())` if valid.
    ///
    /// Default implementation just calls `matches_magic`.
    fn validate_header(&self, ctx: &AnalyserContext<'_>) -> CoreResult<()> {
        if self.matches_magic(ctx) {
            Ok(())
        } else {
            Err(rdw_core::CoreError::parse(
                "carving header",
                format!("magic mismatch for {}", self.id()),
            ))
        }
    }

    /// Validate the tail of the file (if applicable).
    ///
    /// `tail_buf` is the last `block_size` bytes of the file.
    /// Default: no tail validation (returns Ok).
    fn validate_tail(&self, _tail_buf: &[u8]) -> CoreResult<()> {
        Ok(())
    }

    /// Determine the file's total size in bytes.
    ///
    /// Default: returns the estimated size from context.
    /// Override for formats with size info in the header (e.g. RAR, 7Z, BMP).
    fn determine_size(&self, ctx: &AnalyserContext<'_>) -> CoreResult<u64> {
        Ok(ctx.estimated_size)
    }

    /// Extract metadata from the candidate file.
    ///
    /// Default: returns empty metadata with `detected_ext` set.
    fn extract_metadata(&self, _ctx: &AnalyserContext<'_>) -> CoreResult<FileMetadata> {
        Ok(FileMetadata {
            detected_ext: Some(self.extension().to_string()),
            carving_confidence: Some(0.7),
            ..Default::default()
        })
    }

    /// Whether this analyser needs the file's tail to validate (for optimisation).
    ///
    /// Default: `false`. Override for formats like PDF (`%%EOF`), ZIP (EOCD), RAR.
    fn needs_tail(&self) -> bool {
        false
    }
}
