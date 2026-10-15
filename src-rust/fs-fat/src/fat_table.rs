//! FAT table abstraction — FAT12/16/32 entry reading.
//!
//! The FAT (File Allocation Table) is an array of cluster pointers. Each entry
//! tells you the next cluster in a file's chain (or marks end-of-chain / bad /
//! free). Entry widths:
//!
//! - FAT12: 12 bits per entry (packed two entries per 3 bytes)
//! - FAT16: 16 bits per entry
//! - FAT32: 32 bits per entry (only low 28 bits used)
//!
//! Special values (per FAT type):
//!
//! | Value | FAT12 | FAT16 | FAT32 | Meaning |
//! |-------|-------|-------|-------|---------|
//! | 0x000 | 0x000 | 0x000 | 0x0000000 | Free cluster |
//! | < EOC | 0x002..0xFF6 | 0x0002..0xFFF6 | 0x2..0xFFFFFF6 | Next cluster in chain |
//! | EOC | 0xFF8..0xFFF | 0xFFF8..0xFFFF | 0xFFFFFF8..0xFFFFFFF | End of chain |
//! | Bad | 0xFF7 | 0xFFF7 | 0xFFFFFF7 | Bad cluster |

use crate::bpb::{FatBpb, FatType};
use rdw_core::{storage::StorageDevice, CoreError, CoreResult};

/// A FAT entry — the value of one slot in the FAT table.
#[derive(Debug, Clone, Copy, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub enum FatEntry {
    /// Cluster is free (allocatable).
    Free,
    /// Cluster is bad (do not use).
    Bad,
    /// End of chain marker (this is the last cluster of a file).
    EndOfChain,
    /// Next cluster in the chain.
    Next(u32),
}

impl FatEntry {
    /// Decode a raw FAT entry value into a typed [`FatEntry`].
    pub fn from_raw(fat_type: FatType, raw: u32) -> Self {
        let mask = match fat_type {
            FatType::Fat12 => 0xFFF,
            FatType::Fat16 => 0xFFFF,
            FatType::Fat32 => 0x0FFFFFFF,
        };
        let v = raw & mask;
        let eoc_min = match fat_type {
            FatType::Fat12 => 0xFF8,
            FatType::Fat16 => 0xFFF8,
            FatType::Fat32 => 0x0FFFFFF8,
        };
        let bad = match fat_type {
            FatType::Fat12 => 0xFF7,
            FatType::Fat16 => 0xFFF7,
            FatType::Fat32 => 0x0FFFFFF7,
        };
        if v == 0 {
            Self::Free
        } else if v == bad {
            Self::Bad
        } else if v >= eoc_min {
            Self::EndOfChain
        } else {
            Self::Next(v)
        }
    }

    /// Whether this entry represents an allocated cluster (in a chain or EOC).
    pub fn is_allocated(&self) -> bool {
        !matches!(self, Self::Free)
    }

    /// If `Next`, returns the cluster number; else None.
    pub fn next_cluster(&self) -> Option<u32> {
        match self {
            Self::Next(c) => Some(*c),
            _ => None,
        }
    }
}

/// FAT table abstraction — reads entries on demand from the device.
pub trait FatTable: Send + Sync {
    /// FAT type.
    fn fat_type(&self) -> FatType;

    /// Read a single FAT entry at the given cluster index.
    fn get_entry(&self, cluster: u32) -> CoreResult<FatEntry>;

    /// Follow the cluster chain starting at `start`, returning all cluster numbers.
    ///
    /// Stops at EndOfChain or Bad. Detects loops (returns `Corruption` if a
    /// cluster is visited twice).
    fn follow_chain(&self, start: u32, max_clusters: u32) -> CoreResult<Vec<u32>> {
        let mut chain = Vec::new();
        let mut current = start;
        let mut visited = std::collections::HashSet::new();
        loop {
            if !visited.insert(current) {
                return Err(CoreError::corruption(
                    "FAT chain",
                    format!("loop detected at cluster {}", current),
                ));
            }
            if chain.len() as u32 >= max_clusters {
                return Err(CoreError::corruption(
                    "FAT chain",
                    format!("exceeded max_clusters {}", max_clusters),
                ));
            }
            chain.push(current);
            match self.get_entry(current)? {
                FatEntry::Next(next) => current = next,
                FatEntry::EndOfChain => break,
                FatEntry::Bad => {
                    return Err(CoreError::corruption(
                        "FAT chain",
                        format!("bad cluster at {}", current),
                    ));
                }
                FatEntry::Free => {
                    return Err(CoreError::corruption(
                        "FAT chain",
                        format!("free cluster {} in middle of chain", current),
                    ));
                }
            }
        }
        Ok(chain)
    }
}

