//! NTFS attribute types and parsing.
//!
//! See `docs/reverse-engineering/02_fs_parser_architecture.md` §3.1.
//!
//! Common attribute header layout (resident, 24 bytes):
//!
//! | Offset | Size | Field |
//! |--------|------|-------|
//! | 0x00   | 4    | Attribute type |
//! | 0x04   | 4    | Attribute length (including header) |
//! | 0x08   | 1    | Non-resident flag (0 = resident) |
//! | 0x09   | 1    | Name length (in UTF-16 units) |
//! | 0x0A   | 2    | Name offset |
//! | 0x0C   | 2    | Flags (compressed, encrypted, sparse) |
//! | 0x0E   | 2    | Attribute ID |
//! | 0x10   | 4    | Content length |
//! | 0x14   | 2    | Content offset |
//! | 0x16   | 2    | Reserved |
//!
//! Common attribute header layout (non-resident, 64 bytes):
//!
//! | Offset | Size | Field |
//! |--------|------|-------|
//! | 0x00   | 4    | Attribute type |
//! | 0x04   | 4    | Attribute length |
//! | 0x08   | 1    | Non-resident flag (1 = non-resident) |
//! | 0x09   | 1    | Name length |
//! | 0x0A   | 2    | Name offset |
//! | 0x0C   | 2    | Flags |
//! | 0x0E   | 2    | Attribute ID |
//! | 0x10   | 8    | Start VCN |
//! | 0x18   | 8    | End VCN |
//! | 0x20   | 2    | Run list offset |
//! | 0x22   | 2    | Compression unit size (0 = not compressed) |
//! | 0x24   | 4    | Reserved |
//! | 0x28   | 8    | Allocated size |
//! | 0x30   | 8    | Real size (logical file size) |
//! | 0x38   | 8    | Initialized size |

use rdw_core::{CoreError, CoreResult};

/// $STANDARD_INFORMATION (0x10) — file timestamps + flags.
pub const ATTR_STANDARD_INFORMATION: u32 = 0x10;
/// $ATTRIBUTE_LIST (0x20) — list of attributes that don't fit in the MFT record.
pub const ATTR_ATTRIBUTE_LIST: u32 = 0x20;
/// $FILE_NAME (0x30) — file name + parent reference.
pub const ATTR_FILE_NAME: u32 = 0x30;
/// $OBJECT_ID (0x40) — 16-byte GUID for tracking.
pub const ATTR_OBJECT_ID: u32 = 0x40;
/// $SECURITY_DESCRIPTOR (0x50) — ACL.
pub const ATTR_SECURITY_DESCRIPTOR: u32 = 0x50;
/// $VOLUME_NAME (0x60) — volume label.
pub const ATTR_VOLUME_NAME: u32 = 0x60;
/// $VOLUME_INFORMATION (0x70) — version + flags.
pub const ATTR_VOLUME_INFORMATION: u32 = 0x70;
/// $DATA (0x80) — file content.
pub const ATTR_DATA: u32 = 0x80;
/// $INDEX_ROOT (0x90) — root of an index tree.
pub const ATTR_INDEX_ROOT: u32 = 0x90;
/// $INDEX_ALLOCATION (0xA0) — branches of an index tree.
pub const ATTR_INDEX_ALLOCATION: u32 = 0xA0;
/// $BITMAP (0xB0) — index / MFT bitmap.
pub const ATTR_BITMAP: u32 = 0xB0;
/// $REPARSE_POINT (0xC0) — symlink / junction target.
pub const ATTR_REPARSE_POINT: u32 = 0xC0;
/// $EA_INFORMATION (0xD0).
pub const ATTR_EA_INFORMATION: u32 = 0xD0;
/// $EA (0xE0).
pub const ATTR_EA: u32 = 0xE0;
/// $LOGGED_UTILITY_STREAM (0x100).
pub const ATTR_LOGGED_UTILITY_STREAM: u32 = 0x100;
/// End-of-attributes marker.
pub const ATTR_END: u32 = 0xFFFFFFFF;

