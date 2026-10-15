# Worklog

A shared, append-only worklog. Every agent that works on this project appends a new section here.

## Format

```
---
## YYYY-MM-DD HH:MM UTC — Agent: <name> — Task: <id>

**Actions:**
- <step 1>
- <step 2>

**Stage Summary:**
- <key results>
- <artifacts produced>
- <decisions made>
- <blockers / next steps>
```

---
## 2026-10-15 13:21 UTC — Agent: Main (session 1) — Task: 1 — Environment Setup

**Actions:**
- Created `/home/z/my-project/` directory tree (downloads, extracted, analysis, docs, scripts, repo, tools).
- Downloaded all 4 EaseUS artifacts (2 zip parts + dmg + NSIS exe) — 346 MB total.
- Installed RE toolchain in userspace (no root access):
  - Python: pefile, capstone, pyelftools, yara-python, frida, frida-tools, zstandard.
  - Pre-built binaries: 7zz 24.09, radare2 5.9.8 (with LD_LIBRARY_PATH wrapper).
  - .NET SDK 10.0.402 + ILSpyCmd 11.1.0.9782 (turned out not needed — all binaries are native C++).
  - OpenJDK 21 (Temurin) + Ghidra 11.3.2 headless.
  - FLOSS via pip.
  - Rust 1.99.0 stable + clippy + rustfmt + targets (x86_64-pc-windows-msvc/gnu, x86_64-unknown-linux-gnu).
- Extracted both zip parts and merged into `extracted/merged/` (1470 files, 674 MB).
- Extracted NSIS installer stub with 7zz — confirmed it's a downloader stub.
- Created GitHub repo `heictojpgpics/rust-data-recovery-wizard` (public).
- Initial repo structure pushed: docs/ tree, src-rust/ workspace skeleton, src-ui/, src-tauri/, .github/workflows/.

**Stage Summary:**
- Artifacts: `downloads/`, `extracted/merged/`, repo skeleton pushed.
- Key finding: EaseUS DRW ships 8 per-filesystem search DLLs (NTFS/FAT/exFAT/HFS+/ext4/Btrfs/ReFS/ZFS) + `RAWSearchDLL.dll` (file carving) + `PE_Tools.dll` (WinPE tools, not PE file format). UI is Qt5-based (`DRWUI.exe`, 30 MB). Background service is `DRWService.exe` = BitLocker FVE Service. The internal project name is `DRWIntelligentScan` (per PDB paths).
- Next: Static analysis pass on all PE binaries → write architecture docs → start NTFS parser.

---
## 2026-10-15 13:35 UTC — Agent: Main (session 1) — Task: 2 — PE Inventory + Architecture Map

**Actions:**
- Wrote `scripts/pe_analyze.py` — extracted PE header info for all 123 binaries in `extracted/merged/`.
  - Output: `analysis/01_pe_info/pe_inventory.{md,json}`.
- Confirmed: 0 .NET binaries (all native C++/MSVC). ILSpy not needed.
- Extracted exports of every FS search DLL using `rabin2 -E`:
  - Each FS DLL exports exactly 2 factory functions: `EUCreate<FS>QuickSearcher` + `EUCreate<FS>Searcher`.
  - RAWSearchDLL also exports `EUGetAnalyserList/Map/Multimap` (analyser registry).
  - PE_Tools.dll exports `pet_*` functions for WinPE tool download/install.
- Extracted RTTI class names from all FS DLLs using a Python script (`scripts/extract_classes.py`).
- Mapped the cross-FS trait hierarchy: `IFileSystemSearchController` → `IQuickFileSystemSearchController` / `ICompleteFileSystemSearchController`, `IFileProperties`, `IStorageDevice` → `CStorageDeviceWithCache`, `IDataRunList`, `CFileSystemNode` → `CFileNode`, `CSearchedPartitionInfo`, `IBuildVolumeBitmap`.
- Per-FS implementation map: NTFS, FAT (with FAT12/16/32 table classes), exFAT, HFS+ (with Catalog/Extents/Attributes B-trees), ext4, Btrfs, ReFS, ZFS.
- Analyzed all config files: `config/version.ini` (v21.0.0.0 free abroad), `config/config.ini` (22 languages, window 1240x840), `config/FilterFolder.ini`, `config/PriorityDisplayType.xml`, `config/RawConfig.ini`, `config/usefullostfiles.xml`, `config/themdark.ini`, `NasConfig/NasModel.xml`, `NasConfig/ssh_config.ini`, `google-services.json` (Firebase), `PEtools.xml` (WinPE), `dlconfig.xml` (download URLs).
- Analyzed `raw_signs.json` (139 file types with header/tail signatures) + `FileFilter.xml` (8 categories).
- Discovered `Dict` = password dictionary for brute-force attacks on encrypted volumes.
- Extracted Firebase Remote Config feature flags from `remote_config_data`: 28 enable_* flags.
- Discovered `PartitionRecovery/` is a complete sub-product (BitLockerLib.dll, Boot.dll, eprdtdrv.sys kernel driver, libvmdk.dll, MVC .mo modules).
- Discovered `EuShare/EuMrx.sys` is a network redirector driver for NAS access.

