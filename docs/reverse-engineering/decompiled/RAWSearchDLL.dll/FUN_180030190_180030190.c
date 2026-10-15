// Function: FUN_180030190
// Address: 180030190
// Size: 92 bytes


undefined8 * FUN_180030190(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x120);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = BruteForce::CADTSRawFileInfo::vftable;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