/// NTFS attribute type as a strongly-typed enum.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
pub enum AttributeType {
    /// $STANDARD_INFORMATION (0x10).
    StandardInformation,
    /// $ATTRIBUTE_LIST (0x20).
    AttributeList,
    /// $FILE_NAME (0x30).
    FileName,
    /// $OBJECT_ID (0x40).
    ObjectId,
    /// $SECURITY_DESCRIPTOR (0x50).
    SecurityDescriptor,
    /// $VOLUME_NAME (0x60).
    VolumeName,
    /// $VOLUME_INFORMATION (0x70).
    VolumeInformation,
    /// $DATA (0x80).
    Data,
    /// $INDEX_ROOT (0x90).
    IndexRoot,
    /// $INDEX_ALLOCATION (0xA0).
    IndexAllocation,
    /// $BITMAP (0xB0).
    Bitmap,
    /// $REPARSE_POINT (0xC0).
    ReparsePoint,
    /// $EA_INFORMATION (0xD0).
    EaInformation,
    /// $EA (0xE0).
    Ea,
    /// $LOGGED_UTILITY_STREAM (0x100).
    LoggedUtilityStream,
    /// Unknown attribute type.
    Unknown(u32),
    /// End-of-attributes marker.
    End,
}

impl AttributeType {
    /// Convert from a raw u32.
    pub fn from_raw(raw: u32) -> Self {
        match raw {
            ATTR_STANDARD_INFORMATION => Self::StandardInformation,
            ATTR_ATTRIBUTE_LIST => Self::AttributeList,
            ATTR_FILE_NAME => Self::FileName,
            ATTR_OBJECT_ID => Self::ObjectId,
            ATTR_SECURITY_DESCRIPTOR => Self::SecurityDescriptor,
            ATTR_VOLUME_NAME => Self::VolumeName,
            ATTR_VOLUME_INFORMATION => Self::VolumeInformation,
            ATTR_DATA => Self::Data,
            ATTR_INDEX_ROOT => Self::IndexRoot,
            ATTR_INDEX_ALLOCATION => Self::IndexAllocation,
            ATTR_BITMAP => Self::Bitmap,
            ATTR_REPARSE_POINT => Self::ReparsePoint,
            ATTR_EA_INFORMATION => Self::EaInformation,
            ATTR_EA => Self::Ea,
            ATTR_LOGGED_UTILITY_STREAM => Self::LoggedUtilityStream,
            ATTR_END => Self::End,
            other => Self::Unknown(other),
        }
    }

    /// Convert to raw u32.
    pub fn to_raw(self) -> u32 {
        match self {
            Self::StandardInformation => ATTR_STANDARD_INFORMATION,
            Self::AttributeList => ATTR_ATTRIBUTE_LIST,
            Self::FileName => ATTR_FILE_NAME,
            Self::ObjectId => ATTR_OBJECT_ID,
            Self::SecurityDescriptor => ATTR_SECURITY_DESCRIPTOR,
            Self::VolumeName => ATTR_VOLUME_NAME,
            Self::VolumeInformation => ATTR_VOLUME_INFORMATION,
            Self::Data => ATTR_DATA,
            Self::IndexRoot => ATTR_INDEX_ROOT,
            Self::IndexAllocation => ATTR_INDEX_ALLOCATION,
            Self::Bitmap => ATTR_BITMAP,
            Self::ReparsePoint => ATTR_REPARSE_POINT,
            Self::EaInformation => ATTR_EA_INFORMATION,
            Self::Ea => ATTR_EA,
            Self::LoggedUtilityStream => ATTR_LOGGED_UTILITY_STREAM,
            Self::End => ATTR_END,
            Self::Unknown(v) => v,
        }
    }
}

impl std::fmt::Display for AttributeType {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(match self {
            Self::StandardInformation => "$STANDARD_INFORMATION",
            Self::AttributeList => "$ATTRIBUTE_LIST",
            Self::FileName => "$FILE_NAME",
            Self::ObjectId => "$OBJECT_ID",
            Self::SecurityDescriptor => "$SECURITY_DESCRIPTOR",
            Self::VolumeName => "$VOLUME_NAME",
            Self::VolumeInformation => "$VOLUME_INFORMATION",
            Self::Data => "$DATA",
            Self::IndexRoot => "$INDEX_ROOT",
            Self::IndexAllocation => "$INDEX_ALLOCATION",
            Self::Bitmap => "$BITMAP",
            Self::ReparsePoint => "$REPARSE_POINT",
            Self::EaInformation => "$EA_INFORMATION",
            Self::Ea => "$EA",
            Self::LoggedUtilityStream => "$LOGGED_UTILITY_STREAM",
            Self::End => "<end>",
            Self::Unknown(v) => return write!(f, "$UNKNOWN(0x{:08X})", v),
        })
    }
}

/// Attribute flag bits.
pub mod attr_flags {
    /// Compressed (NTFS native compression).
    pub const COMPRESSED: u16 = 0x0001;
    /// Encrypted (EFS).
    pub const ENCRYPTED: u16 = 0x4000;
    /// Sparse.
    pub const SPARSE: u16 = 0x8000;
}

