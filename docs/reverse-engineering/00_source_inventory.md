# Source Inventory — EaseUS Data Recovery Wizard v21.0.0.0 (Free)

> **Provenance**: All artifacts studied under clean-room RE policy. See [`legal/CLEAN_ROOM.md`](../legal/CLEAN_ROOM.md).
> **Analysis date**: 2026-10-15
> **Analyst**: Main agent (session 1)

## 1. Acquired Artifacts

| File | Size | SHA-256 | Type |
|------|------|---------|------|
| `EaseUS-Data-Recovery-Wizard-Part-1.zip` | 175 MB | `af2d44077d53d3348ae6b57863a2cd31c6dcadb2b616af7a1b89e3c287e90a14` | Zip (store) |
| `EaseUS-Data-Recovery-Wizard-Part-2.zip` | 164 MB | `91aa2dab86e3faa40306a36d3ccdff3e1c3b9df8d1d22a2dbb845675eb2c1e48` | Zip (deflate) |
| `easeus_setup.dmg` | 4.6 MB | `6ccb507ea097eeb41b39218602f22a144b65c02b27e8865134d9ebcdbfe31270` | zlib (macOS DMG payload) |
| `easeus_setup.exe` | 2.8 MB | `31469c17128d37c60d3bc1228b1bbc8f793a9d973bae42b16f25a8ce338b7e86` | PE32 NSIS installer (i386) |

The two zip parts together form the **installed EaseUS DRW application folder**. The `.exe` is a Nullsoft (NSIS) **downloader stub** that fetches the real installer payload at runtime. The `.dmg` is the macOS installer payload (zlib-compressed HFS+).

## 2. Merged Application Folder

After merging Part 1 + Part 2:

- **Total files**: 1470
- **Total size**: 674 MB
- **Top-level directories**: 21 (see [`03_directory_layout.md`](./03_directory_layout.md))
- **Top-level files**: ~140 (executables, DLLs, configs, licenses)

## 3. Product Identity

| Field | Value |
|-------|-------|
| Product name | EaseUS Data Recovery Wizard |
| Internal project name | `DRWIntelligentScan` (per PDB paths) |
| Product version | `21.0.0.0` (`config/version.ini`); `20.8.0.0` (`Upgrade.ini`) |
| Channel | `easeus` |
| Market | `abroad` (international) |
| Edition | `free` |
| Product code | `RE-DRW-FREE-WIN` |
| Build date (binaries) | 2026-10-13 (most recent) |
| Build machine paths | `E:\DRW\_drw_main\DRWIntelligentScan\` (main), `H:\AWork\` (Aliyun), `D:\Fixo\` (repair tools) |
| Tracking endpoint | `http://track.easeus.com/product/index.php?c=main&a=getstatus&pid=2` |
| Crash log service | Alibaba Cloud (Aliyun) SLS — credentials embedded in `AliyunConfig.ini` |
| Remote config | Firebase Remote Config — project `drweaseus-remoteconfig` (`google-services.json`) |

## 4. Language Support (22 languages)

From `config/config.ini`:

`English, Japanese, Deutsch, French, Spanish, Portuguese, Italian, Dutch, Chinese (Simplified), Chinese (Traditional), Svenska, Danish, Russian, Norwegian, Polish, Hungarian, Arabic, Turkish, Korean, Indonesian, Thai, Malay`

Font stack per locale:

- Latin: `Segoe UI` / `Segoe UI Semibold` (weight 600)
- Japanese: `Meiryo UI`
- Korean: `Malgun Gothic`
- Simplified Chinese: `Microsoft YaHei`

## 5. Top-Level Architecture (executables + DLLs)

### 5.1 Process Tree

