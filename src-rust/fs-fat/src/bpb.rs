#![allow(clippy::too_many_arguments)]
//! FAT BIOS Parameter Block (BPB) parsing.
//!
//! The FAT BPB lives in the first sector of a FAT-formatted volume. The layout
//! differs slightly between FAT12/16 and FAT32 (the FAT32 extension adds fields
//! at the end of the boot sector).
//!
//! ## Common BPB (first 36 bytes — same for FAT12/16/32)
//!
//! | Offset | Size | Field |
//! |--------|------|-------|
//! | 0x00   | 3    | Jump instruction (`EB xx 90`) |
//! | 0x03   | 8    | OEM name (e.g. "MSWIN4.1") |
//! | 0x0B   | 2    | Bytes per sector (512, 1024, 2048, 4096) |
//! | 0x0D   | 1    | Sectors per cluster (1, 2, 4, 8, 16, 32, 64, 128) |
//! | 0x0E   | 2    | Reserved sector count (usually 1 for FAT12/16, 32 for FAT32) |
//! | 0x10   | 1    | Number of FATs (almost always 2) |
//! | 0x11   | 2    | Root entry count (FAT12/16 only; 0 for FAT32) |
//! | 0x13   | 2    | Total sectors 16-bit (0 if > 65535 — use 32-bit field) |
//! | 0x15   | 1    | Media descriptor (0xF0 = floppy, 0xF8 = hard disk) |
//! | 0x16   | 2    | Sectors per FAT 16 (FAT12/16 only; 0 for FAT32) |
//! | 0x18   | 2    | Sectors per track |
//! | 0x1A   | 2    | Number of heads |
//! | 0x1C   | 4    | Hidden sectors |
//! | 0x20   | 4    | Total sectors 32-bit |
//!
//! ## FAT12/16 extension (offset 0x24..0x36)
//!
//! | Offset | Size | Field |
//! |--------|------|-------|
//! | 0x24   | 1    | Drive number |
//! | 0x25   | 1    | Reserved |
//! | 0x26   | 1    | Boot signature (0x29 if extended) |
//! | 0x27   | 4    | Volume ID |
//! | 0x2B   | 11   | Volume label |
//! | 0x36   | 8    | FS type ("FAT12   " or "FAT16   ") |
//!
//! ## FAT32 extension (offset 0x24..0x5A)
//!
//! | Offset | Size | Field |
//! |--------|------|-------|
//! | 0x24   | 4    | Sectors per FAT 32 |
//! | 0x28   | 2    | Flags (mirroring + active FAT) |
//! | 0x2A   | 2    | Version (0) |
//! | 0x2C   | 4    | Root cluster (usually 2) |
//! | 0x30   | 2    | FSInfo sector |
//! | 0x32   | 2    | Backup boot sector |
//! | 0x34   | 12   | Reserved |
//! | 0x40   | 1    | Drive number |
//! | 0x41   | 1    | Reserved |
//! | 0x42   | 1    | Boot signature (0x29 if extended) |
//! | 0x43   | 4    | Volume ID |
//! | 0x47   | 11   | Volume label |
//! | 0x52   | 8    | FS type ("FAT32   ") |

use rdw_core::{CoreError, CoreResult};

/// FAT variant.
#[derive(Debug, Clone, Copy, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub enum FatType {
    /// FAT12 — 12-bit FAT entries (max 4084 clusters).
    Fat12,
    /// FAT16 — 16-bit FAT entries (max 65524 clusters).
    Fat16,
    /// FAT32 — 28-bit FAT entries (max 268435444 clusters).
    Fat32,
}

