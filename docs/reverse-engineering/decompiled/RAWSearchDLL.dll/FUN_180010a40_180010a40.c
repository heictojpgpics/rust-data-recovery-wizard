// Function: FUN_180010a40
// Address: 180010a40
// Size: 201 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_180010a40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18011820c) {
    _Init_thread_header(&DAT_18011820c);
    if (DAT_18011820c == -1) {
      _DAT_180118210 = CNeedRawMgr::vftable;
      DAT_180118218 = 0;
      _DAT_180118220 = 0;
      DAT_180118218 = FUN_180011490();
      _DAT_180118228 = (undefined1  [16])0x0;
      _DAT_180118238 = 0;
      atexit((_func_5014 *)&LAB_180064100);
      _Init_thread_footer(&DAT_18011820c);
      return &DAT_180118210;
    }
  }
  return &DAT_180118210;
}

