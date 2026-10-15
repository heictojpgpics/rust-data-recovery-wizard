// Function: FUN_180032830
// Address: 180032830
// Size: 99 bytes


undefined8 * FUN_180032830(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x120);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = BruteForce::CM2TSAnalyser::CM2TSFileInfo::vftable;
    puVar1[0x22] = 0;
    *(undefined4 *)(puVar1 + 0x23) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x11c) = 0;
    *(undefined4 *)(puVar1 + 3) = 0x74;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