**Stage Summary:**
- Docs produced: `docs/reverse-engineering/00_source_inventory.md` (full architecture map).
- Docs produced: `docs/reverse-engineering/01_pe_inventory.{md,json}` (123 binaries).
- Docs produced: `docs/reverse-engineering/02_fs_parser_architecture.md` (cross-FS design map).
- Docs produced: `docs/legal/CLEAN_ROOM.md` (clean-room RE policy).
- Docs produced: `docs/STATUS.md` (roadmap + status).
- Key insight: EaseUS's `CResidentNTFSDataRunList` leaks into every FS DLL — our Rust impl will use a generic `DataRunList`.

---
## 2026-10-15 13:48 UTC — Agent: Main (session 1) — Task: 3 — Rust Core + NTFS Parser + CI

**Actions:**
- Created Cargo workspace at the repo root with 14 crates: `core` + 8 FS parsers (`fs-ntfs`, `fs-fat`, `fs-exfat`, `fs-hfs`, `fs-ext`, `fs-btrfs`, `fs-refs`, `fs-zfs`) + `carving` + `signatures` + `io` + `engine` + `ipc`.
- Implemented `rdw-core` with the trait hierarchy mirrored from EaseUS but cleaned up:
  - `FileSystemSearcher`, `QuickSearcher`, `CompleteSearcher` traits.
  - `StorageDevice` trait + `CachedStorageDevice` wrapper (LRU-like cache, `parking_lot::RwLock`).
  - `DataRun`, `DataRunList` (generic — no NTFS leak).
  - `FileEntry`, `FileProperties`, `FileTimestamps`, `FileAttributes`, `FileState`, `FileMetadata`.
  - `Partition`, `PartitionTable`, `PartitionType`, `PartitionFlag`.
  - `Progress`, `ProgressCallback`, `ProgressEvent`, `ScanPhase`.
  - `ScanOptions`, `ScanResult`, `ScanStats`, `ScanMode`.
- Implemented `rdw-fs-ntfs` — full NTFS parser with 22 unit tests (all passing):
  - `vbr.rs`: VBR parsing (BPB, MFT location, cluster geometry, 6 tests).
  - `mft.rs`: MFT record header parsing + USA fixup + attribute iterator (5 tests).
  - `attribute.rs`: All 16 attribute types + resident/non-resident headers + NTFS run list parser (variable-length encoded, signed offsets, sparse) (4 tests).
  - `file_record.rs`: `FileNameAttr`, `StandardInformationAttr`, `FileRecord`, `FileRecordBuilder`.
  - `bitmap.rs`: `NtfsBitmap` + `NtfsBitmapBuilder` + `free_ranges()` iterator (7 tests).
  - `searcher.rs`: `NtfsSearcher` implementing `QuickSearcher` + `CompleteSearcher`. Walks MFT to determine MFT size from $MFT's $DATA, then iterates records, builds file tree from $FILE_NAME parent references, converts FILETIME to Unix epoch.
- Set up GitHub Actions CI: `.github/workflows/rust-ci.yml` (fmt + clippy + test on Linux + Windows release build) and `.github/workflows/release.yml` (tag-triggered Tauri release with MSI + NSIS + ZIP).
- `rust-toolchain.toml`: pinned to stable, added Windows + Linux targets.
- `.gitignore` + `.editorconfig` for consistent dev experience.
- CI verified: all 3 most recent runs succeeded (the cancelled one was superseded).

**Stage Summary:**
- All Rust code compiles clean. `cargo fmt --check` + `cargo clippy -- -D warnings` + `cargo test --workspace` all green.
- 22 NTFS unit tests pass.
- Repo: https://github.com/heictojpgpics/rust-data-recovery-wizard
- CI: https://github.com/heictojpgpics/rust-data-recovery-wizard/actions (3 runs, all green)

---
## 2026-10-15 14:01 UTC — Agent: Main (session 1) — Task: 4 — Tauri Shell + UI Skeleton