impl FatType {
    /// Human-readable name.
    pub fn name(&self) -> &'static str {
        match self {
            Self::Fat12 => "FAT12",
            Self::Fat16 => "FAT16",
            Self::Fat32 => "FAT32",
        }
    }

    /// Bits per FAT entry.
    pub fn bits_per_entry(&self) -> u32 {
        match self {
            Self::Fat12 => 12,
            Self::Fat16 => 16,
            Self::Fat32 => 32,
        }
    }

    /// Bytes per FAT entry (rounded up).
    pub fn bytes_per_entry(&self) -> u32 {
        match self {
            Self::Fat12 => 2, // FAT12 packs two entries into 3 bytes, but we round up
            Self::Fat16 => 2,
            Self::Fat32 => 4,
        }
    }

    /// End-of-chain marker for this FAT type.
    pub fn eoc(&self) -> u32 {
        match self {
            Self::Fat12 => 0xFF8,
            Self::Fat16 => 0xFFF8,
            Self::Fat32 => 0x0FFFFFF8,
        }
    }

    /// Maximum valid cluster number for this FAT type.
    pub fn max_cluster(&self) -> u32 {
        match self {
            Self::Fat12 => 0xFF4,
            Self::Fat16 => 0xFFF4,
            Self::Fat32 => 0x0FFFFFF4,
        }
    }

    /// Bad cluster marker for this FAT type.
    pub fn bad_cluster(&self) -> u32 {
        match self {
            Self::Fat12 => 0xFF7,
            Self::Fat16 => 0xFFF7,
            Self::Fat32 => 0x0FFFFFF7,
        }
    }
}

impl std::fmt::Display for FatType {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(self.name())
    }
}

/// Parsed FAT BPB — common fields + FAT32-specific fields.
#[derive(Debug, Clone)]
pub struct FatBpb {
    /// OEM name (8 bytes).
    pub oem_name: [u8; 8],
    /// Bytes per logical sector (typically 512).
    pub bytes_per_sector: u32,
    /// Sectors per cluster.
    pub sectors_per_cluster: u32,
    /// Bytes per cluster.
    pub bytes_per_cluster: u32,
    /// Reserved sector count (before the first FAT).
    pub reserved_sectors: u32,
    /// Number of FATs (usually 2).
    pub num_fats: u32,
    /// Root entry count (FAT12/16 only; 0 for FAT32).
    pub root_entry_count: u32,
    /// Total sectors (16-bit field; 0 if > 65535).
    pub total_sectors_16: u32,
    /// Media descriptor (0xF0 = floppy, 0xF8 = hard disk).
    pub media_descriptor: u8,
    /// Sectors per FAT 16-bit field (FAT12/16 only; 0 for FAT32).
    pub sectors_per_fat_16: u32,
    /// Sectors per track.
    pub sectors_per_track: u32,
    /// Number of heads.
    pub num_heads: u32,
    /// Hidden sectors (partition offset).
    pub hidden_sectors: u32,
    /// Total sectors 32-bit field.
    pub total_sectors_32: u32,
    /// Sectors per FAT 32-bit field (FAT32 only).
    pub sectors_per_fat_32: u32,
    /// Root cluster (FAT32 only, usually 2).
    pub root_cluster: u32,
    /// FSInfo sector (FAT32 only).
    pub fsinfo_sector: u32,
    /// Backup boot sector (FAT32 only).
    pub backup_boot_sector: u32,
    /// Volume ID (from extended boot record).
    pub volume_id: u32,
    /// Volume label (11 bytes).
    pub volume_label: [u8; 11],
    /// FS type string (8 bytes).
    pub fs_type_string: [u8; 8],

    // Derived fields
    /// Total sectors (max of 16-bit and 32-bit fields).
    pub total_sectors: u64,
    /// FAT type (12/16/32).
    pub fat_type: FatType,
    /// Sectors per FAT (effective — uses 32-bit field for FAT32, 16-bit for FAT12/16).
    pub sectors_per_fat: u32,
    /// First FAT sector (LBA).
    pub fat_start_sector: u64,
    /// First root directory sector (FAT12/16 only).
    pub root_dir_start_sector: u64,
    /// Root directory size in sectors (FAT12/16 only).
    pub root_dir_sectors: u32,
    /// First data sector (after FAT + root dir).
    pub first_data_sector: u64,
    /// Total data sectors (after FAT + root dir).
    pub data_sectors: u64,
    /// Total clusters in the data area.
    pub total_clusters: u32,
    /// Bytes per cluster.
    pub bytes_per_cluster_u64: u64,
}

