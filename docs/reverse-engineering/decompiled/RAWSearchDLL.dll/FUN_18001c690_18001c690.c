// Function: FUN_18001c690
// Address: 18001c690
// Size: 126 bytes


undefined8 * FUN_18001c690(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawFormat_xjq::JP2Analyser::JP2RawFileInfo::vftable;
    puVar1[0x23] = 0;
    *(undefined1 *)(puVar1 + 0x22) = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x124) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x126) = 0;
    *(undefined4 *)(puVar1 + 3) = 0x80;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