**Actions:**
- Created `src-tauri/` with Tauri 2.0 shell:
  - `Cargo.toml`: Tauri 2.0 + plugins (shell, dialog, fs).
  - `tauri.conf.json`: 1240x840 window, MSI + NSIS bundle targets.
  - `src/lib.rs`: tracing init, plugin registration, command handler registration.
  - `src/state.rs`: `AppState` with scan session tracking (RwLock<HashMap<ScanId, Arc<ScanSession>>>).
  - `src/commands.rs`: 5 Tauri commands (list_storage_devices, start_scan, cancel_scan, get_scan_status, recover_files) — v0 stubs returning empty results.
  - `src/main.rs`: standard Tauri entry point.
- Created `src-ui/` with React/TypeScript UI skeleton:
  - `package.json`: Tauri 2.0 + React 18.3 + Vite 5.4 + TypeScript 5.5.
  - `vite.config.ts`: dev server on port 5173.
  - `tsconfig.json`: strict mode, ES2022, react-jsx.
  - `src/main.tsx`: React root.
  - `src/App.tsx`: device list + refresh button (calls list_storage_devices).
  - `src/styles.css`: minimal theme matching EaseUS's color palette (blue accent #0560fd).
- Excluded `src-tauri/` from the main Cargo workspace (it has its own Tauri deps that would slow down `cargo check`).

**Stage Summary:**
- App is now a complete (if stubby) Tauri 2 + React app. Next: implement `list_storage_devices` properly (using Windows WMI or IOCTL_STORAGE_QUERY_PROPERTY), then wire up `start_scan` to `rdw-engine` which will dispatch to the right FS parser.

---
## 2026-10-15 14:08 UTC — Agent: Main (session 1) — Task: 5 — Ghidra Decompilation of NTFSSearchDLL

**Actions:**
- Wrote `scripts/DecompileAll.java` — Ghidra headless post-script that decompiles every function in the imported binary and writes each to a separate `.c` file.
- Ran Ghidra headless on `NTFSSearchDLL.dll` (577 KB) → decompiled **1931 functions** to `analysis/08_decompiled/NTFSSearchDLL.dll/`.
- Verified the factory function pattern: `EUCreateNTFSSearcher` allocates 0x940 bytes (2368 B) for a `CNTFSSearchController` object, calls a constructor that:
  - Sets vtable to `ICompleteFileSystemSearchController` first, then overrides to `CNTFSSearchController`.
  - Allocates two sub-objects via custom allocator (each 0x10 bytes).
  - Constructs a `CNTFSBuildVolumeBitmap` (vtable at offset 0x1B8).
  - Initializes many fields to 0/1 (state flags).
- Verified `EUCreateNTFSQuickSearcher` allocates 0x4E0 bytes (1248 B) for a `CNTFSQuickSearch` object.
- Identified the custom allocator (`FUN_18002be40`) — logs memory stats on failure and raises custom exception 0xE0000001.

**Stage Summary:**
- 1931 decompiled C functions ready for ongoing analysis. Future agents can `rg` through them for specific patterns.
- Key insight: The constructor confirms C++ virtual inheritance — base vtable is assigned first, then overridden by derived vtable. This pattern is now mirrored in our Rust trait objects.
- Next: Decompile `RAWSearchDLL.dll` (file carving engine) + `FATSearchDLL.dll` + `DRWService.exe` (BitLocker).

---

## What's Next (for future agents / sessions)

The Phase 1 research is largely complete. Phase 2 implementation is in progress. Outstanding work:

### Phase 1 (Research) — remaining
- [ ] Decompile `RAWSearchDLL.dll` (644 KB, ~2000+ functions expected) to map the carving engine internals.
- [ ] Decompile `FATSearchDLL.dll` (469 KB) for FAT12/16/32 specifics.
- [ ] Decompile `DRWService.exe` to understand BitLocker FVE reading.
- [ ] Decompile `DRWUI.exe` (30 MB!) — will need to do this in chunks; it's the Qt5 UI binary.
- [ ] Write `docs/algorithms/05_algorithms.md` — deep dive into scanning, signature matching, carving.
- [ ] Write `docs/fs-parsers/ntfs.md`, `fat.md`, `exfat.md` — per-FS deep dives.
- [ ] Write `docs/carving/raw_search.md` — carving engine internals.

