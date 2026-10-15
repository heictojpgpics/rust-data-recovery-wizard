# Filesystem Parser Architecture — Cross-FS Design Map

> Source: RTTI class-name strings extracted from 8 FS search DLLs.
> Method: `strings -n 6 <dll>` then regex-match MSVC RTTI mangled names (`.?AV<class>@@`).
> Analyst: Main agent (session 1) — 2026-10-15
> See: [`01_pe_inventory.md`](./01_pe_inventory.md) for binary metadata, [`04_strings_exports.md`](./04_strings_exports.md) for raw strings.

## 1. Common Interface Contracts (reconstructed)

Every FS DLL exports exactly 2 factory functions (Btrfs exports a "Complate" searcher — typo in source):

```cpp
// Export pattern (mangled C++, stdcall on x64 -> fastcall)
extern "C" __declspec(dllexport) IQuickFileSystemSearchController*
    EUCreate<FS>QuickSearcher(IStorageDevice* device, ...);

extern "C" __declspec(dllexport) ICompleteFileSystemSearchController*
    EUCreate<FS>Searcher(IStorageDevice* device, ...);
```

The DRW core (`DRWUI.exe`) loads the appropriate DLL based on detected filesystem, calls the factory, and operates on the returned searcher through the common interface.

## 2. Common Class Hierarchy (shared by ALL FS DLLs)

These class names appear in every FS search DLL's RTTI, indicating a shared base library (probably compiled into each DLL statically):

```
IFileSystemSearchController                  (base interface)
├── IQuickFileSystemSearchController         (quick scan interface)
└── ICompleteFileSystemSearchController      (deep scan interface)

IFileProperties                              (metadata accessor)
IStorageDevice                               (block device abstraction)
└── CStorageDeviceWithCache                  (cached read wrapper)

IDataRunList                                 (data run abstraction)
├── CResidentNTFSDataRunList                 (resident $DATA)
└── CNoneResidentNTFSDataRunList             (non-resident $DATA)

CFileSystemNode                              (tree node base)
└── CFileNode                                (file tree node)

CSearchedPartitionInfo                       (result holder)

IBuildVolumeBitmap                           (volume bitmap builder)
```

> Note: `CResidentNTFSDataRunList` and `CNoneResidentNTFSDataRunList` are NTFS-named but **appear in every FS DLL**, suggesting they are the canonical data run list types reused everywhere — even for FAT/exFAT/etc. This is a code-smell in the original; our Rust impl will use a clean generic `DataRun` type that doesn't carry NTFS naming.

## 3. Per-FS Implementation Map

### 3.1 NTFS (`NTFSSearchDLL.dll`, 577 KB)

```
CNTFSSearchController          : ICompleteFileSystemSearchController
CNTFSQuickSearch               : IQuickFileSystemSearchController
CNTFSQuickSearchBase           (helper base for CNTFSQuickSearch)
CNTFSFileProperties            : IFileProperties
CMFTInfo                       (reference-counted MFT record cache)
CNTFSFileRecordAttribute       (base attribute)
├── CNTFSFileRecordFileNameAttribute    ($FILE_NAME, type 0x30)
└── CNTFSFileRecordDataRunsAttribute    ($DATA, type 0x80)
CNTFSBuildVolumeBitmap         : IBuildVolumeBitmap
CSearchedNTFSPartitionInfo     : CSearchedPartitionInfo
```

**Confirmed behaviors (from strings):**
- Walks MFT records sequentially
- Looks for `$FILE_NAME` (type 0x30) attribute to identify MFT start sector
- Parses both resident and non-resident $DATA run lists
- Parses `$UsnJrnl:$J` for deleted file entries (USN journal recovery)
- Builds volume cluster bitmap from `$Bitmap` ($B)
- Reports physical memory and page file sizes (memory-aware caching)

### 3.2 FAT12/16/32 (`FATSearchDLL.dll`, 469 KB)

```
CFATTable                      (abstract base)
├── CFAT12Table                (12-bit FAT entries)
├── CFAT16Table                (16-bit FAT entries)
├── CFAT32Table                (32-bit FAT entries)
├── CDoubleFATTable            (FAT12/16 with 2 FAT copies)
└── CRealFATTable              (concrete single-FAT)
CFATDataRunList                : IDataRunList
CFATFileProperties             : IFileProperties
CFATQuickSearch                : IQuickFileSystemSearchController
CFatCompleteSearch             : ICompleteFileSystemSearchController  (casing inconsistent)
CFatFolderAnalyzeCB            (callback for folder traversal)
CFATSearchedPartitionInfo      : CSearchedPartitionInfo
CCalcPartition                 (partition size calc)
CFat32CalcPartition            : CCalcPartition  (note "at32" prefix from RTTI strip)
CRecycleBinNode2UI             (Recycle Bin adapter for UI tree)
CRawFileInfo                   (raw file info)
```

