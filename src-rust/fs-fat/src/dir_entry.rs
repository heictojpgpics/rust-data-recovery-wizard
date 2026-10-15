//! FAT directory entry parsing.
//!
//! FAT directories are arrays of 32-byte entries. There are two kinds:
//!
//! 1. **Short File Name (SFN) entries** — the original DOS format. 8.3 filename,
//!    attributes, cluster, size, timestamps.
//! 2. **Long File Name (LFN) entries** — Windows 95 extension. Each LFN entry
//!    holds 13 UTF-16 characters of the long name; multiple LFN entries precede
//!    the SFN entry they describe (in reverse order).
//!
//! ## SFN entry layout (32 bytes)
//!
//! | Offset | Size | Field |
//! |--------|------|-------|
//! | 0x00   | 11   | 8.3 filename (8 name + 3 ext, space-padded) |
//! | 0x0B   | 1    | Attributes |
//! | 0x0C   | 1    | Reserved (NT case info) |
//! | 0x0D   | 1    | Creation time (tenths of a second) |
//! | 0x0E   | 2    | Creation time |
//! | 0x10   | 2    | Creation date |
//! | 0x12   | 2    | Last access date |
//! | 0x14   | 2    | First cluster high (FAT32 only) |
//! | 0x16   | 2    | Last write time |
//! | 0x18   | 2    | Last write date |
//! | 0x1A   | 2    | First cluster low |
//! | 0x1C   | 4    | File size in bytes |
//!
//! ## LFN entry layout (32 bytes)
//!
//! | Offset | Size | Field |
//! |--------|------|-------|
//! | 0x00   | 1    | Sequence number (low 5 bits = position 1..20, 0x40 = last LFN entry) |
//! | 0x01   | 10   | Name chars 1-5 (UTF-16LE) |
//! | 0x0B   | 1    | Attribute (always 0x0F) |
//! | 0x0C   | 1    | Type (always 0) |
//! | 0x0D   | 1    | Checksum of SFN name |
//! | 0x0E   | 12   | Name chars 6-11 (UTF-16LE) |
//! | 0x1A   | 2    | First cluster (always 0) |
//! | 0x1C   | 4    | Name chars 12-13 (UTF-16LE) |

use crate::{DELETED_ENTRY_MARKER, END_OF_DIRECTORY, LFN_ATTR};
use rdw_core::{CoreError, CoreResult};

/// Directory entry attributes (byte at offset 0x0B).
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct DirEntryAttr {
    /// Read-only.
    pub read_only: bool,
    /// Hidden.
    pub hidden: bool,
    /// System file.
    pub system: bool,
    /// Volume label (only valid in root directory).
    pub volume_id: bool,
    /// Directory (not a regular file).
    pub directory: bool,
    /// Archive bit (backup-aware).
    pub archive: bool,
}

impl DirEntryAttr {
    /// Decode from a raw byte.
    pub fn from_u8(raw: u8) -> Self {
        Self {
            read_only: raw & 0x01 != 0,
            hidden: raw & 0x02 != 0,
            system: raw & 0x04 != 0,
            volume_id: raw & 0x08 != 0,
            directory: raw & 0x10 != 0,
            archive: raw & 0x20 != 0,
        }
    }

    /// Encode to a raw byte.
    pub fn to_u8(self) -> u8 {
        let mut v = 0u8;
        if self.read_only {
            v |= 0x01;
        }
        if self.hidden {
            v |= 0x02;
        }
        if self.system {
            v |= 0x04;
        }
        if self.volume_id {
            v |= 0x08;
        }
        if self.directory {
            v |= 0x10;
        }
        if self.archive {
            v |= 0x20;
        }
        v
    }

    /// Whether this is an LFN entry (all four low bits set).
    pub fn is_lfn(raw: u8) -> bool {
        raw == LFN_ATTR
    }
}

/// Short (8.3) filename, stored as 11 bytes of space-padded ASCII.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ShortName(pub [u8; 11]);

impl ShortName {
    /// Decode the 11-byte raw form to a `name.ext` string.
    pub fn to_string_lossy(&self) -> String {
        let name_part = &self.0[0..8];
        let ext_part = &self.0[8..11];
        let name = name_part
            .iter()
            .take_while(|&&c| c != b' ')
            .cloned()
            .collect::<Vec<u8>>();
        let ext = ext_part
            .iter()
            .take_while(|&&c| c != b' ')
            .cloned()
            .collect::<Vec<u8>>();
        if ext.is_empty() {
            String::from_utf8_lossy(&name).into_owned()
        } else {
            format!(
                "{}.{}",
                String::from_utf8_lossy(&name),
                String::from_utf8_lossy(&ext)
            )
        }
    }
}

