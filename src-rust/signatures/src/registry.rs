//! Signature registry — combines common + extended signatures.

use crate::{common::common_signatures, extended::load_extended_signatures, Signature};
use std::collections::HashMap;

/// Match confidence (from EaseUS's signature weights).
#[derive(Debug, Clone, Copy, PartialEq, serde::Serialize, serde::Deserialize)]
pub struct MatchConfidence(pub f32);

impl MatchConfidence {
    /// Construct a confidence value.
    pub fn new(v: f32) -> Self {
        Self(v.clamp(0.0, 1.0))
    }

    /// Whether this confidence is "high enough" to consider a match valid.
    pub fn is_confident(&self) -> bool {
        self.0 >= 0.5
    }
}

/// A signature match result.
#[derive(Debug, Clone)]
pub struct SignatureMatch {
    /// The matched signature.
    pub signature: Signature,
    /// Confidence (0.0 to 1.0).
    pub confidence: MatchConfidence,
    /// Whether the tail pattern also matched (boosts confidence).
    pub tail_matched: bool,
}

/// Registry of all known file signatures.
pub struct SignatureRegistry {
    /// All signatures (common + extended).
    signatures: Vec<Signature>,
    /// Index by first byte of header (for fast lookup).
    by_first_byte: HashMap<u8, Vec<usize>>,
}

impl SignatureRegistry {
    /// Construct a registry with all common + extended signatures.
    pub fn with_all() -> Self {
        let mut signatures = common_signatures();
        signatures.extend(load_extended_signatures());
        Self::new(signatures)
    }

    /// Construct a registry with a custom signature set.
    pub fn new(signatures: Vec<Signature>) -> Self {
        let mut by_first_byte: HashMap<u8, Vec<usize>> = HashMap::new();
        for (i, sig) in signatures.iter().enumerate() {
            if !sig.header.bytes.is_empty() {
                let first = sig.header.bytes[0];
                by_first_byte.entry(first).or_default().push(i);
            }
        }
        Self {
            signatures,
            by_first_byte,
        }
    }

    /// Total number of signatures.
    pub fn len(&self) -> usize {
        self.signatures.len()
    }

    /// Whether the registry is empty.
    pub fn is_empty(&self) -> bool {
        self.signatures.is_empty()
    }

    /// Iterate over all signatures.
    pub fn iter(&self) -> impl Iterator<Item = &Signature> {
        self.signatures.iter()
    }

    /// Try to match a buffer against all signatures.
    ///
    /// `header_buf` should be at least 512 bytes (covers most header offsets).
    /// `tail_buf` should be the last 512+ bytes of the file (for tail matching).
    /// `file_size` is the total file size (for min/max bounds).
    pub fn match_buf(
        &self,
        header_buf: &[u8],
        tail_buf: Option<&[u8]>,
        file_size: u64,
    ) -> Vec<SignatureMatch> {
        let mut matches = Vec::new();
        if header_buf.is_empty() {
            return matches;
        }
        let first_byte = header_buf[0];
        if let Some(indices) = self.by_first_byte.get(&first_byte) {
            for &i in indices {
                let sig = &self.signatures[i];
                // Size check.
                if file_size < sig.min_size {
                    continue;
                }
                if sig.max_size > 0 && file_size > sig.max_size {
                    continue;
                }
                // Header check.
                if !sig.header.matches(header_buf) {
                    continue;
                }
                // Tail check (if signature has a tail pattern).
                let tail_matched = if let (Some(tail), Some(tail_buf)) = (&sig.tail, tail_buf) {
                    tail.matches_tail(tail_buf)
                } else {
                    false
                };
                // Confidence: 0.6 for header match, +0.3 for tail match.
                let mut conf = 0.6f32;
                if tail_matched {
                    conf += 0.3;
                }
                if sig.has_validator {
                    conf += 0.1; // would be 1.0 if validator passes
                }
                matches.push(SignatureMatch {
                    signature: sig.clone(),
                    confidence: MatchConfidence::new(conf),
                    tail_matched,
                });
            }
        }
        // Sort by confidence descending.
        matches.sort_by(|a, b| {
            b.confidence
                .0
                .partial_cmp(&a.confidence.0)
                .unwrap_or(std::cmp::Ordering::Equal)
        });
        matches
    }