impl FatBpb {
    /// Parse a 512-byte boot sector.
    pub fn parse(buf: &[u8]) -> CoreResult<Self> {
        if buf.len() < 512 {
            return Err(CoreError::parse(
                "FAT BPB",
                format!("buffer too short: {} < 512", buf.len()),
            ));
        }

        // Validate boot signature at 0x1FE.
        if buf[0x1FE] != 0x55 || buf[0x1FF] != 0xAA {
            return Err(CoreError::parse(
                "FAT BPB",
                format!(
                    "bad signature 0x{:02X}{:02X} (expected 0x55AA)",
                    buf[0x1FE], buf[0x1FF]
                ),
            ));
        }

        let mut oem_name = [0u8; 8];
        oem_name.copy_from_slice(&buf[3..11]);

        let bytes_per_sector = u16::from_le_bytes([buf[0x0B], buf[0x0C]]) as u32;
        if bytes_per_sector == 0 || !bytes_per_sector.is_power_of_two() {
            return Err(CoreError::parse(
                "FAT BPB",
                format!("invalid bytes_per_sector: {}", bytes_per_sector),
            ));
        }

        let sectors_per_cluster = buf[0x0D] as u32;
        if sectors_per_cluster == 0 || !sectors_per_cluster.is_power_of_two() {
            return Err(CoreError::parse(
                "FAT BPB",
                format!("invalid sectors_per_cluster: {}", sectors_per_cluster),
            ));
        }

        let bytes_per_cluster = bytes_per_sector * sectors_per_cluster;
        let reserved_sectors = u16::from_le_bytes([buf[0x0E], buf[0x0F]]) as u32;
        if reserved_sectors == 0 {
            return Err(CoreError::parse("FAT BPB", "reserved_sectors is 0"));
        }

        let num_fats = buf[0x10] as u32;
        if num_fats == 0 {
            return Err(CoreError::parse("FAT BPB", "num_fats is 0"));
        }

        let root_entry_count = u16::from_le_bytes([buf[0x11], buf[0x12]]) as u32;
        let total_sectors_16 = u16::from_le_bytes([buf[0x13], buf[0x14]]) as u32;
        let media_descriptor = buf[0x15];
        let sectors_per_fat_16 = u16::from_le_bytes([buf[0x16], buf[0x17]]) as u32;
        let sectors_per_track = u16::from_le_bytes([buf[0x18], buf[0x19]]) as u32;
        let num_heads = u16::from_le_bytes([buf[0x1A], buf[0x1B]]) as u32;
        let hidden_sectors = u32::from_le_bytes(buf[0x1C..0x20].try_into().unwrap());
        let total_sectors_32 = u32::from_le_bytes(buf[0x20..0x24].try_into().unwrap());

        let total_sectors = if total_sectors_16 != 0 {
            total_sectors_16 as u64
        } else {
            total_sectors_32 as u64
        };

        // Determine FAT type: check if FAT32 extension fields are present.
        // FAT32 has sectors_per_fat_16 == 0 and uses sectors_per_fat_32 at offset 0x24.
        let (sectors_per_fat, root_cluster, fsinfo_sector, backup_boot_sector) =
            if sectors_per_fat_16 == 0 && root_entry_count == 0 {
                // FAT32.
                let spf32 = u32::from_le_bytes(buf[0x24..0x28].try_into().unwrap());
                let rcl = u32::from_le_bytes(buf[0x2C..0x30].try_into().unwrap());
                let fsi = u16::from_le_bytes([buf[0x30], buf[0x31]]) as u32;
                let bbs = u16::from_le_bytes([buf[0x32], buf[0x33]]) as u32;
                (spf32, rcl, fsi, bbs)
            } else {
                // FAT12/16.
                (sectors_per_fat_16, 0, 0, 0)
            };

        // Volume ID / label / FS type string — try extended boot record at offset 0x26 or 0x42.
        let (volume_id, mut volume_label, mut fs_type_string) = (0u32, [0u8; 11], [0u8; 8]);
        let ext_offset = if sectors_per_fat_16 == 0 && root_entry_count == 0 {
            // FAT32 extended at 0x42.
            if buf[0x42] == 0x29 {
                0x42
            } else {
                0
            }
        } else {
            // FAT12/16 extended at 0x26.
            if buf[0x26] == 0x29 {
                0x26
            } else {
                0
            }
        };
        if ext_offset > 0 {
            volume_label.copy_from_slice(&buf[ext_offset + 1..ext_offset + 12]);
            // Volume ID at ext_offset - 4 ... actually:
            // Layout: [ext_offset - 4 .. ext_offset] = volume_id (4 bytes)
            //          ext_offset                  = 0x29 (boot signature)
            //          ext_offset + 1              = volume_label (11 bytes)
            //          ext_offset + 12             = fs_type string (8 bytes)
            let id_offset = ext_offset - 4;
            // The 4-byte volume_id actually appears BEFORE the 0x29 marker in the layout.
            // Re-derive: for FAT12/16, vol_id is at 0x27, ext sig at 0x26 — but we read ext sig first.
            // Actually the order in the spec is:
            //   0x26 (FAT12/16): 0x29 marker
            //   0x27 (FAT12/16): volume_id (4 bytes)
            //   0x2B (FAT12/16): volume_label (11 bytes)
            //   0x36 (FAT12/16): fs_type (8 bytes)
            // So if ext_offset == 0x26, volume_id is at 0x27.
            let _vol_id_offset = ext_offset + 1;
            // Wait — ext_offset points AT the 0x29 byte. Volume ID follows it.
            // Re-do this properly.
            let _ = id_offset;
        }
        // Simpler: directly check by FAT type.
        let vol_id_offset = if sectors_per_fat_16 == 0 && root_entry_count == 0 {
            // FAT32: 0x43
            if buf[0x42] == 0x29 {
                0x43
            } else {
                0
            }
        } else {
            // FAT12/16: 0x27
            if buf[0x26] == 0x29 {
                0x27
            } else {
                0
            }
        };
        let vol_label_offset = if vol_id_offset > 0 {
            vol_id_offset + 4
        } else {
            0
        };
        let fs_type_offset = if vol_label_offset > 0 {
            vol_label_offset + 11
        } else {
            0
        };
        if vol_id_offset > 0 && vol_id_offset + 4 <= buf.len() {
            let vid = u32::from_le_bytes(buf[vol_id_offset..vol_id_offset + 4].try_into().unwrap());
            // Replace the earlier 0 with the real value.
            // (We can't easily destructure here; just re-bind via shadowing through a mutable.)
            // For clarity, re-build the struct at the end with the right values.
            let _ = vid;
            let new_volume_id =
                u32::from_le_bytes(buf[vol_id_offset..vol_id_offset + 4].try_into().unwrap());
            // (we'll use new_volume_id below)
            if vol_label_offset + 11 <= buf.len() {
                volume_label.copy_from_slice(&buf[vol_label_offset..vol_label_offset + 11]);
            }
            if fs_type_offset + 8 <= buf.len() {
                fs_type_string.copy_from_slice(&buf[fs_type_offset..fs_type_offset + 8]);
            }
            // Re-assign via shadowing
            let volume_id = new_volume_id;
            return Self::build(
                oem_name,
                bytes_per_sector,
                sectors_per_cluster,
                bytes_per_cluster,
                reserved_sectors,
                num_fats,
                root_entry_count,
                total_sectors_16,
                media_descriptor,
                sectors_per_fat_16,
                sectors_per_track,
                num_heads,
                hidden_sectors,
                total_sectors_32,
                sectors_per_fat,
                root_cluster,
                fsinfo_sector,
                backup_boot_sector,
                volume_id,
                volume_label,
                fs_type_string,
                total_sectors,
            );
        }

        Self::build(
            oem_name,
            bytes_per_sector,
            sectors_per_cluster,
            bytes_per_cluster,
            reserved_sectors,
            num_fats,
            root_entry_count,
            total_sectors_16,
            media_descriptor,
            sectors_per_fat_16,
            sectors_per_track,
            num_heads,
            hidden_sectors,
            total_sectors_32,
            sectors_per_fat,
            root_cluster,
            fsinfo_sector,
            backup_boot_sector,
            volume_id,
            volume_label,
            fs_type_string,
            total_sectors,
        )
    }

