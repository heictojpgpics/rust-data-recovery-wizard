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