**Inferred behaviors:**
- Three concrete FAT table implementations (12/16/32-bit) plus a "double FAT" variant for volumes with 2 FAT copies (fault tolerance)
- Recycle Bin adapter — FAT has no native Recycle Bin, so EaseUS synthesizes one from `$RECYCLED.BIN` entries on the volume
- Folder analysis callback — streams directory entries without buffering the entire tree
- `CalcPartition` calculates partition size from BPB (BIOS Parameter Block)

### 3.3 exFAT (`exFATSearchDLL.dll`, 413 KB)

```
CExFatPartition                (base partition view)
CExFatPartitionEx              (extended partition view)
CExFatVolumeAnalyer            (note: "Analyer" typo in source; not "Analyzer")
CExFatQuickSearch              : IQuickFileSystemSearchController
CExFatQuickSearchEx            (extended quick search)
CExFatCompleteSearch           : ICompleteFileSystemSearchController
CExFatDataRunList              : IDataRunList
CExFatFileProperties           : IFileProperties
CQuickSearchAndBuildBitmap     : IQuickFileSystemSearchController, IBuildVolumeBitmap
CVolume                        (volume abstraction)
```

**Inferred behaviors:**
- exFAT uses a separate "QuickSearchEx" variant — probably handles the Allocation Bitmap and Up-Case Table distinctly
- "VolumeAnalyer" + "QuickSearchAndBuildBitmap" — combines bitmap construction with quick scan in a single pass
- exFAT directory entries are 32 bytes like FAT, but use a stream-based extension model (Generic Primary + Secondary entries)

### 3.4 HFS+ (`HFSPlusSearchDLL.dll`, 185 KB)

```
CHFSPlusCompleteFileSystemSearchController : ICompleteFileSystemSearchController
CHFSPlusQuickFileSystemSearchController   : IQuickFileSystemSearchController
CHFSPlusCatalog                (Catalog B-tree)
CHFSPlusExtents                (Extents Overflow B-tree)
CHFSPlusAttribute              (Attributes B-tree)
CHFSPlusBTreeOption            (B-tree query options)
CHFSPlusBTreeOptionBase        (B-tree option base)
CHFSPlusFileCache              (file content cache)
CHFSPlusFileNode               : CFileNode
CHFSPlusFileDataRun            : IDataRunList
CFSPlusFileDataRun             (alternate — note "FSPlus" without H prefix)
CHFSPlusFileProperties         : IFileProperties
CHFSPlusSystemNodeProperties   (system file metadata)
CHFSPlusRawfile                (raw file access)
CDirecotryTreeBuilder          (note: "Direcotry" typo)
CRetourDirectoryTree           (note: "Retour" — probably "Re-tour" / rebuilder)
CPartitionVirtualVolumeDevice  : IStorageDevice  (wraps a partition as a virtual volume)
```

**Inferred behaviors:**
- HFS+ uses three B-trees: Catalog (file/dir records), Extents (overflow extents), Attributes (extended attributes)
- B-tree query options object suggests flexible query patterns (range, exact, prefix)
- "DirectoryTreeBuilder" + "RetourDirectoryTree" — builds a fresh tree from B-tree walks
- "PartitionVirtualVolumeDevice" wraps a partition so HFS+ code can read it as if it were a whole volume (HFS+ can span multiple partitions via CoreStorage)

### 3.5 ext2/3/4 (`EXT4SearchDLL.dll`, 129 KB)

```
CEXT4QuickSearch               : IQuickFileSystemSearchController
CEXT4CompleteSearch            : ICompleteFileSystemSearchController
CEXT4FileProperties            : IFileProperties
CExt4DataRunList               : IDataRunList
CEXT4CatchBufferDeviceProxy    : IStorageDevice  (buffered device wrapper)
CEXT4CatchBufferObj            (buffer object)
CExt4Volume                    (volume abstraction — note lowercase "xt4" from RTTI strip)
```