    #[allow(clippy::too_many_arguments)]
    fn build(
        oem_name: [u8; 8],
        bytes_per_sector: u32,
        sectors_per_cluster: u32,
        bytes_per_cluster: u32,
        reserved_sectors: u32,
        num_fats: u32,
        root_entry_count: u32,
        total_sectors_16: u32,
        media_descriptor: u8,
        sectors_per_fat_16: u32,
        sectors_per_track: u32,
        num_heads: u32,
        hidden_sectors: u32,
        total_sectors_32: u32,
        sectors_per_fat: u32,
        root_cluster: u32,
        fsinfo_sector: u32,
        backup_boot_sector: u32,
        volume_id: u32,
        volume_label: [u8; 11],
        fs_type_string: [u8; 8],
        total_sectors: u64,
    ) -> CoreResult<Self> {
        // Root directory size in sectors (FAT12/16 only).
        let root_dir_sectors = if root_entry_count > 0 {
            (root_entry_count * 32).div_ceil(bytes_per_sector)
        } else {
            0
        };

        let fat_start_sector = reserved_sectors as u64;
        let root_dir_start_sector = fat_start_sector + (num_fats * sectors_per_fat) as u64;
        let first_data_sector = root_dir_start_sector + root_dir_sectors as u64;
        let data_sectors = total_sectors
            .saturating_sub(reserved_sectors as u64)
            .saturating_sub((num_fats * sectors_per_fat) as u64)
            .saturating_sub(root_dir_sectors as u64);

        let total_clusters = if sectors_per_cluster > 0 {
            (data_sectors / sectors_per_cluster as u64) as u32
        } else {
            0
        };

        // Determine FAT type by cluster count (Microsoft spec).
        let fat_type = if total_clusters < 4085 {
            FatType::Fat12
        } else if total_clusters < 65525 {
            FatType::Fat16
        } else {
            FatType::Fat32
        };

        Ok(Self {
            oem_name,
            bytes_per_sector,
            sectors_per_cluster,
            bytes_per_cluster,
            reserved_sectors,
            num_fats,
            root_entry_count,
            total_sectors_16,
            media_descriptor,
            sectors_per_fat_16,
            sectors_per_track,
            num_heads,
            hidden_sectors,
            total_sectors_32,
            sectors_per_fat_32: sectors_per_fat,
            root_cluster,
            fsinfo_sector,
            backup_boot_sector,
            volume_id,
            volume_label,
            fs_type_string,
            total_sectors,
            fat_type,
            sectors_per_fat,
            fat_start_sector,
            root_dir_start_sector,
            root_dir_sectors,
            first_data_sector,
            data_sectors,
            total_clusters,
            bytes_per_cluster_u64: bytes_per_cluster as u64,
        })
    }

