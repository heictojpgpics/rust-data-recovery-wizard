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
## 2026-10-15 13:21 UTC — Agent: Main (session 1) — Task: 1

**Actions:**
- Created project directory structure under `/home/z/my-project/`.
- Downloaded all 4 EaseUS artifacts: 2 zip parts (339MB total), 1 macOS DMG (4.6MB), 1 Windows NSIS installer (2.8MB).
  - SHA-256: see `docs/reverse-engineering/00_source_inventory.md`.
- Installed RE toolchain in userspace (no root access):
  - Python: pefile, capstone, pyelftools, yara-python, frida, frida-tools, zstandard.
  - Pre-built binaries: 7zz 24.09, radare2 5.9.8 (with wrapper for LD_LIBRARY_PATH).
  - .NET SDK 10.0.402 + ILSpyCmd 11.1.0.9782.
  - OpenJDK 21 (Temurin) + Ghidra 11.3.2 headless.
  - FLOSS via pip.
- Extracted both zip parts and merged into `extracted/merged/` (1470 files, 674MB).
- Extracted NSIS installer stub with 7zz — confirmed it's a downloader stub, not the actual installer payload.
- Created GitHub repo `heictojpgpics/rust-data-recovery-wizard` (public).
- Initial repo structure with docs/ tree, src-rust/ workspace skeleton, src-ui/, src-tauri/, .github/workflows/.

**Stage Summary:**
- Artifacts: `downloads/`, `extracted/merged/`, repo skeleton pushed.
- Key finding: EaseUS DRW ships 8 per-filesystem search DLLs (NTFS, FAT, exFAT, HFS+, ext4, Btrfs, ReFS, ZFS) + `RAWSearchDLL.dll` (file carving) + `PE_Tools.dll` (PE analysis). UI is Qt5-based (`DRWUI.exe`, 30MB). Background service is `DRWService.exe`. Cloud integrations: Aliyun (Alibaba), iCloud, Firebase. The internal project name is `DRWIntelligentScan` with sub-component `DRWLoader` (per PDB path embedded in `DRW.exe`).
- Next: Static analysis pass on all PE binaries → route .NET to ILSpy, native to Ghidra → algorithm extraction.
