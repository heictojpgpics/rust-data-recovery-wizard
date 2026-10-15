//! Tauri command handlers — exposed to the frontend via `invoke()`.

use crate::state::{AppState, ScanId, ScanSession};
use rdw_core::scan::ScanMode;
use std::sync::Arc;
use tauri::State;

/// List available storage devices (disks, partitions, USB, SD cards).
#[tauri::command]
pub async fn list_storage_devices() -> Result<Vec<DeviceInfo>, String> {
    // v0: stub — return an empty list. Real implementation will use rdw-io
    // to enumerate via WMI / IOCTL_STORAGE_QUERY_PROPERTY on Windows.
    Ok(Vec::new())
}

/// Information about a storage device.
#[derive(Debug, Clone, serde::Serialize)]
pub struct DeviceInfo {
    /// Device path (e.g. `\\.\PhysicalDrive0` or `/dev/sda`).
    pub path: String,
    /// Display name (e.g. "Samsung SSD 970 EVO 1TB").
    pub name: String,
    /// Total size in bytes.
    pub size: u64,
    /// Whether the device is read-only.
    pub read_only: bool,
    /// Whether this is a partition (vs a whole disk).
    pub is_partition: bool,
    /// Detected filesystem type (if any).
    pub fs_type: Option<String>,
    /// Volume label (if any).
    pub label: Option<String>,
}

/// Start a scan on a device.
#[tauri::command]
pub async fn start_scan(
    state: State<'_, AppState>,
    device_path: String,
    mode: ScanMode,
) -> Result<ScanId, String> {
    let id = format!("scan-{}", std::time::SystemTime::now().duration_since(std::time::UNIX_EPOCH).unwrap_or_default().as_millis());
    let session = Arc::new(ScanSession {
        device_path: device_path.clone(),
        mode,
        cancelled: parking_lot::Mutex::new(false),
        progress: parking_lot::Mutex::new(0.0),
        phase: parking_lot::Mutex::new(rdw_core::progress::ScanPhase::Opening),
    });
    state.scans.write().insert(id.clone(), session);
    // v0: stub — real implementation will spawn a tokio task that calls rdw-engine.
    Ok(id)
}

/// Cancel an in-progress scan.
#[tauri::command]
pub async fn cancel_scan(state: State<'_, AppState>, scan_id: ScanId) -> Result<(), String> {
    if let Some(session) = state.scans.read().get(&scan_id) {
        *session.cancelled.lock() = true;
        Ok(())
    } else {
        Err(format!("Scan {} not found", scan_id))
    }
}

/// Get the status of a scan.
#[tauri::command]
pub async fn get_scan_status(
    state: State<'_, AppState>,
    scan_id: ScanId,
) -> Result<ScanStatus, String> {
    let scans = state.scans.read();
    let session = scans.get(&scan_id).ok_or_else(|| format!("Scan {} not found", scan_id))?;
    Ok(ScanStatus {
        phase: *session.phase.lock(),
        progress: *session.progress.lock(),
        cancelled: *session.cancelled.lock(),
    })
}

/// Status of a scan.
#[derive(Debug, Clone, serde::Serialize)]
pub struct ScanStatus {
    pub phase: rdw_core::progress::ScanPhase,
    pub progress: f64,
    pub cancelled: bool,
}

/// Recover (copy) files from a scan result to a destination directory.
#[tauri::command]
pub async fn recover_files(
    _state: State<'_, AppState>,
    _scan_id: ScanId,
    _file_paths: Vec<String>,
    _destination: String,
) -> Result<RecoverStats, String> {
    // v0: stub.
    Ok(RecoverStats::default())
}

/// Statistics from a recover operation.
#[derive(Debug, Clone, Default, serde::Serialize)]
pub struct RecoverStats {
    pub files_recovered: u64,
    pub bytes_recovered: u64,
    pub files_failed: u64,
    pub duration_ms: u64,
}
