# Paywalled Features Catalogue (EaseUS Data Recovery Wizard v21.0.0.0 Free)

> **Policy**: See [`legal/CLEAN_ROOM.md`](../legal/CLEAN_ROOM.md). We study paywalled features so we can implement them freely in our Rust version. We never patch/bypass/crack the licence mechanism itself.

## Methodology

Sources used to build this catalogue:
- `config/version.ini` — marks `version=free`
- `remote_config_data` — Firebase Remote Config feature flags
- Static strings in `DRWUI.exe`
- `EUinApp.exe` — in-app purchase webview
- Behavioural observation of the free edition

Each entry: feature name → EaseUS gating mechanism → functional description → implementation status in our Rust code.

## FREE TIER (no licence required)

| # | Feature | Notes |
|---|---------|-------|
| F1 | Quick scan (FS metadata walk) | All FS DLLs (`NTFSSearchDLL` etc.) |
| F2 | Complete scan (deep + carving) | `RAWSearchDLL.dll` invoked |
| F3 | RAW file carving | 60+ analysers + 139 extended signatures |
| F4 | Preview found files | Text/image/PDF/Office viewers |
| F5 | Filter by file type | `FileFilter.xml` (8 categories) |
| F6 | Save scan session (`.rsf`) | Resume without re-scan |
| F7 | 22-language UI | `language/*.qm` |
| F8 | Bootable WinPE media creation | `PE_Tools.dll` + `dlconfig.xml` |

## PAYWALLED — gates observed in the free edition

### P1. Recovery volume limit (2 GB for free edition)

- **Feature**: Recover more than 2 GB of files per session
- **Gating**: Hard limit checked at recover time in `DRWUI.exe`; free version shows a "buy now" dialog when the user tries to recover past the 2 GB threshold. The actual scan finds the files; only the recover step is blocked.
- **Functional description**: A counter accumulates bytes recovered per session; when it crosses 2 GB, the recover button is replaced with an upgrade prompt. No algorithmic difference between free and paid recovery.
- **Our Rust impl**: **No limit.** `recover_files` in `src-tauri/src/commands.rs` recovers unlimited bytes. We do NOT port the 2 GB check.
- **Status**: ✅ N/A — we don't impose the limit

### P2. BitLocker decryption (volume-level)

- **Feature**: Recover files from BitLocker-encrypted volumes
- **Gating**: Paid-only. Free version detects BitLocker volumes but shows "Upgrade to recover from BitLocker" instead of letting `DRWService.exe` actually decrypt.
- **Functional description**: `DRWService.exe` (PDB: `BitlockerReadFVEService.pdb`) runs as a Windows service and exposes a named pipe `\\.\Pipe\DRWBitlocker`. It reads the FVE (Full Volume Encryption) metadata, accepts a password or recovery key, and returns decrypted sector reads to `DRWUI.exe`. `BitLockerLib.dll` in `PartitionRecovery/` is the user-mode library.
- **Our Rust impl**: **Planned for `rdw-bitlocker` crate.** Will use the public BitLocker format spec (Microsoft Open Specifications) to read FVE metadata + AES-XTS decryption. Will support: password, 48-digit recovery key, AD-registered key, BEK file.
- **Status**: ⏳ Phase 5

### P3. Lost partition recovery

- **Feature**: Find and recover partitions that are no longer in the partition table
- **Gating**: Paid-only. Free version can scan a disk but does not show "lost partition" results.
- **Functional description**: `PartitionRecovery.dll` (893 KB) in `PartitionRecovery/` walks the disk sector-by-sector looking for filesystem signatures (NTFS/FAT/exFAT/HFS+/ext/Btrfs/ReFS) not referenced by the MBR/GPT. It reconstructs the partition table entry (start LBA, size, type) and lets the user recover files from the "lost" partition. The bundled `eprdtdrv.sys` kernel driver provides low-level disk access bypassing Windows' partition filtering.
- **Our Rust impl**: **Planned for `rdw-partition` crate.** Will scan unallocated disk regions for FS signatures and reconstruct partition entries. Will NOT need a kernel driver — we'll use Windows' native `\\.\PhysicalDriveX` handle with `IOCTL_DISK_GET_LENGTH_INFO` + raw reads.
- **Status**: ⏳ Phase 5

### P4. NAS recovery (SSH-based)