```
DRW.exe (127 KB, AMD64, GUI)
  └─ launches → DRWUI.exe (30.5 MB, AMD64, GUI) [Qt5 main UI]
                 ├─ loads → NTFSSearchDLL.dll  (577 KB)  — NTFS scanner
                 ├─ loads → FATSearchDLL.dll   (469 KB)  — FAT12/16/32 scanner
                 ├─ loads → exFATSearchDLL.dll (413 KB)  — exFAT scanner
                 ├─ loads → HFSPlusSearchDLL.dll (185 KB) — HFS+ scanner (Mac)
                 ├─ loads → EXT4SearchDLL.dll  (129 KB)  — ext2/3/4 scanner
                 ├─ loads → BtrfsSearchDLL.dll (150 KB)  — Btrfs scanner
                 ├─ loads → ReFSSearchDLL.dll  (154 KB)  — ReFS scanner
                 ├─ loads → ZfsSearchDLL.dll   (275 KB)  — ZFS scanner
                 ├─ loads → RAWSearchDLL.dll   (644 KB)  — File carving engine
                 ├─ loads → PE_Tools.dll       (976 KB)  — WinPE tool manager (NOT PE file format)
                 ├─ loads → PubLog.dll         (29 KB)   — Logging
                 ├─ loads → EuICloudRecovery.dll (7.1 MB) — iCloud recovery
                 ├─ loads → cloud_session.dll  (943 KB)  — Cloud session mgmt
                 ├─ loads → AliyunWrap.dll     (624 KB)  — Alibaba cloud wrapper
                 ├─ loads → firebaseonlineconfig.dll (1.1 MB) — Firebase RC
                 └─ loads → Qt5Core/Gui/Network/Svg/Widgets/WinExtras.dll (Qt 5.14, 2020-01-23)

DRWService.exe (40 KB, AMD64, GUI) [runs as Windows service]
  └─ BitlockerReadFVEService — reads BitLocker Full Volume Encryption
                                (per PDB: BitlockerReadFVEService.pdb)

DRWReport.exe (4.8 MB, AMD64, GUI) [XCrashReport-based crash reporter]
  └─ Collects: DRWUI.log, DefaultLog.txt, Drwdump0-5.DMP, DelFat.log, BuildRaw.log
```

### 5.2 Component Catalog

