//! MFT record parsing.
//!
//! Each MFT record is `mft_record_size` bytes (typically 1024 or 4096). It starts
//! with a header followed by a sequence of attributes.
//!
//! MFT record header layout (48 bytes):
//!
//! | Offset | Size | Field |
//! |--------|------|-------|
//! | 0x00   | 4    | Magic ("FILE" / "BAAD" / "CHKD") |
//! | 0x04   | 2    | Update sequence offset |
//! | 0x06   | 2    | Update sequence size (in 2-byte words) |
//! | 0x08   | 8    | Log file sequence number (LSN) |
//! | 0x10   | 2    | Sequence number (incremented on each reuse) |
//! | 0x12   | 2    | Hard link count |
//! | 0x14   | 2    | Offset to first attribute |
//! | 0x16   | 2    | Flags (in-use, directory) |
//! | 0x18   | 4    | Used size of record |
//! | 0x1C   | 4    | Allocated size of record |
//! | 0x20   | 8    | Base record reference (0 if this is the base) |
//! | 0x28   | 2    | Next attribute ID |
//! | 0x2A   | 2    | (XP+) Padding / alignment |
//! | 0x2C   | 4    | (XP+) MFT record number (this record) |
//! | 0x30   | ...  | Update sequence array + attributes |

use rdw_core::{CoreError, CoreResult};

/// Default MFT record size (used when VBR doesn't specify).
pub const FILE_RECORD_SIZE: u32 = 1024;

/// MFT record flag bits.
pub mod mft_flags {
    /// Record is in use (allocated to a file).
    pub const IN_USE: u16 = 0x01;
    /// Record is a directory (not a regular file).
    pub const DIRECTORY: u16 = 0x02;
    /// (XP+) Record is an index view.
    pub const INDEX_VIEW: u16 = 0x04;
}

/// MFT record header (parsed fields).
#[derive(Debug, Clone, Copy)]
pub struct MftRecordHeader {
    /// Magic ("FILE" for normal, "BAAD" for bad, "CHKD" for chkdsk-marked).
    pub magic: [u8; 4],
    /// Offset to the update sequence array (from start of record).
    pub usa_offset: u16,
    /// Size of the update sequence array (in u16 units, including the value itself).
    pub usa_count: u16,
    /// Log file sequence number (last log entry that modified this record).
    pub lsn: u64,
    /// Sequence number — incremented each time the record is reused.
    pub sequence_number: u16,
    /// Hard link count (number of directory entries pointing to this record).
    pub hard_link_count: u16,
    /// Offset to the first attribute (from start of record).
    pub first_attribute_offset: u16,
    /// Flags (see `mft_flags`).
    pub flags: u16,
    /// Used size of the record (bytes).
    pub used_size: u32,
    /// Allocated size of the record (bytes).
    pub allocated_size: u32,
    /// Base record reference (0 if this is the base record).
    pub base_record_ref: u64,
    /// Next attribute ID (counter for assigning new attribute IDs).
    pub next_attribute_id: u16,
    /// (XP+) This record's MFT number (for redundancy check).
    pub mft_record_number: u32,
}

/// Parse an MFT record header from a buffer.
pub fn parse_mft_record_header(buf: &[u8]) -> CoreResult<MftRecordHeader> {
    if buf.len() < 48 {
        return Err(CoreError::parse(
            "MFT record header",
            format!("buffer too short: {} < 48", buf.len()),
        ));
    }
    let mut magic = [0u8; 4];
    magic.copy_from_slice(&buf[0..4]);
    Ok(MftRecordHeader {
        magic,
        usa_offset: u16::from_le_bytes([buf[4], buf[5]]),
        usa_count: u16::from_le_bytes([buf[6], buf[7]]),
        lsn: u64::from_le_bytes(buf[8..16].try_into().unwrap()),
        sequence_number: u16::from_le_bytes([buf[0x10], buf[0x11]]),
        hard_link_count: u16::from_le_bytes([buf[0x12], buf[0x13]]),
        first_attribute_offset: u16::from_le_bytes([buf[0x14], buf[0x15]]),
        flags: u16::from_le_bytes([buf[0x16], buf[0x17]]),
        used_size: u32::from_le_bytes(buf[0x18..0x1C].try_into().unwrap()),
        allocated_size: u32::from_le_bytes(buf[0x1C..0x20].try_into().unwrap()),
        base_record_ref: u64::from_le_bytes(buf[0x20..0x28].try_into().unwrap()),
        next_attribute_id: u16::from_le_bytes([buf[0x28], buf[0x29]]),
        mft_record_number: u32::from_le_bytes(buf[0x2C..0x30].try_into().unwrap()),
    })
}