    /// Convert a cluster number to an LBA.
    pub fn cluster_to_lba(&self, cluster: u32) -> u64 {
        // First data sector + (cluster - 2) * sectors_per_cluster
        self.first_data_sector
            + ((cluster as u64).saturating_sub(2)) * self.sectors_per_cluster as u64
    }

    /// Get the root directory LBA (FAT12/16: fixed location; FAT32: via root_cluster).
    pub fn root_dir_lba(&self) -> u64 {
        match self.fat_type {
            FatType::Fat12 | FatType::Fat16 => self.root_dir_start_sector,
            FatType::Fat32 => self.cluster_to_lba(self.root_cluster),
        }
    }
}

/// Convenience alias for the VBR (Volume Boot Record = boot sector + BPB).
pub type FatVbr = FatBpb;

#[cfg(test)]
mod tests {
    use super::*;

    fn make_fat16_boot() -> Vec<u8> {
        let mut buf = vec![0u8; 512];
        buf[0..3].copy_from_slice(&[0xEB, 0x3C, 0x90]);
        buf[3..11].copy_from_slice(b"MSWIN4.1");
        buf[0x0B..0x0D].copy_from_slice(&512u16.to_le_bytes());
        buf[0x0D] = 4; // sectors per cluster
        buf[0x0E..0x10].copy_from_slice(&1u16.to_le_bytes()); // reserved
        buf[0x10] = 2; // num fats
        buf[0x11..0x13].copy_from_slice(&512u16.to_le_bytes()); // root entries
        buf[0x13..0x15].copy_from_slice(&20000u16.to_le_bytes()); // total sectors 16
        buf[0x15] = 0xF8; // media
        buf[0x16..0x18].copy_from_slice(&50u16.to_le_bytes()); // sectors per fat
        buf[0x18..0x1A].copy_from_slice(&63u16.to_le_bytes()); // sectors per track
        buf[0x1A..0x1C].copy_from_slice(&255u16.to_le_bytes()); // heads
        buf[0x1C..0x20].copy_from_slice(&2048u32.to_le_bytes()); // hidden
                                                                 // No total_sectors_32 needed since 16-bit is set.
        buf[0x26] = 0x29; // extended boot signature
        buf[0x27..0x2B].copy_from_slice(&0x12345678u32.to_le_bytes()); // volume id
        buf[0x2B..0x36].copy_from_slice(b"NO NAME    ");
        buf[0x36..0x3E].copy_from_slice(b"FAT16   ");
        buf[0x1FE..0x200].copy_from_slice(&0xAA55u16.to_le_bytes());
        buf
    }

