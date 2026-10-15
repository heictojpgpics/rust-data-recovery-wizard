//! exFAT allocation bitmap.
//!
//! exFAT maintains a bitmap (one bit per cluster) indicating which clusters
//! are allocated. There may be one bitmap (single FAT) or two (TexFAT).

use std::sync::Arc;

/// exFAT allocation bitmap (immutable after construction).
#[derive(Debug, Clone)]
pub struct ExFatBitmap {
    /// Raw bitmap bytes.
    pub bytes: Arc<[u8]>,
    /// Total clusters in the volume.
    pub total_clusters: u32,
}

impl ExFatBitmap {
    /// Construct from raw bytes.
    pub fn new(bytes: Arc<[u8]>, total_clusters: u32) -> Self {
        Self {
            bytes,
            total_clusters,
        }
    }

    /// Whether a given cluster is allocated.
    pub fn is_allocated(&self, cluster: u32) -> bool {
        if cluster < 2 || cluster >= self.total_clusters + 2 {
            return false;
        }
        let bit_index = (cluster - 2) as usize;
        let byte_idx = bit_index / 8;
        let bit_idx = bit_index % 8;
        if byte_idx >= self.bytes.len() {
            return false;
        }
        self.bytes[byte_idx] & (1 << bit_idx) != 0
    }

    /// Whether a given cluster is free.
    pub fn is_free(&self, cluster: u32) -> bool {
        !self.is_allocated(cluster)
    }

    /// Count allocated clusters.
    pub fn count_allocated(&self) -> u32 {
        let mut count = 0u32;
        for i in 0..self.total_clusters {
            if self.is_allocated(i + 2) {
                count += 1;
            }
        }
        count
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn bitmap_basic() {
        // byte 0 = 0b00000011 = clusters 2 and 3 allocated
        let bytes: Arc<[u8]> = Arc::from(vec![0b00000011u8]);
        let bm = ExFatBitmap::new(bytes, 8);
        assert!(bm.is_allocated(2));
        assert!(bm.is_allocated(3));
        assert!(!bm.is_allocated(4));
        assert!(!bm.is_allocated(1)); // below 2
        assert_eq!(bm.count_allocated(), 2);
    }
}
