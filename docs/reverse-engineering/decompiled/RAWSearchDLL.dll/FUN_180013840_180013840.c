// Function: FUN_180013840
// Address: 180013840
// Size: 99 bytes


undefined8 * FUN_180013840(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawSpeed::TARAnalyser::TARRawFileInfo::vftable;
    puVar1[0x22] = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    puVar1[0x23] = 0;
    *(undefined4 *)(puVar1 + 3) = 0x3f;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