/// An MFT record (header + raw bytes with fixup applied).
#[derive(Debug, Clone)]
pub struct MftRecord {
    /// Header.
    pub header: MftRecordHeader,
    /// Raw record bytes (with fixup applied).
    pub data: Vec<u8>,
}

/// MFT record flags wrapper for convenience.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct MftRecordFlags;

impl MftRecord {
    /// Parse a raw MFT record buffer of `record_size` bytes.
    ///
    /// Applies the update sequence array (USA) fixup: the last 2 bytes of every
    /// sector within the record must match the USA value, and are then replaced
    /// with the original bytes saved in the USA.
    pub fn parse(buf: &[u8], record_size: u32) -> CoreResult<Self> {
        let record_size = record_size as usize;
        if buf.len() < record_size {
            return Err(CoreError::parse(
                "MFT record",
                format!("buffer too short: {} < {}", buf.len(), record_size),
            ));
        }

        let header = parse_mft_record_header(buf)?;

        if &header.magic != b"FILE" && &header.magic != b"BAAD" && &header.magic != b"CHKD" {
            return Err(CoreError::parse(
                "MFT record",
                format!(
                    "bad magic: {:?} (expected 'FILE', 'BAAD', or 'CHKD')",
                    std::str::from_utf8(&header.magic).unwrap_or("<bad utf8>")
                ),
            ));
        }

        if &header.magic == b"BAAD" || &header.magic == b"CHKD" {
            return Ok(Self {
                header,
                data: buf[..record_size].to_vec(),
            });
        }

        // Apply USA fixup.
        let mut data = buf[..record_size].to_vec();
        let usa_offset = header.usa_offset as usize;
        let usa_count = header.usa_count as usize;
        if usa_offset + usa_count * 2 > record_size {
            return Err(CoreError::corruption(
                "MFT record",
                format!(
                    "USA out of bounds: offset={}, count={}, record_size={}",
                    usa_offset, usa_count, record_size
                ),
            ));
        }
        let sector_size = 512usize;
        let n_sectors = record_size / sector_size;
        let usa_value = u16::from_le_bytes([data[usa_offset], data[usa_offset + 1]]);
        for i in 0..n_sectors.min(usa_count.saturating_sub(1)) {
            let sector_end = (i + 1) * sector_size;
            if sector_end > record_size {
                break;
            }
            let check_offset = sector_end - 2;
            let check_value = u16::from_le_bytes([data[check_offset], data[check_offset + 1]]);
            if check_value != usa_value {
                return Err(CoreError::corruption(
                    "MFT record",
                    format!(
                        "USA check failed at sector {}: got 0x{:04X}, expected 0x{:04X}",
                        i, check_value, usa_value
                    ),
                ));
            }
            let original_offset = usa_offset + 2 + i * 2;
            if original_offset + 1 >= record_size {
                break;
            }
            let original = u16::from_le_bytes([data[original_offset], data[original_offset + 1]]);
            data[check_offset..check_offset + 2].copy_from_slice(&original.to_le_bytes());
        }

        Ok(Self { header, data })
    }

    /// Whether this record is in use (allocated).
    pub fn is_in_use(&self) -> bool {
        self.header.flags & mft_flags::IN_USE != 0
    }

    /// Whether this record is a directory.
    pub fn is_directory(&self) -> bool {
        self.header.flags & mft_flags::DIRECTORY != 0
    }

    /// Iterate over attributes in this record.
    pub fn attributes(&self) -> AttributeIter<'_> {
        AttributeIter {
            data: &self.data,
            offset: self.header.first_attribute_offset as usize,
            end: self.header.used_size as usize,
        }
    }
}

