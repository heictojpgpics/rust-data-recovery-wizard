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
2. **Patch, bypass, crack, or emulate the license/activation mechanism itself** (the licence check code, the activation server protocol, the key-validation logic, the trial timer, etc.). We do not modify EaseUS binaries to unlock features, and we do not write code in our project that mimics how EaseUS's licence server works.
3. **Redistribute any part of the original binaries.** Reverse-engineering output is documentation, not extracts.
4. **Ship any EaseUS artifact** in our repo, build, or release.

## What We *Do* Study (Paywalled Features — clarified)

**Studying paywalled features is explicitly permitted** and required. The distinction is between *studying the feature* and *bypassing the licence*:

| Allowed | Not allowed |
|---------|-------------|
| Identify which features are paywalled (free vs paid diff) | Patch the licence check in EaseUS binaries to unlock them |
| Decompile the code paths that implement a paywalled feature | Reverse-engineer the activation server protocol |
| Document the algorithm / data structures / file formats used by the feature | Mimic the activation server in our code |
| Implement the same feature in our Rust code, free for all users | Embed EaseUS's licence-check code in our code |

**Concrete example.** EaseUS gates "deep scan" + "RAW carving" + "recover more than 2 GB" behind a paid licence. We:

- ✅ **Do** decompile `RAWSearchDLL.dll` to understand how carving works.
- ✅ **Do** implement the same carving algorithm in `rdw-carving` — free for all users, no licence check.
- ✅ **Do** document which features EaseUS paywalls so users know what they get for free in our version that they'd pay for in EaseUS.
- ❌ **Do not** patch `DRWUI.exe` to remove the licence check.
- ❌ **Do not** study the activation/keygen protocol.
- ❌ **Do not** ship a "cracked EaseUS" — we ship our own original Rust implementation.

This is the standard clean-room interoperability practice: study behaviour, implement original code, never touch the licence mechanism.

## Paywalled Features Catalogue (living list)

We maintain a living catalogue of paywalled features in [`docs/reverse-engineering/paywalled_features.md`](../reverse-engineering/paywalled_features.md). Each entry records:

- The feature name (e.g. "Recover more than 2 GB").
- How it's gated in EaseUS (licence check, free-tier data limit, etc.).
- What the feature actually does (algorithm / DLL / function).
- Whether we've implemented the equivalent in our Rust code (and where).

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
- No code in our repo mimics EaseUS's licence check / activation server / key validation. (Studying paywalled features is allowed; touching the licence mechanism is not.)
