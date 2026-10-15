// Function: FUN_180006a80
// Address: 180006a80
// Size: 123 bytes


undefined *
FUN_180006a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 4;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_180118200) {
    puVar1 = &DAT_180118200;
    _Init_thread_header(&DAT_180118200);
    if (DAT_180118200 == -1) {
      FUN_180006730(puVar1,uVar2,param_3,param_4);
      atexit(thunk_FUN_1800068c0);
      _Init_thread_footer(&DAT_180118200);
      return &DAT_1801181a0;
    }
  }
  return &DAT_1801181a0;
}

