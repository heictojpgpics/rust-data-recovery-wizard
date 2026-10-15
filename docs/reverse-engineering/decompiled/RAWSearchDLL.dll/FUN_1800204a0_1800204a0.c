// Function: FUN_1800204a0
// Address: 1800204a0
// Size: 91 bytes


undefined8 * FUN_1800204a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawFormat_xjq::CommonRawAnalyser::CommonRawFileInfo::vftable;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