/// Iterator over MFT attributes in a record.
pub struct AttributeIter<'a> {
    data: &'a [u8],
    offset: usize,
    end: usize,
}

impl<'a> Iterator for AttributeIter<'a> {
    type Item = &'a [u8];

    fn next(&mut self) -> Option<Self::Item> {
        if self.offset + 8 > self.end || self.offset + 8 > self.data.len() {
            return None;
        }
        let attr_type = u32::from_le_bytes([
            self.data[self.offset],
            self.data[self.offset + 1],
            self.data[self.offset + 2],
            self.data[self.offset + 3],
        ]);
        if attr_type == 0xFFFFFFFF {
            return None;
        }
        let attr_len = u32::from_le_bytes([
            self.data[self.offset + 4],
            self.data[self.offset + 5],
            self.data[self.offset + 6],
            self.data[self.offset + 7],
        ]) as usize;
        if attr_len == 0 || self.offset + attr_len > self.data.len() {
            return None;
        }
        let slice = &self.data[self.offset..self.offset + attr_len];
        self.offset += attr_len;
        self.offset = (self.offset + 7) & !7;
        Some(slice)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn make_minimal_record() -> Vec<u8> {
        let record_size = 1024usize;
        let mut buf = vec![0u8; record_size];
        buf[0..4].copy_from_slice(b"FILE");
        buf[4..6].copy_from_slice(&0x30u16.to_le_bytes());
        buf[6..8].copy_from_slice(&3u16.to_le_bytes());
        buf[0x10..0x12].copy_from_slice(&42u16.to_le_bytes());
        buf[0x14..0x16].copy_from_slice(&0x38u16.to_le_bytes());
        buf[0x16..0x18].copy_from_slice(&0x01u16.to_le_bytes());
        buf[0x18..0x1C].copy_from_slice(&0x100u32.to_le_bytes());
        buf[0x1C..0x20].copy_from_slice(&(record_size as u32).to_le_bytes());
        let usa_value: u16 = 0x1234;
        buf[0x30..0x32].copy_from_slice(&usa_value.to_le_bytes());
        buf[0x32..0x34].copy_from_slice(&0xA1B2u16.to_le_bytes());
        buf[0x34..0x36].copy_from_slice(&0xC3D4u16.to_le_bytes());
        buf[510..512].copy_from_slice(&usa_value.to_le_bytes());
        buf[1022..1024].copy_from_slice(&usa_value.to_le_bytes());
        buf[0x38..0x3C].copy_from_slice(&0xFFFFFFFFu32.to_le_bytes());
        buf
    }

    #[test]
    fn parses_minimal_record() {
        let buf = make_minimal_record();
        let record = MftRecord::parse(&buf, 1024).unwrap();
        assert_eq!(&record.header.magic, b"FILE");
        assert_eq!(record.header.sequence_number, 42);
        assert!(record.is_in_use());
        assert!(!record.is_directory());
        assert_eq!(
            u16::from_le_bytes([record.data[510], record.data[511]]),
            0xA1B2
        );
        assert_eq!(
            u16::from_le_bytes([record.data[1022], record.data[1023]]),
            0xC3D4
        );
    }

    #[test]
    fn rejects_bad_magic() {
        let mut buf = make_minimal_record();
        buf[0..4].copy_from_slice(b"XXXX");
        assert!(MftRecord::parse(&buf, 1024).is_err());
    }

    #[test]
    fn rejects_short_buffer() {
        let buf = make_minimal_record();
        let short = &buf[..512];
        assert!(MftRecord::parse(short, 1024).is_err());
    }

    #[test]
    fn accepts_bad_record() {
        let mut buf = make_minimal_record();
        buf[0..4].copy_from_slice(b"BAAD");
        let record = MftRecord::parse(&buf, 1024).unwrap();
        assert_eq!(&record.header.magic, b"BAAD");
    }

    #[test]
    fn detects_usa_corruption() {
        let mut buf = make_minimal_record();
        buf[510] = 0xFF;
        buf[511] = 0xFF;
        assert!(MftRecord::parse(&buf, 1024).is_err());
    }
}