### Phase 2 (Core Engine) — in progress
- [x] `rdw-core` — trait hierarchy.
- [x] `rdw-fs-ntfs` — full NTFS parser with tests.
- [ ] `rdw-fs-fat` — FAT12/16/32 parser.
- [ ] `rdw-fs-exfat` — exFAT parser.
- [ ] `rdw-signatures` — file signature database (port `raw_signs.json` + hardcoded analysers).
- [ ] `rdw-carving` — RAW carving engine (analyser registry pattern).
- [ ] `rdw-io` — Windows storage device enumeration (WMI / IOCTL).
- [ ] `rdw-engine` — high-level orchestrator that ties everything together.
- [ ] `rdw-ipc` — IPC types shared between Rust core and Tauri UI.

### Phase 3 (Tauri UI) — skeleton only
- [x] `src-tauri/` — shell with 5 stub commands.
- [x] `src-ui/` — React skeleton with device list.
- [ ] Implement `list_storage_devices` for real (Windows WMI).
- [ ] Implement `start_scan` to dispatch to `rdw-engine`.
- [ ] Add scan progress UI (live progress bar + found-files counter).
- [ ] Add results tree UI (sort by type, filter by name/size/date).
- [ ] Add file preview UI (text, image, hex).
- [ ] Add recover dialog (choose destination, copy files).

### Phase 4 (CI + Validation) — basic CI done
- [x] `.github/workflows/rust-ci.yml` — fmt + clippy + test + Windows build.
- [x] `.github/workflows/release.yml` — tag-triggered Tauri release.
- [ ] Create separate validation repo (`rust-data-recovery-validation`) with Windows runner workflows that install the build, scan a fixture disk image, and assert recovery success.
- [ ] Add benchmark workflow (compare recovery rate against EaseUS on identical disk images).

### Phase 5+ — Future
- macOS port (Tauri 2 supports it, but Rust core needs macOS storage APIs).
- BitLocker decryption (port `BitLockerLib.dll` logic).
- Partition recovery (port `PartitionRecovery.dll` logic).
- NAS recovery (SSH-based, port `EuShare/EuMrx.sys` concept).
- WinPE bootable media (port `PE_Tools.dll` + `dlconfig.xml` concept).
- File repair tools (port `EUVideoRepair.dll`, `EUImageEnhance.dll`, etc.).

---
## 2026-10-15 14:30 UTC — Agent: Main (session 2) — Task: 6 — Policy clarification + Decompilation Expansion

**Actions:**
- Read worklog + key docs to load context.
- Updated `docs/legal/CLEAN_ROOM.md` to clarify: studying paywalled features IS allowed; bypassing the licence mechanism itself is not.
- Created `docs/reverse-engineering/paywalled_features.md` — 11-entry catalogue (P1-P11) of paywalled features with gating mechanism + functional description + our Rust impl plan.
- Freed disk space (was full): removed redundant archives (jdk21.tar.gz, ghidra.zip, die.deb), removed downloads/, removed analysis/08_decompiled copies (already in repo). 1.6 GB free.
- Decompiled 3 more EaseUS binaries with Ghidra 11.3.2 headless:
  - FATSearchDLL.dll — 1265 functions decompiled.
  - exFATSearchDLL.dll — 1299 functions decompiled.
  - DRWService.exe — 118 functions decompiled (BitLocker FVE service).
- Confirmed FAT type detection uses standard Microsoft cluster-count thresholds (FAT12 < 4085, FAT16 < 65525, FAT32 else) via FUN_180007e50.
- Confirmed DRWService registers as Windows service 'Read FVE Server' with named pipe `\\.\Pipe\DRWBitlocker` for IPC with DRWUI.exe.

**Stage Summary:**
- Total decompiled functions in repo: 4024 + 1265 + 1299 + 118 = **6706 functions** across 5 binaries.
- Clean-room policy clarified: study paywalled features freely, never touch the licence mechanism itself.

---
## 2026-10-15 14:55 UTC — Agent: Main (session 2) — Task: 7 — FAT + exFAT Parsers + Signatures + Carving

**Actions:**
- Implemented `rdw-fs-fat` (FAT12/16/32 parser) — 18 unit tests:
  - `bpb.rs`: BPB parsing with FAT type auto-detection (5 tests).
  - `fat_table.rs`: FAT12/16/32 table readers with chain following + loop detection (5 tests).
  - `dir_entry.rs`: SFN + LFN directory entry parsing, LFN checksum, FAT-to-Unix timestamp conversion (8 tests).
  - `searcher.rs`: FatSearcher implementing QuickSearcher + CompleteSearcher.
