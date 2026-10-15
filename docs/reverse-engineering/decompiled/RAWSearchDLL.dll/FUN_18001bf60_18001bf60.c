// Function: FUN_18001bf60
// Address: 18001bf60
// Size: 130 bytes


undefined8 * FUN_18001bf60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x138);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawFormat_xjq::M1VAnalyser::M1VRawFileInfo::vftable;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0xffffffffffffffff;
    *(undefined1 *)(puVar1 + 0x22) = 0;
    puVar1[0x25] = 0;
    *(undefined4 *)(puVar1 + 3) = 0x7f;
    *(undefined4 *)(puVar1 + 0x26) = 0x200;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

