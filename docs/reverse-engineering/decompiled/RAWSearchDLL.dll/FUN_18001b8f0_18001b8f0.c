// Function: FUN_18001b8f0
// Address: 18001b8f0
// Size: 116 bytes


undefined8 * FUN_18001b8f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawFormat_xjq::HEICAnalyser::HEICRawFileInfo::vftable;
    puVar1[0x23] = 0;
    *(undefined1 *)(puVar1 + 0x22) = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x124) = 0;
    *(undefined4 *)(puVar1 + 3) = 0x7c;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