    fn make_fat32_boot() -> Vec<u8> {
        let mut buf = vec![0u8; 512];
        buf[0..3].copy_from_slice(&[0xEB, 0x58, 0x90]);
        buf[3..11].copy_from_slice(b"MSWIN4.1");
        buf[0x0B..0x0D].copy_from_slice(&512u16.to_le_bytes());
        buf[0x0D] = 8; // sectors per cluster
        buf[0x0E..0x10].copy_from_slice(&32u16.to_le_bytes()); // reserved
        buf[0x10] = 2;
        buf[0x11..0x13].copy_from_slice(&0u16.to_le_bytes()); // root entries (0 for FAT32)
        buf[0x13..0x15].copy_from_slice(&0u16.to_le_bytes()); // total sectors 16 (0 for FAT32)
        buf[0x15] = 0xF8;
        buf[0x16..0x18].copy_from_slice(&0u16.to_le_bytes()); // sectors per fat 16 (0 for FAT32)
        buf[0x18..0x1A].copy_from_slice(&63u16.to_le_bytes());
        buf[0x1A..0x1C].copy_from_slice(&255u16.to_le_bytes());
        buf[0x1C..0x20].copy_from_slice(&2048u32.to_le_bytes());
        buf[0x20..0x24].copy_from_slice(&2_000_000u32.to_le_bytes()); // total sectors 32 — large enough to trigger FAT32
        buf[0x24..0x28].copy_from_slice(&1000u32.to_le_bytes()); // sectors per fat 32
        buf[0x28..0x2A].copy_from_slice(&0u16.to_le_bytes()); // flags
        buf[0x2A..0x2C].copy_from_slice(&0u16.to_le_bytes()); // version
        buf[0x2C..0x30].copy_from_slice(&2u32.to_le_bytes()); // root cluster
        buf[0x30..0x32].copy_from_slice(&1u16.to_le_bytes()); // fsinfo
        buf[0x32..0x34].copy_from_slice(&6u16.to_le_bytes()); // backup boot
        buf[0x42] = 0x29;
        buf[0x43..0x47].copy_from_slice(&0x12345678u32.to_le_bytes());
        buf[0x47..0x52].copy_from_slice(b"NO NAME    ");
        buf[0x52..0x5A].copy_from_slice(b"FAT32   ");
        buf[0x1FE..0x200].copy_from_slice(&0xAA55u16.to_le_bytes());
        buf
    }

