// Function: FUN_18000f510
// Address: 18000f510
// Size: 327 bytes


longlong FUN_18000f510(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *_Dst;
  ulonglong uVar9;
  ulonglong local_res8;
  ulonglong local_res10;
  
  _Dst = (void *)0x0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar6 = param_2;
  puVar2 = (undefined8 *)FUN_1800016b0(param_1);
  uVar1 = puVar6[2];
  if (7 < (ulonglong)puVar6[3]) {
    param_2 = (undefined8 *)*puVar6;
  }
  if (uVar1 < 8) {
    uVar5 = param_2[1];
    *puVar2 = *param_2;
    puVar2[1] = uVar5;
    uVar9 = 7;
    goto LAB_18000f63b;
  }
  local_res8 = 0x7ffffffffffffffe;
  local_res10 = FUN_1800012f0();
  puVar3 = FUN_180001e40(&local_res10,&local_res8);
  local_res8 = *puVar3;
  local_res10 = uVar1 | 7;
  puVar3 = FUN_180001e40(&local_res10,&local_res8);
  uVar9 = *puVar3;
  uVar8 = (uVar9 + 1) * 2;
  if (uVar9 + 1 < 0x8000000000000000) {
    if (0xfff < uVar8) goto LAB_18000f5db;
    if (uVar8 != 0) {
      _Dst = (void *)FUN_1800020c0(uVar8);
    }
  }
  else {
    uVar8 = 0xffffffffffffffff;
LAB_18000f5db:
    uVar7 = uVar8 + 0x27;
    if (uVar7 <= uVar8) {
      uVar7 = 0xffffffffffffffff;
    }
    lVar4 = FUN_1800020c0(uVar7);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar4;
  }
  puVar6 = puVar2;
  uVar5 = FUN_1800016b0(puVar2);
  puVar6 = (undefined8 *)FUN_1800012e0(puVar6,uVar5);
  *puVar6 = _Dst;
  memcpy(_Dst,param_2,uVar1 * 2 + 2);
LAB_18000f63b:
  puVar2[2] = uVar1;
  puVar2[3] = uVar9;
  return param_1;
}

