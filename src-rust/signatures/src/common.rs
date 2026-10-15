//! Common file signatures (hardcoded).
//!
//! These are the ~60 file types that EaseUS implements as format-specific
//! analysers in `RAWSearchDLL.dll`. Each has a magic-byte signature and may
//! have additional validation logic (e.g. PDF must have `%%EOF`).
//!
//! Source: class names extracted from RAWSearchDLL.dll RTTI strings, including
//! `FileJPGAnalyser`, `FilePDFAnalyser`, `FilePNGAnalyser`, etc.
//! See `docs/reverse-engineering/RAWSearchDLL_strings.txt` for the raw list.

use crate::{FileCategory, Signature};

/// Returns the list of common file signatures.
///
/// This is the v0 set — covers the most common 30+ file types. We'll expand
/// to the full 60+ analysers EaseUS ships in subsequent iterations.
pub fn common_signatures() -> Vec<Signature> {
    vec![
        // === Graphics ===
        jpg(),
        jpeg(),
        png(),
        gif(),
        bmp(),
        tiff_le(),
        tiff_be(),
        psd(),
        ico(),
        webp(),
        heic(),
        svg(),
        // === Documents ===
        pdf(),
        doc(),
        docx(),
        xls(),
        xlsx(),
        ppt(),
        pptx(),
        rtf(),
        // === Audio ===
        mp3(),
        wav(),
        flac(),
        ogg(),
        aac(),
        m4a(),
        // === Video ===
        mp4(),
        avi(),
        mov(),
        mkv(),
        wmv(),
        flv(),
        mpg(),
        // === Archives ===
        zip(),
        rar(),
        rar5(),
        sevenz(),
        gzip(),
        tar(),
        // === Email ===
        pst(),
        ost(),
        eml(),
        msg(),
        dbx(),
        // === Other ===
        sqlite(),
        mdb(),
    ]
}

fn jpg() -> Signature {
    Signature {
        name: "JPEG".into(),
        extension: "jpg".into(),
        category: FileCategory::Graphic,
        header: crate::Pattern {
            offset: 0,
            bytes: vec![0xFF, 0xD8, 0xFF],
        },
        tail: Some(crate::Pattern {
            offset: 0,
            bytes: vec![0xFF, 0xD9],
        }),
        min_size: 64,
        max_size: 0,
        has_validator: true, // JPG analyser validates markers
    }
}

fn jpeg() -> Signature {
    let mut s = jpg();
    s.extension = "jpeg".into();
    s
}

fn png() -> Signature {
    Signature {
        name: "PNG".into(),
        extension: "png".into(),
        category: FileCategory::Graphic,
        header: crate::Pattern {
            offset: 0,
            bytes: vec![0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A],
        },
        tail: Some(crate::Pattern {
            offset: 0,
            bytes: vec![0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82],
        }),
        min_size: 64,
        max_size: 0,
        has_validator: true,
    }
}

fn gif() -> Signature {
    Signature {
        name: "GIF".into(),
        extension: "gif".into(),
        category: FileCategory::Graphic,
        header: crate::Pattern {
            offset: 0,
            bytes: b"GIF8".to_vec(),
        },
        tail: Some(crate::Pattern {
            offset: 0,
            bytes: vec![0x3B],
        }),
        min_size: 32,
        max_size: 0,
        has_validator: true,
    }
}

