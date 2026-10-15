// Function: FUN_180016080
// Address: 180016080
// Size: 130 bytes


undefined8 * FUN_180016080(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawSpeed::OneAnalyser::ONERawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0xe;
    puVar1[0x22] = 0x14;
    puVar1[0x23] = 500000000;
    *(undefined1 *)(puVar1 + 0x24) = 1;
    *(undefined4 *)(puVar1 + 3) = 0x31;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

