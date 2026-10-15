// Function: FUN_180037d30
// Address: 180037d30
// Size: 387 bytes


undefined8 * FUN_180037d30(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x250);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = BruteForce::TiffAnalyzer::TiffRawFileInfo::vftable;
    puVar1[0x23] = 0x40000000;
    *(undefined4 *)(puVar1 + 0x25) = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0x2000;
    puVar1[0x28] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    lVar2 = FUN_18003ab90();
    puVar1[0x2a] = lVar2;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    lVar2 = FUN_18003ab90();
    puVar1[0x2c] = lVar2;
    *(undefined4 *)(puVar1 + 0x2e) = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    *(undefined4 *)(puVar1 + 0x31) = 0;
    puVar1[0x34] = 0;
    FUN_180001690((undefined1 *)(puVar1 + 0x35));
    FUN_180001690((undefined1 *)(puVar1 + 0x39));
    puVar1[0x3d] = 0;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    puVar1[0x42] = 0;
    *(undefined4 *)(puVar1 + 0x46) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x18c) = 0;
    puVar1[0x49] = 0;
    puVar1[0x48] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x234) = 0x200;
    puVar1[0x24] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x23c) = 0;
    puVar1[0x33] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x194) = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 3) = 0x40;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

