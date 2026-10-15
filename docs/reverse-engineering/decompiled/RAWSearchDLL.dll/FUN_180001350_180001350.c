// Function: FUN_180001350
// Address: 180001350
// Size: 275 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_180001350(void)

{
  uint uVar1;
  uint local_res8 [2];
  undefined *local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_180118198) {
    _Init_thread_header(&DAT_180118198);
    if (DAT_180118198 == -1) {
      local_res10 = &DAT_180093a00;
      _DAT_180093a30 = FUN_180001d30();
      uVar1 = 1;
      do {
        local_res8[0] = uVar1;
        if (DAT_180093a28 == DAT_180093a20) {
          FUN_180001e50((longlong *)&DAT_180093a18,DAT_180093a20,local_res8);
        }
        else {
          *DAT_180093a20 = uVar1;
          DAT_180093a20 = DAT_180093a20 + 1;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 0xaa);
      _DAT_180093a50 = _DAT_18006ee90;
      DAT_180093a58 = _UNK_18006ee98;
      DAT_180093a40._0_1_ = 0;
      DAT_180093a60 = 0xff;
      atexit(FUN_180064040);
      _Init_thread_footer(&DAT_180118198);
      return &DAT_1800939a0;
    }
  }
  return &DAT_1800939a0;
}

