//! App state shared across Tauri commands.

use parking_lot::RwLock;
use std::collections::HashMap;
use std::sync::Arc;

/// A scan session ID.
pub type ScanId = String;

/// App state shared across Tauri commands.
#[derive(Debug, Default)]
pub struct AppState {
    /// Active scan sessions, keyed by ID.
    pub scans: RwLock<HashMap<ScanId, Arc<ScanSession>>>,
}

impl AppState {
    /// Construct a new empty state.
    pub fn new() -> Self {
        Self::default()
    }
}

/// A scan session.
#[derive(Debug)]
pub struct ScanSession {
    /// The device path being scanned.
    pub device_path: String,
    /// The scan mode.
    pub mode: rdw_core::scan::ScanMode,
    /// Whether the scan has been cancelled.
    pub cancelled: parking_lot::Mutex<bool>,
    /// Last known progress (0..=1).
    pub progress: parking_lot::Mutex<f64>,
    /// Last known phase.
    pub phase: parking_lot::Mutex<rdw_core::progress::ScanPhase>,
}
