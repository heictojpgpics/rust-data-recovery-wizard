// Function: EUCreateRAWSearcherForCellTest
// Address: 18005e260
// Size: 192 bytes


undefined8
EUCreateRAWSearcherForCellTest
          (longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  undefined8 uVar1;
  
                    /* 0x5e260  2  EUCreateRAWSearcherForCellTest */
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
        < DAT_1800963a0) {
      _Init_thread_header(&DAT_1800963a0);
      if (DAT_1800963a0 == -1) {
        FUN_18000bba0((undefined8 *)&DAT_180096240);
        atexit((_func_5014 *)&LAB_1800650b0);
        _Init_thread_footer(&DAT_1800963a0);
      }
    }
    uVar1 = FUN_18000c650((longlong *)&DAT_180096240,param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

