// Function: FUN_18000f7a0
// Address: 18000f7a0
// Size: 123 bytes


longlong FUN_18000f7a0(longlong param_1,void *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *_Dst;
  undefined2 local_res18 [8];
  
  puVar1 = (undefined8 *)FUN_1800016b0(param_1);
  if (param_3 <= (ulonglong)puVar1[3]) {
    _Dst = puVar1;
    if (7 < (ulonglong)puVar1[3]) {
      _Dst = (undefined8 *)*puVar1;
    }
    puVar1[2] = param_3;
    memmove(_Dst,param_2,param_3 * 2);
    local_res18[0] = 0;
    FUN_180001790((undefined2 *)(param_3 * 2 + (longlong)_Dst),local_res18);
    return param_1;
  }
  lVar2 = FUN_18000f8f0(param_1,param_3,(char)param_3,param_2);
  return lVar2;
}

