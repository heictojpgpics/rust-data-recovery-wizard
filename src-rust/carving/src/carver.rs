//! Carver — walks the storage device block-by-block, looking for file signatures.

use crate::{analyser::AnalyserContext, registry::AnalyserRegistry};
use rdw_core::{
    error::{CoreError, CoreResult},
    file::{FileEntry, FileMetadata, FileProperties, FileState},
    progress::{Progress, ScanPhase},
    storage::StorageDevice,
};
use std::sync::Arc;

/// Options for a carve operation.
#[derive(Debug, Clone)]
pub struct CarveOptions {
    /// Starting LBA (default 0).
    pub start_lba: u64,
    /// Ending LBA (exclusive). 0 = scan to end of device.
    pub end_lba: u64,
    /// Whether to validate tails (slower but more accurate).
    pub validate_tails: bool,
    /// Maximum file size to carve (0 = unlimited).
    pub max_file_size: u64,
    /// Whether to skip clusters that are marked as allocated (per a bitmap).
    pub skip_allocated: bool,
    /// Block stride (1 = scan every block, 4 = every 4th block, etc.).
    /// Larger stride = faster but misses files that don't start on stride boundary.
    pub block_stride: u32,
}

impl Default for CarveOptions {
    fn default() -> Self {
        Self {
            start_lba: 0,
            end_lba: 0,
            validate_tails: true,
            max_file_size: 0,
            skip_allocated: false,
            block_stride: 1,
        }
    }
}

/// A carved file — a discovered file in unallocated space.
#[derive(Debug, Clone)]
pub struct CarvedFile {
    /// Starting LBA on the device.
    pub start_lba: u64,
    /// File size in bytes.
    pub size: u64,
    /// Detected extension.
    pub extension: String,
    /// Detected category.
    pub category: rdw_signatures::FileCategory,
    /// Confidence (0.0 to 1.0).
    pub confidence: f32,
    /// Extracted metadata.
    pub metadata: FileMetadata,
}

impl CarvedFile {
    /// Convert to a `FileEntry` for inclusion in the scan result tree.
    pub fn to_file_entry(&self) -> FileEntry {
        let name = format!("carved_{}_{}.{}", self.start_lba, self.size, self.extension);
        let mut props = FileProperties::new(name, self.size);
        props.state = FileState::Lost;
        props.metadata = self.metadata.clone();
        FileEntry::new(props)
    }
}

/// Carve statistics.
#[derive(Debug, Clone, Default, serde::Serialize, serde::Deserialize)]
pub struct CarveStats {
    /// Total bytes scanned.
    pub bytes_scanned: u64,
    /// Total blocks scanned.
    pub blocks_scanned: u64,
    /// Files carved.
    pub files_carved: u64,
    /// Files rejected (header matched but validation failed).
    pub files_rejected: u64,
    /// Bad sectors skipped.
    pub bad_sectors: u64,
    /// Wall-clock duration in milliseconds.
    pub duration_ms: u64,
}

/// Carve progress event (used by the Progress callback).
#[derive(Debug, Clone, serde::Serialize, serde::Deserialize)]
pub struct CarveProgress {
    /// Current block being scanned.
    pub current_block: u64,
    /// Total blocks to scan.
    pub total_blocks: u64,
    /// Files carved so far.
    pub files_carved: u64,
}

/// The carver — walks a storage device looking for files by signature.
pub struct Carver {
    /// Analyser registry.
    registry: Arc<AnalyserRegistry>,
}

impl Carver {
    /// Construct a new carver with the given registry.
    pub fn new(registry: Arc<AnalyserRegistry>) -> Self {
        Self { registry }
    }