/// Common attribute header fields (first 16 bytes).
#[derive(Debug, Clone, Copy)]
pub struct AttributeHeader {
    /// Attribute type (raw u32).
    pub attr_type: u32,
    /// Attribute length (including header).
    pub length: u32,
    /// Non-resident flag (0 = resident, 1 = non-resident).
    pub non_resident: u8,
    /// Name length in UTF-16 units (almost always 0).
    pub name_length: u8,
    /// Name offset (from start of attribute).
    pub name_offset: u16,
    /// Flags (see `attr_flags`).
    pub flags: u16,
    /// Attribute ID.
    pub attribute_id: u16,
}

impl AttributeHeader {
    fn parse(buf: &[u8]) -> CoreResult<Self> {
        if buf.len() < 16 {
            return Err(CoreError::parse(
                "NTFS attribute header",
                format!("buffer too short: {} < 16", buf.len()),
            ));
        }
        Ok(Self {
            attr_type: u32::from_le_bytes(buf[0..4].try_into().unwrap()),
            length: u32::from_le_bytes(buf[4..8].try_into().unwrap()),
            non_resident: buf[8],
            name_length: buf[9],
            name_offset: u16::from_le_bytes([buf[10], buf[11]]),
            flags: u16::from_le_bytes([buf[12], buf[13]]),
            attribute_id: u16::from_le_bytes([buf[14], buf[15]]),
        })
    }
}

/// Resident attribute header (extends `AttributeHeader` with content length + offset).
#[derive(Debug, Clone, Copy)]
pub struct ResidentAttribute {
    /// Common header.
    pub header: AttributeHeader,
    /// Content length in bytes.
    pub content_length: u32,
    /// Content offset (from start of attribute).
    pub content_offset: u16,
}

impl ResidentAttribute {
    fn parse(buf: &[u8]) -> CoreResult<Self> {
        let header = AttributeHeader::parse(buf)?;
        if buf.len() < 24 {
            return Err(CoreError::parse(
                "NTFS resident attribute",
                format!("buffer too short: {} < 24", buf.len()),
            ));
        }
        Ok(Self {
            header,
            content_length: u32::from_le_bytes(buf[16..20].try_into().unwrap()),
            content_offset: u16::from_le_bytes([buf[20], buf[21]]),
        })
    }
}

/// Non-resident attribute header (extends `AttributeHeader` with VCN range + sizes).
#[derive(Debug, Clone, Copy)]
pub struct NonResidentAttribute {
    /// Common header.
    pub header: AttributeHeader,
    /// Starting VCN.
    pub start_vcn: u64,
    /// Ending VCN (inclusive).
    pub end_vcn: u64,
    /// Run list offset (from start of attribute).
    pub run_list_offset: u16,
    /// Compression unit size (in clusters, log2). 0 = not compressed.
    pub compression_unit: u16,
    /// Allocated size (in bytes).
    pub allocated_size: u64,
    /// Real / logical size (in bytes).
    pub real_size: u64,
    /// Initialized size (in bytes).
    pub initialized_size: u64,
}

impl NonResidentAttribute {
    fn parse(buf: &[u8]) -> CoreResult<Self> {
        let header = AttributeHeader::parse(buf)?;
        if buf.len() < 64 {
            return Err(CoreError::parse(
                "NTFS non-resident attribute",
                format!("buffer too short: {} < 64", buf.len()),
            ));
        }
        Ok(Self {
            header,
            start_vcn: u64::from_le_bytes(buf[16..24].try_into().unwrap()),
            end_vcn: u64::from_le_bytes(buf[24..32].try_into().unwrap()),
            run_list_offset: u16::from_le_bytes([buf[32], buf[33]]),
            compression_unit: u16::from_le_bytes([buf[34], buf[35]]),
            allocated_size: u64::from_le_bytes(buf[40..48].try_into().unwrap()),
            real_size: u64::from_le_bytes(buf[48..56].try_into().unwrap()),
            initialized_size: u64::from_le_bytes(buf[56..64].try_into().unwrap()),
        })
    }
}

/// Parsed attribute (resident or non-resident).
#[derive(Debug, Clone)]
pub enum Attribute {
    /// Resident attribute (data is inline).
    Resident(ResidentAttribute, Vec<u8>),
    /// Non-resident attribute (data is on disk via run list).
    NonResident(NonResidentAttribute, Vec<DataRunEntry>),
}

/// A single entry in a non-resident run list.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DataRunEntry {
    /// Length in clusters.
    pub length: u64,
    /// Offset in clusters from the previous run's start (signed).
    /// `None` means sparse (a hole).
    pub offset: Option<i64>,
}

