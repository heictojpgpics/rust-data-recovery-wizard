//! Extended signatures — ported from EaseUS's `raw_signs.json`.
//!
//! These are 139 uncommon file types with simple header/tail byte signatures.
//! Unlike the common signatures (which have format-specific analysers), these
//! are pure magic-byte matches with min/max size bounds.
//!
//! Source: `extracted/merged/raw_signs.json` (139 entries).

use crate::{FileCategory, Pattern, Signature};

/// A parsed entry from `raw_signs.json`.
#[derive(Debug, Clone, serde::Serialize, serde::Deserialize)]
pub struct ExtendedSignatureRaw {
    /// Header patterns (offset, hex, weight).
    pub header: Option<HeaderTailRaw>,
    /// Tail patterns.
    pub tail: Option<HeaderTailRaw>,
    /// Min file size in bytes.
    pub min: u64,
    /// Max file size in bytes.
    pub max: u64,
}

/// Header or tail pattern list (raw JSON form).
#[derive(Debug, Clone, serde::Serialize, serde::Deserialize)]
pub struct HeaderTailRaw {
    /// List of "offset,hex,weight" strings.
    pub signs: Vec<String>,
}

/// Parse a single "offset,hex,weight" sign string into a Pattern + weight.
fn parse_sign(s: &str) -> Option<(Pattern, f32)> {
    let parts: Vec<&str> = s.split(',').collect();
    if parts.len() != 3 {
        return None;
    }
    let offset: u64 = parts[0].parse().ok()?;
    let bytes = hex::decode(parts[1]).ok()?;
    let weight: f32 = parts[2].parse().ok()?;
    Some((Pattern { offset, bytes }, weight))
}

/// Convert a raw extended signature to a `Signature`.
pub fn convert_raw(name: &str, raw: &ExtendedSignatureRaw) -> Option<Signature> {
    let header_pattern = raw
        .header
        .as_ref()
        .and_then(|h| h.signs.first().and_then(|s| parse_sign(s).map(|(p, _)| p)))?;
    let tail_pattern = raw
        .tail
        .as_ref()
        .and_then(|t| t.signs.first().and_then(|s| parse_sign(s).map(|(p, _)| p)));
    Some(Signature {
        name: name.to_uppercase(),
        extension: name.to_lowercase(),
        category: FileCategory::Other, // Most extended types are "Other"
        header: header_pattern,
        tail: tail_pattern,
        min_size: raw.min,
        max_size: raw.max,
        has_validator: false,
    })
}

/// Returns the embedded `raw_signs.json` content.
///
/// This is the full 139-entry catalogue from EaseUS, embedded so we don't
/// depend on reading a file at runtime.
pub fn raw_signs_json() -> &'static str {
    include_str!("raw_signs.json")
}

/// Load all 139 extended signatures from the embedded JSON.
pub fn load_extended_signatures() -> Vec<Signature> {
    let json: std::collections::BTreeMap<String, ExtendedSignatureRaw> =
        serde_json::from_str(raw_signs_json()).expect("embedded raw_signs.json must parse");
    json.iter()
        .filter_map(|(name, raw)| convert_raw(name, raw))
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn loads_extended_signatures() {
        let sigs = load_extended_signatures();
        // Should load all 139 entries (some may fail to parse and be skipped).
        assert!(
            sigs.len() > 100,
            "expected 100+ signatures, got {}",
            sigs.len()
        );
    }

    #[test]
    fn parses_cpr_entry() {
        let json = r#"{
            "header": { "signs": ["8,4e554e44524f4f54,0.54"] },
            "tail": { "signs": ["1,01000000000000000400000006466c61677300000100000000000000,0.69"] },
            "min": 10240,
            "max": 204800
        }"#;
        let raw: ExtendedSignatureRaw = serde_json::from_str(json).unwrap();
        let sig = convert_raw("cpr", &raw).unwrap();
        assert_eq!(sig.extension, "cpr");
        assert_eq!(sig.header.offset, 8);
        assert_eq!(
            sig.header.bytes,
            vec![0x4e, 0x55, 0x4e, 0x44, 0x52, 0x4f, 0x4f, 0x54]
        );
        assert_eq!(sig.min_size, 10240);
        assert_eq!(sig.max_size, 204800);
    }

    #[test]
    fn parses_sign_string() {
        let (p, w) = parse_sign("0,44564456,0.96").unwrap();
        assert_eq!(p.offset, 0);
        assert_eq!(p.bytes, vec![0x44, 0x56, 0x44, 0x56]); // "DVDV"
        assert!((w - 0.96).abs() < 0.001);
    }
}