- **Feature**: Recover files from a NAS (Synology/QNAP/etc.) without removing the disks
- **Gating**: Paid-only. Free version shows "NAS Recovery" tab but disables the connect button.
- **Functional description**: `EuShare/EuMrx.sys` is a Windows network redirector driver (Mrx = miniport redirector). Recovery flow: (1) SSH into the NAS using credentials, (2) push a scanner binary to `/tmp/EaseUS/` on the NAS via SCP, (3) execute it remotely via SSH, (4) the scanner reads the NAS disks locally (bypassing the NAS's file-serving layer) and streams results back over SSH, (5) `EuMrx.sys` mounts the remote scanner's view as a virtual drive on the Windows client. Supports 9 NAS vendors per `NasConfig/NasModel.xml`.
- **Our Rust impl**: **Planned for `rdw-nas` crate.** Will use `russh` (pure-Rust SSH client) + `tokio` for async. No Windows driver needed — we can present the remote scanner as a virtual path in the UI instead of mounting as a drive.
- **Status**: ⏳ Phase 6

### P5. iCloud recovery

- **Feature**: Recover deleted files from iCloud (Photos, Contacts, Calendars, Notes)
- **Gating**: Paid-only.
- **Functional description**: `EuICloudRecovery.dll` (7.1 MB, namespace `esicloud`) implements iCloud authentication + CloudKit API. Uses `nlohmann::json` v3.12 and `std::filesystem`. Auth flow: Apple ID + app-specific password → iCloud session → CloudKit query for deleted items → download. Key types: `ICloudRecovery`, `ICloudFileInfo`, `EsICloudDataType`, `ContactPhoneEmail`.
- **Our Rust impl**: **Planned for `rdw-cloud-icloud` crate.** Will use `reqwest` + iCloud API (CloudKit Web Services spec).
- **Status**: ⏳ Phase 6

### P6. File repair (video, image, archive, Adobe, Office, HWP)

- **Feature**: Repair corrupted files (mp4/avi/mov, jpg/png/raw, zip/rar/7z, psd/ai/indd, docx/xlsx/pptx, hwp)
- **Gating**: Paid-only per repair type. Free version can preview but not save repaired files.
- **Functional description**: Bundled executables: `EUVideoRepair.dll`, `EUImageEnhance.dll`, `EUArchiveRepair.exe`, `EUAdobeRepair.exe`, `EUImgRepair.exe`, `EUOfficeRepairWin32.exe`, `EuOfficeTools.exe`, `EUHwpViewer.exe`. Each implements format-specific repair (e.g. re-constructing the moov atom for MP4, rebuilding the central directory for ZIP).
- **Our Rust impl**: **Phase 6+.** Out of scope for v1 — we focus on recovery, not repair.
- **Status**: ⏳ Phase 6+

### P7. WinPE bootable media (crashed PC rescue)

- **Feature**: Create a bootable USB/CD that runs the recovery wizard outside Windows
- **Gating**: Paid-only ("Crashed PC Recovery" tab).
- **Functional description**: `PE_Tools.dll` exports `pet_download_packet`, `pet_decompress_packet`, `pet_verify_packet`, `pet_install_driver`. It downloads Microsoft's Windows AIK / WinPE OCs from `download.microsoft.com` (URLs in `dlconfig.xml`), builds a WinPE WIM, and writes it to a USB. The `BUILDPE/` folder is a pre-built WinPE payload that gets injected.
- **Our Rust impl**: **Phase 6.** Out of scope for v1.
- **Status**: ⏳ Phase 6

### P8. Disk health monitoring

- **Feature**: Real-time SMART attribute monitoring + failure prediction
- **Gating**: Bundled as a separate product (`diskhealth/` folder) — free in EaseUS's distribution but presented as a separate tool.
- **Functional description**: Uses `Qt5RemoteObjects` for IPC. Reads SMART attributes via WMI `MSStorageDriver_FailurePredictStatus` and `SmartData` properties.
- **Our Rust impl**: **Phase 6.** Out of scope for v1.
- **Status**: ⏳ Phase 6

### P9. Disk cloning

- **Feature**: Clone one disk to another (sector-by-sector or file-level)
- **Gating**: Paid-only. Bundled as `PartitionRecovery/CloneModule.dll` (2.2 MB).
- **Our Rust impl**: **Phase 6.** Out of scope for v1.
- **Status**: ⏳ Phase 6

### P10. Image recovery (full image of physical drives and VMs)

- **Feature**: Create a byte-for-byte image of a physical drive (or VMDK/VHD) and recover from it
- **Gating**: Paid-only.
- **Functional description**: `EURawImg.exe` reads raw sectors and writes `.img`/`.vmdk`/`.vhd`. `libvmdk.dll` provides VMDK stream-optimal read/write.
- **Our Rust impl**: **Phase 6.** Out of scope for v1.
- **Status**: ⏳ Phase 6

### P11. Cloud backup of recovery results

- **Feature**: Upload recovered files directly to cloud storage (Aliyun OSS)
- **Gating**: Paid-only. `cloud_session.dll` (943 KB) + `AliyunWrap.dll` (624 KB).
- **Functional description**: Uses Alibaba Cloud OSS SDK for object storage upload.
- **Our Rust impl**: **Phase 6.** Out of scope for v1.
- **Status**: ⏳ Phase 6

## FREE-TIER BEHAVIOURAL QUIRKS (we will NOT replicate)

These are deliberately restrictive behaviours in the free edition that we will NOT port:

| Behaviour | Reason |
|-----------|--------|
| 2 GB recovery limit per session | We don't impose artificial limits. |
| "Buy now" upgrade prompts after every recover | No upsells. |
| In-app purchase webview (`EUinApp.exe`) | No IAP. |
| Telemetry / crash log upload to Aliyun SLS | No telemetry. (May add optional opt-in error reporting later.) |
| Firebase Remote Config feature flags | No remote feature gating — all features always on. |
| `bAllowSendInfo=0` default | Same — we don't send info anywhere. |

## Summary for v1 Implementation

For v1 of our Rust Data Recovery Wizard, we will freely implement (no paywall):

1. ✅ Quick + complete scan (NTFS + FAT + exFAT + RAW carving) — in progress
2. ⏳ BitLocker decryption (P2) — Phase 5
3. ⏳ Lost partition recovery (P3) — Phase 5
4. ⏳ NAS recovery (P4) — Phase 6
5. ⏳ iCloud recovery (P5) — Phase 6
6. ⏳ File repair (P6) — Phase 6+
7. ⏳ WinPE bootable media (P7) — Phase 6
8. ⏳ Disk health (P8) — Phase 6
9. ⏳ Disk cloning (P9) — Phase 6
10. ⏳ Disk imaging (P10) — Phase 6
11. ⏳ Cloud backup (P11) — Phase 6

The v1 priority is **1** (scan + recover) — that's the core that lets users get their files back. Everything else is incremental.
