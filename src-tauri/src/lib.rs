//! Tauri shell for the Rust Data Recovery Wizard.

pub mod commands;
pub mod state;

use tracing_subscriber::{EnvFilter, fmt::format::FmtSpan};

/// Initialize tracing.
fn init_tracing() {
    tracing_subscriber::fmt()
        .with_env_filter(EnvFilter::from_default_env().add_directive("rdw=info".parse().unwrap()))
        .with_span_events(FmtSpan::CLOSE)
        .init();
}

/// Run the Tauri app.
#[cfg_attr(mobile, tauri::mobile_entry_point)]
pub fn run() {
    init_tracing();
    tracing::info!("Starting Rust Data Recovery Wizard v0.1.0");

    let app_state = state::AppState::new();

    tauri::Builder::default()
        .plugin(tauri_plugin_shell::init())
        .plugin(tauri_plugin_dialog::init())
        .plugin(tauri_plugin_fs::init())
        .manage(app_state)
        .invoke_handler(tauri::generate_handler![
            commands::list_storage_devices,
            commands::start_scan,
            commands::cancel_scan,
            commands::get_scan_status,
            commands::recover_files,
        ])
        .setup(|app| {
            tracing::info!("Tauri app initialized");
            Ok(())
        })
        .run(tauri::generate_context!())
        .expect("error while running tauri application");
}
