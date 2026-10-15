// Function: FUN_180016430
// Address: 180016430
// Size: 130 bytes


undefined8 * FUN_180016430(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawSpeed::PSPAnalyser::PSPRawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0x24;
    puVar1[0x22] = 0x24;
    *(undefined1 *)(puVar1 + 0x24) = 1;
    puVar1[0x23] = 20000000;
    *(undefined4 *)(puVar1 + 3) = 0x37;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

