# Project Status

## Current Phase: 1 — Research & Reverse Engineering

| Task | Status | Owner | Notes |
|------|--------|-------|-------|
| Download EaseUS installers + zips | ✅ Done | Agent | 4 files, 339MB |
| Install RE toolchain | ✅ Done | Agent | pefile, rabin2, r2, Ghidra headless, ILSpy, FLOSS |
| Merge Part 1 + Part 2 zips | ✅ Done | Agent | 1470 files, 674MB |
| Extract NSIS installer stub | ✅ Done | Agent | Confirms it's a downloader |
| PE identification of all binaries | 🚧 In progress | Agent | Mapping .NET vs native |
| Static strings + imports analysis | 🚧 In progress | Agent | Routing to ILSpy or Ghidra |
| Decompile .NET assemblies | ⏳ Pending | Agent | ILSpyCmd |
| Decompile native PEs | ⏳ Pending | Agent | Ghidra headless |
| Architecture map | ⏳ Pending | Agent | Process tree, IPC, services |
| Algorithm extraction | ⏳ Pending | Agent | Per FS parser + carving |
| Rust core skeleton | ⏳ Pending | Agent | Cargo workspace |
| Tauri shell + basic UI | ⏳ Pending | Agent | |
| CI workflows | ⏳ Pending | Agent | |
| Validation repo | ⏳ Pending | Agent | |

## Roadmap

### Phase 1 — Research (current)
Map 100% of the EaseUS architecture, algorithms, and feature surface. Produce docs that any future agent can use as ground truth.

### Phase 2 — Core Engine (Rust)
Implement: NTFS parser → FAT parser → exFAT parser → RAW carving engine → signature DB. Each with unit tests against golden images.

### Phase 3 — Tauri Shell + UI
Disk selector → scan progress → results tree → preview → recover. Basic, functional, responsive. Redesign later.

### Phase 4 — CI + Validation Repo
GitHub Actions: fmt, clippy, test, build (Debug+Release), package (ZIP+MSI+MSIX). Separate validation repo with Windows runners that install the build, scan a fixture disk image, and assert recovery success.

### Phase 5 — Parity + Polish
Benchmark against EaseUS on identical disk images. Match recovery rate, then improve.

### Phase 6 — Expansion (later)
macOS port. Add: crashed PC rescue, NAS/Linux recovery, RAID recovery, cloud recovery, full disk image recovery, disk health.
