//! NTFS Volume Boot Record (VBR) parsing.
//!
//! See `docs/reverse-engineering/02_fs_parser_architecture.md` §3.1 for the
//! EaseUS class hierarchy this is based on.
//!
//! VBR layout (key fields, offset from start of 512-byte sector):
//!
//! | Offset | Size | Field |
//! |--------|------|-------|
//! | 0x00   | 3    | Jump instruction (`EB 52 90`) |
//! | 0x03   | 8    | OEM ID ("NTFS    ") |
//! | 0x0B   | 2    | Bytes per sector (512, 4096) |
//! | 0x0D   | 1    | Sectors per cluster (1, 2, 4, 8, ... 128) |
//! | 0x0E   | 7    | Reserved |
//! | 0x15   | 1    | Media descriptor (0xF8 = hard disk) |
//! | 0x16   | 2    | Unused (always 0) |
//! | 0x18   | 2    | Sectors per track |
//! | 0x1A   | 2    | Number of heads |
//! | 0x1C   | 4    | Hidden sectors |
//! | 0x20   | 4    | Unused (always 0) |
//! | 0x24   | 4    | Unused (0x80008000 — "not AC" flag) |
//! | 0x28   | 8    | Total sectors |
//! | 0x30   | 8    | MFT cluster number |
//! | 0x38   | 8    | MFT mirror cluster number |
//! | 0x40   | 4    | Clusters per MFT record (signed; if negative, size = 2^|val|) |
//! | 0x44   | 4    | Clusters per index record (signed; same convention) |
//! | 0x48   | 8    | Volume serial number |
//! | 0x50   | 4    | Checksum |

use rdw_core::{CoreError, CoreResult};

/// NTFS VBR (Volume Boot Record) — parsed geometry.
#[derive(Debug, Clone)]
pub struct NtfsVbr {
    /// Bytes per logical sector (typically 512).
    pub bytes_per_sector: u32,
    /// Sectors per cluster (1, 2, 4, 8, ... 128).
    pub sectors_per_cluster: u32,
    /// Bytes per cluster = bytes_per_sector * sectors_per_cluster.
    pub bytes_per_cluster: u32,
    /// Total sectors in the volume.
    pub total_sectors: u64,
    /// Total bytes in the volume.
    pub total_bytes: u64,
    /// MFT logical cluster number (where $MFT starts).
    pub mft_cluster: u64,
    /// MFT mirror logical cluster number (where $MFTMirr starts).
    pub mft_mirror_cluster: u64,
    /// MFT record size in bytes.
    pub mft_record_size: u32,
    /// Index record size in bytes.
    pub index_record_size: u32,
    /// Volume serial number.
    pub volume_serial: u64,
    /// Media descriptor (0xF8 = hard disk).
    pub media_descriptor: u8,
}

impl NtfsVbr {
    /// Parse a 512-byte boot sector.
    pub fn parse(buf: &[u8]) -> CoreResult<Self> {
        if buf.len() < 512 {
            return Err(CoreError::parse(
                "NTFS VBR",
                format!("buffer too short: {} < 512", buf.len()),
            ));
        }

        // Validate signature.
        let signature = u16::from_le_bytes([buf[0x1FE], buf[0x1FF]]);
        if signature != 0xAA55 {
            return Err(CoreError::parse(
                "NTFS VBR",
                format!("bad signature 0x{:04X} (expected 0xAA55)", signature),
            ));
        }

        // Validate OEM ID — should be "NTFS    ".
        if &buf[3..11] != b"NTFS    " {
            return Err(CoreError::parse(
                "NTFS VBR",
                "bad OEM ID (expected 'NTFS    ')",
            ));
        }

        let bytes_per_sector = u16::from_le_bytes([buf[0x0B], buf[0x0C]]) as u32;
        if bytes_per_sector == 0 || !bytes_per_sector.is_power_of_two() {
            return Err(CoreError::parse(
                "NTFS VBR",
                format!("invalid bytes_per_sector: {}", bytes_per_sector),
            ));
        }

        let sectors_per_cluster = buf[0x0D] as u32;
        if sectors_per_cluster == 0 || !sectors_per_cluster.is_power_of_two() {
            return Err(CoreError::parse(
                "NTFS VBR",
                format!("invalid sectors_per_cluster: {}", sectors_per_cluster),
            ));
        }

        let bytes_per_cluster = bytes_per_sector * sectors_per_cluster;

        let total_sectors = u64::from_le_bytes(buf[0x28..0x30].try_into().unwrap());
        let mft_cluster = u64::from_le_bytes(buf[0x30..0x38].try_into().unwrap());
        let mft_mirror_cluster = u64::from_le_bytes(buf[0x38..0x40].try_into().unwrap());

        let clusters_per_mft_record = buf[0x40] as i8;
        let mft_record_size = if clusters_per_mft_record < 0 {
            1u32 << (-clusters_per_mft_record as i32)
        } else if clusters_per_mft_record > 0 {
            bytes_per_cluster * clusters_per_mft_record as u32
        } else {
            1024
        };

        let clusters_per_index_record = buf[0x44] as i8;
        let index_record_size = if clusters_per_index_record < 0 {
            1u32 << (-clusters_per_index_record as i32)
        } else if clusters_per_index_record > 0 {
            bytes_per_cluster * clusters_per_index_record as u32
        } else {
            4096
        };

        let volume_serial = u64::from_le_bytes(buf[0x48..0x50].try_into().unwrap());
        let media_descriptor = buf[0x15];
        let total_bytes = total_sectors.saturating_mul(bytes_per_sector as u64);

        Ok(Self {
            bytes_per_sector,
            sectors_per_cluster,
            bytes_per_cluster,
            total_sectors,
            total_bytes,
            mft_cluster,
            mft_mirror_cluster,
            mft_record_size,
            index_record_size,
            volume_serial,
            media_descriptor,
        })
    }