impl Attribute {
    /// Parse an attribute from a slice.
    pub fn parse(buf: &[u8]) -> CoreResult<Self> {
        if buf.len() < 16 {
            return Err(CoreError::parse(
                "NTFS attribute",
                format!("buffer too short: {} < 16", buf.len()),
            ));
        }
        let header = AttributeHeader::parse(buf)?;
        if header.non_resident == 0 {
            let resident = ResidentAttribute::parse(buf)?;
            let content_offset = resident.content_offset as usize;
            let content_length = resident.content_length as usize;
            if content_offset + content_length > buf.len() {
                return Err(CoreError::corruption(
                    "NTFS attribute",
                    format!(
                        "resident content out of bounds: offset={}, length={}, buf={}",
                        content_offset,
                        content_length,
                        buf.len()
                    ),
                ));
            }
            let content = buf[content_offset..content_offset + content_length].to_vec();
            Ok(Self::Resident(resident, content))
        } else {
            let non_resident = NonResidentAttribute::parse(buf)?;
            let run_list_offset = non_resident.run_list_offset as usize;
            if run_list_offset > buf.len() {
                return Err(CoreError::corruption(
                    "NTFS attribute",
                    format!(
                        "run list offset {} past buffer {}",
                        run_list_offset,
                        buf.len()
                    ),
                ));
            }
            let runs = parse_run_list(&buf[run_list_offset..])?;
            Ok(Self::NonResident(non_resident, runs))
        }
    }

    /// Attribute type (parsed).
    pub fn attr_type(&self) -> AttributeType {
        let raw = match self {
            Self::Resident(r, _) => r.header.attr_type,
            Self::NonResident(n, _) => n.header.attr_type,
        };
        AttributeType::from_raw(raw)
    }

    /// Raw attribute type (u32).
    pub fn attr_type_raw(&self) -> u32 {
        match self {
            Self::Resident(r, _) => r.header.attr_type,
            Self::NonResident(n, _) => n.header.attr_type,
        }
    }

    /// Attribute flags (raw u16).
    pub fn flags_raw(&self) -> u16 {
        match self {
            Self::Resident(r, _) => r.header.flags,
            Self::NonResident(n, _) => n.header.flags,
        }
    }

    /// Attribute ID.
    pub fn attribute_id(&self) -> u16 {
        match self {
            Self::Resident(r, _) => r.header.attribute_id,
            Self::NonResident(n, _) => n.header.attribute_id,
        }
    }

    /// Get the raw content (for resident attributes).
    pub fn resident_content(&self) -> Option<&[u8]> {
        match self {
            Self::Resident(_, content) => Some(content),
            Self::NonResident(_, _) => None,
        }
    }

    /// Get the run list (for non-resident attributes).
    pub fn run_list(&self) -> Option<&[DataRunEntry]> {
        match self {
            Self::Resident(_, _) => None,
            Self::NonResident(_, runs) => Some(runs),
        }
    }

    /// Logical size of the attribute's content.
    pub fn logical_size(&self) -> u64 {
        match self {
            Self::Resident(r, content) => r.content_length.max(content.len() as u32) as u64,
            Self::NonResident(n, _) => n.real_size,
        }
    }
}

