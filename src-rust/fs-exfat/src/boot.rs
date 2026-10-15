//! exFAT boot sector parsing.
//!
//! Unlike FAT12/16/32, exFAT's boot sector contains the volume geometry
//! directly (rather than inferring it from BPB fields + cluster counts).
//!
//! ## exFAT main boot sector layout (512 bytes)
//!
//! | Offset | Size | Field |
//! |--------|------|-------|
//! | 0x00   | 3    | Jump (`EB 76 90`) |
//! | 0x03   | 8    | File system name ("EXFAT   ") |
//! | 0x0B   | 1    | Must be zero (PB zero) |
//! | 0x0C   | 2    | Partition offset (sectors) — usually 0 |
//! | 0x0E   | 2    | Volume length (sectors, low 32 bits) |
//! | 0x10   | 4    | Fat offset (sectors) |
//! | 0x14   | 4    | Fat length (sectors) |
//! | 0x18   | 4    | Cluster heap offset (sectors) |
//! | 0x1C   | 4    | Cluster count |
//! | 0x20   | 4    | First cluster of root directory |
//! | 0x24   | 4    | Volume serial number |
//! | 0x28   | 2    | File system revision (16.16 = major.minor) |
//! | 0x2A   | 2    | Volume flags |
//! | 0x2C   | 1    | Bytes per sector shift (log2 of bytes per sector) |
//! | 0x2D   | 1    | Sectors per cluster shift (log2 of sectors per cluster) |
//! | 0x2E   | 1    | Number of FATs (1 or 2 — 2 only with TexFAT) |
//! | 0x2F   | 1    | Drive select (0x80 = hard disk) |
//! | 0x30   | 1    | Percent in use (0..=100, 0xFF = unknown) |
//! | 0x31   | 7    | Reserved |
//! | 0x38   | ...  | Boot code |
//! | 0x1FE  | 2    | Boot signature (0x55AA) |

use rdw_core::{CoreError, CoreResult};

/// exFAT volume flags.
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub struct VolumeFlags {
    /// Active FAT (0 = first, 1 = second). Only meaningful when num_fats=2.
    pub active_fat: u8,
    /// Volume dirty flag (1 = not cleanly unmounted).
    pub dirty: bool,
    /// Media failure flag (1 = I/O errors detected).
    pub media_failure: bool,
    /// TexFAT (twin FAT) active.
    pub texfat: bool,
}

impl VolumeFlags {
    /// Decode from raw u16.
    pub fn from_u16(raw: u16) -> Self {
        Self {
            active_fat: u8::from(raw & 0x0001 != 0),
            dirty: raw & 0x0002 != 0,
            media_failure: raw & 0x0004 != 0,
            texfat: raw & 0x0008 != 0,
        }
    }
}

/// Parsed exFAT boot sector.
#[derive(Debug, Clone)]
pub struct ExFatBoot {
    /// Filesystem name (should be "EXFAT   ").
    pub fs_name: [u8; 8],
    /// Partition offset in sectors (usually 0).
    pub partition_offset: u64,
    /// Volume length in sectors.
    pub volume_length: u64,
    /// FAT offset in sectors.
    pub fat_offset: u64,
    /// FAT length in sectors.
    pub fat_length: u64,
    /// Cluster heap offset in sectors (start of data region).
    pub cluster_heap_offset: u64,
    /// Cluster count.
    pub cluster_count: u32,
    /// First cluster of root directory.
    pub root_dir_cluster: u32,
    /// Volume serial number.
    pub volume_serial: u32,
    /// Filesystem revision (major.minor — e.g. 1.0).
    pub fs_revision: u16,
    /// Volume flags.
    pub volume_flags: VolumeFlags,
    /// Bytes per sector (log2).
    pub bytes_per_sector_shift: u8,
    /// Sectors per cluster (log2).
    pub sectors_per_cluster_shift: u8,
    /// Number of FATs (1 or 2).
    pub num_fats: u8,
    /// Drive select byte (0x80 = hard disk).
    pub drive_select: u8,
    /// Percent in use (0..=100 or 0xFF for unknown).
    pub percent_in_use: u8,

    // Derived fields.
    /// Bytes per sector (e.g. 512, 4096).
    pub bytes_per_sector: u32,
    /// Sectors per cluster.
    pub sectors_per_cluster: u32,
    /// Bytes per cluster.
    pub bytes_per_cluster: u32,
    /// FAT start sector (LBA).
    pub fat_lba: u64,
    /// Data region start sector (LBA).
    pub data_lba: u64,
}

