// Function: FUN_180019ee0
// Address: 180019ee0
// Size: 424 bytes


longlong * FUN_180019ee0(longlong *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  void *pvVar9;
  void *_Memory;
  ulonglong uVar10;
  void *_Dst;
  ulonglong uVar11;
  ulonglong local_res8 [2];
  ulonglong local_res18;
  ulonglong local_res20;
  ulonglong local_48 [2];
  
  uVar1 = param_1[3];
  if (param_3 <= uVar1) {
    plVar8 = param_1;
    if (7 < uVar1) {
      plVar8 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(plVar8,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)plVar8) = 0;
    return param_1;
  }
  uVar11 = 0x7fffffffffffffff;
  local_res8[0] = 8;
  local_res18 = 0x7fffffffffffffff;
  puVar4 = FUN_1800026b0(&local_res18,local_res8);
  local_res20 = *puVar4 - 1;
  local_48[0] = FUN_180001110();
  puVar4 = FUN_180002960(local_48,&local_res20);
  if (*puVar4 < param_3) {
    FUN_180002c50();
    pcVar2 = (code *)swi(3);
    plVar8 = (longlong *)(*pcVar2)();
    return plVar8;
  }
  uVar5 = FUN_18001a0c0((longlong)param_1,param_3);
  _Dst = (void *)0x0;
  uVar3 = (uVar5 + 1) * 2;
  uVar10 = 0xffffffffffffffff;
  if ((uVar11 < uVar5 + 1) || (uVar10 = uVar3, 0xfff < uVar3)) {
    uVar11 = uVar10 + 0x27;
    if (uVar10 + 0x27 <= uVar10) {
      uVar11 = 0xffffffffffffffff;
    }
    lVar6 = FUN_18002be40(uVar11);
    if (lVar6 == 0) goto LAB_18001a05c;
    _Dst = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar6;
  }
  else if (uVar3 != 0) {
    _Dst = (void *)FUN_18002be40(uVar3);
  }
  param_1[2] = param_3;
  param_1[3] = uVar5;
  pvVar9 = _Dst;
  memcpy(_Dst,param_2,param_3 * 2);
  *(undefined2 *)(param_3 * 2 + (longlong)_Dst) = 0;
  if (uVar1 < 8) {
    puVar7 = (undefined8 *)FUN_180001100(pvVar9,param_1);
    *puVar7 = _Dst;
  }
  else {
    pvVar9 = (void *)*param_1;
    _Memory = pvVar9;
    if ((0xfff < uVar1 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar9 + -8),
       0x1f < (ulonglong)((longlong)pvVar9 + (-8 - (longlong)_Memory)))) {
LAB_18001a05c:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *param_1 = (longlong)_Dst;
  }
  return param_1;
}