impl std::fmt::Display for ShortName {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(&self.to_string_lossy())
    }
}

/// A parsed FAT directory entry (SFN form).
#[derive(Debug, Clone)]
pub struct DirEntry {
    /// Short (8.3) name raw bytes.
    pub short_name_raw: [u8; 11],
    /// Decoded short name string.
    pub short_name: String,
    /// Attributes.
    pub attributes: DirEntryAttr,
    /// NT case info (lowercase name / ext).
    pub nt_case: u8,
    /// Creation time (tenths of a second).
    pub creation_time_tenths: u8,
    /// Creation time (FAT time format).
    pub creation_time: u16,
    /// Creation date (FAT date format).
    pub creation_date: u16,
    /// Last access date.
    pub access_date: u16,
    /// First cluster high (FAT32 only).
    pub first_cluster_high: u16,
    /// Last write time.
    pub write_time: u16,
    /// Last write date.
    pub write_date: u16,
    /// First cluster low.
    pub first_cluster_low: u16,
    /// File size in bytes.
    pub file_size: u32,
    /// Whether this entry is deleted (first byte = 0xE5).
    pub deleted: bool,
}

impl DirEntry {
    /// Parse a 32-byte directory entry. Returns `None` for end-of-directory (0x00).
    /// Returns `Ok(Some(Entry))` for valid entries (including deleted ones).
    /// Returns `Ok(None)` for end-of-directory.
    pub fn parse(buf: &[u8; 32]) -> CoreResult<Option<Self>> {
        if buf[0] == END_OF_DIRECTORY {
            return Ok(None);
        }
        let deleted = buf[0] == DELETED_ENTRY_MARKER;
        let mut short_name_raw = [0u8; 11];
        short_name_raw.copy_from_slice(&buf[0..11]);
        // For deleted entries, the first byte is 0xE5; replace with '?' for display.
        let mut display_name = short_name_raw;
        if deleted {
            display_name[0] = b'_';
        }
        let short_name = ShortName(display_name).to_string_lossy();
        let attributes = DirEntryAttr::from_u8(buf[11]);
        Ok(Some(Self {
            short_name_raw,
            short_name,
            attributes,
            nt_case: buf[12],
            creation_time_tenths: buf[13],
            creation_time: u16::from_le_bytes([buf[14], buf[15]]),
            creation_date: u16::from_le_bytes([buf[16], buf[17]]),
            access_date: u16::from_le_bytes([buf[18], buf[19]]),
            first_cluster_high: u16::from_le_bytes([buf[20], buf[21]]),
            write_time: u16::from_le_bytes([buf[22], buf[23]]),
            write_date: u16::from_le_bytes([buf[24], buf[25]]),
            first_cluster_low: u16::from_le_bytes([buf[26], buf[27]]),
            file_size: u32::from_le_bytes(buf[28..32].try_into().unwrap()),
            deleted,
        }))
    }

    /// Get the first cluster number (combining high and low 16-bit parts).
    pub fn first_cluster(&self) -> u32 {
        ((self.first_cluster_high as u32) << 16) | (self.first_cluster_low as u32)
    }

    /// Whether this is an LFN entry (caller should use [`LfnDirEntry::parse`] instead).
    pub fn is_lfn_raw(buf: &[u8; 32]) -> bool {
        DirEntryAttr::is_lfn(buf[11])
    }

