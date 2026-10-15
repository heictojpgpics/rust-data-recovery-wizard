// Function: FUN_180032fd0
// Address: 180032fd0
// Size: 99 bytes


undefined8 * FUN_180032fd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = BruteForce::CGifFileInfo::vftable;
    puVar1[0x22] = 0;
    *(undefined1 *)(puVar1 + 0x23) = 1;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

