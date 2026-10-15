//! NTFS volume bitmap parsing.
//!
//! The $Bitmap system file (MFT record 6) contains a bit for each cluster on the
//! volume. Bit 1 = cluster is allocated; bit 0 = cluster is free.
//!
//! Used for two purposes:
//! 1. Determine which clusters are "free" so the carving engine can skip allocated ones.
//! 2. Build a "volume bitmap" for the recovery result (so the UI can show disk usage).

use parking_lot::RwLock;
use rdw_core::{CoreError, CoreResult};
use std::sync::Arc;

/// NTFS volume bitmap.
///
/// Wraps the raw bitmap bytes and provides efficient allocation queries.
#[derive(Debug, Clone)]
pub struct NtfsBitmap {
    /// Raw bitmap bytes.
    bytes: Arc<[u8]>,
    /// Total number of clusters in the volume.
    total_clusters: u64,
}

impl NtfsBitmap {
    /// Construct from raw bytes.
    ///
    /// `total_clusters` may be less than `bytes.len() * 8` — the trailing bits
    /// in the last byte are unused.
    pub fn new(bytes: Arc<[u8]>, total_clusters: u64) -> CoreResult<Self> {
        let needed_bytes = total_clusters.div_ceil(8) as usize;
        if bytes.len() < needed_bytes {
            return Err(CoreError::corruption(
                "NTFS bitmap",
                format!(
                    "bitmap too short: {} < {} (needed for {} clusters)",
                    bytes.len(),
                    needed_bytes,
                    total_clusters
                ),
            ));
        }
        Ok(Self {
            bytes,
            total_clusters,
        })
    }

    /// Total clusters in the volume.
    pub fn total_clusters(&self) -> u64 {
        self.total_clusters
    }

    /// Whether a given cluster is allocated.
    pub fn is_allocated(&self, cluster: u64) -> bool {
        if cluster >= self.total_clusters {
            return false;
        }
        let byte_idx = (cluster / 8) as usize;
        let bit_idx = (cluster % 8) as u8;
        if byte_idx >= self.bytes.len() {
            return false;
        }
        self.bytes[byte_idx] & (1 << bit_idx) != 0
    }

    /// Whether a given cluster is free.
    pub fn is_free(&self, cluster: u64) -> bool {
        !self.is_allocated(cluster)
    }

    /// Count allocated clusters (slow — O(n)).
    pub fn count_allocated(&self) -> u64 {
        let mut count = 0u64;
        let total_bytes = self.total_clusters.div_ceil(8) as usize;
        for i in 0..total_bytes.min(self.bytes.len()) {
            let byte = self.bytes[i];
            count += byte.count_ones() as u64;
        }
        // Subtract trailing bits beyond total_clusters.
        let trailing_bits = self.total_clusters % 8;
        if trailing_bits > 0 && total_bytes > 0 {
            let last_byte = self.bytes[total_bytes - 1];
            let _extra_bits = 8 - trailing_bits;
            let mask = 0xFFu8 << trailing_bits as u8;
            let extra = (last_byte & mask).count_ones() as u64;
            count = count.saturating_sub(extra);
        }
        count
    }

    /// Count free clusters.
    pub fn count_free(&self) -> u64 {
        self.total_clusters.saturating_sub(self.count_allocated())
    }

    /// Iterate over free cluster ranges.
    pub fn free_ranges(&self) -> impl Iterator<Item = (u64, u64)> + '_ {
        let total = self.total_clusters;
        let mut current_start: Option<u64> = None;
        let mut current_len = 0u64;
        (0..=total).filter_map(move |c| {
            if c < total && self.is_free(c) {
                if current_start.is_none() {
                    current_start = Some(c);
                    current_len = 1;
                } else {
                    current_len += 1;
                }
                None
            } else if let Some(start) = current_start {
                let result = (start, current_len);
                current_start = None;
                current_len = 0;
                Some(result)
            } else {
                None
            }
        })
    }
}

/// A thread-safe wrapper around `NtfsBitmap` for incremental construction.
#[derive(Debug)]
pub struct NtfsBitmapBuilder {
    bytes: RwLock<Vec<u8>>,
    total_clusters: u64,
}

impl NtfsBitmapBuilder {
    /// Construct a new builder for `total_clusters` clusters.
    pub fn new(total_clusters: u64) -> Self {
        let needed_bytes = total_clusters.div_ceil(8) as usize;
        Self {
            bytes: RwLock::new(vec![0u8; needed_bytes]),
            total_clusters,
        }
    }