| Binary | Size | Arch | Role |
|--------|------|------|------|
| `DRW.exe` | 127 KB | x64 | Launcher (`DRWLoader`) |
| `DRWUI.exe` | 30.5 MB | x64 | Qt5 main UI |
| `DRWService.exe` | 40 KB | x64 | BitLocker FVE reader service |
| `DRWReport.exe` | 4.8 MB | x64 | XCrashReport crash reporter |
| `NTFSSearchDLL.dll` | 577 KB | x64 | NTFS scanner (factory: `EUCreateNTFSSearcher`, `EUCreateNTFSQuickSearcher`) |
| `FATSearchDLL.dll` | 469 KB | x64 | FAT scanner |
| `exFATSearchDLL.dll` | 413 KB | x64 | exFAT scanner |
| `HFSPlusSearchDLL.dll` | 185 KB | x64 | HFS+ scanner |
| `EXT4SearchDLL.dll` | 129 KB | x64 | ext2/3/4 scanner |
| `BtrfsSearchDLL.dll` | 150 KB | x64 | Btrfs scanner (note: `EUCreateBtrfsComplateSearcher` — typo "Complate") |
| `ReFSSearchDLL.dll` | 154 KB | x64 | ReFS scanner |
| `ZfsSearchDLL.dll` | 275 KB | x64 | ZFS scanner |
| `RAWSearchDLL.dll` | 644 KB | x64 | File carving — see §6 |
| `PE_Tools.dll` | 976 KB | x64 | WinPE tool downloader/installer |
| `PubLog.dll` | 29 KB | x64 | Logging interface (`DebugTrace`, `Log`, `LogError`, `LogWarning`, `LogInfo`, `ReleaseTrace`) |
| `EuICloudRecovery.dll` | 7.1 MB | x64 | iCloud recovery (uses nlohmann::json v3.12, std::filesystem, namespace `esicloud`) |
| `cloud_session.dll` | 943 KB | x64 | Cloud session manager |
| `AliyunWrap.dll` | 624 KB | x64 | Aliyun SLS logging wrapper (from `H:\AWork\UserInfoCollect\`) |
| `firebaseonlineconfig.dll` | 1.1 MB | x64 | Firebase Remote Config |
| `firebasefetch.exe` | 90 KB | x64 | Firebase fetch worker |
| `EUVideoRepair.dll` | 948 KB | x64 | Video repair |
| `EUImageEnhance.dll` | 3.0 MB | x86 | Image enhancement |
| `EuUserRate.dll` | 1.6 MB | x86 | User rating prompt |
| `EuDownloader.exe` | 1.4 MB | x86 | Generic downloader (from `EuDownloadPublicLibrary`) |
| `EUinApp.exe` | 37 KB | x86 | In-app purchase / web control |
| `InfoForSetup.exe` | 117 KB | x64 | Setup info collector |
| `SetupUE.exe` | 177 KB | x86 | Setup UE (UE = Unicode/Updater?) |
| `EuRepairHost.exe` | 23 KB | x86 | Repair tool host |
| `EUUnZip.exe` | 255 KB | x86 | ZIP extractor |
| `7za.exe` | 596 KB | x86 | Bundled 7-Zip standalone (2011 build) |
| `send_dmp_with_aliyun.exe` | 107 KB | x64 | Crash dump uploader (to Aliyun) |

### 5.3 Bundled Sub-Products

#### 5.3.1 `PartitionRecovery/` — EaseUS Partition Recovery (embedded)

A complete second product living inside the DRW folder:

| File | Size | Role |
|------|------|------|
| `PartitionRecovery.dll` | 893 KB | Main partition recovery module |
| `MainModule.dll` | 1.8 MB | Main orchestrator |
| `RecoveryModule.dll` | 1.3 MB | Recovery logic |
| `ToolsModule.dll` | 2.5 MB | Tools |
| `CloneModule.dll` | 2.2 MB | Disk cloning |
| `UILogic.dll` | 1.4 MB | UI logic |
| `BitLockerLib.dll` | 722 KB | BitLocker decryption |
| `Boot.dll` + `BootDriver.dll` | 794 KB + 133 KB | Boot sector management |
| `Win32Bcd.dll` | 261 KB | Windows BCD editor |
| `RawFixer.dll` | 706 KB | Raw filesystem fixer |
| `libvmdk.dll` | 1.1 MB | VMDK (VMware) disk library |
| `peformat.dll` | 50 KB | PE format helper |
| `Logger.dll` | 87 KB | Logger |
| `GetDriverInfo.dll` | 50 KB | Driver info |
| `AutoUpdate.dll` | 158 KB | Auto-update |
| `eprdtdrv.sys` | 27 KB | Kernel driver (partition recovery) |
| `eprdtdrv_win7older.sys` | 27 KB | Kernel driver (Win7 and older) |
| `setupdrvx64.exe` | 174 KB | Driver installer |
| `WinChkdsk.exe` | 72 KB | chkdsk wrapper |
| `*.mo` files | various | Model files (MVC pattern), one per FS analyser |

`.mo` modules (Model files, internal MVC):

- `NTFSFileSystemAnalyser.mo`, `NTFSLib.mo`, `NTFSUtil.mo`
- `FATFileSystemAnalyser.mo`, `FatLib.mo`, `FatFormat.mo`
- `ExFatFileSystemAnalyser.mo`
- `ExtFileSystemAnalyser.mo`
- `RefsFileSystemAnalyser.mo`
- `FileSystem.mo`, `FileSystemAnalyser.mo`, `FileSystemCheck.mo`, `Fixup.mo`
- `Partition.mo`, `PartitionRecoveryD.mo`
- `LdmManager.mo` (Logical Disk Manager — dynamic disks)
- `Device.mo`, `DeviceAdapter.mo`, `DeviceManager.mo`
- `EFIBoot.mo`, `CallbackOperator.mo`, `CheckVersion.mo`, `Common.mo`, `Config.mo`, `Error.mo`, `Log.mo`, `Mom.mo`, `RegLib.mo`, `Thread.mo`
- `bitlockerhelp.mo`

#### 5.3.2 `diskhealth/` — EaseUS Disk Health (embedded)

Uses `Qt5RemoteObjects` for IPC. Has its own translations (`diskhealth_<lang>.qm` for 14+ languages). Out of scope for v1 of our clone — see roadmap Phase 6.

#### 5.3.3 `BUILDPE/` — WinPE bootable build

Complete copy of DRW stripped down for Windows PE bootable media. Contains:
- `BUILDPE/EaseUS-x64/` — full app folder (subset of files)
- `BUILDPE/x64/Windows/SysWOW64/` and `system32/drivers/` — PE-only drivers

This is for the "Crashed PC Rescue" feature — bootable WinPE USB that runs DRW outside the broken Windows install. **Out of scope for v1.**

#### 5.3.4 `EuShare/` — Network redirector driver

- `EuMrx.sys` (215 KB) — Microsoft Redirector (Mrx) miniport driver. Custom network redirector for accessing NAS shares / remote recovery targets.
- `install.bat` / `uninstall.bat` — driver install scripts.

## 6. RAW File Carving Engine (`RAWSearchDLL.dll`)

### 6.1 API (exports)

| Export | Purpose |
|--------|---------|
| `EUCreateRAWSearcher` | Main carving engine factory |
| `EUCreateRAWSearcherForCellTest` | Smaller test version (likely for unit testing on a "cell" — a small disk image fixture) |
| `EUGetAnalyserList` | Get flat list of registered analysers |
| `EUGetAnalyserMap` | Get `map<key, analyser>` |
| `EUGetAnalyserMultimap` | Get `multimap<key, analyser>` (multiple analysers per key, for files where multiple types share magic bytes) |
| `GetRawUserInfoMap` | Get user info map (probably metadata discovered during scan) |

### 6.2 Analyser Class Hierarchy (recovered from RTTI strings)

**Base interfaces:**

- `IRawFileAnalyser` — base analyser interface
- `IRawFileAnalyser` → `ISpecialRawFileAnalyser` — for unusual formats
- `CRawFileInfo` — file info carrier (passed to/from analysers)
- `IIterator<CRawFileInfo*>`, `ListIterator<CRawFileInfo*>` — iterators

**Concrete analysers** (~60+, deduplicated):

`File3DSAnalyser, File3GPAnalyser, FileAEPAnalyser, FileAUAnalyser, FileBMPAnalyser, FileCABAnalyser, FileCHMAnalyser, FileCPTAnalyser, FileCRWAnalyser, FileDMGAnalyser, FileEMFAnalyser, FileFCPEVENTAnalyser, FileFLVAnalyser, FileGZAnalyser, FileHLPAnalyser, FileHTMAnalyser, FileICOAnalyser, FileJPGAnalyser, FileLZHAnalyser, FileLowDocAnalyser` (Office XML: docx/xlsx/pptx)`, FileMDBAnalyser, FileMIDAnalyser, FileMKVAnalyser, FileMNYAnalyser` (MS Money)`, FileMP3Analyser, FileMPGAnalyser, FileMRWAnalyser, FileOLEAnalyser` (OLE compound: doc/xls/ppt)`, FileONEAnalyser` (OneNote)`, FilePDFAnalyser, FilePNGAnalyser, FilePSDAnalyser, FilePSPAnalyser, FilePSTAnalyser` (Outlook PST)`, FileRARAnalyser, FileRIFFAnalyser` (WAV/AVI)`, FileRM_RMVBAnalyser, FileRTFAnalyser, FileSITAnalyser, FileSVGAnalyser, FileSWFAnalyser, FileTARAnalyser, FileTIFAnalyser, FileTTFAnalyser, FileWMFAnalyser, FileWPDAnalyser` (WordPerfect)`, C7ZIPAnalyser, CFileOggAnalyser, CGPXAnalyser, CHFPAnalyser, CHIKAnalyser, CMDBAnalyser` (MS Access)`, COSPAnalyser, CPOSAnalyser, CVCFAnalyser`

`RawSpeed` namespace (specialised analysers with `RawFileInfo` subclasses):
- `RARAnalyser, CPTAnalyser, TARAnalyser, WpgAnalyser, RTFAnalyser, PNGAnalyser, MIDAnalyser, SITAnalyser, OneAnalyser, PSPAnalyser, DbxAnalyser` (Outlook Express DBX), `HTMLAnalyser, New3DSAnalyser, CMDBAnalyser, GZAnalyzer`

### 6.3 External signature DB (`raw_signs.json`)

139 additional file types with simple header/tail byte signatures:

```json
"<extension>": {
  "header": { "signs": ["<offset>,<hex_pattern>,<confidence_weight>"] },
  "tail":   { "signs": ["<offset>,<hex_pattern>,<confidence_weight>"] },
  "min": <min_size_bytes>,
  "max": <max_size_bytes>
}
```

Example: `"cpr"` (Corel Painter Riff) requires header at offset 8 = `4e554e44524f4f54` ("NUNDROOT") AND tail at offset 1 = `01000000000000000400000006466c61677300000100000000000000`, file size 10 KB–200 KB.

The 139 types are all **uncommon** formats (the common ones — jpg/png/pdf/docx/etc. — are hardcoded in `RAWSearchDLL.dll` itself via the analyser classes).

### 6.4 RAW scan config (`config/RawConfig.ini`)

Toggles which extended types are enabled by default. Currently enabled (1):

`HEIC, VCF, WEBM, WEBP, M1V, M2T, M2TS, JP2, M4P, XMIND, RVT, MOBI, MMAP, POS, EDDX, WFP, OSP, HFP, DRP, HIK, ODP, ODT, ODS, 7Z, INSP, INSV, GPX, CRM, AEP, FFF, DPX, MUSX`

Disabled (0): `STL, VPJ`

## 7. File Type Database (`FileFilter.xml`)

8 top-level categories used for UI grouping:

| Category | Icon | Sample extensions |
|----------|------|-------------------|
| Graphic | `file.jpeg` | 70+ extensions: JPG, PNG, GIF, BMP, TIF, PSD, AI, EPS, EMF, SVG, HEIC, + all RAW camera formats (NEF, ARW, CR2, CR3, DNG, RAF, ORF, MRW, PEF, SRW, RW2, etc.) |
| Document | `file.pmd` | DOC, DOCX, PDF, XLS, XLSX, PPT, PPTX, TXT, RTF, MDB, ACCDB, HWP, WPS, … |
| Email | `file.eml` | PST, OST, DBX, EML, MSG |
| Audio | `file.wav` | MP3, WAV, WMA, M4A, FLAC, AAC, OGG, APE, AIFF, MID, … |
| Video | `file.wma` | MP4, AVI, MOV, MKV, WMV, FLV, MPG, MTS, M2TS, 3GP, … |
| Other | `file.dll` | Everything else; `IsMutex=1` (excluded if any other category selected) |
| Archive | `file.zip` | ZIP, RAR, 7Z, TAR, GZ, ISO, … |
| Bookmarks | `file.bookmarks` | Browser bookmark exports |

## 8. UI Composition

### 8.1 Window

- Normal size: 1240×840
- Minimum size: 800×600
- High DPI: enabled
- Default state: maximised

### 8.2 Theming

- Light theme: `Resource/drw_light.rcc` (Qt Resource Collection)
- Dark theme: `ResourceDark/drw_dark.rcc` + `config/themdark.ini` (color palette)
- Theme palette (excerpt from `themdark.ini`):
  - Background gradient: `qlineargradient(x1:0,y1:0,x2:0,y2:1, stop:0 #eff5ff, stop:1 #deeaff)`
  - Accent: `#0560fd` (blue)
  - Highlight: `#ffc10e` (amber)
  - Text primary: `#1a1a1a`
  - Text secondary: `#616777`

### 8.3 Shell integration

`config/shellexe.ini` registers a Windows Explorer context-menu entry: "**Recover any deleted data with EaseUS**" in 22 languages.

### 8.4 File preview

- Text view extensions (config/FilterFolder.ini): `.TXT, .CFG, .CONFIG, .CSS, .CSV, .HTML, .INF, .INFO, .INI, .JS, .LOG, .XML, .aae, .database_uuid, .srt, .bat, .md, .json, …`
- Specialized viewers shipped: `PDFViewer.exe` (pdfium), `EUOfficeViewer.exe`, `EUHwpViewer.exe` (Korean Hancom Office), `VideoViewer/`, `EURawImg.exe` (camera RAW).

## 9. Cloud Integrations (out of scope for v1)

### 9.1 iCloud recovery (`EuICloudRecovery.dll`)

- Namespace: `esicloud`
- Key types: `ICloudRecovery`, `ICloudFileInfo`, `EsICloudDataType`, `EsIcouldUrlType` (typo in source), `ContactPhoneEmail`
- Logger: `eslog::Logger` (singleton)
- Uses `nlohmann::json` v3.12.0 and `std::filesystem`
- Last log line in shipped `icloud_logger`: `esicloud::ICloudRecovery::logout:367 User login out.`

### 9.2 Aliyun (Alibaba Cloud)

- Used for **crash log upload** (SLS — Simple Log Service)
- Credentials embedded in `AliyunConfig.ini` (encrypted base64)
- Endpoints: `LOGENDPOINT`, `ACCESSKEYID`, `ACCESSKEYSECRET`, `PROJECTNAME`, `LOGSTORENAME`, `LOGSTORENAME2`
- Telemetry: `AllowSendUrl=http://track.easeus.com/product/index.php?c=main&a=getstatus&pid=2`
- Quotas: max 1000 items, max 7 days, max 5 min idle, max 60000 bytes per key, max 20 pairs

### 9.3 Firebase Remote Config

- Project: `drweaseus-remoteconfig`
- Storage bucket: `drweaseus-remoteconfig.appspot.com`
- API key: `AIzaSyCv9yGsMO5vSFm8euT4gVM7U95od-M7HVQ`
- Used for A/B testing and remote feature flags

## 10. NAS Recovery (`NasConfig/`, `EuShare/`)

- Supports 9 NAS vendors: Synology, BUFFALO, D-Link, HIKVISION, NETGEAR, QNAP, SEAGATE, TERRAMASTER, Western Digital
- `NasModel.xml` enumerates 50+ Synology models alone (FS/SA/DS/RS/DVA series)
- SSH-based: pushes a scanner to `/tmp/EaseUS/` on the NAS via SSH, runs it remotely
- `EuShare/EuMrx.sys` — kernel network redirector driver for mounting NAS shares as drives

## 11. Crypto / Encryption Support

- `BitLockerLib.dll` + `DRWService.exe` — BitLocker Full Volume Encryption reader
- `Dict` — 1000+ entry password dictionary for brute-force attacks on encrypted volumes/archives (common passwords, leaked passwords, common patterns)
- `libcrypto-1_1.dll` + `libcrypto-3-x64.dll` + `libssl-1_1.dll` + `libssl-3-x64.dll` — OpenSSL 1.1 and 3.x
- `libssh2.dll` — SSH2 client (for NAS access)

## 12. Third-Party Libraries (per `License/` folder)

| Library | Purpose | License |
|---------|---------|---------|
| aliyun SDK | Alibaba Cloud integration | Apache-2.0 |
| cjson | JSON parser | MIT |
| cpprest | C++ REST SDK (HTTP client) | MIT |
| firebase | Firebase C++ SDK | Apache-2.0 |
| heic | HEIC/HEIF image codec | LGPL-2.1 |
| jsoncpp | JSON parser | MIT |
| libarchive | Archive extraction | BSD |
| libcurl | HTTP client | MIT |
| libheif | HEIF image | LGPL-2.1 |
| libjpg | JPEG codec | BSD |
| libraw | Camera RAW image | LGPL-2.1 |
| libzmq | ZeroMQ (IPC) | LGPL-3.0 |
| opencv | Computer vision (image analysis) | BSD-3-Clause |
| openssl | TLS/crypto | Apache-2.0 |
| pdfium | PDF rendering | BSD-3-Clause |
| Qt 5 | GUI framework | LGPL-2.1 (or commercial) |
| tinyxml | XML parser | zlib |
| xz / liblzma | LZMA compression | GPL-2.0+ |
| zlib | Compression | zlib |

## 13. Scan Session Persistence

`SaveScan/` holds `.rsf` (Recovery Session File) files — scan results that can be resumed without re-scanning:

- Filename format: `auto_<disk name><MM>_<DD>_<HH>_<MM>_<SS>.rsf`
- Examples shipped: 3 files, sizes 7 MB / 52 MB / 9 MB (correspond to disk sizes)

## 14. Paywall / Free Version Restrictions

The product is `version=free` (`config/version.ini`). **Per our clean-room policy we do NOT study the licence/activation mechanism** — we only document *what features the free tier exposes*:

- `EUinApp.exe` (37 KB, x86) — In-app purchase / upgrade prompt webview
- `Upgrade.ini` — version check + download URL for upgrades
- `config/version.ini` field `InitActive=0` — initial activation state
- `recoveryFree.ini` — encrypted/binary, gates free-tier features

**Functional capabilities present in the binary** (whether paywalled or not — we don't attempt to bypass):

- All 8 filesystem scanners (NTFS/FAT/exFAT/HFS+/ext4/Btrfs/ReFS/ZFS)
- RAW file carving (60+ analysers + 139 extended signatures)
- BitLocker decryption (via `DRWService.exe` + `BitLockerLib.dll`)
- Partition recovery (lost partition reconstruction)
- WinPE bootable media creation
- NAS recovery via SSH
- iCloud recovery
- File repair (video, image, archive, Adobe, Office, HWP)
- Disk cloning
- Driver install (`eprdtdrv.sys`)

These are the targets for our v1 implementation — minus the cloud/WinPE/NAS/file-repair pieces that are explicitly Phase 6.

## 15. What's NOT in the Free Version (We Will Implement Freely)

Since our version is open-source and not paywalled, every capability above ships enabled. Specifically, our v1 must implement at least:

1. ✅ NTFS scanner (full MFT walk, attribute parsing, deleted entry recovery)
2. ✅ FAT12/16/32 + exFAT scanner
3. ✅ RAW file carving (60+ file type analysers)
4. ✅ BitLocker decryption (we'll use `bcracker` / `libbde` Rust port)
5. ✅ Partition recovery (lost partition table reconstruction)
6. ✅ Scan session save/resume (`.rsf` equivalent)
7. ⏳ HFS+/ext4/Btrfs/ReFS/ZFS scanners (Phase 6)
8. ⏳ NAS recovery (Phase 6)
9. ⏳ iCloud recovery (Phase 6)
10. ⏳ WinPE bootable media (Phase 6)
11. ⏳ File repair tools (Phase 6)

## 16. Next Analysis Passes

See [`02_pe_inventory.md`](./02_pe_inventory.md) for the full per-binary PE header dump (123 binaries), and [`04_strings_exports.md`](./04_strings_exports.md) for the strings + exports analysis.

## 17. Firebase Remote Config Feature Flags (from `remote_config_data`)

These flags are fetched at runtime from Firebase. Each can be split by market (`__abroad`, `__easeus`, `__free`) for A/B testing.

| Flag | Purpose |
|------|---------|
| `enable_activate` / `enable_activate__free` | Activation flow toggle |
| `enable_app` | App feature (always true) |
| `enable_backuphome` | Backup home tab |
| `enable_chat__abroad` / `enable_chat__abroad__easeus` | Chat support (international) |
| `enable_chronosnap` | ChronoSnap — snapshot-based recovery |
| `enable_continue` | Continue last scan |
| `enable_docrepair` | Document repair |
| `enable_ens` / `enable_ens__abroad__easeus` | ENS (likely Emergency Notification Service or Extended NAS Service) |
| `enable_exit` | Exit survey trigger |
| `enable_fast` | Fast scan mode |
| `enable_feedbacksd__abroad` | Feedback SD card |
| `enable_imgrepair` | Image repair |
| `enable_onlinerepair` / `enable_onlinerepair__easeus` | Online repair |
| `enable_paidrepair` | Paid repair feature |
| `enable_pdfrepairhome` | PDF repair home tab |
| `enable_popuprb__abroad` / `enable_popuprb__abroad__free__easeus` | Recycle Bin popup |
| `enable_previewpane` | Preview pane UI |
| `enable_refer__abroad__easeus` | Refer-a-friend |
| `enable_service` / `enable_service__abroad__easeus` | Service mode |
| `enable_survey` / `show_survey` | Survey prompt |
| `enable_toolhome` | Tools home tab |
| `enable_unlimited` | Unlimited recovery (paywall feature) |
| `enable_unlock` | Unlock feature (paywall) |
| `enable_videorepair` / `enable_videorepairhome` | Video repair |
| `enable_win11checker` / `enable_win11checker__easeus` | Windows 11 compatibility checker |

Filter / data keys: `filter_generalraw` (RAW scan filter), `json_gift` (offer JSON), `json_pe` (WinPE tools JSON), `json_raw` (RAW scan config JSON).

These are **feature toggles**, not licence checks. Our open-source version simply hard-codes all features to `true`.
