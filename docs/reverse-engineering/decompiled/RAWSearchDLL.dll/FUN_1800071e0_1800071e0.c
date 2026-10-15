// Function: FUN_1800071e0
// Address: 1800071e0
// Size: 121 bytes


longlong FUN_1800071e0(longlong param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *_Dst;
  undefined1 uVar4;
  undefined7 uVar5;
  undefined1 local_res18 [16];
  
  uVar4 = (undefined1)param_3;
  uVar5 = (undefined7)(param_3 >> 8);
  puVar2 = (undefined8 *)FUN_1800016b0(param_1);
  uVar1 = puVar2[3];
  if (CONCAT71(uVar5,uVar4) < uVar1 || CONCAT71(uVar5,uVar4) == uVar1) {
    _Dst = puVar2;
    if (0xf < uVar1) {
      _Dst = (undefined8 *)*puVar2;
    }
    puVar2[2] = param_3;
    memmove(_Dst,param_2,CONCAT71(uVar5,uVar4));
    local_res18[0] = 0;
    FUN_180001300((undefined1 *)((longlong)_Dst + param_3),local_res18);
    return param_1;
  }
  lVar3 = FUN_1800086f0(param_1,param_3,uVar4,param_2);
  return lVar3;
}

