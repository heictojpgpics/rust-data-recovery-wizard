// Function: FUN_18001fae0
// Address: 18001fae0
// Size: 579 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18001fae0(undefined8 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  int *piVar7;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 local_20 [24];
  
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  4);
  if (*piVar7 < DAT_1801183b4) goto LAB_18001fc01;
  while( true ) {
    if (*piVar7 < DAT_180118338) {
      _Init_thread_header(&DAT_180118338);
      if (DAT_180118338 == -1) {
        _DAT_180118358 = (undefined1  [16])0x0;
        lVar6 = FUN_180021460();
        DAT_180118358 = lVar6;
        atexit((_func_5014 *)&LAB_1800648c0);
        _Init_thread_footer(&DAT_180118338);
      }
    }
    if (*piVar7 < DAT_180118378) {
      _Init_thread_header(&DAT_180118378);
      if (DAT_180118378 == -1) {
        _DAT_180118380 = (undefined1  [16])0x0;
        lVar6 = FUN_180021380();
        DAT_180118380 = lVar6;
        atexit((_func_5014 *)&LAB_1800646b0);
        _Init_thread_footer(&DAT_180118378);
      }
    }
    if (*piVar7 < DAT_180118320) {
      _Init_thread_header(&DAT_180118320);
      if (DAT_180118320 == -1) {
        _DAT_1801183a8 = 0;
        _Init_thread_footer(&DAT_180118320);
      }
    }
    local_res10[0] = 0;
    __ExceptionPtrCreate(local_40);
    local_30 = local_40;
    local_28 = local_res10;
    iVar3 = std::_Execute_once((once_flag *)&DAT_1801183a8,
                               (_func_int_void_ptr_void_ptr_void_ptr_ptr *)&LAB_180022b90,&local_30)
    ;
    if (iVar3 != 0) break;
    bVar2 = __ExceptionPtrToBool(local_40);
    if (!bVar2) {
      std::_XGetLastError();
      pcVar1 = (code *)swi(3);
      puVar4 = (undefined8 *)(*pcVar1)();
      return puVar4;
    }
    local_res18 = local_20;
    pvVar5 = FUN_18001d8d0(local_20,local_40);
    FUN_18001d910(pvVar5);
LAB_18001fc01:
    _Init_thread_header(&DAT_1801183b4);
    if (DAT_1801183b4 == -1) {
      _DAT_180118328 = (undefined1  [16])0x0;
      lVar6 = FUN_180021460();
      DAT_180118328 = lVar6;
      atexit((_func_5014 *)&LAB_180064af0);
      _Init_thread_footer(&DAT_1801183b4);
    }
  }
  __ExceptionPtrDestroy(local_40);
  *param_1 = &DAT_180118380;
  param_1[1] = &DAT_180118358;
  param_1[2] = &DAT_180118328;
  return param_1;
}

