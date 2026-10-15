// Function: FUN_180046260
// Address: 180046260
// Size: 224 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_180046260(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_180118538) {
    _Init_thread_header(&DAT_180118538);
    if (DAT_180118538 == -1) {
      FUN_18000b520((undefined8 *)&DAT_180118400);
      _DAT_180118400 = Brance::OfficeTagFromXML::vftable;
      _DAT_180118530 = 0;
      _DAT_180118528 = 0;
      _DAT_180118520 = 0;
      DAT_180118518 = 0x2801;
      DAT_180118510 = (void *)0x0;
      DAT_180118510 = (void *)FUN_1800020c0(0x2801);
      memset(DAT_180118510,0,DAT_180118518);
      atexit(FUN_180064ff0);
      _Init_thread_footer(&DAT_180118538);
      return &DAT_180118400;
    }
  }
  return &DAT_180118400;
}