fn bmp() -> Signature {
    Signature {
        name: "BMP".into(),
        extension: "bmp".into(),
        category: FileCategory::Graphic,
        header: crate::Pattern {
            offset: 0,
            bytes: b"BM".to_vec(),
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: false,
    }
}

fn tiff_le() -> Signature {
    Signature {
        name: "TIFF (LE)".into(),
        extension: "tif".into(),
        category: FileCategory::Graphic,
        header: crate::Pattern {
            offset: 0,
            bytes: vec![0x49, 0x49, 0x2A, 0x00],
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: false,
    }
}

fn tiff_be() -> Signature {
    Signature {
        name: "TIFF (BE)".into(),
        extension: "tiff".into(),
        category: FileCategory::Graphic,
        header: crate::Pattern {
            offset: 0,
            bytes: vec![0x4D, 0x4D, 0x00, 0x2A],
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: false,
    }
}

fn psd() -> Signature {
    Signature {
        name: "PSD".into(),
        extension: "psd".into(),
        category: FileCategory::Graphic,
        header: crate::Pattern {
            offset: 0,
            bytes: b"8BPS".to_vec(),
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: false,
    }
}

fn ico() -> Signature {
    Signature {
        name: "ICO".into(),
        extension: "ico".into(),
        category: FileCategory::Graphic,
        header: crate::Pattern {
            offset: 0,
            bytes: vec![0x00, 0x00, 0x01, 0x00],
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: false,
    }
}

fn webp() -> Signature {
    Signature {
        name: "WebP".into(),
        extension: "webp".into(),
        category: FileCategory::Graphic,
        header: crate::Pattern {
            offset: 0,
            bytes: b"RIFF".to_vec(),
        },
        tail: None,
        min_size: 32,
        max_size: 0,
        has_validator: false,
    }
}

fn heic() -> Signature {
    Signature {
        name: "HEIC".into(),
        extension: "heic".into(),
        category: FileCategory::Graphic,
        // HEIC is an ISO BMFF container — type box "ftyp" + brand "heic".
        header: crate::Pattern {
            offset: 4,
            bytes: b"ftypheic".to_vec(),
        },
        tail: None,
        min_size: 32,
        max_size: 0,
        has_validator: false,
    }
}

fn svg() -> Signature {
    Signature {
        name: "SVG".into(),
        extension: "svg".into(),
        category: FileCategory::Graphic,
        header: crate::Pattern {
            offset: 0,
            bytes: b"<?xml".to_vec(),
        },
        tail: None,
        min_size: 32,
        max_size: 0,
        has_validator: false, // TODO: look for <svg> tag
    }
}

fn pdf() -> Signature {
    Signature {
        name: "PDF".into(),
        extension: "pdf".into(),
        category: FileCategory::Document,
        header: crate::Pattern {
            offset: 0,
            bytes: b"%PDF-".to_vec(),
        },
        tail: Some(crate::Pattern {
            offset: 0,
            bytes: b"%%EOF".to_vec(),
        }),
        min_size: 64,
        max_size: 0,
        has_validator: true, // PDF analyser validates xref
    }
}

fn doc() -> Signature {
    Signature {
        name: "DOC (OLE)".into(),
        extension: "doc".into(),
        category: FileCategory::Document,
        header: crate::Pattern {
            offset: 0,
            bytes: vec![0xD0, 0xCF, 0x11, 0xE0, 0xA1, 0xB1, 0x1A, 0xE1],
        },
        tail: None,
        min_size: 1024,
        max_size: 0,
        has_validator: false,
    }
}

fn docx() -> Signature {
    Signature {
        name: "DOCX (ZIP)".into(),
        extension: "docx".into(),
        category: FileCategory::Document,
        header: crate::Pattern {
            offset: 0,
            bytes: vec![0x50, 0x4B, 0x03, 0x04],
        },
        tail: None,
        min_size: 1024,
        max_size: 0,
        has_validator: true, // DOCX analyser validates word/document.xml
    }
}

fn xls() -> Signature {
    let mut s = doc();
    s.name = "XLS (OLE)".into();
    s.extension = "xls".into();
    s
}

fn xlsx() -> Signature {
    let mut s = docx();
    s.name = "XLSX (ZIP)".into();
    s.extension = "xlsx".into();
    s
}

fn ppt() -> Signature {
    let mut s = doc();
    s.name = "PPT (OLE)".into();
    s.extension = "ppt".into();
    s
}

fn pptx() -> Signature {
    let mut s = docx();
    s.name = "PPTX (ZIP)".into();
    s.extension = "pptx".into();
    s
}

fn rtf() -> Signature {
    Signature {
        name: "RTF".into(),
        extension: "rtf".into(),
        category: FileCategory::Document,
        header: crate::Pattern {
            offset: 0,
            bytes: b"{\\rtf".to_vec(),
        },
        tail: None,
        min_size: 16,
        max_size: 0,
        has_validator: false,
    }
}

fn mp3() -> Signature {
    Signature {
        name: "MP3".into(),
        extension: "mp3".into(),
        category: FileCategory::Audio,
        // MP3 ID3 tag
        header: crate::Pattern {
            offset: 0,
            bytes: b"ID3".to_vec(),
        },
        tail: None,
        min_size: 256,
        max_size: 0,
        has_validator: false, // TODO: also detect frame sync 0xFFE
    }
}

fn wav() -> Signature {
    Signature {
        name: "WAV (RIFF)".into(),
        extension: "wav".into(),
        category: FileCategory::Audio,
        header: crate::Pattern {
            offset: 0,
            bytes: b"RIFF".to_vec(),
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: true, // WAV analyser validates "WAVE" + "fmt " chunks
    }
}

fn flac() -> Signature {
    Signature {
        name: "FLAC".into(),
        extension: "flac".into(),
        category: FileCategory::Audio,
        header: crate::Pattern {
            offset: 0,
            bytes: b"fLaC".to_vec(),
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: false,
    }
}

fn ogg() -> Signature {
    Signature {
        name: "OGG".into(),
        extension: "ogg".into(),
        category: FileCategory::Audio,
        header: crate::Pattern {
            offset: 0,
            bytes: b"OggS".to_vec(),
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: false,
    }
}

fn aac() -> Signature {
    Signature {
        name: "AAC".into(),
        extension: "aac".into(),
        category: FileCategory::Audio,
        header: crate::Pattern {
            offset: 0,
            bytes: vec![0xFF, 0xF1],
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: false,
    }
}

fn m4a() -> Signature {
    Signature {
        name: "M4A".into(),
        extension: "m4a".into(),
        category: FileCategory::Audio,
        header: crate::Pattern {
            offset: 4,
            bytes: b"ftypM4A".to_vec(),
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: false,
    }
}

fn mp4() -> Signature {
    Signature {
        name: "MP4".into(),
        extension: "mp4".into(),
        category: FileCategory::Video,
        header: crate::Pattern {
            offset: 4,
            bytes: b"ftypisom".to_vec(),
        },
        tail: None,
        min_size: 1024,
        max_size: 0,
        has_validator: true,
    }
}

fn avi() -> Signature {
    Signature {
        name: "AVI (RIFF)".into(),
        extension: "avi".into(),
        category: FileCategory::Video,
        header: crate::Pattern {
            offset: 0,
            bytes: b"RIFF".to_vec(),
        },
        tail: None,
        min_size: 1024,
        max_size: 0,
        has_validator: true, // AVI analyser validates "AVI " type
    }
}

fn mov() -> Signature {
    Signature {
        name: "QuickTime MOV".into(),
        extension: "mov".into(),
        category: FileCategory::Video,
        header: crate::Pattern {
            offset: 4,
            bytes: b"moov".to_vec(),
        },
        tail: None,
        min_size: 1024,
        max_size: 0,
        has_validator: false,
    }
}

fn mkv() -> Signature {
    Signature {
        name: "Matroska MKV".into(),
        extension: "mkv".into(),
        category: FileCategory::Video,
        header: crate::Pattern {
            offset: 0,
            bytes: vec![0x1A, 0x45, 0xDF, 0xA3],
        },
        tail: None,
        min_size: 1024,
        max_size: 0,
        has_validator: false,
    }
}

fn wmv() -> Signature {
    Signature {
        name: "WMV (ASF)".into(),
        extension: "wmv".into(),
        category: FileCategory::Video,
        header: crate::Pattern {
            offset: 0,
            bytes: vec![0x30, 0x26, 0xB2, 0x75, 0x8E, 0x66, 0xCF, 0x11],
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: false,
    }
}

fn flv() -> Signature {
    Signature {
        name: "FLV".into(),
        extension: "flv".into(),
        category: FileCategory::Video,
        header: crate::Pattern {
            offset: 0,
            bytes: b"FLV".to_vec(),
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: false,
    }
}

fn mpg() -> Signature {
    Signature {
        name: "MPEG".into(),
        extension: "mpg".into(),
        category: FileCategory::Video,
        header: crate::Pattern {
            offset: 0,
            bytes: vec![0x00, 0x00, 0x01, 0xBA],
        },
        tail: None,
        min_size: 1024,
        max_size: 0,
        has_validator: false,
    }
}

fn zip() -> Signature {
    Signature {
        name: "ZIP".into(),
        extension: "zip".into(),
        category: FileCategory::Archive,
        header: crate::Pattern {
            offset: 0,
            bytes: b"PK\x03\x04".to_vec(),
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: true, // ZIP analyser validates EOCD record
    }
}

fn rar() -> Signature {
    Signature {
        name: "RAR v4".into(),
        extension: "rar".into(),
        category: FileCategory::Archive,
        header: crate::Pattern {
            offset: 0,
            bytes: b"Rar!\x1A\x07\x00".to_vec(),
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: false,
    }
}

fn rar5() -> Signature {
    Signature {
        name: "RAR v5".into(),
        extension: "rar".into(),
        category: FileCategory::Archive,
        header: crate::Pattern {
            offset: 0,
            bytes: b"Rar!\x1A\x07\x01\x00".to_vec(),
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: false,
    }
}

fn sevenz() -> Signature {
    Signature {
        name: "7-Zip".into(),
        extension: "7z".into(),
        category: FileCategory::Archive,
        header: crate::Pattern {
            offset: 0,
            bytes: b"7z\xBC\xAF\x27\x1C".to_vec(),
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: false,
    }
}

fn gzip() -> Signature {
    Signature {
        name: "GZIP".into(),
        extension: "gz".into(),
        category: FileCategory::Archive,
        header: crate::Pattern {
            offset: 0,
            bytes: vec![0x1F, 0x8B],
        },
        tail: None,
        min_size: 32,
        max_size: 0,
        has_validator: false,
    }
}

fn tar() -> Signature {
    Signature {
        name: "TAR".into(),
        extension: "tar".into(),
        category: FileCategory::Archive,
        // TAR has "ustar" magic at offset 257.
        header: crate::Pattern {
            offset: 257,
            bytes: b"ustar".to_vec(),
        },
        tail: None,
        min_size: 512,
        max_size: 0,
        has_validator: false,
    }
}

fn pst() -> Signature {
    Signature {
        name: "Outlook PST".into(),
        extension: "pst".into(),
        category: FileCategory::Email,
        header: crate::Pattern {
            offset: 0,
            bytes: b"!BDN".to_vec(), // PST signature
        },
        tail: None,
        min_size: 1024,
        max_size: 0,
        has_validator: false,
    }
}

fn ost() -> Signature {
    let mut s = pst();
    s.name = "Outlook OST".into();
    s.extension = "ost".into();
    s
}

fn eml() -> Signature {
    Signature {
        name: "EML".into(),
        extension: "eml".into(),
        category: FileCategory::Email,
        // EML starts with "From:" or "Received:" or similar headers.
        // Best signature: "From: " at offset 0.
        header: crate::Pattern {
            offset: 0,
            bytes: b"From: ".to_vec(),
        },
        tail: None,
        min_size: 64,
        max_size: 0,
        has_validator: false,
    }
}

fn msg() -> Signature {
    let mut s = doc();
    s.name = "Outlook MSG".into();
    s.extension = "msg".into();
    s
}

fn dbx() -> Signature {
    Signature {
        name: "Outlook Express DBX".into(),
        extension: "dbx".into(),
        category: FileCategory::Email,
        header: crate::Pattern {
            offset: 4,
            bytes: vec![0xCF, 0xAD, 0x12, 0xFE],
        },
        tail: None,
        min_size: 1024,
        max_size: 0,
        has_validator: false,
    }
}

fn sqlite() -> Signature {
    Signature {
        name: "SQLite".into(),
        extension: "sqlite".into(),
        category: FileCategory::Other,
        header: crate::Pattern {
            offset: 0,
            bytes: b"SQLite format 3\x00".to_vec(),
        },
        tail: None,
        min_size: 1024,
        max_size: 0,
        has_validator: false,
    }
}

fn mdb() -> Signature {
    Signature {
        name: "Access MDB".into(),
        extension: "mdb".into(),
        category: FileCategory::Other,
        header: crate::Pattern {
            offset: 0,
            bytes: vec![0x00, 0x01, 0x00, 0x00, 0x53, 0x74, 0x61, 0x6E],
        },
        tail: None,
        min_size: 1024,
        max_size: 0,
        has_validator: false,
    }
}

/// A common signature reference (for the registry to reference).
pub type CommonSignature = Signature;

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn common_signatures_count() {
        let sigs = common_signatures();
        assert!(
            sigs.len() >= 30,
            "expected at least 30 common signatures, got {}",
            sigs.len()
        );
    }

    #[test]
    fn jpg_signature() {
        let s = jpg();
        assert_eq!(s.extension, "jpg");
        assert_eq!(s.header.bytes, vec![0xFF, 0xD8, 0xFF]);
        // FFD8FF is JPG SOI marker.
        assert!(s.header.matches(&[0xFF, 0xD8, 0xFF, 0xE0, 0x00, 0x10]));
        assert!(!s.header.matches(&[0x00, 0xD8, 0xFF]));
    }

    #[test]
    fn png_signature() {
        let s = png();
        assert_eq!(s.extension, "png");
        let png_header = [0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A];
        assert!(s.header.matches(&png_header));
    }

    #[test]
    fn pdf_signature() {
        let s = pdf();
        let pdf_header = b"%PDF-1.5\n";
        assert!(s.header.matches(pdf_header));
    }

    #[test]
    fn zip_signature() {
        let s = zip();
        let zip_header = [0x50, 0x4B, 0x03, 0x04, 0x14, 0x00, 0x00, 0x00];
        assert!(s.header.matches(&zip_header));
    }

    #[test]
    fn all_categories_represented() {
        let sigs = common_signatures();
        let categories: std::collections::HashSet<_> = sigs.iter().map(|s| s.category).collect();
        // Should have all categories except Bookmarks (we don't add common bookmark signatures).
        assert!(categories.contains(&FileCategory::Graphic));
        assert!(categories.contains(&FileCategory::Document));
        assert!(categories.contains(&FileCategory::Audio));
        assert!(categories.contains(&FileCategory::Video));
        assert!(categories.contains(&FileCategory::Archive));
        assert!(categories.contains(&FileCategory::Email));
    }
}
