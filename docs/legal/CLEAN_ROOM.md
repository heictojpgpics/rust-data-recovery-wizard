# Clean-Room Reverse Engineering Policy

This document governs every reverse-engineering activity in this project.

## What We Do

1. **Study the publicly observable behavior** of EaseUS Data Recovery Wizard.
2. **Inspect binary metadata** (PE headers, imports, exports, strings, resources) that is technically disclosed by the binary itself.
3. **Decompile and disassemble** the binary to understand algorithms and data structures.
4. **Document findings** in original prose, diagrams, and Rust code.
5. **Implement** our own original Rust version based on the documented understanding.

## What We Never Do

1. **Copy assets, strings, icons, images, or UI layouts** from the original. Our UI gets its own visual identity. Trade-dress copying is both legally risky and strategically bad.
2. **Patch, bypass, or emulate the license/activation check.** The free version we have is sufficient for behavioral study. Paywalled features are studied for *what they do functionally*; we then implement equivalent functionality in our own code from scratch.
3. **Redistribute any part of the original binaries.** Reverse-engineering output is documentation, not extracts.
4. **Ship any EaseUS artifact** in our repo, build, or release.

## Why This Approach

Clean-room reverse engineering has been a legitimate interoperability practice for decades. It's how competition works in the platform and tools space. Our intent is to **learn from a successful product** and **build a free, open-source alternative**, not to clone or crack it.

## Source Provenance

Every doc file in `docs/reverse-engineering/` records:
- The exact binary it was derived from (filename + SHA-256).
- The tools used (radare2, Ghidra, ILSpy, strings, etc.).
- The date of analysis.
- The analyst (agent ID).

Every Rust source file in `src-rust/` records:
- That it is an **original implementation**.
- The doc file(s) that informed its design.
- That no EaseUS code was ported verbatim.

## Review Cadence

Before every release tag, a maintainer re-checks:
- No EaseUS asset is present in `src-ui/`, `src-tauri/icons/`, or `docs/`.
- No EaseUS string literal appears in any Rust or TS source file.
- No EaseUS binary is bundled in the release artifacts.
- The license check was not studied beyond "what features are gated" — no code in our repo attempts to mimic the license server.
