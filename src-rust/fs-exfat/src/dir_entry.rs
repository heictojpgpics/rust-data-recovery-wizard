//! exFAT directory entry parsing.
//!
//! exFAT uses a "set" of 3+ entries per file:
//!
//! 1. **File entry** (0x85) — 32 bytes. Contains attributes + timestamps +
//!    number of secondary entries that follow.
//! 2. **Stream extension entry** (0xC0) — 32 bytes. Contains the first cluster,
//!    data length, and flags (contiguous vs fragmented).
//! 3. **File name entries** (0xC1) — 32 bytes each. Each holds 15 UTF-16
//!    characters. The number of name entries is in the file entry.
//!
//! Special directory entries:
//!
//! - **Allocation bitmap** (0x81) — points to the bitmap that tracks cluster
//!   allocation.
//! - **Up-case table** (0x82) — points to the Unicode case-mapping table.
//! - **Volume label** (0x83) — stores the volume label.

use rdw_core::{CoreError, CoreResult};

/// Directory entry type (first byte of every 32-byte entry).
#[derive(Debug, Clone, Copy, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub enum EntryType {
    /// End-of-directory marker (0x00).
    End,
    /// Allocation bitmap (0x81).
    AllocationBitmap,
    /// Up-case table (0x82).
    UpcaseTable,
    /// Volume label (0x83).
    VolumeLabel,
    /// File directory entry (0x85) — start of a file set.
    File,
    /// Stream extension (0xC0) — second entry in a file set.
    StreamExtension,
    /// File name (0xC1) — third+ entry in a file set.
    FileName,
    /// Vendor extension (0xA0).
    VendorExtension,
    /// Other (with raw byte).
    Other(u8),
}

impl EntryType {
    /// Decode from a raw byte.
    pub fn from_u8(raw: u8) -> Self {
        // Mask off the in-use + secondary-importance bits.
        match raw & 0x7F {
            0x00 => Self::End,
            0x01 => Self::AllocationBitmap,
            0x02 => Self::UpcaseTable,
            0x03 => Self::VolumeLabel,
            0x05 => Self::File,
            0x40 => Self::StreamExtension,
            0x41 => Self::FileName,
            0x20 => Self::VendorExtension,
            other => Self::Other(other),
        }
    }

    /// Whether this entry type is "in use" (bit 7 set).
    pub fn is_in_use(raw: u8) -> bool {
        raw & 0x80 != 0
    }
}

/// exFAT file attributes (16-bit, FAT-compatible + extra bits).
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct FileAttributes {
    /// Read-only.
    pub read_only: bool,
    /// Hidden.
    pub hidden: bool,
    /// System.
    pub system: bool,
    /// Volume ID (reserved in exFAT).
    pub volume_id: bool,
    /// Directory.
    pub directory: bool,
    /// Archive.
    pub archive: bool,
}

impl FileAttributes {
    /// Decode from a raw u16.
    pub fn from_u16(raw: u16) -> Self {
        Self {
            read_only: raw & 0x0001 != 0,
            hidden: raw & 0x0002 != 0,
            system: raw & 0x0004 != 0,
            volume_id: raw & 0x0008 != 0,
            directory: raw & 0x0010 != 0,
            archive: raw & 0x0020 != 0,
        }
    }
}

/// Generic directory entry (32 bytes raw).
#[derive(Debug, Clone)]
pub struct DirectoryEntry {
    /// Raw 32-byte buffer.
    pub raw: [u8; 32],
    /// Decoded type.
    pub entry_type: EntryType,
}

impl DirectoryEntry {
    /// Parse a 32-byte buffer into a generic directory entry.
    pub fn parse(buf: &[u8; 32]) -> Self {
        let entry_type = EntryType::from_u8(buf[0]);
        Self {
            raw: *buf,
            entry_type,
        }
    }
}