impl ExFatBoot {
    /// Parse a 512-byte boot sector.
    pub fn parse(buf: &[u8]) -> CoreResult<Self> {
        if buf.len() < 512 {
            return Err(CoreError::parse(
                "exFAT boot",
                format!("buffer too short: {} < 512", buf.len()),
            ));
        }

        // Validate boot signature.
        if buf[0x1FE] != 0x55 || buf[0x1FF] != 0xAA {
            return Err(CoreError::parse(
                "exFAT boot",
                format!("bad signature 0x{:02X}{:02X}", buf[0x1FE], buf[0x1FF]),
            ));
        }

        // Validate FS name.
        let mut fs_name = [0u8; 8];
        fs_name.copy_from_slice(&buf[3..11]);
        if &fs_name != b"EXFAT   " {
            return Err(CoreError::parse(
                "exFAT boot",
                format!("bad FS name: {:?}", fs_name),
            ));
        }

        // Validate PB-zero (offset 0x0B must be 0).
        if buf[0x0B] != 0 {
            return Err(CoreError::parse(
                "exFAT boot",
                format!("PB-zero byte is non-zero: 0x{:02X}", buf[0x0B]),
            ));
        }

        let partition_offset = u64::from_le_bytes(buf[0x0C..0x14].try_into().unwrap());
        let volume_length = u64::from_le_bytes(buf[0x14..0x1C].try_into().unwrap());
        let fat_offset = u32::from_le_bytes(buf[0x1C..0x20].try_into().unwrap()) as u64;
        let fat_length = u32::from_le_bytes(buf[0x20..0x24].try_into().unwrap()) as u64;
        let cluster_heap_offset = u32::from_le_bytes(buf[0x24..0x28].try_into().unwrap()) as u64;
        let cluster_count = u32::from_le_bytes(buf[0x28..0x2C].try_into().unwrap());
        let root_dir_cluster = u32::from_le_bytes(buf[0x2C..0x30].try_into().unwrap());
        let volume_serial = u32::from_le_bytes(buf[0x30..0x34].try_into().unwrap());
        let fs_revision = u16::from_le_bytes([buf[0x34], buf[0x35]]);
        let volume_flags = VolumeFlags::from_u16(u16::from_le_bytes([buf[0x36], buf[0x37]]));
        let bytes_per_sector_shift = buf[0x38];
        let sectors_per_cluster_shift = buf[0x39];
        let num_fats = buf[0x3A];
        let drive_select = buf[0x3B];
        let percent_in_use = buf[0x3C];

        // Validate shifts (must be 0..=24 for sector, 0..=24 for cluster).
        if !(9..=24).contains(&bytes_per_sector_shift) {
            return Err(CoreError::parse(
                "exFAT boot",
                format!(
                    "invalid bytes_per_sector_shift: {} (must be 9..=24)",
                    bytes_per_sector_shift
                ),
            ));
        }
        if sectors_per_cluster_shift > 24 {
            return Err(CoreError::parse(
                "exFAT boot",
                format!(
                    "invalid sectors_per_cluster_shift: {} (must be 0..=24)",
                    sectors_per_cluster_shift
                ),
            ));
        }
        if num_fats != 1 && num_fats != 2 {
            return Err(CoreError::parse(
                "exFAT boot",
                format!("invalid num_fats: {} (must be 1 or 2)", num_fats),
            ));
        }

        let bytes_per_sector = 1u32 << bytes_per_sector_shift;
        let sectors_per_cluster = 1u32 << sectors_per_cluster_shift;
        let bytes_per_cluster = bytes_per_sector * sectors_per_cluster;
        let fat_lba = fat_offset;
        let data_lba = cluster_heap_offset;

        Ok(Self {
            fs_name,
            partition_offset,
            volume_length,
            fat_offset,
            fat_length,
            cluster_heap_offset,
            cluster_count,
            root_dir_cluster,
            volume_serial,
            fs_revision,
            volume_flags,
            bytes_per_sector_shift,
            sectors_per_cluster_shift,
            num_fats,
            drive_select,
            percent_in_use,
            bytes_per_sector,
            sectors_per_cluster,
            bytes_per_cluster,
            fat_lba,
            data_lba,
        })
    }