    /// Get the best match for a buffer (highest confidence).
    pub fn best_match(
        &self,
        header_buf: &[u8],
        tail_buf: Option<&[u8]>,
        file_size: u64,
    ) -> Option<SignatureMatch> {
        self.match_buf(header_buf, tail_buf, file_size)
            .into_iter()
            .next()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn registry_loads_all() {
        let reg = SignatureRegistry::with_all();
        // 30+ common + 100+ extended.
        assert!(
            reg.len() > 130,
            "expected 130+ signatures, got {}",
            reg.len()
        );
    }

    #[test]
    fn matches_jpg() {
        let reg = SignatureRegistry::with_all();
        let jpg_buf = vec![
            0xFF, 0xD8, 0xFF, 0xE0, 0x00, 0x10, b'J', b'F', b'I', b'F', 0x00,
        ];
        let matches = reg.match_buf(&jpg_buf, None, 1024);
        assert!(!matches.is_empty(), "should match JPG");
        let best = matches[0].signature.extension.clone();
        assert!(
            best == "jpg" || best == "jpeg",
            "best match should be jpg/jpeg, got {}",
            best
        );
    }

    #[test]
    fn matches_pdf() {
        let reg = SignatureRegistry::with_all();
        let pdf_buf = b"%PDF-1.5\n%binary garbage".to_vec();
        let matches = reg.match_buf(&pdf_buf, None, 1024);
        assert!(!matches.is_empty());
        assert_eq!(matches[0].signature.extension, "pdf");
    }

    #[test]
    fn matches_png() {
        let reg = SignatureRegistry::with_all();
        let png_buf = vec![
            0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 0x00, 0x0D, b'I', b'H',
            b'D', b'R',
        ];
        let matches = reg.match_buf(&png_buf, None, 1024);
        assert!(!matches.is_empty());
        assert_eq!(matches[0].signature.extension, "png");
    }

    #[test]
    fn matches_zip() {
        let reg = SignatureRegistry::with_all();
        let zip_buf = vec![0x50, 0x4B, 0x03, 0x04, 0x14, 0x00, 0x00, 0x00, 0x08, 0x00];
        let matches = reg.match_buf(&zip_buf, None, 1024);
        // ZIP and DOCX share the same magic — both should match.
        assert!(!matches.is_empty());
        let exts: Vec<_> = matches
            .iter()
            .map(|m| m.signature.extension.as_str())
            .collect();
        assert!(
            exts.contains(&"zip")
                || exts.contains(&"docx")
                || exts.contains(&"xlsx")
                || exts.contains(&"pptx")
        );
    }

    #[test]
    fn no_match_for_random() {
        let reg = SignatureRegistry::with_all();
        let random_buf = vec![0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0];
        let matches = reg.match_buf(&random_buf, None, 1024);
        assert!(matches.is_empty(), "expected no match for random bytes");
    }

    #[test]
    fn min_size_filters() {
        let reg = SignatureRegistry::with_all();
        let pdf_buf = b"%PDF-1.5\n".to_vec();
        // File size below min_size (64).
        let matches = reg.match_buf(&pdf_buf, None, 32);
        assert!(
            matches.iter().all(|m| m.signature.extension != "pdf"),
            "PDF should not match with size < 64"
        );
    }

    #[test]
    fn tail_match_boosts_confidence() {
        let reg = SignatureRegistry::with_all();
        let jpg_header = vec![
            0xFF, 0xD8, 0xFF, 0xE0, 0x00, 0x10, b'J', b'F', b'I', b'F', 0x00,
        ];
        let jpg_tail = vec![0xFF, 0xD9]; // EOI marker
        let matches = reg.match_buf(&jpg_header, Some(&jpg_tail), 1024);
        let jpg_match = matches
            .iter()
            .find(|m| m.signature.extension == "jpg")
            .unwrap();
        assert!(jpg_match.tail_matched);
        assert!(jpg_match.confidence.0 > 0.85);
    }
}
