//! File record (high-level — aggregates attributes into a coherent file).
//!
//! Equivalent to EaseUS's `CMFTInfo` + `CNTFSFileProperties`.

use crate::attribute::{Attribute, AttributeType, DataRunEntry};
use crate::mft::MftRecord;
use rdw_core::{
    data_run::{DataRun, DataRunList},
    CoreError, CoreResult,
};

/// $FILE_NAME attribute content.
///
/// Layout (after the common attribute header):
///
/// | Offset | Size | Field |
/// |--------|------|-------|
/// | 0x00   | 8    | Parent directory reference |
/// | 0x08   | 8    | Creation time (FILETIME) |
/// | 0x10   | 8    | Modification time (FILETIME) |
/// | 0x18   | 8    | MFT modification time (FILETIME) |
/// | 0x20   | 8    | Read time (FILETIME) |
/// | 0x28   | 8    | Allocated size |
/// | 0x30   | 8    | Real size |
/// | 0x38   | 4    | Flags |
/// | 0x3C   | 4    | Reparse value |
/// | 0x40   | 1    | Name length in UTF-16 units |
/// | 0x41   | 1    | Name namespace (0=POSIX, 1=Win32, 2=DOS, 3=Win32+DOS) |
/// | 0x42   | var  | Name in UTF-16LE |
#[derive(Debug, Clone)]
pub struct FileNameAttr {
    /// Parent directory file reference (low 48 bits = record number, high 16 = sequence).
    pub parent_ref: u64,
    /// Creation time (Windows FILETIME, 100ns since 1601-01-01).
    pub creation_time: u64,
    /// Modification time.
    pub modification_time: u64,
    /// MFT modification time.
    pub mft_modification_time: u64,
    /// Read time.
    pub read_time: u64,
    /// Allocated size.
    pub allocated_size: u64,
    /// Real size.
    pub real_size: u64,
    /// Flags.
    pub flags: u32,
    /// Reparse value.
    pub reparse_value: u32,
    /// File name (decoded UTF-16).
    pub name: String,
    /// Namespace (0=POSIX, 1=Win32, 2=DOS, 3=Win32+DOS).
    pub namespace: u8,
}

impl FileNameAttr {
    /// Parse a $FILE_NAME content buffer.
    pub fn parse(content: &[u8]) -> CoreResult<Self> {
        if content.len() < 66 {
            return Err(CoreError::parse(
                "$FILE_NAME",
                format!("content too short: {} < 66", content.len()),
            ));
        }
        let parent_ref = u64::from_le_bytes(content[0..8].try_into().unwrap());
        let creation_time = u64::from_le_bytes(content[8..16].try_into().unwrap());
        let modification_time = u64::from_le_bytes(content[16..24].try_into().unwrap());
        let mft_modification_time = u64::from_le_bytes(content[24..32].try_into().unwrap());
        let read_time = u64::from_le_bytes(content[32..40].try_into().unwrap());
        let allocated_size = u64::from_le_bytes(content[40..48].try_into().unwrap());
        let real_size = u64::from_le_bytes(content[48..56].try_into().unwrap());
        let flags = u32::from_le_bytes(content[56..60].try_into().unwrap());
        let reparse_value = u32::from_le_bytes(content[60..64].try_into().unwrap());
        let name_length = content[64] as usize;
        let namespace = content[65];
        let name_bytes = name_length * 2;
        if 66 + name_bytes > content.len() {
            return Err(CoreError::corruption(
                "$FILE_NAME",
                format!(
                    "name extends past content: length={}, buf={}",
                    name_bytes,
                    content.len()
                ),
            ));
        }
        let name_utf16: Vec<u16> = content[66..66 + name_bytes]
            .as_chunks::<2>()
            .0
            .iter()
            .map(|c| u16::from_le_bytes([c[0], c[1]]))
            .collect();
        let name = String::from_utf16_lossy(&name_utf16);

        Ok(Self {
            parent_ref,
            creation_time,
            modification_time,
            mft_modification_time,
            read_time,
            allocated_size,
            real_size,
            flags,
            reparse_value,
            name,
            namespace,
        })
    }

    /// Extract the parent MFT record number (low 48 bits of parent_ref).
    pub fn parent_record(&self) -> u64 {
        self.parent_ref & 0x0000_FFFF_FFFF_FFFF
    }

    /// Extract the parent sequence number (high 16 bits of parent_ref).
    pub fn parent_sequence(&self) -> u16 {
        (self.parent_ref >> 48) as u16
    }
}

/// $STANDARD_INFORMATION attribute content.
#[derive(Debug, Clone, Copy)]
pub struct StandardInformationAttr {
    /// Creation time (FILETIME).
    pub creation_time: u64,
    /// Modification time.
    pub modification_time: u64,
    /// MFT modification time.
    pub mft_modification_time: u64,
    /// Read time.
    pub read_time: u64,
    /// Flags.
    pub flags: u32,
    /// Owner ID (NTFS 3.0+).
    pub owner_id: u32,
    /// Security ID.
    pub security_id: u32,
    /// USN.
    pub usn: u64,
}