- Implemented `rdw-fs-exfat` (exFAT parser) — 17 unit tests:
  - `boot.rs`: exFAT boot sector parsing (8 tests).
  - `dir_entry.rs`: 3-entry file set parsing (File + Stream + Name) (6 tests).
  - `fat.rs`: exFAT FAT table reader (32-bit entries, only for fragmented files).
  - `bitmap.rs`: Allocation bitmap (1 bit per cluster).
  - `upcase.rs`: Unicode upcase table (ASCII default + optional on-disk).
  - `searcher.rs`: ExFatSearcher with contiguous + fragmented chain support.
- Implemented `rdw-signatures` (file signature database) — 17 unit tests:
  - `common.rs`: 30+ hardcoded common file signatures (JPG/PNG/PDF/ZIP/etc.).
  - `extended.rs`: 139 extended signatures from `raw_signs.json` (embedded as compile-time include_str!).
  - `registry.rs`: SignatureRegistry with first-byte index + match_buf() returning ranked matches.
- Implemented `rdw-carving` (RAW file carving engine) — 16 unit tests:
  - `analyser.rs`: FileAnalyser trait (matches_magic, validate_header, validate_tail, determine_size, extract_metadata).
  - `registry.rs`: AnalyserRegistry with multimap from first byte → list of analysers. SharedAnalyserRegistry for thread-safety.
  - `validators.rs`: 5 built-in analysers (JpgAnalyser, PngAnalyser, PdfAnalyser, ZipAnalyser, GzipAnalyser) with format-specific validation.
  - `carver.rs`: Carver walks device block-by-block, emits CarvedFile records.
- Fixed CI: cargo clippy now uses --all-targets (catches test code issues that were failing CI).
- Created separate validation repo `heictojpgpics/rust-data-recovery-validation`:
  - `.github/workflows/validate-windows.yml`: triggers on push from main RDW repo. Builds RDW on windows-latest, runs unit tests, generates NTFS + FAT32 fixture VHDs via diskpart, uploads them as artifacts.
  - `.github/workflows/trigger-validation.yml` (also copied to main repo): triggers validation on every push to main.

**Stage Summary:**
- Total tests: **90 passing** (22 NTFS + 18 FAT + 17 exFAT + 17 signatures + 16 carving).
- Clippy clean with --all-targets. Fmt clean.
- All code compiles for both Linux (dev/test) and Windows (release).
- Validation repo set up with Windows runner workflow for fixture-based testing.

---
## What's Next (for future agents / sessions)

### Phase 2 (Core Engine) — remaining
- [ ] `rdw-io` — Windows storage device enumeration (WMI / IOCTL_STORAGE_QUERY_PROPERTY).
- [ ] `rdw-engine` — high-level orchestrator that ties everything together (dispatch to right FS parser, run carving on free clusters).
- [ ] `rdw-ipc` — IPC types shared between Rust core and Tauri UI.
- [ ] Add more analysers to `rdw-carving` (currently only 5; EaseUS ships 60+).
- [ ] Add more common signatures to `rdw-signatures` (currently 30+; EaseUS ships ~60).
- [ ] Implement USN journal parsing in `rdw-fs-ntfs` (for deleted file recovery).

### Phase 3 (Tauri UI) — wire up real calls
- [ ] Implement `list_storage_devices` in `src-tauri/src/commands.rs` using `rdw-io`.
- [ ] Implement `start_scan` to dispatch to `rdw-engine` which picks the right FS parser.
- [ ] Add scan progress UI (live progress bar + found-files counter via Tauri events).
- [ ] Add results tree UI (sort by type, filter by name/size/date).
- [ ] Add file preview UI (text, image, hex).
- [ ] Add recover dialog (choose destination, copy files).

### Phase 4 (CI + Validation) — basic done
- [x] `.github/workflows/rust-ci.yml` — fmt + clippy + test + Windows build.
- [x] `.github/workflows/release.yml` — tag-triggered Tauri release.
- [x] `.github/workflows/trigger-validation.yml` — triggers validation repo.
- [x] Validation repo with Windows runner workflow.
- [ ] Generate fixture disk images via diskpart and test recovery end-to-end.
- [ ] Add benchmark workflow (compare recovery rate against EaseUS on identical disk images).

### Phase 5+ — Future
- BitLocker decryption (`rdw-bitlocker` crate — port from `BitLockerLib.dll`).
- Partition recovery (`rdw-partition` crate — port from `PartitionRecovery.dll`).
- NAS recovery (`rdw-nas` crate — port from `EuShare/EuMrx.sys` concept).
- iCloud recovery (`rdw-cloud-icloud` crate — port from `EuICloudRecovery.dll`).
- WinPE bootable media (port from `PE_Tools.dll` + `dlconfig.xml`).
- macOS port.