/// FAT12 table reader.
pub struct Fat12Table<'a> {
    _phantom: std::marker::PhantomData<&'a FatBpb>,
    fat_buf: Vec<u8>,
}

impl<'a> Fat12Table<'a> {
    /// Construct a new FAT12 reader. Reads the entire FAT into memory.
    pub fn new(bpb: &'a FatBpb, device: &'a dyn StorageDevice) -> CoreResult<Self> {
        let fat_sectors = bpb.sectors_per_fat as u64;
        let fat_lba = bpb.fat_start_sector;
        let bytes = (fat_sectors * bpb.bytes_per_sector as u64) as usize;
        let mut fat_buf = vec![0u8; bytes];
        let bs = bpb.bytes_per_sector as usize;
        for i in 0..fat_sectors {
            let mut sector = vec![0u8; bs];
            device.read_blocks(fat_lba + i, &mut sector)?;
            fat_buf[i as usize * bs..(i as usize + 1) * bs].copy_from_slice(&sector);
        }
        Ok(Self {
            _phantom: std::marker::PhantomData,
            fat_buf,
        })
    }
}

impl<'a> FatTable for Fat12Table<'a> {
    fn fat_type(&self) -> FatType {
        FatType::Fat12
    }

    fn get_entry(&self, cluster: u32) -> CoreResult<FatEntry> {
        // FAT12 packing: two entries per 3 bytes.
        // Entry N is at byte offset (N * 3) / 2.
        // If N is even: low 12 bits of the 16-bit value at offset (N*3)/2.
        // If N is odd: high 12 bits of the 16-bit value at offset (N*3)/2.
        let offset = (cluster as usize * 3) / 2;
        if offset + 1 >= self.fat_buf.len() {
            return Err(CoreError::corruption(
                "FAT12",
                format!("cluster {} out of range", cluster),
            ));
        }
        let val = u16::from_le_bytes([self.fat_buf[offset], self.fat_buf[offset + 1]]);
        let raw = if cluster.is_multiple_of(2) {
            (val & 0x0FFF) as u32
        } else {
            (val >> 4) as u32
        };
        Ok(FatEntry::from_raw(FatType::Fat12, raw))
    }
}

/// FAT16 table reader.
pub struct Fat16Table<'a> {
    _phantom: std::marker::PhantomData<&'a FatBpb>,
    fat_buf: Vec<u8>,
}

impl<'a> Fat16Table<'a> {
    /// Construct a new FAT16 reader. Reads the entire FAT into memory.
    pub fn new(bpb: &'a FatBpb, device: &'a dyn StorageDevice) -> CoreResult<Self> {
        let fat_sectors = bpb.sectors_per_fat as u64;
        let fat_lba = bpb.fat_start_sector;
        let bytes = (fat_sectors * bpb.bytes_per_sector as u64) as usize;
        let mut fat_buf = vec![0u8; bytes];
        let bs = bpb.bytes_per_sector as usize;
        for i in 0..fat_sectors {
            let mut sector = vec![0u8; bs];
            device.read_blocks(fat_lba + i, &mut sector)?;
            fat_buf[i as usize * bs..(i as usize + 1) * bs].copy_from_slice(&sector);
        }
        Ok(Self {
            _phantom: std::marker::PhantomData,
            fat_buf,
        })
    }
}

impl<'a> FatTable for Fat16Table<'a> {
    fn fat_type(&self) -> FatType {
        FatType::Fat16
    }

    fn get_entry(&self, cluster: u32) -> CoreResult<FatEntry> {
        let offset = (cluster as usize) * 2;
        if offset + 1 >= self.fat_buf.len() {
            return Err(CoreError::corruption(
                "FAT16",
                format!("cluster {} out of range", cluster),
            ));
        }
        let raw = u16::from_le_bytes([self.fat_buf[offset], self.fat_buf[offset + 1]]) as u32;
        Ok(FatEntry::from_raw(FatType::Fat16, raw))
    }
}

/// FAT32 table reader.
pub struct Fat32Table<'a> {
    _phantom: std::marker::PhantomData<&'a FatBpb>,
    fat_buf: Vec<u8>,
}