/// File directory entry (0x85) — first entry in a file set.
#[derive(Debug, Clone)]
pub struct FileEntry {
    /// Whether this entry has been deleted (in-use bit clear).
    pub deleted: bool,
    /// Number of secondary entries that follow (typically 2 = stream + 1 name).
    pub secondary_count: u8,
    /// Set checksum (used to validate the file set).
    pub set_checksum: u16,
    /// File attributes.
    pub attributes: FileAttributes,
    /// Reserved (always 0).
    pub reserved1: u16,
    /// Creation timestamp.
    pub create_timestamp: u32,
    /// Last modified timestamp.
    pub last_modified_timestamp: u32,
    /// Last access timestamp.
    pub last_access_timestamp: u32,
    /// Creation 10-ms increment (0..=199).
    pub create_10ms_increment: u8,
    /// Last modified UTC offset (5-min steps).
    pub last_modified_utc_offset: u8,
    /// Last access UTC offset.
    pub last_access_utc_offset: u8,
    /// Creation UTC offset.
    pub create_utc_offset: u8,
    /// Reserved (7 bytes).
    pub reserved2: [u8; 7],
}

impl FileEntry {
    /// Parse a 32-byte buffer as a file entry.
    pub fn parse(buf: &[u8; 32]) -> CoreResult<Self> {
        let entry_type = EntryType::from_u8(buf[0]);
        if !matches!(entry_type, EntryType::File) {
            return Err(CoreError::parse(
                "exFAT File entry",
                format!("expected 0x85 (File), got 0x{:02X}", buf[0]),
            ));
        }
        Ok(Self {
            deleted: !EntryType::is_in_use(buf[0]),
            secondary_count: buf[1],
            set_checksum: u16::from_le_bytes([buf[2], buf[3]]),
            attributes: FileAttributes::from_u16(u16::from_le_bytes([buf[4], buf[5]])),
            reserved1: u16::from_le_bytes([buf[6], buf[7]]),
            create_timestamp: u32::from_le_bytes(buf[8..12].try_into().unwrap()),
            last_modified_timestamp: u32::from_le_bytes(buf[12..16].try_into().unwrap()),
            last_access_timestamp: u32::from_le_bytes(buf[16..20].try_into().unwrap()),
            create_10ms_increment: buf[20],
            last_modified_utc_offset: buf[21],
            last_access_utc_offset: buf[22],
            create_utc_offset: buf[23],
            reserved2: [
                buf[24], buf[25], buf[26], buf[27], buf[28], buf[29], buf[30],
            ],
        })
    }
}

/// Stream extension entry (0xC0) — second entry in a file set.
#[derive(Debug, Clone)]
pub struct StreamEntry {
    /// Whether this stream has been deleted.
    pub deleted: bool,
    /// Flags (bit 0 = no FAT chain, bit 1 = allocation possible).
    pub flags: u8,
    /// Name length in characters (UTF-16).
    pub name_length: u8,
    /// Name hash (used for fast name comparison).
    pub name_hash: u16,
    /// Reserved (2 bytes).
    pub reserved: u16,
    /// Valid data length (logical file size).
    pub valid_data_length: u64,
    /// Reserved (4 bytes).
    pub reserved2: u32,
    /// First cluster (0 if empty file).
    pub first_cluster: u32,
    /// Data length (allocated size on disk, may be > valid_data_length).
    pub data_length: u64,
}

impl StreamEntry {
    /// Parse a 32-byte buffer as a stream extension entry.
    pub fn parse(buf: &[u8; 32]) -> CoreResult<Self> {
        let entry_type = EntryType::from_u8(buf[0]);
        if !matches!(entry_type, EntryType::StreamExtension) {
            return Err(CoreError::parse(
                "exFAT Stream entry",
                format!("expected 0xC0 (StreamExtension), got 0x{:02X}", buf[0]),
            ));
        }
        Ok(Self {
            deleted: !EntryType::is_in_use(buf[0]),
            flags: buf[1],
            name_length: buf[3],
            name_hash: u16::from_le_bytes([buf[4], buf[5]]),
            reserved: u16::from_le_bytes([buf[6], buf[7]]),
            valid_data_length: u64::from_le_bytes(buf[8..16].try_into().unwrap()),
            reserved2: u32::from_le_bytes(buf[16..20].try_into().unwrap()),
            first_cluster: u32::from_le_bytes(buf[20..24].try_into().unwrap()),
            data_length: u64::from_le_bytes(buf[24..32].try_into().unwrap()),
        })
    }

    /// Whether this file's data is contiguous (no FAT chain needed).
    pub fn is_contiguous(&self) -> bool {
        self.flags & 0x01 != 0
    }
}

