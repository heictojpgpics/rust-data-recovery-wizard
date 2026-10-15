// Function: FUN_180040cb0
// Address: 180040cb0
// Size: 89 bytes


undefined8 * FUN_180040cb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x118);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = Brance::RIFFAnalyser::RIFFFileInfo::vftable;
    *(undefined4 *)(puVar1 + 0x22) = 1;
    *(undefined4 *)(puVar1 + 3) = 0x3b;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

