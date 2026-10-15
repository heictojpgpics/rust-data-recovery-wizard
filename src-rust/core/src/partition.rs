//! Partition table types.
//!
//! Used by the partition-recovery engine (Phase 2 — EaseUS `PartitionRecovery.dll` equivalent).

/// Partition table type detected on a disk.
#[derive(Debug, Clone, Copy, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub enum PartitionTable {
    /// Master Boot Record (legacy DOS partition table).
    Mbr,
    /// GUID Partition Table (UEFI).
    Gpt,
    /// APM (Apple Partition Map) — PowerPC Mac.
    Apm,
    /// No partition table (superfloppy — single FS spanning the whole disk).
    None,
    /// Unknown / corrupted.
    Unknown,
}

/// Partition type identifier (MBR partition type byte or GPT partition type GUID).
#[derive(Debug, Clone, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub enum PartitionType {
    /// MBR 1-byte partition type.
    Mbr(u8),
    /// GPT partition type GUID.
    Gpt(String),
    /// APM partition type string.
    Apm(String),
}

/// Partition flag.
#[derive(Debug, Clone, Copy, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub enum PartitionFlag {
    /// Bootable.
    Boot,
    /// System partition.
    System,
    /// Hidden.
    Hidden,
    /// Read-only.
    ReadOnly,
    /// BitLocker-encrypted.
    Bitlocker,
    /// LDM (Logical Disk Manager — dynamic disk).
    Ldm,
    /// EFI System Partition.
    Efi,
    /// Microsoft Reserved.
    Msr,
    /// Recovery partition.
    Recovery,
    /// OEM partition.
    Oem,
}

/// A single partition on a disk.
#[derive(Debug, Clone, serde::Serialize, serde::Deserialize)]
pub struct Partition {
    /// 1-based partition index in the table.
    pub index: u32,
    /// Starting LBA.
    pub start_lba: u64,
    /// Length in blocks.
    pub block_count: u64,
    /// Partition type.
    pub partition_type: PartitionType,
    /// Flags.
    pub flags: Vec<PartitionFlag>,
    /// Detected filesystem (None if unknown).
    pub fs_type: Option<crate::fs::FileSystemType>,
    /// Volume label (if detected).
    pub label: Option<String>,
}

impl Partition {
    /// End LBA (exclusive).
    pub fn end_lba(&self) -> u64 {
        self.start_lba.saturating_add(self.block_count)
    }

    /// Size in bytes given a block size.
    pub fn bytes(&self, block_size: u32) -> u64 {
        self.block_count.saturating_mul(block_size as u64)
    }
}

/// A whole partition table.
#[derive(Debug, Clone, serde::Serialize, serde::Deserialize)]
pub struct PartitionTableEntry {
    /// Table type.
    pub table_type: PartitionTable,
    /// Partitions.
    pub partitions: Vec<Partition>,
}

impl PartitionTableEntry {
    /// Empty table of the given type.
    pub fn empty(table_type: PartitionTable) -> Self {
        Self {
            table_type,
            partitions: Vec::new(),
        }
    }
}
