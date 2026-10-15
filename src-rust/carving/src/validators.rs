//! Format-specific analysers (validators).
//!
//! Each analyser implements the `FileAnalyser` trait. v0 includes a small set
//! of high-value formats (JPG, PNG, PDF, ZIP, GZIP). More will be added over time.

use crate::analyser::{AnalyserContext, AnalyserId, FileAnalyser};
use rdw_core::{file::FileMetadata, CoreError, CoreResult};
use rdw_signatures::FileCategory;

/// JPG analyser.
pub struct JpgAnalyser;

impl FileAnalyser for JpgAnalyser {
    fn id(&self) -> AnalyserId {
        "jpg"
    }
    fn extension(&self) -> &str {
        "jpg"
    }
    fn category(&self) -> FileCategory {
        FileCategory::Graphic
    }
    fn magic_prefix(&self) -> &[u8] {
        &[0xFF, 0xD8, 0xFF]
    }
    fn matches_magic(&self, ctx: &AnalyserContext<'_>) -> bool {
        ctx.block_buf.starts_with(&[0xFF, 0xD8, 0xFF])
    }
    fn validate_header(&self, ctx: &AnalyserContext<'_>) -> CoreResult<()> {
        if !self.matches_magic(ctx) {
            return Err(CoreError::parse("JPG", "missing SOI marker"));
        }
        // Check for valid APP0/APP1 marker after SOI.
        if ctx.block_buf.len() < 4 {
            return Err(CoreError::parse("JPG", "buffer too short"));
        }
        let marker = ctx.block_buf[3];
        // Valid markers: 0xE0 (APP0/JFIF), 0xE1 (APP1/EXIF), 0xE2..0xEF (other APPs),
        // 0xDB (DQT), 0xC0..0xC3 (SOF), 0xC4 (DHT), 0xDA (SOS), 0xFE (COM).
        if !(0xC0..=0xFE).contains(&marker) {
            return Err(CoreError::parse(
                "JPG",
                format!("invalid marker 0x{:02X}", marker),
            ));
        }
        Ok(())
    }
    fn needs_tail(&self) -> bool {
        true
    }
    fn validate_tail(&self, tail_buf: &[u8]) -> CoreResult<()> {
        // JPG ends with EOI marker 0xFF 0xD9.
        if tail_buf.len() < 2 {
            return Err(CoreError::parse("JPG", "tail too short"));
        }
        let last_two = &tail_buf[tail_buf.len() - 2..];
        if last_two != [0xFF, 0xD9] {
            return Err(CoreError::parse("JPG", "missing EOI marker"));
        }
        Ok(())
    }
    fn extract_metadata(&self, _ctx: &AnalyserContext<'_>) -> CoreResult<FileMetadata> {
        Ok(FileMetadata {
            detected_ext: Some("jpg".to_string()),
            carving_confidence: Some(0.9),
            ..Default::default()
        })
    }
}

/// PNG analyser.
pub struct PngAnalyser;

impl FileAnalyser for PngAnalyser {
    fn id(&self) -> AnalyserId {
        "png"
    }
    fn extension(&self) -> &str {
        "png"
    }
    fn category(&self) -> FileCategory {
        FileCategory::Graphic
    }
    fn magic_prefix(&self) -> &[u8] {
        &[0x89, 0x50, 0x4E, 0x47]
    }
    fn matches_magic(&self, ctx: &AnalyserContext<'_>) -> bool {
        ctx.block_buf
            .starts_with(&[0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A])
    }
    fn needs_tail(&self) -> bool {
        true
    }
    fn validate_tail(&self, tail_buf: &[u8]) -> CoreResult<()> {
        // PNG ends with IEND chunk + CRC32.
        if tail_buf.len() < 8 {
            return Err(CoreError::parse("PNG", "tail too short"));
        }
        let last_8 = &tail_buf[tail_buf.len() - 8..];
        // IEND chunk type + CRC (4 bytes type + 4 bytes CRC).
        if &last_8[..4] != b"IEND" {
            // The IEND marker is actually 4 bytes before the last 4 (CRC).
            // So we look at last 12 bytes: length(4) + "IEND"(4) + CRC(4).
            if tail_buf.len() >= 12 {
                let last_12 = &tail_buf[tail_buf.len() - 12..];
                if &last_12[4..8] == b"IEND" {
                    return Ok(());
                }
            }
            return Err(CoreError::parse("PNG", "missing IEND chunk"));
        }
        Ok(())
    }
    fn extract_metadata(&self, _ctx: &AnalyserContext<'_>) -> CoreResult<FileMetadata> {
        Ok(FileMetadata {
            detected_ext: Some("png".to_string()),
            carving_confidence: Some(0.95),
            ..Default::default()
        })
    }
}

/// PDF analyser.
pub struct PdfAnalyser;

