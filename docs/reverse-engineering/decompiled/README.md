# Decompiled Source — Ghidra Output

This directory contains Ghidra 11.3.2 headless decompilation output for key EaseUS binaries. Each `.c` file is one function, named `<function_name>_<address>.c`.

## Source Binaries

| Directory | Source Binary | Size | Functions Decompiled |
|-----------|--------------|------|---------------------|
| `DRW.exe/` | DRW.exe (launcher) | 127 KB | 174 |
| `NTFSSearchDLL.dll/` | NTFSSearchDLL.dll (NTFS parser) | 577 KB | 1931 |
| `RAWSearchDLL.dll/` | RAWSearchDLL.dll (file carving engine) | 644 KB | 1919 |

## How These Were Produced

```bash
GHIDRA_DIR=/path/to/ghidra_11.3.2_PUBLIC
$GHIDRA_DIR/support/analyzeHeadless \
  /path/to/project_dir <project_name> \
  -import <binary> \
  -scriptPath /home/z/my-project/scripts \
  -postScript DecompileAll.java \
  -deleteProject
```

Source: `scripts/DecompileAll.java` in this repo's parent (`/home/z/my-project/scripts/`).

## Legal Status

These are decompiled C pseudocode **derived from** EaseUS proprietary binaries. Per our [clean-room policy](../../legal/CLEAN_ROOM.md):

- ✅ These files are for **internal study only** — they inform our original Rust implementation.
- ❌ These files must **not** be used as a basis for verbatim code copying into our Rust source tree.
- ❌ These files must **not** be redistributed outside this repo.

When implementing the corresponding Rust crate, write the code from the **documented understanding** (see `docs/reverse-engineering/02_fs_parser_architecture.md`), not from these `.c` files.

## Naming Convention

- `EUCreate*.c` — exported factory functions (called by DRWUI.exe to construct searcher objects).
- `EUGet*.c` — exported getter functions.
- `FUN_<hex>_<hex>.c` — unnamed functions (Ghidra auto-named). The first hex is the entry point address; the second is the same for uniqueness.
- `<ClassName>::vftable` references — virtual function table references (indicate C++ inheritance).
- `Catch_*` — C++ exception handler blocks.
- `FID_conflict_*` — functions Ghidra couldn't resolve via Function ID database.
- `CAtlBaseModule_*` — ATL boilerplate (ignore).
- `__scrt_*` — MSVC runtime startup (ignore).

## Useful Searches

To find specific patterns:

```bash
# Find the main scan loop
rg "QuickScan|CompleteSearch|SearchPartition" NTFSSearchDLL.dll/

# Find MFT parsing
rg "FILE_RECORD|MFT|0x[0-9A-F]{4,}" NTFSSearchDLL.dll/ | grep -i "magic\|FILE"

# Find attribute parsing
rg "attr_type|0x10|0x30|0x80|0xFFFFFFFF" NTFSSearchDLL.dll/

# Find run list parsing
rg "run_list|VCN|cluster" NTFSSearchDLL.dll/

# Find analyser registration
rg "Analyser|RegisterAnalys" RAWSearchDLL.dll/
```
