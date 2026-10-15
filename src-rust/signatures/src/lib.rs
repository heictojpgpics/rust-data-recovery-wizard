//! # rdw-signatures
//!
//! File signature database for the Rust Data Recovery Wizard.
//!
//! Ported (as original Rust data structures) from EaseUS's
//! `raw_signs.json` + the hardcoded analyser classes in `RAWSearchDLL.dll`.
//! See `docs/reverse-engineering/00_source_inventory.md` §6.
//!
//! ## Two signature sources
//!
//! 1. **Common types** (hardcoded): JPG, PNG, PDF, DOCX, ZIP, MP4, etc. — these
//!    have format-specific analysers with validation logic (e.g. PDF must have
//!    `%%EOF`, ZIP must have central directory + end-of-central-directory record).
//!    In EaseUS these live in `RAWSearchDLL.dll`'s `FileJPGAnalyser`,
//!    `FilePDFAnalyser`, etc. classes.
//!
//! 2. **Extended types** (data-driven): 139 uncommon file types from
//!    `raw_signs.json`. Each entry is a simple header + optional tail magic
//!    with min/max file size bounds. No format-specific validation — just magic
//!    byte matching.

#![forbid(unsafe_code)]
#![warn(missing_docs, rust_2018_idioms)]
#![allow(missing_debug_implementations)]

pub mod common;
pub mod extended;
pub mod registry;

pub use common::CommonSignature;
pub use extended::ExtendedSignatureRaw;
pub use registry::{MatchConfidence, SignatureMatch, SignatureRegistry};

/// A file signature (magic bytes pattern).
#[derive(Debug, Clone, serde::Serialize, serde::Deserialize)]
pub struct Signature {
    /// Display name (e.g. "JPG", "PDF").
    pub name: String,
    /// File extension (without dot).
    pub extension: String,
    /// Category (Graphic, Document, Video, Audio, Archive, Email, Other).
    pub category: FileCategory,
    /// Header magic pattern (at file offset 0 by default).
    pub header: Pattern,
    /// Optional tail/footer magic.
    pub tail: Option<Pattern>,
    /// Minimum file size in bytes.
    pub min_size: u64,
    /// Maximum file size in bytes (0 = unlimited).
    pub max_size: u64,
    /// Whether this signature has format-specific validation (beyond magic).
    pub has_validator: bool,
}

/// A byte pattern (offset + hex bytes).
#[derive(Debug, Clone, serde::Serialize, serde::Deserialize)]
pub struct Pattern {
    /// Offset from start of file (for header) or end of file (for tail).
    pub offset: u64,
    /// Hex bytes to match (wildcards via 0x?? not yet supported).
    pub bytes: Vec<u8>,
}

impl Pattern {
    /// Construct a pattern from a hex string.
    pub fn from_hex(offset: u64, hex: &str) -> Result<Self, hex::FromHexError> {
        let bytes = hex::decode(hex)?;
        Ok(Self { offset, bytes })
    }

    /// Match against a buffer.
    pub fn matches(&self, buf: &[u8]) -> bool {
        let start = self.offset as usize;
        let end = start + self.bytes.len();
        if end > buf.len() {
            return false;
        }
        buf[start..end] == self.bytes[..]
    }

    /// Match against the tail of a buffer.
    pub fn matches_tail(&self, buf: &[u8]) -> bool {
        if buf.len() < self.bytes.len() + self.offset as usize {
            return false;
        }
        let end = buf.len() - self.offset as usize;
        let start = end - self.bytes.len();
        buf[start..end] == self.bytes[..]
    }
}

/// File category (matches EaseUS's `FileFilter.xml` 8 categories).
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
pub enum FileCategory {
    /// Picture / image files.
    Graphic,
    /// Document files (Word, Excel, PDF, etc.).
    Document,
    /// Email archives (PST, OST, EML, etc.).
    Email,
    /// Audio files.
    Audio,
    /// Video files.
    Video,
    /// Archive files (ZIP, RAR, 7Z, etc.).
    Archive,
    /// Bookmark files.
    Bookmarks,
    /// Other files (everything else).
    Other,
}

impl FileCategory {
    /// Human-readable name.
    pub fn name(&self) -> &'static str {
        match self {
            Self::Graphic => "Graphic",
            Self::Document => "Document",
            Self::Email => "Email",
            Self::Audio => "Audio",
            Self::Video => "Video",
            Self::Archive => "Archive",
            Self::Bookmarks => "Bookmarks",
            Self::Other => "Other",
        }
    }
}

impl std::fmt::Display for FileCategory {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(self.name())
    }
}
