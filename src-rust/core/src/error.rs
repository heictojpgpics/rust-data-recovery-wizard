//! Error types for the RDW core.

use thiserror::Error;

/// Top-level error type for the RDW core engine.
#[derive(Debug, Error)]
pub enum CoreError {
    /// I/O error from the underlying storage device.
    #[error("I/O error: {0}")]
    Io(#[from] std::io::Error),

    /// The on-disk data failed to parse.
    #[error("Parse error in {context}: {reason}")]
    Parse {
        /// What was being parsed (e.g. "MFT record 0x1234").
        context: String,
        /// Why it failed.
        reason: String,
    },

    /// The on-disk data violates filesystem invariants.
    #[error("Corruption in {context}: {reason}")]
    Corruption {
        /// What was corrupt.
        context: String,
        /// Why we consider it corrupt.
        reason: String,
    },

    /// The requested operation is not supported for this filesystem / state.
    #[error("Unsupported: {0}")]
    Unsupported(String),

    /// The requested file or resource was not found.
    #[error("Not found: {0}")]
    NotFound(String),

    /// An invariant was violated.
    #[error("Invariant violation: {0}")]
    Invariant(String),

    /// A user-provided parameter was invalid.
    #[error("Invalid parameter: {0}")]
    InvalidParameter(String),

    /// The operation was cancelled by a progress callback.
    #[error("Cancelled by user")]
    Cancelled,

    /// A cryptographic operation failed (e.g. BitLocker decryption).
    #[error("Crypto error: {0}")]
    Crypto(String),

    /// A wrapper around any other error.
    #[error(transparent)]
    Other(#[from] Box<dyn std::error::Error + Send + Sync>),
}

/// Convenience Result alias.
pub type CoreResult<T> = Result<T, CoreError>;

impl CoreError {
    /// Construct a parse error.
    pub fn parse<C: Into<String>, R: Into<String>>(context: C, reason: R) -> Self {
        Self::Parse {
            context: context.into(),
            reason: reason.into(),
        }
    }

    /// Construct a corruption error.
    pub fn corruption<C: Into<String>, R: Into<String>>(context: C, reason: R) -> Self {
        Self::Corruption {
            context: context.into(),
            reason: reason.into(),
        }
    }
}