    /// Convert a cluster number to an LBA (Logical Block Address).
    pub fn cluster_to_lba(&self, cluster: u64) -> u64 {
        cluster.saturating_mul(self.sectors_per_cluster as u64)
    }

    /// Convert an LBA to a cluster number.
    pub fn lba_to_cluster(&self, lba: u64) -> u64 {
        lba / self.sectors_per_cluster as u64
    }

    /// Convert a cluster number to a byte offset within the volume.
    pub fn cluster_to_byte(&self, cluster: u64) -> u64 {
        cluster.saturating_mul(self.bytes_per_cluster as u64)
    }
}

/// Convenience alias for backward compatibility.
pub type NtfsBootSector = NtfsVbr;

#[cfg(test)]
mod tests {
    use super::*;

    fn make_test_boot() -> Vec<u8> {
        let mut buf = vec![0u8; 512];
        buf[0..3].copy_from_slice(&[0xEB, 0x52, 0x90]);
        buf[3..11].copy_from_slice(b"NTFS    ");
        buf[0x0B..0x0D].copy_from_slice(&512u16.to_le_bytes()); // bytes per sector
        buf[0x0D] = 8; // sectors per cluster (4KB clusters)
        buf[0x15] = 0xF8; // media descriptor
        buf[0x28..0x30].copy_from_slice(&100_000u64.to_le_bytes()); // total sectors
        buf[0x30..0x38].copy_from_slice(&4u64.to_le_bytes()); // MFT cluster
        buf[0x38..0x40].copy_from_slice(&50_000u64.to_le_bytes()); // MFT mirror cluster
        buf[0x40] = (-10i8) as u8; // MFT record size = 2^10 = 1024
        buf[0x44] = (-12i8) as u8; // index record size = 2^12 = 4096
        buf[0x48..0x50].copy_from_slice(&0xDEADBEEFCAFEBABEu64.to_le_bytes());
        buf[0x1FE..0x200].copy_from_slice(&0xAA55u16.to_le_bytes());
        buf
    }

    #[test]
    fn parses_valid_boot_sector() {
        let buf = make_test_boot();
        let vbr = NtfsVbr::parse(&buf).unwrap();
        assert_eq!(vbr.bytes_per_sector, 512);
        assert_eq!(vbr.sectors_per_cluster, 8);
        assert_eq!(vbr.bytes_per_cluster, 4096);
        assert_eq!(vbr.total_sectors, 100_000);
        assert_eq!(vbr.mft_cluster, 4);
        assert_eq!(vbr.mft_mirror_cluster, 50_000);
        assert_eq!(vbr.mft_record_size, 1024);
        assert_eq!(vbr.index_record_size, 4096);
        assert_eq!(vbr.volume_serial, 0xDEADBEEFCAFEBABE);
    }

    #[test]
    fn rejects_bad_signature() {
        let mut buf = make_test_boot();
        buf[0x1FE] = 0x00;
        buf[0x1FF] = 0x00;
        assert!(NtfsVbr::parse(&buf).is_err());
    }

    #[test]
    fn rejects_bad_oem_id() {
        let mut buf = make_test_boot();
        buf[3..11].copy_from_slice(b"FAT32   ");
        assert!(NtfsVbr::parse(&buf).is_err());
    }

    #[test]
    fn rejects_non_power_of_two_sector() {
        let mut buf = make_test_boot();
        buf[0x0B..0x0D].copy_from_slice(&600u16.to_le_bytes());
        assert!(NtfsVbr::parse(&buf).is_err());
    }

    #[test]
    fn cluster_to_lba_round_trip() {
        let buf = make_test_boot();
        let vbr = NtfsVbr::parse(&buf).unwrap();
        assert_eq!(vbr.cluster_to_lba(0), 0);
        assert_eq!(vbr.cluster_to_lba(1), 8);
        assert_eq!(vbr.cluster_to_lba(100), 800);
        assert_eq!(vbr.lba_to_cluster(0), 0);
        assert_eq!(vbr.lba_to_cluster(7), 0);
        assert_eq!(vbr.lba_to_cluster(8), 1);
        assert_eq!(vbr.lba_to_cluster(800), 100);
    }
}
