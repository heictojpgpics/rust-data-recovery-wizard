// Function: FUN_180012480
// Address: 180012480
// Size: 111 bytes


undefined8 * FUN_180012480(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x118);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawSpeed::HTMLAnalyser::HTMLRawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0x14;
    *(undefined4 *)(puVar1 + 0x22) = 0x100000;
    *(undefined4 *)(puVar1 + 3) = 0x21;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

