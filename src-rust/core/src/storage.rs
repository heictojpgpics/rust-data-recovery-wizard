//! Storage device abstraction.
//!
//! Equivalent to EaseUS's `IStorageDevice` + `CStorageDeviceWithCache`.

use crate::error::{CoreError, CoreResult};
use parking_lot::RwLock;
use std::collections::HashMap;
use std::sync::Arc;

/// A contiguous range of blocks on a storage device.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
pub struct BlockRange {
    /// Starting LBA (Logical Block Address).
    pub start_lba: u64,
    /// Number of blocks.
    pub count: u64,
}

impl BlockRange {
    /// Construct a new range.
    pub const fn new(start_lba: u64, count: u64) -> Self {
        Self { start_lba, count }
    }

    /// End LBA (exclusive).
    pub const fn end_lba(&self) -> u64 {
        self.start_lba.saturating_add(self.count)
    }

    /// Total bytes covered, given a block size.
    pub const fn bytes(&self, block_size: u32) -> u64 {
        self.count.saturating_mul(block_size as u64)
    }

    /// Whether this range contains a given LBA.
    pub const fn contains(&self, lba: u64) -> bool {
        lba >= self.start_lba && lba < self.end_lba()
    }
}

/// A block-addressable storage device.
///
/// Implementors: raw disk handle, partition handle, disk image file,
/// VMDK/VHD/QCOW2 reader, etc.
///
/// All reads are block-aligned. The block size is fixed at construction time
/// and matches the device's native sector size (512 or 4096 bytes typically).
pub trait StorageDevice: Send + Sync {
    /// Read one or more blocks into `buf`.
    ///
    /// `buf.len()` must be a multiple of `block_size()`. The read starts at
    /// `start_lba` and covers `buf.len() / block_size()` blocks.
    fn read_blocks(&self, start_lba: u64, buf: &mut [u8]) -> CoreResult<()>;

    /// Convenience: read a single block.
    fn read_block(&self, lba: u64, buf: &mut [u8]) -> CoreResult<()> {
        debug_assert_eq!(buf.len() as u64, self.block_size() as u64);
        self.read_blocks(lba, buf)
    }

    /// Native block size (bytes). Typically 512 or 4096.
    fn block_size(&self) -> u32;

    /// Total number of blocks on the device.
    fn total_blocks(&self) -> u64;

    /// Total bytes on the device.
    fn total_bytes(&self) -> u64 {
        self.total_blocks().saturating_mul(self.block_size() as u64)
    }

    /// A human-readable name (e.g. "Samsung SSD 970 EVO 1TB" or "disk2").
    fn name(&self) -> &str;

    /// Whether this device is writable. Recovery scanning never writes, but
    /// the UI may want to mark read-only devices as such.
    fn is_writable(&self) -> bool {
        false
    }
}

/// An LRU-cached wrapper around any [`StorageDevice`].
///
/// Mirrors EaseUS's `CStorageDeviceWithCache`. Hot blocks (MFT, FAT tables,
/// B-tree nodes) are cached to avoid re-reading from disk.
///
/// Cache key = LBA. Cache value = `Vec<u8>` of size `block_size`.
///
/// Uses `parking_lot::RwLock<HashMap<...>>` for simplicity. For very hot
/// paths we may switch to `moka` later.
pub struct CachedStorageDevice {
    inner: Arc<dyn StorageDevice>,
    block_size: u32,
    total_blocks: u64,
    cache: RwLock<HashMap<u64, Vec<u8>>>,
    capacity: usize,
}

impl std::fmt::Debug for CachedStorageDevice {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.debug_struct("CachedStorageDevice")
            .field("inner", &"<dyn StorageDevice>")
            .field("block_size", &self.block_size)
            .field("total_blocks", &self.total_blocks)
            .field("capacity", &self.capacity)
            .finish()
    }
}

impl CachedStorageDevice {
    /// Construct a new cached wrapper.
    pub fn new(inner: Arc<dyn StorageDevice>, capacity: usize) -> Self {
        let block_size = inner.block_size();
        let total_blocks = inner.total_blocks();
        Self {
            inner,
            block_size,
            total_blocks,
            cache: RwLock::new(HashMap::with_capacity(capacity)),
            capacity,
        }
    }

    /// Current cache occupancy.
    pub fn cache_size(&self) -> usize {
        self.cache.read().len()
    }

    /// Evict all cached blocks.
    pub fn clear(&self) {
        self.cache.write().clear();
    }

    fn evict_if_needed(write_guard: &mut HashMap<u64, Vec<u8>>, capacity: usize) {
        if write_guard.len() >= capacity {
            // Evict ~10% of entries. Strategy: arbitrary (HashMap iteration order).
            // This is a placeholder; moka will give us LRU.
            let to_remove = capacity / 10;
            let keys: Vec<u64> = write_guard.keys().take(to_remove).copied().collect();
            for k in keys {
                write_guard.remove(&k);
            }
        }
    }
}

impl StorageDevice for CachedStorageDevice {
    fn read_blocks(&self, start_lba: u64, buf: &mut [u8]) -> CoreResult<()> {
        let bs = self.block_size as usize;
        if !buf.len().is_multiple_of(bs) {
            return Err(CoreError::InvalidParameter(format!(
                "buffer len {} not multiple of block size {}",
                buf.len(),
                bs
            )));
        }
        let block_count = buf.len() / bs;
        let mut missing: Vec<(u64, usize)> = Vec::with_capacity(block_count);
        {
            let cache = self.cache.read();
            for i in 0..block_count {
                let lba = start_lba + i as u64;
                if let Some(data) = cache.get(&lba) {
                    buf[i * bs..(i + 1) * bs].copy_from_slice(data);
                } else {
                    missing.push((lba, i));
                }
            }
        }
        if missing.is_empty() {
            return Ok(());
        }
        // Group consecutive missing blocks into a single read.
        let mut iter = missing.iter().peekable();
        while let Some(&(first_lba, first_idx)) = iter.next() {
            let mut last_lba = first_lba;
            let mut last_idx = first_idx;
            while let Some(&&(next_lba, next_idx)) = iter.peek() {
                if next_lba == last_lba + 1 && next_idx == last_idx + 1 {
                    last_lba = next_lba;
                    last_idx = next_idx;
                    iter.next();
                } else {
                    break;
                }
            }
            let count = (last_lba - first_lba + 1) as usize;
            let sub_buf = &mut buf[first_idx * bs..(first_idx + count) * bs];
            self.inner.read_blocks(first_lba, sub_buf)?;
            // Cache the freshly-read blocks.
            let mut cache = self.cache.write();
            Self::evict_if_needed(&mut cache, self.capacity);
            for i in 0..count {
                let lba = first_lba + i as u64;
                let block = buf[(first_idx + i) * bs..(first_idx + i + 1) * bs].to_vec();
                cache.insert(lba, block);
            }
        }
        Ok(())
    }

    fn block_size(&self) -> u32 {
        self.block_size
    }

    fn total_blocks(&self) -> u64 {
        self.total_blocks
    }

    fn name(&self) -> &str {
        self.inner.name()
    }

    fn is_writable(&self) -> bool {
        self.inner.is_writable()
    }
}
