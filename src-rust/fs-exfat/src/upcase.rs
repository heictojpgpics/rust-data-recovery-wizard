//! exFAT up-case (Unicode case-mapping) table.
//!
//! exFAT stores a customizable Unicode case-mapping table on disk. The default
//! table maps lowercase ASCII (a-z) to uppercase (A-Z), plus the standard
//! Unicode uppercase mappings for Latin-1 supplement and Greek. For our v0
//! implementation we use the default table.

use std::sync::Arc;

/// Default upcase table — maps lowercase ASCII to uppercase.
///
/// For full Unicode support, we'd parse the on-disk upcase table. For v0,
/// we just do ASCII (covers 99% of filenames).
#[derive(Debug, Clone, Default)]
pub struct UpcaseTable {
    /// Optional raw table from disk.
    raw: Option<Arc<[u8]>>,
}

impl UpcaseTable {
    /// Construct a default (ASCII-only) upcase table.
    pub fn default_ascii() -> Self {
        Self { raw: None }
    }

    /// Construct from raw bytes read from disk.
    pub fn from_bytes(raw: Arc<[u8]>) -> Self {
        Self { raw: Some(raw) }
    }

    /// Convert a UTF-16 code unit to uppercase.
    pub fn to_upper(&self, c: u16) -> u16 {
        // ASCII fast path.
        if (b'a' as u16..=b'z' as u16).contains(&c) {
            return c - 32;
        }
        // If we have a raw table, look up the mapping.
        if let Some(raw) = &self.raw {
            let offset = (c as usize) * 2;
            if offset + 1 < raw.len() {
                return u16::from_le_bytes([raw[offset], raw[offset + 1]]);
            }
        }
        // Fallback: no mapping.
        c
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn ascii_uppercase() {
        let t = UpcaseTable::default_ascii();
        assert_eq!(t.to_upper(b'a' as u16), b'A' as u16);
        assert_eq!(t.to_upper(b'z' as u16), b'Z' as u16);
        assert_eq!(t.to_upper(b'A' as u16), b'A' as u16);
        assert_eq!(t.to_upper(b'1' as u16), b'1' as u16);
    }
}
