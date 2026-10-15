// Function: FUN_180002520
// Address: 180002520
// Size: 290 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_180002520(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  if (*piVar1 < DAT_180096a80) {
    _Init_thread_header(&DAT_180096a80);
    if (DAT_180096a80 == -1) {
      DAT_180096aa0 = GetProcessHeap();
      _DAT_180096a98 = ATL::CWin32Heap::vftable;
      DAT_180096aa8 = 0;
      atexit((_func_5014 *)&LAB_1800640c0);
      _Init_thread_footer(&DAT_180096a80);
    }
  }
  if (*piVar1 < DAT_180096a84) {
    _Init_thread_header(&DAT_180096a84);
    if (DAT_180096a84 == -1) {
      _DAT_180096a48 = ATL::CAtlStringMgr::vftable;
      _DAT_180096a50 = &DAT_180096a98;
      _DAT_180096a68 = 2;
      _DAT_180096a60 = 0;
      _DAT_180096a70 = 0;
      _DAT_180096a58 = &DAT_180096a48;
      atexit((_func_5014 *)&DAT_1800640b0);
      _Init_thread_footer(&DAT_180096a84);
      return &DAT_180096a48;
    }
  }
  return &DAT_180096a48;
}

