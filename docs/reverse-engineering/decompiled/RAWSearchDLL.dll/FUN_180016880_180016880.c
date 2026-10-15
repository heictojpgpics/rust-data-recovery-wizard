// Function: FUN_180016880
// Address: 180016880
// Size: 121 bytes


undefined8 * FUN_180016880(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x120);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawSpeed::DbxAnalyser::DBXRawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0xe;
    puVar1[0x22] = 0x14;
    *(undefined2 *)(puVar1 + 0x23) = 0x100;
    *(undefined4 *)(puVar1 + 3) = 0x15;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

