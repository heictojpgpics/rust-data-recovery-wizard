// Function: FUN_180064ff0
// Address: 180064ff0
// Size: 71 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180064ff0(void)

{
  _DAT_180118400 = Brance::OfficeTagFromXML::vftable;
  if (DAT_180118510 != (void *)0x0) {
    free(DAT_180118510);
    DAT_180118510 = (void *)0x0;
  }
  FUN_18000b6b0((undefined8 *)&DAT_180118400);
  return;
}