impl FileAnalyser for PdfAnalyser {
    fn id(&self) -> AnalyserId {
        "pdf"
    }
    fn extension(&self) -> &str {
        "pdf"
    }
    fn category(&self) -> FileCategory {
        FileCategory::Document
    }
    fn magic_prefix(&self) -> &[u8] {
        b"%PDF"
    }
    fn matches_magic(&self, ctx: &AnalyserContext<'_>) -> bool {
        ctx.block_buf.starts_with(b"%PDF-")
    }
    fn validate_header(&self, ctx: &AnalyserContext<'_>) -> CoreResult<()> {
        if !self.matches_magic(ctx) {
            return Err(CoreError::parse("PDF", "missing %PDF- header"));
        }
        // Check version is 1.x or 2.x.
        if ctx.block_buf.len() < 6 {
            return Err(CoreError::parse("PDF", "buffer too short"));
        }
        let major = ctx.block_buf[5];
        if !matches!(major, b'1' | b'2') {
            return Err(CoreError::parse(
                "PDF",
                format!("unsupported version 0x{:02X}", major),
            ));
        }
        Ok(())
    }
    fn needs_tail(&self) -> bool {
        true
    }
    fn validate_tail(&self, tail_buf: &[u8]) -> CoreResult<()> {
        // PDF ends with %%EOF.
        if tail_buf.len() < 5 {
            return Err(CoreError::parse("PDF", "tail too short"));
        }
        let last_5 = &tail_buf[tail_buf.len() - 5..];
        if last_5 != b"%%EOF" && !tail_buf.windows(5).any(|w| w == b"%%EOF") {
            return Err(CoreError::parse("PDF", "missing %%EOF"));
        }
        Ok(())
    }
    fn extract_metadata(&self, _ctx: &AnalyserContext<'_>) -> CoreResult<FileMetadata> {
        Ok(FileMetadata {
            detected_ext: Some("pdf".to_string()),
            carving_confidence: Some(0.95),
            ..Default::default()
        })
    }
}

/// ZIP analyser (also covers DOCX/XLSX/PPTX — they're all ZIP containers).
pub struct ZipAnalyser;

impl FileAnalyser for ZipAnalyser {
    fn id(&self) -> AnalyserId {
        "zip"
    }
    fn extension(&self) -> &str {
        "zip"
    }
    fn category(&self) -> FileCategory {
        FileCategory::Archive
    }
    fn magic_prefix(&self) -> &[u8] {
        &[0x50, 0x4B, 0x03, 0x04]
    }
    fn matches_magic(&self, ctx: &AnalyserContext<'_>) -> bool {
        ctx.block_buf.starts_with(&[0x50, 0x4B, 0x03, 0x04])
    }
    fn needs_tail(&self) -> bool {
        true
    }
    fn validate_tail(&self, tail_buf: &[u8]) -> CoreResult<()> {
        // ZIP ends with End Of Central Directory record (EOCD):
        //   signature 0x06054B50 (4 bytes) + ... (22 bytes minimum).
        if tail_buf.len() < 22 {
            return Err(CoreError::parse("ZIP", "tail too short for EOCD"));
        }
        // Search for EOCD signature in the last 64KB.
        let search_start = tail_buf.len().saturating_sub(65536);
        for i in search_start..tail_buf.len().saturating_sub(4) {
            if tail_buf[i..i + 4] == [0x50, 0x4B, 0x05, 0x06] {
                return Ok(());
            }
        }
        Err(CoreError::parse("ZIP", "missing EOCD record"))
    }
    fn extract_metadata(&self, _ctx: &AnalyserContext<'_>) -> CoreResult<FileMetadata> {
        Ok(FileMetadata {
            detected_ext: Some("zip".to_string()),
            carving_confidence: Some(0.9),
            ..Default::default()
        })
    }
}

/// GZIP analyser.
pub struct GzipAnalyser;

impl FileAnalyser for GzipAnalyser {
    fn id(&self) -> AnalyserId {
        "gz"
    }
    fn extension(&self) -> &str {
        "gz"
    }
    fn category(&self) -> FileCategory {
        FileCategory::Archive
    }
    fn magic_prefix(&self) -> &[u8] {
        &[0x1F, 0x8B]
    }
    fn matches_magic(&self, ctx: &AnalyserContext<'_>) -> bool {
        ctx.block_buf.starts_with(&[0x1F, 0x8B])
    }
    fn validate_header(&self, ctx: &AnalyserContext<'_>) -> CoreResult<()> {
        if !self.matches_magic(ctx) {
            return Err(CoreError::parse("GZIP", "missing magic"));
        }
        if ctx.block_buf.len() < 10 {
            return Err(CoreError::parse("GZIP", "header too short"));
        }
        // Compression method must be 0x08 (deflate).
        if ctx.block_buf[2] != 0x08 {
            return Err(CoreError::parse(
                "GZIP",
                format!("unsupported compression method 0x{:02X}", ctx.block_buf[2]),
            ));
        }
        Ok(())
    }
    fn extract_metadata(&self, _ctx: &AnalyserContext<'_>) -> CoreResult<FileMetadata> {
        Ok(FileMetadata {
            detected_ext: Some("gz".to_string()),
            carving_confidence: Some(0.9),
            ..Default::default()
        })
    }
}

