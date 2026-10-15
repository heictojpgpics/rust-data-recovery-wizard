//! Analyser registry — a multimap from first byte to list of analysers.
//!
//! Equivalent to EaseUS's `EUGetAnalyserMultimap` (see
//! `docs/reverse-engineering/decompiled/RAWSearchDLL.dll/`).

use crate::analyser::{AnalyserId, FileAnalyser};
use parking_lot::RwLock;
use std::collections::HashMap;
use std::sync::Arc;

/// Registry of all known file analysers.
pub struct AnalyserRegistry {
    /// All analysers, indexed by ID for dedup.
    analysers: HashMap<AnalyserId, Arc<dyn FileAnalyser>>,
    /// Multimap from first magic byte → list of analyser IDs.
    by_first_byte: HashMap<u8, Vec<AnalyserId>>,
}

impl std::fmt::Debug for AnalyserRegistry {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.debug_struct("AnalyserRegistry")
            .field("num_analysers", &self.analysers.len())
            .field("first_byte_buckets", &self.by_first_byte.len())
            .finish()
    }
}

impl AnalyserRegistry {
    /// Construct an empty registry.
    pub fn new() -> Self {
        Self {
            analysers: HashMap::new(),
            by_first_byte: HashMap::new(),
        }
    }

    /// Register an analyser.
    pub fn register(&mut self, analyser: Arc<dyn FileAnalyser>) {
        let id = analyser.id();
        let prefix = analyser.magic_prefix();
        if !prefix.is_empty() {
            self.by_first_byte.entry(prefix[0]).or_default().push(id);
        }
        self.analysers.insert(id, analyser);
    }

    /// Total number of registered analysers.
    pub fn len(&self) -> usize {
        self.analysers.len()
    }

    /// Whether the registry is empty.
    pub fn is_empty(&self) -> bool {
        self.analysers.is_empty()
    }

    /// Look up candidate analysers by the first byte of a candidate block.
    pub fn candidates_for_byte(&self, first_byte: u8) -> Vec<Arc<dyn FileAnalyser>> {
        self.by_first_byte
            .get(&first_byte)
            .into_iter()
            .flatten()
            .filter_map(|id| self.analysers.get(id).cloned())
            .collect()
    }

    /// Iterate over all registered analysers.
    pub fn iter(&self) -> impl Iterator<Item = &Arc<dyn FileAnalyser>> {
        self.analysers.values()
    }
}

impl Default for AnalyserRegistry {
    fn default() -> Self {
        Self::new()
    }
}

/// Thread-safe wrapper around `AnalyserRegistry` for use from multiple threads.
pub struct SharedAnalyserRegistry {
    inner: RwLock<AnalyserRegistry>,
}

impl SharedAnalyserRegistry {
    /// Construct an empty shared registry.
    pub fn new() -> Self {
        Self {
            inner: RwLock::new(AnalyserRegistry::new()),
        }
    }

    /// Register an analyser.
    pub fn register(&self, analyser: Arc<dyn FileAnalyser>) {
        self.inner.write().register(analyser);
    }

    /// Look up candidates for a byte (clones Arcs).
    pub fn candidates_for_byte(&self, first_byte: u8) -> Vec<Arc<dyn FileAnalyser>> {
        self.inner.read().candidates_for_byte(first_byte)
    }

    /// Number of registered analysers.
    pub fn len(&self) -> usize {
        self.inner.read().len()
    }

    /// Whether empty.
    pub fn is_empty(&self) -> bool {
        self.inner.read().is_empty()
    }
}

impl Default for SharedAnalyserRegistry {
    fn default() -> Self {
        Self::new()
    }
}

/// Builder for `AnalyserRegistry` — ergonomic construction with multiple analysers.
pub struct RegistryBuilder {
    registry: AnalyserRegistry,
}

impl RegistryBuilder {
    /// Construct a new builder.
    pub fn new() -> Self {
        Self {
            registry: AnalyserRegistry::new(),
        }
    }

    /// Add an analyser.
    pub fn with(mut self, analyser: Arc<dyn FileAnalyser>) -> Self {
        self.registry.register(analyser);
        self
    }

    /// Build the registry.
    pub fn build(self) -> AnalyserRegistry {
        self.registry
    }
}

impl Default for RegistryBuilder {
    fn default() -> Self {
        Self::new()
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::analyser::AnalyserContext;
    use rdw_core::file::FileMetadata;
    use rdw_core::CoreResult;
    use rdw_signatures::FileCategory;

    struct FakeAnalyser {
        id: &'static str,
        ext: &'static str,
        magic: Vec<u8>,
    }

    impl FileAnalyser for FakeAnalyser {
        fn id(&self) -> &'static str {
            self.id
        }
        fn extension(&self) -> &str {
            self.ext
        }
        fn category(&self) -> FileCategory {
            FileCategory::Other
        }
        fn magic_prefix(&self) -> &[u8] {
            &self.magic
        }
        fn matches_magic(&self, ctx: &AnalyserContext<'_>) -> bool {
            ctx.block_buf.starts_with(&self.magic)
        }
        fn extract_metadata(&self, _ctx: &AnalyserContext<'_>) -> CoreResult<FileMetadata> {
            Ok(FileMetadata::default())
        }
    }

    #[test]
    fn registry_register_and_lookup() {
        let mut reg = AnalyserRegistry::new();
        let jpg = Arc::new(FakeAnalyser {
            id: "jpg",
            ext: "jpg",
            magic: vec![0xFF, 0xD8, 0xFF],
        }) as Arc<dyn FileAnalyser>;
        let pdf = Arc::new(FakeAnalyser {
            id: "pdf",
            ext: "pdf",
            magic: b"%PDF".to_vec(),
        }) as Arc<dyn FileAnalyser>;
        reg.register(jpg);
        reg.register(pdf);
        assert_eq!(reg.len(), 2);
        // Look up by first byte.
        let cands = reg.candidates_for_byte(0xFF);
        assert_eq!(cands.len(), 1);
        assert_eq!(cands[0].id(), "jpg");
        let cands = reg.candidates_for_byte(b'%');
        assert_eq!(cands.len(), 1);
        assert_eq!(cands[0].id(), "pdf");
        // Unknown byte.
        let cands = reg.candidates_for_byte(0x42);
        assert!(cands.is_empty());
    }

    #[test]
    fn builder_pattern() {
        let reg = RegistryBuilder::new()
            .with(Arc::new(FakeAnalyser {
                id: "jpg",
                ext: "jpg",
                magic: vec![0xFF, 0xD8, 0xFF],
            }) as Arc<dyn FileAnalyser>)
            .with(Arc::new(FakeAnalyser {
                id: "png",
                ext: "png",
                magic: vec![0x89, 0x50],
            }) as Arc<dyn FileAnalyser>)
            .build();
        assert_eq!(reg.len(), 2);
    }

    #[test]
    fn shared_registry_thread_safety() {
        use std::thread;
        let reg = std::sync::Arc::new(SharedAnalyserRegistry::new());
        let reg2 = reg.clone();
        let handle = thread::spawn(move || {
            reg2.register(Arc::new(FakeAnalyser {
                id: "test",
                ext: "test",
                magic: vec![0xAA],
            }) as Arc<dyn FileAnalyser>);
        });
        handle.join().unwrap();
        assert_eq!(reg.len(), 1);
        let cands = reg.candidates_for_byte(0xAA);
        assert_eq!(cands.len(), 1);
    }
}