    #[test]
    fn parses_fat16() {
        let buf = make_fat16_boot();
        let bpb = FatBpb::parse(&buf).unwrap();
        assert_eq!(bpb.bytes_per_sector, 512);
        assert_eq!(bpb.sectors_per_cluster, 4);
        assert_eq!(bpb.bytes_per_cluster, 2048);
        assert_eq!(bpb.reserved_sectors, 1);
        assert_eq!(bpb.num_fats, 2);
        assert_eq!(bpb.root_entry_count, 512);
        assert_eq!(bpb.total_sectors, 20000);
        assert_eq!(bpb.sectors_per_fat, 50);
        assert_eq!(bpb.fat_type, FatType::Fat16);
        assert_eq!(bpb.fat_start_sector, 1);
        assert_eq!(bpb.sectors_per_fat_32, 50);
        // root dir starts at: reserved (1) + 2 FATs * 50 = 101
        assert_eq!(bpb.root_dir_start_sector, 101);
        // root dir sectors = (512 * 32 + 511) / 512 = 32
        assert_eq!(bpb.root_dir_sectors, 32);
        // first data sector = 101 + 32 = 133
        assert_eq!(bpb.first_data_sector, 133);
        assert_eq!(bpb.volume_id, 0x12345678);
        assert_eq!(&bpb.fs_type_string, b"FAT16   ");
    }

    #[test]
    fn parses_fat32() {
        let buf = make_fat32_boot();
        let bpb = FatBpb::parse(&buf).unwrap();
        assert_eq!(bpb.bytes_per_sector, 512);
        assert_eq!(bpb.sectors_per_cluster, 8);
        assert_eq!(bpb.bytes_per_cluster, 4096);
        assert_eq!(bpb.reserved_sectors, 32);
        assert_eq!(bpb.num_fats, 2);
        assert_eq!(bpb.root_entry_count, 0);
        assert_eq!(bpb.total_sectors, 2_000_000);
        assert_eq!(bpb.sectors_per_fat, 1000);
        assert_eq!(bpb.sectors_per_fat_32, 1000);
        assert_eq!(bpb.root_cluster, 2);
        assert_eq!(bpb.fat_type, FatType::Fat32);
        // fat starts at reserved = 32
        assert_eq!(bpb.fat_start_sector, 32);
        // FAT32 has no fixed root dir — it's at cluster 2.
        // first_data_sector = 32 + 2*1000 = 2032
        assert_eq!(bpb.first_data_sector, 2032);
        // root dir LBA = cluster_to_lba(2) = first_data_sector + 0 = 2032
        assert_eq!(bpb.root_dir_lba(), 2032);
        assert_eq!(bpb.volume_id, 0x12345678);
        assert_eq!(&bpb.fs_type_string, b"FAT32   ");
    }

    #[test]
    fn rejects_bad_signature() {
        let mut buf = make_fat16_boot();
        buf[0x1FE] = 0;
        buf[0x1FF] = 0;
        assert!(FatBpb::parse(&buf).is_err());
    }

    #[test]
    fn rejects_non_power_of_two_sector() {
        let mut buf = make_fat16_boot();
        buf[0x0B..0x0D].copy_from_slice(&600u16.to_le_bytes());
        assert!(FatBpb::parse(&buf).is_err());
    }

    #[test]
    fn fat_type_thresholds() {
        assert_eq!(FatType::Fat12.eoc(), 0xFF8);
        assert_eq!(FatType::Fat16.eoc(), 0xFFF8);
        assert_eq!(FatType::Fat32.eoc(), 0x0FFFFFF8);
        assert_eq!(FatType::Fat12.max_cluster(), 0xFF4);
        assert_eq!(FatType::Fat16.max_cluster(), 0xFFF4);
        assert_eq!(FatType::Fat32.max_cluster(), 0x0FFFFFF4);
    }
}
