# Rust Data Recovery Wizard (RDW)

A state-of-the-art, free, open-source data recovery wizard for Windows (macOS roadmap), built from the ground up in **Rust + Tauri 2 + React/TypeScript**.

## Project Origin

This project is a **clean-room reimplementation** of the architectural concepts behind EaseUS Data Recovery Wizard. We study how the original product behaves, extract functional understanding, and implement an original Rust version. **No assets, strings, icons, or trade dress are copied.** **No license/activation mechanisms are patched, bypassed, or emulated.** Both omissions are deliberate legal and ethical decisions, documented in [docs/legal/CLEAN_ROOM.md](docs/legal/CLEAN_ROOM.md).

## Tech Stack

| Layer | Technology | Rationale |
|-------|-----------|-----------|
| Core recovery engine | Rust (stable) | Memory safety, zero-cost abstractions, fearless concurrency |
| IPC + native shell | Tauri 2 (WebView2) | Tiny binary, native performance, no Electron bloat |
| UI | React + TypeScript + Canvas | Component reusability, type safety, custom-drawn previews |
| Build | Cargo + Vite + tauri-cli | Reproducible, fast incremental builds |
| CI/CD | GitHub Actions (Windows runners) | Native Windows binary verification |
| Distribution | ZIP + MSI + MSIX | Industry-standard Windows installers |

## Status

🚧 **Phase 1: Research & Architecture** — Reverse-engineering EaseUS to map architecture, algorithms, and feature set.

See [docs/STATUS.md](docs/STATUS.md) for the live roadmap.

## Repository Layout

```
docs/                # All architecture, algorithm, and RE research artifacts
  architecture/      # High-level component diagrams and data flow
  algorithms/        # Scanning, signature matching, carving, MFT parsing
  fs-parsers/        # Per-filesystem deep dives (NTFS, FAT, exFAT, HFS+, ext, Btrfs, ReFS, ZFS)
  carving/           # RAW file carving research
  reverse-engineering/  # Raw RE output (strings, exports, decompilation notes)
src-rust/            # Rust core engine (workspace)
src-ui/              # React/TypeScript Tauri frontend
src-tauri/           # Tauri shell configuration
.github/workflows/   # CI: fmt, clippy, test, build, release, validation
scripts/             # RE automation, benchmarking, dev tooling
tests/               # Integration tests + golden fixtures
```

## License

To be decided — leaning toward MIT or Apache-2.0 for maximum compatibility.
