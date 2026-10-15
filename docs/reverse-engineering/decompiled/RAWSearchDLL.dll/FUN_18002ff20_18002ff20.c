// Function: FUN_18002ff20
// Address: 18002ff20
// Size: 135 bytes


undefined8 * FUN_18002ff20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x508);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = BruteForce::CDWGRawInfo::vftable;
    puVar1[0x22] = 0x15;
    *(undefined4 *)(puVar1 + 0x23) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x11c) = 0;
    puVar1[0x24] = 0x3d8;
    *(undefined4 *)(puVar1 + 0xa0) = 0;
    memset(puVar1 + 0x25,0,0x3d8);
    return puVar1;
  }
  return (undefined8 *)0x0;
}

