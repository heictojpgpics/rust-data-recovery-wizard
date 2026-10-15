//! Progress reporting for long-running scans.
//!
//! Equivalent to EaseUS's progress callback pattern. Implementations forward
//! progress events to the UI (via Tauri IPC in our case).

use std::sync::atomic::{AtomicBool, Ordering};
use std::sync::Arc;

/// High-level scan phase. Matches what the user sees in the UI.
#[derive(Debug, Clone, Copy, PartialEq, Eq, serde::Serialize, serde::Deserialize)]
pub enum ScanPhase {
    /// Opening the device + reading partition table.
    Opening,
    /// Detecting filesystem type.
    DetectingFs,
    /// Quick scan (FS metadata walk).
    QuickScan,
    /// Complete scan (deep + carving).
    CompleteScan,
    /// RAW carving (file signature scan).
    Carving,
    /// Lost partition recovery.
    PartitionRecovery,
    /// Building the result tree.
    BuildingTree,
    /// Done.
    Done,
    /// Cancelled.
    Cancelled,
    /// Failed.
    Failed,
}

impl std::fmt::Display for ScanPhase {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(match self {
            Self::Opening => "Opening device",
            Self::DetectingFs => "Detecting filesystem",
            Self::QuickScan => "Quick scan",
            Self::CompleteScan => "Deep scan",
            Self::Carving => "RAW carving",
            Self::PartitionRecovery => "Partition recovery",
            Self::BuildingTree => "Building result tree",
            Self::Done => "Done",
            Self::Cancelled => "Cancelled",
            Self::Failed => "Failed",
        })
    }
}

/// A progress event emitted during scanning.
#[derive(Debug, Clone, serde::Serialize, serde::Deserialize)]
pub enum ProgressEvent {
    /// Phase changed.
    PhaseChanged(ScanPhase),
    /// Numeric progress. `current` and `total` are in arbitrary units (blocks, files, bytes).
    Progress {
        /// Current phase.
        phase: ScanPhase,
        /// Current units processed.
        current: u64,
        /// Total units to process. 0 means "indeterminate".
        total: u64,
        /// Throughput in units/second (best-effort).
        rate_per_sec: u64,
    },
    /// A file was found (for live UI updates).
    FileFound(Box<crate::file::FileEntry>),
    /// A warning was emitted (non-fatal).
    Warning(String),
    /// The scan finished with the given stats.
    Finished(crate::scan::ScanStats),
    /// The scan was cancelled.
    Cancelled,
    /// The scan failed.
    Failed(String),
}

/// A progress callback.
///
/// Implementations forward events to the UI. Return `false` to cancel the scan.
pub trait ProgressCallback: Send + Sync {
    /// Called for every event. Return `false` to request cancellation.
    fn on_event(&self, event: ProgressEvent) -> bool;
}

/// A [`Progress`] implementation that wraps a [`ProgressCallback`] + cancellation flag.
pub struct Progress {
    callback: Arc<dyn ProgressCallback>,
    cancelled: Arc<AtomicBool>,
}

impl std::fmt::Debug for Progress {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.debug_struct("Progress")
            .field("cancelled", &self.cancelled.load(Ordering::Relaxed))
            .finish()
    }
}

impl Progress {
    /// Construct a new progress wrapper.
    pub fn new(callback: Arc<dyn ProgressCallback>) -> Self {
        Self {
            callback,
            cancelled: Arc::new(AtomicBool::new(false)),
        }
    }

    /// Emit an event. Returns `false` if the callback requested cancellation.
    pub fn emit(&self, event: ProgressEvent) -> bool {
        let keep_going = self.callback.on_event(event);
        if !keep_going {
            self.cancelled.store(true, Ordering::Relaxed);
        }
        keep_going
    }

    /// Whether the user has requested cancellation.
    pub fn is_cancelled(&self) -> bool {
        self.cancelled.load(Ordering::Relaxed)
    }

    /// Request cancellation from outside (e.g. UI cancel button).
    pub fn cancel(&self) {
        self.cancelled.store(true, Ordering::Relaxed);
    }

    /// Emit a phase change.
    pub fn phase(&self, phase: ScanPhase) -> bool {
        self.emit(ProgressEvent::PhaseChanged(phase))
    }

    /// Emit numeric progress.
    pub fn progress(&self, phase: ScanPhase, current: u64, total: u64, rate_per_sec: u64) -> bool {
        self.emit(ProgressEvent::Progress {
            phase,
            current,
            total,
            rate_per_sec,
        })
    }

    /// Emit a found file.
    pub fn file_found(&self, entry: crate::file::FileEntry) -> bool {
        self.emit(ProgressEvent::FileFound(Box::new(entry)))
    }

    /// Emit a warning.
    pub fn warning(&self, msg: impl Into<String>) -> bool {
        self.emit(ProgressEvent::Warning(msg.into()))
    }

    /// Emit finished.
    pub fn finished(&self, stats: crate::scan::ScanStats) -> bool {
        self.emit(ProgressEvent::Finished(stats))
    }

    /// Emit failed.
    pub fn failed(&self, msg: impl Into<String>) -> bool {
        self.emit(ProgressEvent::Failed(msg.into()))
    }
}