/// Returns a list of all built-in analysers.
pub fn all_builtin_analysers() -> Vec<std::sync::Arc<dyn FileAnalyser>> {
    vec![
        std::sync::Arc::new(JpgAnalyser),
        std::sync::Arc::new(PngAnalyser),
        std::sync::Arc::new(PdfAnalyser),
        std::sync::Arc::new(ZipAnalyser),
        std::sync::Arc::new(GzipAnalyser),
    ]
}

#[cfg(test)]
mod tests {
    use super::*;
    use rdw_core::storage::StorageDevice;

    struct FakeDevice;
    impl StorageDevice for FakeDevice {
        fn read_blocks(&self, _: u64, _: &mut [u8]) -> rdw_core::CoreResult<()> {
            Ok(())
        }
        fn block_size(&self) -> u32 {
            512
        }
        fn total_blocks(&self) -> u64 {
            0
        }
        fn name(&self) -> &str {
            "fake"
        }
    }

    fn make_ctx<'a>(buf: &'a [u8]) -> AnalyserContext<'a> {
        AnalyserContext {
            device: &FakeDevice,
            start_lba: 0,
            block_buf: buf,
            block_size: 4096,
            estimated_size: buf.len() as u64,
        }
    }

    #[test]
    fn jpg_validates_header() {
        let a = JpgAnalyser;
        let buf = [0xFF, 0xD8, 0xFF, 0xE0, 0x00, 0x10, b'J', b'F', b'I', b'F'];
        let ctx = make_ctx(&buf);
        assert!(a.validate_header(&ctx).is_ok());
    }

    #[test]
    fn jpg_rejects_bad_magic() {
        let a = JpgAnalyser;
        let buf = [0x00, 0x00, 0x00, 0xE0];
        let ctx = make_ctx(&buf);
        assert!(a.validate_header(&ctx).is_err());
    }

    #[test]
    fn jpg_validates_tail() {
        let a = JpgAnalyser;
        let tail = [0x00, 0x00, 0xFF, 0xD9];
        assert!(a.validate_tail(&tail).is_ok());
        let bad_tail = [0x00, 0x00, 0x00, 0x00];
        assert!(a.validate_tail(&bad_tail).is_err());
    }

    #[test]
    fn png_validates_header() {
        let a = PngAnalyser;
        let buf = [
            0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 0x00, 0x0D, b'I', b'H',
            b'D', b'R',
        ];
        let ctx = make_ctx(&buf);
        assert!(a.validate_header(&ctx).is_ok());
    }

    #[test]
    fn png_validates_tail() {
        let a = PngAnalyser;
        // IEND chunk: length(4) + "IEND"(4) + CRC(4) = 12 bytes
        let tail = [
            0x00, 0x00, 0x00, 0x00, // length = 0
            b'I', b'E', b'N', b'D', // type
            0xAE, 0x42, 0x60, 0x82, // CRC
        ];
        assert!(a.validate_tail(&tail).is_ok());
    }

    #[test]
    fn pdf_validates_header() {
        let a = PdfAnalyser;
        let buf = b"%PDF-1.5\n%binary garbage".to_vec();
        let ctx = make_ctx(&buf);
        assert!(a.validate_header(&ctx).is_ok());
    }

    #[test]
    fn pdf_rejects_bad_version() {
        let a = PdfAnalyser;
        let buf = b"%PDF-3.0\n".to_vec();
        let ctx = make_ctx(&buf);
        assert!(a.validate_header(&ctx).is_err());
    }

    #[test]
    fn pdf_validates_tail() {
        let a = PdfAnalyser;
        let tail = b"some garbage %%EOF".to_vec();
        assert!(a.validate_tail(&tail).is_ok());
    }

    #[test]
    fn zip_validates_tail() {
        let a = ZipAnalyser;
        // Minimal EOCD: signature + 18 bytes of zeros.
        let mut tail = vec![0u8; 22];
        tail[0..4].copy_from_slice(&[0x50, 0x4B, 0x05, 0x06]);
        assert!(a.validate_tail(&tail).is_ok());
        let bad_tail = vec![0u8; 22];
        assert!(a.validate_tail(&bad_tail).is_err());
    }

    #[test]
    fn gzip_validates_header() {
        let a = GzipAnalyser;
        let buf = [0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03];
        let ctx = make_ctx(&buf);
        assert!(a.validate_header(&ctx).is_ok());
    }

    #[test]
    fn all_analysers_returns_5() {
        let analysers = all_builtin_analysers();
        assert_eq!(analysers.len(), 5);
    }
}