    /// Convert FAT date (16-bit) + time (16-bit) to Unix epoch seconds.
    ///
    /// FAT date format: bits 15..9 = year-1980, 8..5 = month (1..12), 4..0 = day (1..31).
    /// FAT time format: bits 15..11 = hours (0..23), 10..5 = minutes (0..59), 4..0 = seconds/2 (0..29).
    pub fn fat_to_unix(date: u16, time: u16) -> i64 {
        if date == 0 || time == 0 {
            return 0;
        }
        let year = 1980 + ((date >> 9) & 0x7F) as i32;
        let month = ((date >> 5) & 0x0F) as u32;
        let day = (date & 0x1F) as u32;
        let hours = ((time >> 11) & 0x1F) as u32;
        let minutes = ((time >> 5) & 0x3F) as u32;
        let seconds = ((time & 0x1F) as u32) * 2;
        // Compute days since 1970-01-01.
        if month == 0 || month > 12 || day == 0 || day > 31 || hours > 23 || minutes > 59 {
            return 0;
        }
        // Simplified: just use time::Date if available, or fall back to manual computation.
        // For now, use a simple approximation: count days from 1970.
        let mut days_since_epoch: i64 = 0;
        for y in 1970..year {
            days_since_epoch += if is_leap_year(y) { 366 } else { 365 };
        }
        let month_days = if is_leap_year(year) {
            [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        } else {
            [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
        };
        for &days in month_days.iter().take((month as usize).saturating_sub(1)) {
            days_since_epoch += days as i64;
        }
        days_since_epoch += (day - 1) as i64;
        let seconds_in_day: i64 = (hours as i64) * 3600 + (minutes as i64) * 60 + seconds as i64;
        days_since_epoch * 86400 + seconds_in_day
    }
}

fn is_leap_year(y: i32) -> bool {
    (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)
}

/// A Long File Name (LFN) directory entry.
#[derive(Debug, Clone)]
pub struct LfnDirEntry {
    /// Sequence number (low 5 bits = position 1..20, bit 0x40 = last entry).
    pub sequence: u8,
    /// Whether this is the last LFN entry (bit 0x40 set).
    pub is_last: bool,
    /// Checksum of the SFN name (used to validate LFN-SFN pairing).
    pub checksum: u8,
    /// The 13 UTF-16 characters stored in this entry.
    pub chars: [u16; 13],
}

impl LfnDirEntry {
    /// Parse a 32-byte LFN entry. Returns `Err` if not an LFN entry.
    pub fn parse(buf: &[u8; 32]) -> CoreResult<Self> {
        if !DirEntryAttr::is_lfn(buf[11]) {
            return Err(CoreError::parse(
                "LFN entry",
                "not an LFN entry (attr != 0x0F)",
            ));
        }
        let sequence = buf[0];
        let is_last = sequence & 0x40 != 0;
        let checksum = buf[13];
        let mut chars = [0u16; 13];
        // Chars 1-5: bytes 1..11 (5 * 2 bytes)
        for i in 0..5 {
            chars[i] = u16::from_le_bytes([buf[1 + i * 2], buf[1 + i * 2 + 1]]);
        }
        // Chars 6-11: bytes 14..26 (6 * 2 bytes)
        for i in 0..6 {
            chars[5 + i] = u16::from_le_bytes([buf[14 + i * 2], buf[14 + i * 2 + 1]]);
        }
        // Chars 12-13: bytes 28..32 (2 * 2 bytes)
        chars[11] = u16::from_le_bytes([buf[28], buf[29]]);
        chars[12] = u16::from_le_bytes([buf[30], buf[31]]);
        Ok(Self {
            sequence,
            is_last,
            checksum,
            chars,
        })
    }

    /// Sequence number with the 0x40 flag masked off.
    pub fn sequence_number(&self) -> u8 {
        self.sequence & 0x1F
    }

    /// Decode this entry's 13 chars to a String, stopping at the 0x0000 terminator.
    pub fn chars_string(&self) -> String {
        let mut s = String::new();
        for &c in &self.chars {
            if c == 0x0000 || c == 0xFFFF {
                break;
            }
            s.push(char::from_u32(c as u32).unwrap_or('\u{FFFD}'));
        }
        s
    }

    /// Compute the LFN checksum for a given SFN name (11 bytes).
    ///
    /// Per Microsoft FAT spec:
    /// ```text
    /// uint8_t sum = 0;
    /// for (int i = 0; i < 11; i++) {
    ///     sum = ((sum & 1) << 7) + (sum >> 1) + name[i];
    /// }
    /// ```
    pub fn checksum(sfn: &[u8; 11]) -> u8 {
        let mut sum: u8 = 0;
        for &b in sfn {
            sum = ((sum & 1) << 7).wrapping_add(sum >> 1).wrapping_add(b);
        }
        sum
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn attr_decoding() {
        let a = DirEntryAttr::from_u8(0x00);
        assert!(!a.read_only && !a.hidden && !a.directory);
        let a = DirEntryAttr::from_u8(0x01);
        assert!(a.read_only);
        let a = DirEntryAttr::from_u8(0x10);
        assert!(a.directory);
        let a = DirEntryAttr::from_u8(0x0F);
        assert!(DirEntryAttr::is_lfn(0x0F));
    }

    #[test]
    fn sfn_decoding() {
        let mut raw = [0u8; 11];
        raw[0..8].copy_from_slice(b"FILENAME");
        raw[8..11].copy_from_slice(b"TXT");
        let s = ShortName(raw);
        assert_eq!(s.to_string_lossy(), "FILENAME.TXT");

        let mut raw = [0u8; 11];
        raw[0..3].copy_from_slice(b"FOO");
        raw[3..8].copy_from_slice(b"     ");
        raw[8..11].copy_from_slice(b"   ");
        let s = ShortName(raw);
        assert_eq!(s.to_string_lossy(), "FOO");
    }

    #[test]
    fn dir_entry_parsing() {
        let mut buf = [0u8; 32];
        buf[0..11].copy_from_slice(b"HELLO   TXT");
        buf[11] = 0x20; // archive
        buf[14..16].copy_from_slice(&0x8000u16.to_le_bytes()); // creation time
        buf[16..18].copy_from_slice(&0x5421u16.to_le_bytes()); // creation date
        buf[26..28].copy_from_slice(&5u16.to_le_bytes()); // first cluster low
        buf[28..32].copy_from_slice(&1024u32.to_le_bytes()); // file size
        let entry = DirEntry::parse(&buf).unwrap().unwrap();
        assert_eq!(entry.short_name, "HELLO.TXT");
        assert!(!entry.deleted);
        assert_eq!(entry.first_cluster(), 5);
        assert_eq!(entry.file_size, 1024);
    }

    #[test]
    fn deleted_entry() {
        let mut buf = [0u8; 32];
        buf[0] = 0xE5; // deleted marker
        buf[0x0B] = 0x20;
        let entry = DirEntry::parse(&buf).unwrap().unwrap();
        assert!(entry.deleted);
    }

    #[test]
    fn end_of_directory() {
        let mut buf = [0u8; 32];
        buf[0] = 0x00;
        assert!(DirEntry::parse(&buf).unwrap().is_none());
    }

    #[test]
    fn lfn_entry_parsing() {
        let mut buf = [0u8; 32];
        buf[0] = 0x42; // sequence: 2, with 0x40 (last) flag
        buf[11] = 0x0F; // LFN attribute
        buf[13] = 0x5A; // checksum
                        // Write "Hello" + nulls in the first 5 chars (bytes 1..11).
        let chars: [u16; 5] = [
            b'H' as u16,
            b'e' as u16,
            b'l' as u16,
            b'l' as u16,
            b'o' as u16,
        ];
        for (i, &c) in chars.iter().enumerate() {
            buf[1 + i * 2..1 + i * 2 + 2].copy_from_slice(&c.to_le_bytes());
        }
        let lfn = LfnDirEntry::parse(&buf).unwrap();
        assert!(lfn.is_last);
        assert_eq!(lfn.sequence_number(), 2);
        assert_eq!(lfn.checksum, 0x5A);
        assert_eq!(lfn.chars_string(), "Hello");
    }

    #[test]
    fn lfn_checksum() {
        // Test vector: 'FILENAMEEXT' has 11 bytes — the algorithm result is 0xF6.
        let mut sfn = [0u8; 11];
        sfn[0..11].copy_from_slice(b"FILENAMEEXT");
        assert_eq!(LfnDirEntry::checksum(&sfn), 0xF6);
    }

    #[test]
    fn fat_to_unix_conversion() {
        // 2024-01-15 12:30:00 UTC
        // FAT date: bits 15..9 = (2024-1980) = 44 = 0b0101100 (7 bits), shift left 9 = 0x5800
        //           bits 8..5 = 1 (Jan), shift left 5 = 0x20
        //           bits 4..0 = 15 = 0xF
        // total: 0x5800 | 0x20 | 0xF = 0x582F
        let date = 0x582Fu16;
        // FAT time: bits 15..11 = 12 = 0b01100, shift left 11 = 0x6000
        //          bits 10..5 = 30, shift left 5 = 0x3C0
        //          bits 4..0 = 0
        // total: 0x6000 | 0x3C0 = 0x63C0
        let time = 0x63C0u16;
        let unix = DirEntry::fat_to_unix(date, time);
        // Expected: 2024-01-15 12:30:00 UTC = 1705321800
        assert_eq!(unix, 1705321800);
    }
}
