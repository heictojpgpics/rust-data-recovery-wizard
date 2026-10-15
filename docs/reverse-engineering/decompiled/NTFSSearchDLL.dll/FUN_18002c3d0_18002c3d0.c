// Function: FUN_18002c3d0
// Address: 18002c3d0
// Size: 295 bytes


undefined8 * FUN_18002c3d0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  void *_Dst;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8 [3];
  ulonglong local_res20;
  
  puVar5 = param_1;
  puVar6 = param_2;
  FUN_1800026a0((longlong)param_1);
  uVar1 = puVar6[2];
  if (7 < (ulonglong)puVar6[3]) {
    param_2 = (undefined8 *)*puVar6;
  }
  if (uVar1 < 8) {
    uVar2 = param_2[1];
    uVar8 = 7;
    *puVar5 = *param_2;
    puVar5[1] = uVar2;
    goto LAB_18002c4e0;
  }
  uVar9 = 0x7fffffffffffffff;
  local_res8[0] = 8;
  local_res8[1] = 0x7fffffffffffffff;
  puVar3 = FUN_1800026b0(local_res8 + 1,local_res8);
  local_res8[2] = *puVar3 - 1;
  local_res20 = FUN_180001110();
  puVar3 = FUN_180002960(&local_res20,local_res8 + 2);
  uVar8 = uVar1 | 7;
  if (*puVar3 < (uVar1 | 7)) {
    uVar8 = *puVar3;
  }
  uVar7 = (uVar8 + 1) * 2;
  if (uVar9 < uVar8 + 1) {
    uVar7 = 0xffffffffffffffff;
LAB_18002c487:
    uVar9 = uVar7 + 0x27;
    if (uVar9 <= uVar7) {
      uVar9 = 0xffffffffffffffff;
    }
    lVar4 = FUN_18002be40(uVar9);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar4;
  }
  else {
    if (0xfff < uVar7) goto LAB_18002c487;
    if (uVar7 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_18002be40(uVar7);
    }
  }
  puVar5 = (undefined8 *)FUN_180001100(_Dst,param_1);
  *puVar5 = _Dst;
  memcpy(_Dst,param_2,uVar1 * 2 + 2);
LAB_18002c4e0:
  param_1[2] = uVar1;
  param_1[3] = uVar8;
  return param_1;
}

