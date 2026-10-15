// Function: FUN_180014aa0
// Address: 180014aa0
// Size: 130 bytes


undefined8 * FUN_180014aa0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawSpeed::PNGAnalyser::PNGRawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0xe;
    puVar1[0x22] = 0x14;
    puVar1[0x23] = 100000000;
    *(undefined1 *)(puVar1 + 0x24) = 1;
    *(undefined4 *)(puVar1 + 3) = 0x33;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

