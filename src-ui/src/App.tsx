import { useEffect, useState } from "react";
import { invoke } from "@tauri-apps/api/core";

interface DeviceInfo {
  path: string;
  name: string;
  size: number;
  read_only: boolean;
  is_partition: boolean;
  fs_type: string | null;
  label: string | null;
}

function App() {
  const [devices, setDevices] = useState<DeviceInfo[]>([]);
  const [loading, setLoading] = useState(false);

  useEffect(() => {
    refreshDevices();
  }, []);

  async function refreshDevices() {
    setLoading(true);
    try {
      const list = await invoke<DeviceInfo[]>("list_storage_devices");
      setDevices(list);
    } catch (e) {
      console.error("Failed to list devices:", e);
    } finally {
      setLoading(false);
    }
  }

  return (
    <div className="app">
      <header className="app-header">
        <h1>Rust Data Recovery Wizard</h1>
        <button onClick={refreshDevices} disabled={loading}>
          {loading ? "Refreshing..." : "Refresh"}
        </button>
      </header>

      <main className="app-main">
        <section className="devices-section">
          <h2>Storage Devices</h2>
          {devices.length === 0 ? (
            <p className="empty">No devices detected. (Storage enumeration not yet implemented.)</p>
          ) : (
            <ul className="device-list">
              {devices.map((d) => (
                <li key={d.path} className="device-item">
                  <strong>{d.name}</strong> ({d.path})<br/>
                  <small>
                    {d.fs_type ?? "Unknown FS"} | {(d.size / 1e9).toFixed(1)} GB
                    {d.label ? ` | ${d.label}` : ""}
                  </small>
                </li>
              ))}
            </ul>
          )}
        </section>
      </main>

      <footer className="app-footer">
        <small>v0.1.0 · Phase 1 — Research & Core Engine</small>
      </footer>
    </div>
  );
}

export default App;
