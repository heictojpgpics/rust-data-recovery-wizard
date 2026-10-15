// Function: FUN_180030870
// Address: 180030870
// Size: 160 bytes


undefined8 * FUN_180030870(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = BruteForce::MP3Analyzer::MP3RawFileInfo::vftable;
    puVar1[0x22] = 0x5000;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0x200;
    puVar1[0x26] = 0xc800000;
    *(undefined4 *)(puVar1 + 3) = 0x2b;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