    /// Convert a cluster number to an LBA.
    ///
    /// exFAT clusters are numbered starting at 2 (clusters 0 and 1 are reserved).
    pub fn cluster_to_lba(&self, cluster: u32) -> u64 {
        // LBA = cluster_heap_offset + (cluster - 2) * sectors_per_cluster
        self.data_lba + (cluster as u64).saturating_sub(2) * self.sectors_per_cluster as u64
    }
}

/// Convenience alias for VBR.
pub type ExFatVbr = ExFatBoot;

#[cfg(test)]
mod tests {
    use super::*;

    fn make_exfat_boot() -> Vec<u8> {
        let mut buf = vec![0u8; 512];
        buf[0..3].copy_from_slice(&[0xEB, 0x76, 0x90]);
        buf[3..11].copy_from_slice(b"EXFAT   ");
        buf[0x0B] = 0; // PB zero
        buf[0x0C..0x14].copy_from_slice(&0u64.to_le_bytes()); // partition offset
        buf[0x14..0x1C].copy_from_slice(&100_000u64.to_le_bytes()); // volume length
        buf[0x1C..0x20].copy_from_slice(&1024u32.to_le_bytes()); // fat offset
        buf[0x20..0x24].copy_from_slice(&32u32.to_le_bytes()); // fat length
        buf[0x24..0x28].copy_from_slice(&1100u32.to_le_bytes()); // cluster heap offset
        buf[0x28..0x2C].copy_from_slice(&10000u32.to_le_bytes()); // cluster count
        buf[0x2C..0x30].copy_from_slice(&2u32.to_le_bytes()); // root dir cluster
        buf[0x30..0x34].copy_from_slice(&0x12345678u32.to_le_bytes()); // serial
        buf[0x34..0x36].copy_from_slice(&0x0100u16.to_le_bytes()); // revision 1.0
        buf[0x36..0x38].copy_from_slice(&0u16.to_le_bytes()); // flags
        buf[0x38] = 9; // bytes_per_sector_shift (2^9 = 512)
        buf[0x39] = 3; // sectors_per_cluster_shift (2^3 = 8)
        buf[0x3A] = 1; // num fats
        buf[0x3B] = 0x80; // drive select
        buf[0x3C] = 50; // percent in use
        buf[0x1FE..0x200].copy_from_slice(&0xAA55u16.to_le_bytes());
        buf
    }

    #[test]
    fn parses_valid_boot() {
        let buf = make_exfat_boot();
        let b = ExFatBoot::parse(&buf).unwrap();
        assert_eq!(&b.fs_name, b"EXFAT   ");
        assert_eq!(b.volume_length, 100_000);
        assert_eq!(b.fat_offset, 1024);
        assert_eq!(b.fat_length, 32);
        assert_eq!(b.cluster_heap_offset, 1100);
        assert_eq!(b.cluster_count, 10000);
        assert_eq!(b.root_dir_cluster, 2);
        assert_eq!(b.volume_serial, 0x12345678);
        assert_eq!(b.bytes_per_sector, 512);
        assert_eq!(b.sectors_per_cluster, 8);
        assert_eq!(b.bytes_per_cluster, 4096);
        assert_eq!(b.num_fats, 1);
        // LBA of cluster 2 = cluster_heap_offset + 0 = 1100
        assert_eq!(b.cluster_to_lba(2), 1100);
        // LBA of cluster 3 = 1100 + 8 = 1108
        assert_eq!(b.cluster_to_lba(3), 1108);
    }

    #[test]
    fn rejects_bad_signature() {
        let mut buf = make_exfat_boot();
        buf[0x1FE] = 0;
        buf[0x1FF] = 0;
        assert!(ExFatBoot::parse(&buf).is_err());
    }

    #[test]
    fn rejects_bad_fs_name() {
        let mut buf = make_exfat_boot();
        buf[3..11].copy_from_slice(b"FAT32   ");
        assert!(ExFatBoot::parse(&buf).is_err());
    }

    #[test]
    fn rejects_pb_zero_nonzero() {
        let mut buf = make_exfat_boot();
        buf[0x0B] = 1;
        assert!(ExFatBoot::parse(&buf).is_err());
    }

    #[test]
    fn rejects_invalid_bytes_per_sector_shift() {
        let mut buf = make_exfat_boot();
        buf[0x38] = 4; // too small
        assert!(ExFatBoot::parse(&buf).is_err());
    }

    #[test]
    fn rejects_invalid_num_fats() {
        let mut buf = make_exfat_boot();
        buf[0x3A] = 3;
        assert!(ExFatBoot::parse(&buf).is_err());
    }
}