/// File name entry (0xC1) — third+ entry in a file set. Each holds 15 UTF-16 chars.
#[derive(Debug, Clone)]
pub struct NameEntry {
    /// Whether this name entry has been deleted.
    pub deleted: bool,
    /// Flags (always 0).
    pub flags: u8,
    /// Name characters (15 UTF-16LE, padded with 0x0000).
    pub chars: [u16; 15],
}

impl NameEntry {
    /// Parse a 32-byte buffer as a file name entry.
    pub fn parse(buf: &[u8; 32]) -> CoreResult<Self> {
        let entry_type = EntryType::from_u8(buf[0]);
        if !matches!(entry_type, EntryType::FileName) {
            return Err(CoreError::parse(
                "exFAT Name entry",
                format!("expected 0xC1 (FileName), got 0x{:02X}", buf[0]),
            ));
        }
        let mut chars = [0u16; 15];
        // 15 UTF-16 chars = 30 bytes, starting at offset 2.
        for i in 0..15 {
            chars[i] = u16::from_le_bytes([buf[2 + i * 2], buf[2 + i * 2 + 1]]);
        }
        Ok(Self {
            deleted: !EntryType::is_in_use(buf[0]),
            flags: buf[1],
            chars,
        })
    }

    /// Decode this entry's chars to a String, stopping at the 0x0000 terminator.
    pub fn chars_string(&self) -> String {
        let mut s = String::new();
        for &c in &self.chars {
            if c == 0x0000 {
                break;
            }
            s.push(char::from_u32(c as u32).unwrap_or('\u{FFFD}'));
        }
        s
    }
}

/// Compute the exFAT name hash (used by stream entries for fast lookup).
///
/// Per the exFAT spec:
/// ```text
/// uint16_t hash = 0;
/// for each char in name (UTF-16):
///     hash = ((hash >> 1) + (hash << 15)) & 0xFFFF
///     hash = (hash + to_upper(char)) & 0xFFFF
/// ```
pub fn name_hash(name: &str, upcase_table: &crate::upcase::UpcaseTable) -> u16 {
    let mut hash: u16 = 0;
    for c in name.encode_utf16() {
        hash = hash.rotate_right(1).wrapping_add(upcase_table.to_upper(c));
    }
    hash
}