/// NTFS run list parsing.
///
/// Each entry is encoded as:
/// - 1 byte header: high nibble = length field size (1-8 bytes), low nibble = offset field size (0-8 bytes)
/// - length bytes (little-endian) = number of clusters
/// - offset bytes (little-endian, signed) = cluster offset from previous run
///
/// A header byte of 0x00 marks the end of the run list.
pub fn parse_run_list(buf: &[u8]) -> CoreResult<Vec<DataRunEntry>> {
    let mut runs = Vec::new();
    let mut pos = 0;
    let mut current_offset: i64 = 0;
    while pos < buf.len() {
        let header = buf[pos];
        if header == 0 {
            break;
        }
        let length_size = (header >> 4) as usize;
        let offset_size = (header & 0x0F) as usize;
        if length_size == 0 || length_size > 8 {
            return Err(CoreError::corruption(
                "NTFS run list",
                format!("invalid length field size: {}", length_size),
            ));
        }
        if offset_size > 8 {
            return Err(CoreError::corruption(
                "NTFS run list",
                format!("invalid offset field size: {}", offset_size),
            ));
        }
        pos += 1;
        if pos + length_size > buf.len() {
            return Err(CoreError::corruption(
                "NTFS run list",
                "length field extends past buffer",
            ));
        }
        let mut length_buf = [0u8; 8];
        length_buf[..length_size].copy_from_slice(&buf[pos..pos + length_size]);
        let length = u64::from_le_bytes(length_buf);
        pos += length_size;
        let offset = if offset_size == 0 {
            None
        } else {
            if pos + offset_size > buf.len() {
                return Err(CoreError::corruption(
                    "NTFS run list",
                    "offset field extends past buffer",
                ));
            }
            let mut offset_buf = [0u8; 8];
            offset_buf[..offset_size].copy_from_slice(&buf[pos..pos + offset_size]);
            if offset_buf[offset_size - 1] & 0x80 != 0 {
                for byte in offset_buf.iter_mut().skip(offset_size) {
                    *byte = 0xFF;
                }
            }
            let delta = i64::from_le_bytes(offset_buf);
            pos += offset_size;
            current_offset = current_offset.wrapping_add(delta);
            Some(current_offset)
        };
        runs.push(DataRunEntry { length, offset });
    }
    Ok(runs)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parses_resident_attribute() {
        let mut buf = vec![0u8; 32];
        buf[0..4].copy_from_slice(&0x10u32.to_le_bytes());
        buf[4..8].copy_from_slice(&32u32.to_le_bytes());
        buf[8] = 0;
        buf[9] = 0;
        buf[10..12].copy_from_slice(&0x18u16.to_le_bytes());
        buf[12..14].copy_from_slice(&0u16.to_le_bytes());
        buf[14..16].copy_from_slice(&0u16.to_le_bytes());
        buf[16..20].copy_from_slice(&8u32.to_le_bytes());
        buf[20..22].copy_from_slice(&24u16.to_le_bytes());
        buf[22..24].copy_from_slice(&0u16.to_le_bytes());
        buf[24..32].copy_from_slice(&[1, 2, 3, 4, 5, 6, 7, 8]);

        let attr = Attribute::parse(&buf).unwrap();
        match attr {
            Attribute::Resident(r, content) => {
                assert_eq!(r.header.attr_type, 0x10);
                assert_eq!(r.content_length, 8);
                assert_eq!(content, vec![1, 2, 3, 4, 5, 6, 7, 8]);
            }
            _ => panic!("expected resident attribute"),
        }
    }

    #[test]
    fn parses_run_list_simple() {
        let buf = [0x11, 0x05, 0x64, 0x00];
        let runs = parse_run_list(&buf).unwrap();
        assert_eq!(runs.len(), 1);
        assert_eq!(runs[0].length, 5);
        assert_eq!(runs[0].offset, Some(100));
    }

    #[test]
    fn parses_run_list_sparse() {
        // Sparse run has length_size >= 1, offset_size = 0.
        // Header byte 0x10 = length_size=1, offset_size=0.
        // Third run uses 2-byte offset because +200 doesn't fit in signed 1-byte (-128..127).
        let buf = [
            0x11, 0x05, 0x64, // run 1: len=5, off=100 (1-byte offset)
            0x10, 0x03, // run 2: sparse, len=3 (no offset)
            0x12, 0x04, 0xC8, 0x00, // run 3: len=4, off=+200 (=300), 2-byte offset
            0x00, // end
        ];
        let runs = parse_run_list(&buf).unwrap();
        assert_eq!(runs.len(), 3);
        assert_eq!(runs[0].length, 5);
        assert_eq!(runs[0].offset, Some(100));
        assert_eq!(runs[1].length, 3);
        assert_eq!(runs[1].offset, None);
        assert_eq!(runs[2].length, 4);
        assert_eq!(runs[2].offset, Some(300));
    }

    #[test]
    fn parses_run_list_negative_offset() {
        let buf = [0x11, 0x05, 0x9C, 0x00];
        let runs = parse_run_list(&buf).unwrap();
        assert_eq!(runs.len(), 1);
        assert_eq!(runs[0].length, 5);
        assert_eq!(runs[0].offset, Some(-100));
    }

    #[test]
    fn attribute_type_from_raw() {
        assert_eq!(
            AttributeType::from_raw(0x10),
            AttributeType::StandardInformation
        );
        assert_eq!(AttributeType::from_raw(0x30), AttributeType::FileName);
        assert_eq!(AttributeType::from_raw(0x80), AttributeType::Data);
        assert_eq!(AttributeType::from_raw(0xFFFFFFFF), AttributeType::End);
        match AttributeType::from_raw(0x12345678) {
            AttributeType::Unknown(0x12345678) => {}
            other => panic!("expected Unknown, got {:?}", other),
        }
    }
}
