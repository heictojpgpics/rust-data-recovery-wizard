// Function: FUN_180015a90
// Address: 180015a90
// Size: 119 bytes


undefined8 * FUN_180015a90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x120);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawSpeed::SITAnalyser::SITRawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0x5000;
    *(undefined1 *)(puVar1 + 0x22) = 0;
    puVar1[0x23] = 200000000;
    *(undefined4 *)(puVar1 + 3) = 0x5d;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