/// Convert an exFAT timestamp (32-bit) to Unix epoch seconds.
///
/// exFAT timestamps use the same FAT date+time format but combined into one u32:
/// - bits 31..25 = year - 1980 (7 bits)
/// - bits 24..21 = month (4 bits, 1..12)
/// - bits 20..16 = day (5 bits, 1..31)
/// - bits 15..11 = hours (5 bits, 0..23)
/// - bits 10..5 = minutes (6 bits, 0..59)
/// - bits 4..0 = seconds/2 (5 bits, 0..29)
pub fn exfat_timestamp_to_unix(ts: u32) -> i64 {
    if ts == 0 {
        return 0;
    }
    let year = 1980 + ((ts >> 25) & 0x7F) as i32;
    let month = (ts >> 21) & 0x0F;
    let day = (ts >> 16) & 0x1F;
    let hours = (ts >> 11) & 0x1F;
    let minutes = (ts >> 5) & 0x3F;
    let seconds = (ts & 0x1F) * 2;
    if month == 0 || month > 12 || day == 0 || day > 31 || hours > 23 || minutes > 59 {
        return 0;
    }
    let mut days_since_epoch: i64 = 0;
    for y in 1970..year {
        days_since_epoch += if is_leap_year(y) { 366 } else { 365 };
    }
    let month_days = if is_leap_year(year) {
        [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    } else {
        [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    };
    for &d in month_days.iter().take((month as usize).saturating_sub(1)) {
        days_since_epoch += d as i64;
    }
    days_since_epoch += (day - 1) as i64;
    let seconds_in_day: i64 = (hours as i64) * 3600 + (minutes as i64) * 60 + seconds as i64;
    days_since_epoch * 86400 + seconds_in_day
}

fn is_leap_year(y: i32) -> bool {
    (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn entry_type_decoding() {
        assert_eq!(EntryType::from_u8(0x00), EntryType::End);
        assert_eq!(EntryType::from_u8(0x81), EntryType::AllocationBitmap);
        assert_eq!(EntryType::from_u8(0x82), EntryType::UpcaseTable);
        assert_eq!(EntryType::from_u8(0x83), EntryType::VolumeLabel);
        assert_eq!(EntryType::from_u8(0x85), EntryType::File);
        assert_eq!(EntryType::from_u8(0xC0), EntryType::StreamExtension);
        assert_eq!(EntryType::from_u8(0xC1), EntryType::FileName);
        assert!(EntryType::is_in_use(0x85));
        assert!(!EntryType::is_in_use(0x05));
    }

    #[test]
    fn file_entry_parsing() {
        let mut buf = [0u8; 32];
        buf[0] = 0x85; // File entry, in use
        buf[1] = 2; // secondary_count
        buf[2..4].copy_from_slice(&0xABCDu16.to_le_bytes()); // checksum
        buf[4..6].copy_from_slice(&0x0010u16.to_le_bytes()); // directory attribute
        let entry = FileEntry::parse(&buf).unwrap();
        assert!(!entry.deleted);
        assert_eq!(entry.secondary_count, 2);
        assert_eq!(entry.set_checksum, 0xABCD);
        assert!(entry.attributes.directory);
    }

    #[test]
    fn stream_entry_parsing() {
        let mut buf = [0u8; 32];
        buf[0] = 0xC0; // Stream extension
        buf[1] = 0x01; // contiguous
        buf[3] = 5; // name length
        buf[4..6].copy_from_slice(&0x1234u16.to_le_bytes()); // name hash
        buf[8..16].copy_from_slice(&1024u64.to_le_bytes()); // valid data length
        buf[20..24].copy_from_slice(&5u32.to_le_bytes()); // first cluster
        buf[24..32].copy_from_slice(&2048u64.to_le_bytes()); // data length
        let entry = StreamEntry::parse(&buf).unwrap();
        assert!(entry.is_contiguous());
        assert_eq!(entry.name_length, 5);
        assert_eq!(entry.name_hash, 0x1234);
        assert_eq!(entry.valid_data_length, 1024);
        assert_eq!(entry.first_cluster, 5);
        assert_eq!(entry.data_length, 2048);
    }

    #[test]
    fn name_entry_parsing() {
        let mut buf = [0u8; 32];
        buf[0] = 0xC1; // File name
        buf[1] = 0; // flags
                    // Write "Hello" + nulls in first 5 chars (10 bytes at offset 2).
        let chars: [u16; 5] = [
            b'H' as u16,
            b'e' as u16,
            b'l' as u16,
            b'l' as u16,
            b'o' as u16,
        ];
        for (i, &c) in chars.iter().enumerate() {
            buf[2 + i * 2..2 + i * 2 + 2].copy_from_slice(&c.to_le_bytes());
        }
        let entry = NameEntry::parse(&buf).unwrap();
        assert_eq!(entry.chars_string(), "Hello");
    }

    #[test]
    fn rejects_wrong_entry_type() {
        let mut buf = [0u8; 32];
        buf[0] = 0x85; // File entry
                       // Try to parse as StreamExtension
        assert!(StreamEntry::parse(&buf).is_err());
    }

    #[test]
    fn exfat_timestamp_to_unix_test() {
        // 2024-01-15 12:30:00 UTC
        // year=44 (2024-1980), month=1, day=15, hours=12, minutes=30, seconds=0
        // Pack into u32:
        //   bits 31..25 = 44 = 0b0101100 << 25 = 0x58000000
        //   bits 24..21 = 1   = 0b0001 << 21 = 0x00200000
        //   bits 20..16 = 15  = 0b01111 << 16 = 0x000F0000
        //   bits 15..11 = 12  = 0b01100 << 11 = 0x00006000
        //   bits 10..5  = 30  = 0b011110 << 5 = 0x000003C0
        //   bits 4..0   = 0
        // total: 0x582F63C0
        let ts: u32 = 0x582F63C0;
        let unix = exfat_timestamp_to_unix(ts);
        // Expected: 2024-01-15 12:30:00 UTC = 1705321800
        assert_eq!(unix, 1705321800);
    }

    #[test]
    fn exfat_timestamp_zero() {
        assert_eq!(exfat_timestamp_to_unix(0), 0);
    }

    #[test]
    fn file_attributes_decoding() {
        let a = FileAttributes::from_u16(0x0010);
        assert!(a.directory);
        let a = FileAttributes::from_u16(0x0001);
        assert!(a.read_only);
        let a = FileAttributes::from_u16(0x0020);
        assert!(a.archive);
    }
}
