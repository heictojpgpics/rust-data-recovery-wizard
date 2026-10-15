//! Data run / extent abstraction.
//!
//! A "data run" is a contiguous run of blocks on disk belonging to a file.
//! Equivalent to NTFS $DATA run list entries, FAT cluster chains, ext4 extents,
//! Btrfs extents, etc.

use crate::error::CoreResult;
use crate::storage::StorageDevice;

/// A single contiguous data run.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, serde::Serialize, serde::Deserialize)]
pub struct DataRun {
    /// Starting LBA on the underlying storage device.
    ///
    /// For sparse / unallocated runs, use [`DataRun::sparse`].
    pub start_lba: u64,
    /// Length in blocks.
    pub block_count: u64,
    /// Whether this run is sparse (a hole — read as zeros).
    pub is_sparse: bool,
}

impl DataRun {
    /// Construct a non-sparse run.
    pub const fn new(start_lba: u64, block_count: u64) -> Self {
        Self {
            start_lba,
            block_count,
            is_sparse: false,
        }
    }

    /// Construct a sparse run (a hole in the file).
    pub const fn sparse(block_count: u64) -> Self {
        Self {
            start_lba: 0,
            block_count,
            is_sparse: true,
        }
    }

    /// Length in bytes.
    pub const fn bytes(&self, block_size: u32) -> u64 {
        self.block_count.saturating_mul(block_size as u64)
    }

    /// End LBA (exclusive). For sparse runs, returns 0.
    pub const fn end_lba(&self) -> u64 {
        if self.is_sparse {
            0
        } else {
            self.start_lba.saturating_add(self.block_count)
        }
    }
}

/// A list of data runs belonging to a single file.
///
/// Equivalent to EaseUS's `IDataRunList` (with the NTFS-specific naming stripped).
#[derive(Debug, Clone, Default, serde::Serialize, serde::Deserialize)]
pub struct DataRunList {
    /// Ordered list of runs.
    pub runs: Vec<DataRun>,
    /// Total size in bytes (may be less than sum of runs if last run is partial).
    pub logical_size: u64,
    /// Whether the data is resident (inline in metadata, no runs).
    pub is_resident: bool,
    /// If resident, the actual inline bytes.
    pub resident_data: Option<Vec<u8>>,
}

impl DataRunList {
    /// Construct an empty non-resident run list.
    pub fn new() -> Self {
        Self::default()
    }

    /// Construct a resident run list (data is inline in metadata, e.g. NTFS resident $DATA).
    pub fn resident(data: Vec<u8>) -> Self {
        let logical_size = data.len() as u64;
        Self {
            runs: Vec::new(),
            logical_size,
            is_resident: true,
            resident_data: Some(data),
        }
    }

    /// Construct a non-resident run list from runs.
    pub fn non_resident(runs: Vec<DataRun>, logical_size: u64) -> Self {
        Self {
            runs,
            logical_size,
            is_resident: false,
            resident_data: None,
        }
    }

    /// Total number of runs.
    pub fn run_count(&self) -> usize {
        self.runs.len()
    }

    /// Iterate over all runs.
    pub fn iter_runs(&self) -> impl Iterator<Item = &DataRun> {
        self.runs.iter()
    }

    /// Read the file content into `out`.
    ///
    /// `out.len()` should be `logical_size` (truncated to last run).
    pub fn read(&self, device: &dyn StorageDevice, out: &mut [u8]) -> CoreResult<()> {
        if self.is_resident {
            if let Some(data) = &self.resident_data {
                let n = data.len().min(out.len());
                out[..n].copy_from_slice(&data[..n]);
                if out.len() > n {
                    out[n..].fill(0);
                }
                return Ok(());
            }
            return Ok(());
        }
        let bs = device.block_size() as usize;
        let mut written = 0usize;
        for run in &self.runs {
            let run_bytes_total = (run.block_count as usize) * bs;
            let bytes_to_write = run_bytes_total.min(out.len().saturating_sub(written));
            if bytes_to_write == 0 {
                break;
            }
            if run.is_sparse {
                out[written..written + bytes_to_write].fill(0);
            } else {
                let full_blocks = bytes_to_write / bs;
                if full_blocks > 0 {
                    let slice = &mut out[written..written + full_blocks * bs];
                    device.read_blocks(run.start_lba, slice)?;
                    written += full_blocks * bs;
                }
                let tail = bytes_to_write - full_blocks * bs;
                if tail > 0 {
                    let mut last_block = vec![0u8; bs];
                    device.read_block(run.start_lba + full_blocks as u64, &mut last_block)?;
                    out[written..written + tail].copy_from_slice(&last_block[..tail]);
                    written += tail;
                }
                continue;
            }
            written += bytes_to_write;
        }
        Ok(())
    }
}

/// Resident data alias (matches EaseUS's `CResidentNTFSDataRunList` semantically).
pub type ResidentData = DataRunList;

/// Non-resident data alias (matches EaseUS's `CNoneResidentNTFSDataRunList` semantically).
pub type NonResidentData = DataRunList;