    /// Run the carve operation.
    pub fn carve(
        &self,
        device: &dyn StorageDevice,
        options: &CarveOptions,
        progress: &Progress,
    ) -> CoreResult<Vec<CarvedFile>> {
        let start = std::time::Instant::now();
        if !progress.phase(ScanPhase::Carving) {
            return Err(CoreError::Cancelled);
        }

        let block_size = device.block_size() as u64;
        let total_blocks = if options.end_lba > 0 {
            options.end_lba - options.start_lba
        } else {
            device.total_blocks() - options.start_lba
        };
        let stride = options.block_stride.max(1) as u64;
        let mut files = Vec::new();
        let mut stats = CarveStats::default();

        let mut current = options.start_lba;
        let end = if options.end_lba > 0 {
            options.end_lba
        } else {
            device.total_blocks()
        };

        let mut block_buf = vec![0u8; block_size as usize];
        while current < end {
            if progress.is_cancelled() {
                return Err(CoreError::Cancelled);
            }
            if stats.blocks_scanned.is_multiple_of(1024)
                && !progress.progress(
                    ScanPhase::Carving,
                    stats.blocks_scanned,
                    total_blocks,
                    stats.bytes_scanned / start.elapsed().as_secs().max(1),
                )
            {
                return Err(CoreError::Cancelled);
            }

            // Read the block.
            if let Err(e) = device.read_blocks(current, &mut block_buf) {
                if options.block_stride == 1 {
                    stats.bad_sectors += 1;
                    tracing::warn!("bad sector at LBA {}: {}", current, e);
                    current += stride;
                    continue;
                } else {
                    return Err(e);
                }
            }
            stats.bytes_scanned += block_size;
            stats.blocks_scanned += 1;

            // Look up candidate analysers.
            let first_byte = block_buf[0];
            let candidates = self.registry.candidates_for_byte(first_byte);

            for analyser in candidates {
                let ctx = AnalyserContext {
                    device,
                    start_lba: current,
                    block_buf: &block_buf,
                    block_size: device.block_size(),
                    estimated_size: block_size,
                };

                // Step 1: magic match.
                if !analyser.matches_magic(&ctx) {
                    continue;
                }

                // Step 2: header validation.
                if let Err(e) = analyser.validate_header(&ctx) {
                    tracing::trace!(
                        "LBA {}: analyser {} header validation failed: {}",
                        current,
                        analyser.id(),
                        e
                    );
                    stats.files_rejected += 1;
                    continue;
                }

                // Step 3: determine size.
                let size = match analyser.determine_size(&ctx) {
                    Ok(s) => s,
                    Err(e) => {
                        tracing::trace!(
                            "LBA {}: analyser {} size determination failed: {}",
                            current,
                            analyser.id(),
                            e
                        );
                        stats.files_rejected += 1;
                        continue;
                    }
                };

                // Step 4: tail validation (if applicable).
                if options.validate_tails && analyser.needs_tail() {
                    let tail_size = (device.block_size() as usize).min(size as usize);
                    let mut tail_buf = vec![0u8; tail_size];
                    let tail_lba = current + (size / block_size);
                    if tail_lba < end {
                        if let Err(e) = device.read_blocks(tail_lba, &mut tail_buf) {
                            tracing::trace!(
                                "LBA {}: analyser {} tail read failed: {}",
                                current,
                                analyser.id(),
                                e
                            );
                            stats.files_rejected += 1;
                            continue;
                        }
                        if let Err(e) = analyser.validate_tail(&tail_buf) {
                            tracing::trace!(
                                "LBA {}: analyser {} tail validation failed: {}",
                                current,
                                analyser.id(),
                                e
                            );
                            stats.files_rejected += 1;
                            continue;
                        }
                    }
                }

                // Step 5: extract metadata.
                let metadata = analyser.extract_metadata(&ctx).unwrap_or_default();

                let carved = CarvedFile {
                    start_lba: current,
                    size,
                    extension: analyser.extension().to_string(),
                    category: analyser.category(),
                    confidence: metadata.carving_confidence.unwrap_or(0.7),
                    metadata,
                };
                tracing::info!(
                    "LBA {}: carved {} file ({} bytes)",
                    current,
                    carved.extension,
                    carved.size
                );
                stats.files_carved += 1;
                files.push(carved);

                // Emit a found-file event.
                if !progress.file_found(files.last().unwrap().to_file_entry()) {
                    return Err(CoreError::Cancelled);
                }

                // Skip past this carved file.
                let blocks_to_skip = (size / block_size).max(1);
                current += blocks_to_skip * stride;
                break; // Don't try other analysers on this block.
            }

            current += stride;
        }

        stats.duration_ms = start.elapsed().as_millis() as u64;
        let _ = progress.warning(format!(
            "Carved {} files (rejected {}), {} bad sectors, {} ms",
            stats.files_carved, stats.files_rejected, stats.bad_sectors, stats.duration_ms
        ));

        Ok(files)
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::FileAnalyser;

    struct FakeDevice {
        data: Vec<u8>,
        block_size: u32,
    }

    impl StorageDevice for FakeDevice {
        fn read_blocks(&self, start_lba: u64, buf: &mut [u8]) -> rdw_core::CoreResult<()> {
            let bs = self.block_size as usize;
            let offset = (start_lba as usize) * bs;
            if offset + buf.len() > self.data.len() {
                buf.fill(0);
                return Ok(());
            }
            buf.copy_from_slice(&self.data[offset..offset + buf.len()]);
            Ok(())
        }
        fn block_size(&self) -> u32 {
            self.block_size
        }
        fn total_blocks(&self) -> u64 {
            (self.data.len() / self.block_size as usize) as u64
        }
        fn name(&self) -> &str {
            "fake"
        }
    }

    struct StubProgress;
    impl rdw_core::progress::ProgressCallback for StubProgress {
        fn on_event(&self, _event: rdw_core::progress::ProgressEvent) -> bool {
            true
        }
    }

    #[test]
    fn carver_finds_jpg() {
        let bs = 512usize;
        let mut data = vec![0u8; bs * 10];
        // Write JPG header at block 2.
        data[bs * 2..bs * 2 + 4].copy_from_slice(&[0xFF, 0xD8, 0xFF, 0xE0]);
        // Write JPG tail (EOI marker) at end of "file" (block 5).
        data[bs * 5 + bs - 2..bs * 5 + bs].copy_from_slice(&[0xFF, 0xD9]);

        let device = FakeDevice {
            data,
            block_size: bs as u32,
        };

        let mut reg = AnalyserRegistry::new();
        reg.register(Arc::new(crate::validators::JpgAnalyser) as Arc<dyn FileAnalyser>);
        let carver = Carver::new(Arc::new(reg));

        let prog = rdw_core::progress::Progress::new(std::sync::Arc::new(StubProgress));
        let files = carver
            .carve(
                &device,
                &CarveOptions {
                    validate_tails: false, // tail validation needs accurate size
                    ..Default::default()
                },
                &prog,
            )
            .unwrap();
        assert!(!files.is_empty(), "should find at least one JPG");
        assert_eq!(files[0].extension, "jpg");
        assert_eq!(files[0].start_lba, 2);
    }

    #[test]
    fn carver_skips_random_data() {
        let bs = 512usize;
        let mut data = vec![0u8; bs * 5];
        // Fill with non-matching random data.
        for (i, b) in data.iter_mut().enumerate() {
            *b = ((i * 37) & 0xFF) as u8;
        }

        let device = FakeDevice {
            data,
            block_size: bs as u32,
        };

        let mut reg = AnalyserRegistry::new();
        reg.register(Arc::new(crate::validators::JpgAnalyser) as Arc<dyn FileAnalyser>);
        let carver = Carver::new(Arc::new(reg));

        let prog = rdw_core::progress::Progress::new(std::sync::Arc::new(StubProgress));
        let files = carver
            .carve(&device, &CarveOptions::default(), &prog)
            .unwrap();
        assert!(files.is_empty(), "should not find any files in random data");
    }
}
