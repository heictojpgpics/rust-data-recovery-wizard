//! exFAT FAT table (32-bit entries, similar to FAT32 but only used for
//! fragmented files).

use crate::boot::ExFatBoot;
use rdw_core::{storage::StorageDevice, CoreError, CoreResult};

/// exFAT FAT entry values.
pub mod fat_entry {
    /// End-of-chain marker.
    pub const EOC: u32 = 0xFFFFFFF8;
    /// End-of-chain max.
    pub const EOC_MAX: u32 = 0xFFFFFFFF;
    /// Bad cluster.
    pub const BAD: u32 = 0xFFFFFFF7;
    /// Free cluster.
    pub const FREE: u32 = 0x00000000;
}

/// exFAT FAT table reader. Reads entries on demand from the device.
pub struct ExFatTable<'a> {
    boot: &'a ExFatBoot,
    fat_buf: Vec<u8>,
}

impl<'a> ExFatTable<'a> {
    /// Construct a new exFAT FAT reader. Reads the entire FAT into memory.
    pub fn new(boot: &'a ExFatBoot, device: &'a dyn StorageDevice) -> CoreResult<Self> {
        let fat_sectors = boot.fat_length;
        let fat_lba = boot.fat_lba;
        let bytes = (fat_sectors * boot.bytes_per_sector as u64) as usize;
        let mut fat_buf = vec![0u8; bytes];
        let bs = boot.bytes_per_sector as usize;
        for i in 0..fat_sectors {
            let mut sector = vec![0u8; bs];
            device.read_blocks(fat_lba + i, &mut sector)?;
            fat_buf[i as usize * bs..(i as usize + 1) * bs].copy_from_slice(&sector);
        }
        Ok(Self { boot, fat_buf })
    }

    /// Read a single FAT entry.
    pub fn get(&self, cluster: u32) -> CoreResult<u32> {
        let offset = (cluster as usize) * 4;
        if offset + 3 >= self.fat_buf.len() {
            return Err(CoreError::corruption(
                "exFAT FAT",
                format!("cluster {} out of range", cluster),
            ));
        }
        Ok(u32::from_le_bytes([
            self.fat_buf[offset],
            self.fat_buf[offset + 1],
            self.fat_buf[offset + 2],
            self.fat_buf[offset + 3],
        ]))
    }

    /// Follow a cluster chain, returning all cluster numbers.
    pub fn follow_chain(&self, start: u32, max_clusters: u32) -> CoreResult<Vec<u32>> {
        let mut chain = Vec::new();
        let mut current = start;
        let mut visited = std::collections::HashSet::new();
        loop {
            if !visited.insert(current) {
                return Err(CoreError::corruption(
                    "exFAT FAT",
                    format!("loop at cluster {}", current),
                ));
            }
            if chain.len() as u32 >= max_clusters {
                return Err(CoreError::corruption(
                    "exFAT FAT",
                    format!("exceeded max_clusters {}", max_clusters),
                ));
            }
            chain.push(current);
            let next = self.get(current)?;
            if next >= fat_entry::EOC {
                break;
            }
            if next == fat_entry::BAD {
                return Err(CoreError::corruption(
                    "exFAT FAT",
                    format!("bad cluster at {}", current),
                ));
            }
            if next == fat_entry::FREE {
                return Err(CoreError::corruption(
                    "exFAT FAT",
                    format!("free cluster {} in chain", next),
                ));
            }
            current = next;
        }
        Ok(chain)
    }

    /// Reference to the boot sector.
    pub fn boot(&self) -> &ExFatBoot {
        self.boot
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn fat_entry_constants() {
        assert_eq!(fat_entry::EOC, 0xFFFFFFF8);
        assert_eq!(fat_entry::BAD, 0xFFFFFFF7);
        assert_eq!(fat_entry::FREE, 0);
    }
}
