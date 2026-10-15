// Function: FUN_18002e360
// Address: 18002e360
// Size: 125 bytes


undefined8 * FUN_18002e360(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x138);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = BruteForce::CFCPEvtFileInfo::vftable;
    *(undefined4 *)(puVar1 + 0x22) = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    *(undefined4 *)(puVar1 + 0x26) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x134) = 1;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0x73;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