impl<'a> Fat32Table<'a> {
    /// Construct a new FAT32 reader. Reads the entire FAT into memory.
    pub fn new(bpb: &'a FatBpb, device: &'a dyn StorageDevice) -> CoreResult<Self> {
        let fat_sectors = bpb.sectors_per_fat as u64;
        let fat_lba = bpb.fat_start_sector;
        let bytes = (fat_sectors * bpb.bytes_per_sector as u64) as usize;
        let mut fat_buf = vec![0u8; bytes];
        let bs = bpb.bytes_per_sector as usize;
        for i in 0..fat_sectors {
            let mut sector = vec![0u8; bs];
            device.read_blocks(fat_lba + i, &mut sector)?;
            fat_buf[i as usize * bs..(i as usize + 1) * bs].copy_from_slice(&sector);
        }
        Ok(Self {
            _phantom: std::marker::PhantomData,
            fat_buf,
        })
    }
}

impl<'a> FatTable for Fat32Table<'a> {
    fn fat_type(&self) -> FatType {
        FatType::Fat32
    }

    fn get_entry(&self, cluster: u32) -> CoreResult<FatEntry> {
        let offset = (cluster as usize) * 4;
        if offset + 3 >= self.fat_buf.len() {
            return Err(CoreError::corruption(
                "FAT32",
                format!("cluster {} out of range", cluster),
            ));
        }
        let raw = u32::from_le_bytes([
            self.fat_buf[offset],
            self.fat_buf[offset + 1],
            self.fat_buf[offset + 2],
            self.fat_buf[offset + 3],
        ]);
        Ok(FatEntry::from_raw(FatType::Fat32, raw))
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn fat12_entry_decoding() {
        // Even cluster (N=2): low 12 bits.
        // Odd cluster (N=3): high 12 bits.
        assert_eq!(FatEntry::from_raw(FatType::Fat12, 0x000), FatEntry::Free);
        assert_eq!(FatEntry::from_raw(FatType::Fat12, 0xFF7), FatEntry::Bad);
        assert_eq!(
            FatEntry::from_raw(FatType::Fat12, 0xFF8),
            FatEntry::EndOfChain
        );
        assert_eq!(
            FatEntry::from_raw(FatType::Fat12, 0xFFF),
            FatEntry::EndOfChain
        );
        assert_eq!(FatEntry::from_raw(FatType::Fat12, 0x002), FatEntry::Next(2));
        assert_eq!(
            FatEntry::from_raw(FatType::Fat12, 0xFF6),
            FatEntry::Next(0xFF6)
        );
    }

    #[test]
    fn fat16_entry_decoding() {
        assert_eq!(FatEntry::from_raw(FatType::Fat16, 0x0000), FatEntry::Free);
        assert_eq!(FatEntry::from_raw(FatType::Fat16, 0xFFF7), FatEntry::Bad);
        assert_eq!(
            FatEntry::from_raw(FatType::Fat16, 0xFFF8),
            FatEntry::EndOfChain
        );
        assert_eq!(
            FatEntry::from_raw(FatType::Fat16, 0xFFFF),
            FatEntry::EndOfChain
        );
        assert_eq!(
            FatEntry::from_raw(FatType::Fat16, 0x0002),
            FatEntry::Next(2)
        );
    }

    #[test]
    fn fat32_entry_decoding() {
        assert_eq!(
            FatEntry::from_raw(FatType::Fat32, 0x00000000),
            FatEntry::Free
        );
        assert_eq!(
            FatEntry::from_raw(FatType::Fat32, 0x0FFFFFF7),
            FatEntry::Bad
        );
        assert_eq!(
            FatEntry::from_raw(FatType::Fat32, 0x0FFFFFF8),
            FatEntry::EndOfChain
        );
        assert_eq!(
            FatEntry::from_raw(FatType::Fat32, 0xFFFFFFFF),
            FatEntry::EndOfChain
        );
        assert_eq!(
            FatEntry::from_raw(FatType::Fat32, 0x00000002),
            FatEntry::Next(2)
        );
        // High 4 bits of FAT32 entries should be ignored.
        assert_eq!(
            FatEntry::from_raw(FatType::Fat32, 0xF0000002),
            FatEntry::Next(2)
        );
    }

    #[test]
    fn fat_entry_helpers() {
        assert!(FatEntry::Next(5).is_allocated());
        assert!(FatEntry::EndOfChain.is_allocated());
        assert!(FatEntry::Bad.is_allocated());
        assert!(!FatEntry::Free.is_allocated());
        assert_eq!(FatEntry::Next(5).next_cluster(), Some(5));
        assert_eq!(FatEntry::Free.next_cluster(), None);
    }

    // Test storage device for FAT table tests.
    struct FakeDevice {
        data: Vec<u8>,
        block_size: u32,
    }

    impl StorageDevice for FakeDevice {
        fn read_blocks(&self, start_lba: u64, buf: &mut [u8]) -> rdw_core::CoreResult<()> {
            let bs = self.block_size as usize;
            let offset = (start_lba as usize) * bs;
            if offset + buf.len() > self.data.len() {
                return Err(CoreError::corruption("FakeDevice", "read past end"));
            }
            buf.copy_from_slice(&self.data[offset..offset + buf.len()]);
            Ok(())
        }
        fn block_size(&self) -> u32 {
            self.block_size
        }
        fn total_blocks(&self) -> u64 {
            (self.data.len() / self.block_size as usize) as u64
        }
        fn name(&self) -> &str {
            "fake"
        }
    }

    #[test]
    fn fat16_table_basic() {
        // Build a minimal FAT16 volume: 1 sector reserved, 2 FATs of 1 sector each, then data.
        let bs = 512usize;
        let mut data = vec![0u8; bs * 4];
        // Boot sector at 0.
        // Build a minimal BPB.
        data[0] = 0xEB;
        data[1] = 0x3C;
        data[2] = 0x90;
        data[3..11].copy_from_slice(b"MSWIN4.1");
        data[0x0B..0x0D].copy_from_slice(&512u16.to_le_bytes());
        data[0x0D] = 1; // sectors per cluster
        data[0x0E..0x10].copy_from_slice(&1u16.to_le_bytes()); // reserved
        data[0x10] = 2; // num fats
        data[0x11..0x13].copy_from_slice(&16u16.to_le_bytes()); // root entries (small for test)
        data[0x13..0x15].copy_from_slice(&100u16.to_le_bytes()); // total sectors
        data[0x15] = 0xF8;
        data[0x16..0x18].copy_from_slice(&1u16.to_le_bytes()); // sectors per fat
        data[0x1FE..0x200].copy_from_slice(&0xAA55u16.to_le_bytes());
        // FAT at sector 1 (after 1 reserved).
        // Write FAT16 entries: cluster 2 -> 3, cluster 3 -> EOC.
        data[bs + 0..bs + 2].copy_from_slice(&0xFFF8u16.to_le_bytes()); // cluster 0 (reserved marker)
        data[bs + 2..bs + 4].copy_from_slice(&0xFFF8u16.to_le_bytes()); // cluster 1 (reserved marker)
        data[bs + 4..bs + 6].copy_from_slice(&3u16.to_le_bytes()); // cluster 2 -> 3
        data[bs + 6..bs + 8].copy_from_slice(&0xFFF8u16.to_le_bytes()); // cluster 3 -> EOC

        let device = FakeDevice {
            data,
            block_size: 512,
        };
        let bpb = FatBpb::parse(&device.read_blocks_vec(0, 512).unwrap_or_default()).unwrap();
        // Actually FakeDevice doesn't have read_blocks_vec — let me read manually.
        let mut boot = vec![0u8; 512];
        device.read_blocks(0, &mut boot).unwrap();
        let bpb = FatBpb::parse(&boot).unwrap();
        let table = Fat16Table::new(&bpb, &device).unwrap();
        assert_eq!(table.fat_type(), FatType::Fat16);
        assert_eq!(table.get_entry(0).unwrap(), FatEntry::EndOfChain);
        assert_eq!(table.get_entry(1).unwrap(), FatEntry::EndOfChain);
        assert_eq!(table.get_entry(2).unwrap(), FatEntry::Next(3));
        assert_eq!(table.get_entry(3).unwrap(), FatEntry::EndOfChain);
        let chain = table.follow_chain(2, 100).unwrap();
        assert_eq!(chain, vec![2, 3]);
    }

    // Helper trait for tests
    trait StorageDeviceTestExt {
        fn read_blocks_vec(&self, start_lba: u64, len: usize) -> rdw_core::CoreResult<Vec<u8>>;
    }
    impl<T: StorageDevice + ?Sized> StorageDeviceTestExt for T {
        fn read_blocks_vec(&self, start_lba: u64, len: usize) -> rdw_core::CoreResult<Vec<u8>> {
            let mut buf = vec![0u8; len];
            self.read_blocks(start_lba, &mut buf)?;
            Ok(buf)
        }
    }
}