**Inferred behaviors:**
- "CatchBuffer" — likely "CacheBuffer" (another typo) — wraps the device with read-ahead caching
- ext4 uses block groups; each has a superblock copy + group descriptor + inode table + data blocks
- ext4 supports extents (replacing direct/indirect/triple-indirect block pointers)
- ext4 journal (JBD2) — likely NOT parsed for recovery (since journal entries don't directly help recover deleted files); instead the scanner walks inodes directly

### 3.6 Btrfs (`BtrfsSearchDLL.dll`, 150 KB)

```
CBtrfsQuickSearch              : IQuickFileSystemSearchController  (note: only Quick — no Complete)
CBtrfsFileProerties            : IFileProperties  (note: "Proerties" typo — missing 'p')
CBtrfsNoResidentDataRunList    : IDataRunList
CSearchedBtrfsPartitionInfo    : CSearchedPartitionInfo
```

**Exports:** `EUCreateBtrfsComplateSearcher`, `EUCreateBtrfsQuickSearcher`

> Note: Source has **two typos** in Btrfs: "Proerties" (FileProperties) and "Complate" (Complete). We will not propagate these typos to our Rust impl.

**Inferred behaviors:**
- Btrfs uses a B-tree of extents (not inodes directly). Each inode has a root in the tree of roots.
- "NoResident" data run list (note: "No" not "Non") — Btrfs extents are always "non-resident" in NTFS terms (extents live in the extent tree, not in the inode).
- Btrfs supports subvolumes, snapshots, compression (zlib/lzo/zstd), and RAID (DRAID/RAID1C/RAID56).
- The shipped Btrfs scanner is **quick-only** — no deep scanner. This suggests Btrfs deep scan was not implemented (or ships in a different DLL).

### 3.7 ReFS (`ReFSSearchDLL.dll`, 154 KB)

```
CefsSearchController           : ICompleteFileSystemSearchController  (note: "efs" — RTTI stripped 'R')
CefsQuickSearchFiles           : IQuickFileSystemSearchController
CReFSDataRunList               : IDataRunList
CRefsResidentDataRunList       : IDataRunList
```

**Inferred behaviors:**
- ReFS (Resilient File System) uses B+ trees for everything (similar to HFS+ but different format)
- ReFS stores metadata in "object IDs" — every object has a 16-byte GUID
- "ResidentDataRunList" exists for ReFS — meaning some small data can be inline in the metadata (similar to NTFS resident $DATA)
- ReFS supports integrity streams, storage spaces, mirror acceleration
- Note: Microsoft has deprecated ReFS in client Windows; this scanner likely only useful on Server 2016+ volumes

### 3.8 ZFS (`ZfsSearchDLL.dll`, 275 KB)

```
(lambda_0de675be5758ce6987235b1921f77d8b)   (anonymous C++ lambdas)
(lambda_1e42c831661bdcb328ff1e44648de476)
(lambda_3cb9c92493e028cf5c8b2967fd6ee510)
```

**Exports:** `EUCreateZFSSearcher`, `EUCreateZFSQuickSearcher`

**Inferred behaviors:**
- ZFS implementation is heavily templated (only lambdas in RTTI = anonymous template instantiations)
- ZFS uses uberblocks, blkptr_t (block pointers), dsl (dataset layer), zap (ZFS attribute processor), arc (adaptive replacement cache)
- ZFS is incredibly complex (pool → dataset → filesystem → snapshot) — likely only the storage pool layer is parsed
- Used for NAS recovery (Synology/BUFFALO/etc. that use ZFS)

## 4. RAW File Carving (`RAWSearchDLL.dll`)

See [`00_source_inventory.md` §6](./00_source_inventory.md#6-raw-file-carving-engine-rawsearchdlldll) for the analyser registry.

**Search algorithm pattern (reconstructed from class names + exports):**

```
1. EUCreateRAWSearcher(device, opts) -> IRawSearcher
2. EUGetAnalyserList() -> [IRawFileAnalyser*]  (flat list)
3. EUGetAnalyserMap() -> map<magic, IRawFileAnalyser*>  (one analyser per magic)
4. EUGetAnalyserMultimap() -> multimap<magic, IRawFileAnalyser*>  (multiple analysers per magic for ambiguous types)
5. searcher.scan(progress_cb) -> IIterator<CRawFileInfo*>
6. for each CRawFileInfo*:
     - header_match (offset, pattern, weight)
     - tail_match (offset, pattern, weight) — optional
     - min_size, max_size bounds
     - analyser-specific validation (e.g., PDF must have %%EOF, RAR must have RAR_EOF, etc.)
     - if all checks pass -> emit CRawFileInfo with carved metadata
```

## 5. Cross-FS Design Lessons for Our Rust Implementation

### 5.1 Trait Hierarchy (our Rust equivalent)

```rust
// src-rust/fs/mod.rs
pub trait FileSystemSearcher: Send + Sync {
    fn fs_type(&self) -> FsType;
    fn quick_scan(&mut self, progress: &dyn Progress) -> Result<ScanResult>;
    fn complete_scan(&mut self, progress: &dyn Progress) -> Result<ScanResult>;
}

pub trait FileProperties: Send + Sync {
    fn name(&self) -> &str;
    fn size(&self) -> u64;
    fn timestamps(&self) -> FileTimestamps;
    fn attributes(&self) -> FileAttributes;
    fn is_deleted(&self) -> bool;
    fn is_orphaned(&self) -> bool;
    fn data_runs(&self) -> &[DataRun];
}

pub trait StorageDevice: Send + Sync {
    fn read_block(&self, lba: u64, buf: &mut [u8]) -> io::Result<()>;
    fn block_size(&self) -> u32;
    fn total_blocks(&self) -> u64;
}

pub trait DataRunList: Send + Sync {
    fn runs(&self) -> &[DataRun];
    fn total_size(&self) -> u64;
    fn is_resident(&self) -> bool;
}

pub struct DataRun {
    pub start_lba: u64,
    pub length_blocks: u64,
}
```

### 5.2 What we keep from EaseUS

- ✅ **Per-FS DLL separation** — we use per-FS Cargo crates (`rdw-ntfs`, `rdw-fs-fat`, `rdw-fs-exfat`, `rdw-fs-hfs`, `rdw-fs-ext`, `rdw-fs-btrfs`, `rdw-fs-refs`, `rdw-fs-zfs`)
- ✅ **Quick vs Complete scan duality** — quick scan walks only FS metadata, complete scan also does RAW carving + lost file detection
- ✅ **Analyser registry for RAW** — `trait FileAnalyser` with `matches_magic()`, `validate_header()`, `validate_tail()`, `extract_metadata()`
- ✅ **Cached storage device** — `CachedStorageDevice` wraps raw block device with LRU cache
- ✅ **Progress callback** — same pattern, but Rust-style trait object instead of function pointer
- ✅ **Partition info result holder** — `SearchedPartitionInfo` struct

### 5.3 What we improve

- ❌ **No NTFS-named types in non-NTFS crates** — EaseUS leaks `CResidentNTFSDataRunList` everywhere; we use a generic `DataRunList`
- ❌ **No typo classes** — our Rust impl uses correctly-spelled `FileProperties`, `DirectoryTreeBuilder`, `VolumeAnalyzer`, `Complete`, etc.
- ❌ **No leaky template instantiations in public RTTI** — Rust doesn't have RTTI leak by default
- ❌ **No proprietary logging interface** — we use the `tracing` crate ecosystem
- ❌ **No NSIS downloader stub** — our installer is built via `cargo-tauri` + `cargo-wix` (MSI) + MSIX
- ❌ **No proprietary cloud integrations** — our v1 is local-only; cloud comes later via plugins
- ❌ **No bundled driver** — we use Windows' native IOCTLs + the existing `fsutil` / WMI for disk enumeration

### 5.4 Memory-safety wins

- All pointer arithmetic in EaseUS is manual `u8*` math. Our Rust parsers use `nom` or `zerocopy` for byte-level parsing with bounded bounds checking.
- All async I/O in EaseUS is overlapped Win32. Our Rust uses `tokio-uring` (Linux dev) or `tokio` + IOCP (Windows prod via `miow`).
- All caching in EaseUS is custom LRU. Our Rust uses `moka` (high-performance concurrent cache).

## 6. Implementation Priority

For v1 (Windows, hardware disks + SD cards):

| Priority | FS | Why |
|----------|----|----|
| P0 | NTFS | Default Windows FS — 95% of users |
| P0 | FAT32 | SD cards, USB sticks, cameras |
| P0 | exFAT | Large SD cards, external SSDs |
| P0 | RAW carving | Last-resort recovery for all FS |
| P1 | BitLocker | Common on enterprise Windows |
| P1 | Partition recovery | Required for "lost partition" scenarios |
| P2 | HFS+ | Mac-formatted external drives |
| P2 | ext4 | Linux-formatted drives |
| P3 | ReFS | Niche — Windows Server only |
| P3 | Btrfs | Niche — Linux power users |
| P3 | ZFS | Niche — NAS / FreeBSD / Solaris |

## 7. Cross-References

- [`00_source_inventory.md`](./00_source_inventory.md) — top-level architecture
- [`01_pe_inventory.md`](./01_pe_inventory.md) — PE binary dump
- [`03_directory_layout.md`](./03_directory_layout.md) — folder structure
- [`05_algorithms.md`](../algorithms/05_algorithms.md) — algorithm details (WIP)
- [`../fs-parsers/`](../fs-parsers/) — per-FS deep dives (WIP)