    /// Mark a cluster as allocated.
    pub fn mark_allocated(&self, cluster: u64) {
        if cluster >= self.total_clusters {
            return;
        }
        let byte_idx = (cluster / 8) as usize;
        let bit_idx = (cluster % 8) as u8;
        let mut bytes = self.bytes.write();
        if byte_idx < bytes.len() {
            bytes[byte_idx] |= 1 << bit_idx;
        }
    }

    /// Mark a range of clusters as allocated.
    pub fn mark_range_allocated(&self, start: u64, count: u64) {
        for i in 0..count {
            self.mark_allocated(start + i);
        }
    }

    /// Build the final immutable bitmap.
    pub fn build(self) -> NtfsBitmap {
        let bytes: Arc<[u8]> = Arc::from(self.bytes.into_inner());
        NtfsBitmap {
            bytes,
            total_clusters: self.total_clusters,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn empty_bitmap() {
        let bytes: Arc<[u8]> = Arc::from(vec![0u8; 16]);
        let bm = NtfsBitmap::new(bytes, 128).unwrap();
        assert_eq!(bm.total_clusters(), 128);
        assert_eq!(bm.count_allocated(), 0);
        assert_eq!(bm.count_free(), 128);
        assert!(!bm.is_allocated(0));
        assert!(bm.is_free(0));
    }

    #[test]
    fn full_bitmap() {
        let bytes: Arc<[u8]> = Arc::from(vec![0xFFu8; 16]);
        let bm = NtfsBitmap::new(bytes, 128).unwrap();
        assert_eq!(bm.count_allocated(), 128);
        assert_eq!(bm.count_free(), 0);
        assert!(bm.is_allocated(0));
        assert!(bm.is_allocated(127));
    }

    #[test]
    fn partial_bitmap() {
        // byte 0 = 0b10110010 = clusters 1,4,5,7 allocated
        let bytes: Arc<[u8]> = Arc::from(vec![0b10110010, 0u8, 0u8, 0u8]);
        let bm = NtfsBitmap::new(bytes, 32).unwrap();
        assert!(bm.is_allocated(1));
        assert!(!bm.is_allocated(0));
        assert!(!bm.is_allocated(2));
        assert!(bm.is_allocated(4));
        assert!(bm.is_allocated(5));
        assert!(!bm.is_allocated(6));
        assert!(bm.is_allocated(7));
        assert_eq!(bm.count_allocated(), 4);
    }

    #[test]
    fn trailing_bits_handling() {
        // 10 clusters, but bitmap has 16 bits available.
        let bytes: Arc<[u8]> = Arc::from(vec![0xFFu8, 0xFFu8]);
        let bm = NtfsBitmap::new(bytes, 10).unwrap();
        // Only first 10 bits count.
        assert_eq!(bm.count_allocated(), 10);
        assert_eq!(bm.count_free(), 0);
        // Clusters 10-15 should report as free (out of range).
        assert!(!bm.is_allocated(10));
    }

    #[test]
    fn free_ranges_iter() {
        // Bitmap 0b00110011 = bits 0,1,4,5 set (clusters 0,1,4,5 allocated)
        // Free clusters: 2,3,6,7
        let bytes: Arc<[u8]> = Arc::from(vec![0b00110011]);
        let bm = NtfsBitmap::new(bytes, 8).unwrap();
        let free: Vec<(u64, u64)> = bm.free_ranges().collect();
        assert_eq!(free, vec![(2, 2), (6, 2)]);
    }

    #[test]
    fn builder_construction() {
        let builder = NtfsBitmapBuilder::new(64);
        builder.mark_allocated(5);
        builder.mark_allocated(10);
        builder.mark_range_allocated(20, 4);
        let bm = builder.build();
        assert!(bm.is_allocated(5));
        assert!(bm.is_allocated(10));
        assert!(bm.is_allocated(20));
        assert!(bm.is_allocated(23));
        assert!(!bm.is_allocated(24));
        assert_eq!(bm.count_allocated(), 6);
    }

    #[test]
    fn rejects_short_bitmap() {
        let bytes: Arc<[u8]> = Arc::from(vec![0u8; 1]);
        // 16 clusters need 2 bytes, but we have 1.
        assert!(NtfsBitmap::new(bytes, 16).is_err());
    }
}
