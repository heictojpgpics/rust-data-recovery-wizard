// Function: FUN_180036090
// Address: 180036090
// Size: 150 bytes


undefined8 * FUN_180036090(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x228);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = BruteForce::PdfAnalyzer::PdfRawFileInfo::vftable;
    FUN_180017fa0((undefined1 *)((longlong)puVar1 + 0x121));
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0x5000;
    *(undefined2 *)(puVar1 + 0x22) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x112) = 0;
    puVar1[0x23] = 200000000;
    *(undefined1 *)(puVar1 + 0x24) = 1;
    *(undefined4 *)(puVar1 + 3) = 0x32;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