impl StandardInformationAttr {
    /// Parse a $STANDARD_INFORMATION content buffer.
    pub fn parse(content: &[u8]) -> CoreResult<Self> {
        if content.len() < 48 {
            return Err(CoreError::parse(
                "$STANDARD_INFORMATION",
                format!("content too short: {} < 48", content.len()),
            ));
        }
        let creation_time = u64::from_le_bytes(content[0..8].try_into().unwrap());
        let modification_time = u64::from_le_bytes(content[8..16].try_into().unwrap());
        let mft_modification_time = u64::from_le_bytes(content[16..24].try_into().unwrap());
        let read_time = u64::from_le_bytes(content[24..32].try_into().unwrap());
        let flags = u32::from_le_bytes(content[32..36].try_into().unwrap());
        let owner_id = if content.len() >= 72 {
            u32::from_le_bytes(content[48..52].try_into().unwrap())
        } else {
            0
        };
        let security_id = if content.len() >= 72 {
            u32::from_le_bytes(content[52..56].try_into().unwrap())
        } else {
            0
        };
        let usn = if content.len() >= 72 {
            u64::from_le_bytes(content[64..72].try_into().unwrap())
        } else {
            0
        };

        Ok(Self {
            creation_time,
            modification_time,
            mft_modification_time,
            read_time,
            flags,
            owner_id,
            security_id,
            usn,
        })
    }
}

/// A high-level file record — aggregates attributes from one or more MFT records.
#[derive(Debug, Clone, Default)]
pub struct FileRecord {
    /// MFT record number.
    pub record_number: u64,
    /// Sequence number.
    pub sequence_number: u16,
    /// Whether the record is in use.
    pub in_use: bool,
    /// Whether this is a directory.
    pub is_directory: bool,
    /// $STANDARD_INFORMATION (preferred — there can be at most one).
    pub std_info: Option<StandardInformationAttr>,
    /// $FILE_NAME attributes (there can be multiple — POSIX, Win32, DOS).
    pub file_names: Vec<FileNameAttr>,
    /// $DATA attribute (resident or non-resident) for the unnamed $DATA stream.
    pub data: Option<DataRunList>,
    /// Named $DATA attributes (Alternate Data Streams).
    pub ads: Vec<(String, DataRunList)>,
    /// Raw run list entries from non-resident $DATA (for advanced use).
    pub raw_data_runs: Vec<DataRunEntry>,
    /// Base record reference (0 if this is the base, non-zero if this is an extension record).
    pub base_record_ref: u64,
}

impl FileRecord {
    /// Build a file record from a single MFT record.
    pub fn from_mft_record(record: &MftRecord) -> CoreResult<Self> {
        let mut builder = FileRecordBuilder::new();
        builder.record_number = record.header.mft_record_number as u64;
        builder.sequence_number = record.header.sequence_number;
        builder.in_use = record.is_in_use();
        builder.is_directory = record.is_directory();
        builder.base_record_ref = record.header.base_record_ref;

        for attr_slice in record.attributes() {
            let attr = Attribute::parse(attr_slice)?;
            builder.add_attribute(attr)?;
        }

        Ok(builder.build())
    }

    /// Get the preferred file name (Win32 namespace preferred over DOS).
    pub fn best_name(&self) -> Option<&str> {
        let preferred = self
            .file_names
            .iter()
            .find(|f| f.namespace == 1)
            .or_else(|| self.file_names.iter().find(|f| f.namespace == 0))
            .or_else(|| self.file_names.first())?;
        Some(&preferred.name)
    }

    /// Get the preferred parent reference (from the same $FILE_NAME as `best_name`).
    pub fn best_parent(&self) -> Option<u64> {
        let preferred = self
            .file_names
            .iter()
            .find(|f| f.namespace == 1)
            .or_else(|| self.file_names.iter().find(|f| f.namespace == 0))
            .or_else(|| self.file_names.first())?;
        Some(preferred.parent_record())
    }
}

/// Builder for `FileRecord` — accumulates attributes as we walk MFT records.
#[derive(Debug, Default)]
pub struct FileRecordBuilder {
    /// MFT record number.
    pub record_number: u64,
    /// Sequence number.
    pub sequence_number: u16,
    /// Whether the record is in use.
    pub in_use: bool,
    /// Whether this is a directory.
    pub is_directory: bool,
    std_info: Option<StandardInformationAttr>,
    file_names: Vec<FileNameAttr>,
    data: Option<DataRunList>,
    ads: Vec<(String, DataRunList)>,
    raw_data_runs: Vec<DataRunEntry>,
    /// Base record reference.
    pub base_record_ref: u64,
}

impl FileRecordBuilder {
    /// Construct a new builder.
    pub fn new() -> Self {
        Self::default()
    }

    /// Add an attribute to the file record.
    pub fn add_attribute(&mut self, attr: Attribute) -> CoreResult<()> {
        let attr_type = attr.attr_type();
        match attr_type {
            AttributeType::StandardInformation => {
                if let Some(content) = attr.resident_content() {
                    self.std_info = Some(StandardInformationAttr::parse(content)?);
                }
            }
            AttributeType::FileName => {
                if let Some(content) = attr.resident_content() {
                    let fn_attr = FileNameAttr::parse(content)?;
                    self.file_names.push(fn_attr);
                }
            }
            AttributeType::Data => match &attr {
                Attribute::Resident(_, content) => {
                    self.data = Some(DataRunList::resident(content.clone()));
                }
                Attribute::NonResident(nr, runs) => {
                    let data_runs: Vec<DataRun> = runs
                        .iter()
                        .map(|r| {
                            if let Some(off) = r.offset {
                                DataRun::new(off as u64, r.length)
                            } else {
                                DataRun::sparse(r.length)
                            }
                        })
                        .collect();
                    self.data = Some(DataRunList::non_resident(data_runs, nr.real_size));
                    self.raw_data_runs = runs.clone();
                }
            },
            _ => {}
        }
        Ok(())
    }

    /// Build the final `FileRecord`.
    pub fn build(self) -> FileRecord {
        FileRecord {
            record_number: self.record_number,
            sequence_number: self.sequence_number,
            in_use: self.in_use,
            is_directory: self.is_directory,
            std_info: self.std_info,
            file_names: self.file_names,
            data: self.data,
            ads: self.ads,
            raw_data_runs: self.raw_data_runs,
            base_record_ref: self.base_record_ref,
        }
    }
}
