// Function: FUN_18003d8e0
// Address: 18003d8e0
// Size: 391 bytes


undefined8 FUN_18003d8e0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  void *pvVar13;
  void *local_res10 [2];
  ulonglong local_res20;
  
  plVar5 = (longlong *)FUN_180002680(param_1);
  lVar1 = plVar5[2];
  lVar6 = FUN_180001110();
  if ((ulonglong)(lVar6 - lVar1) < param_2) {
    FUN_180002c50();
    pcVar4 = (code *)swi(3);
    uVar11 = (*pcVar4)();
    return uVar11;
  }
  uVar2 = plVar5[3];
  uVar7 = FUN_180001110();
  local_res20 = lVar1 + param_2 | 0xf;
  if (local_res20 <= uVar7) {
    lVar6 = FUN_180002680(param_1);
    uVar3 = *(ulonglong *)(lVar6 + 0x18);
    if (uVar3 <= uVar7 - (uVar3 >> 1)) {
      local_res10[0] = (void *)((uVar3 >> 1) + uVar3);
      puVar8 = FUN_1800026b0(&local_res20,(ulonglong *)local_res10);
      uVar7 = *puVar8;
    }
  }
  pvVar9 = (void *)(uVar7 + 1);
  if (pvVar9 < (void *)0x1000) {
    if (pvVar9 != (void *)0x0) {
      pvVar9 = (void *)FUN_18002be40((size_t)pvVar9);
    }
  }
  else {
    pvVar13 = (void *)(uVar7 + 0x28);
    if (pvVar13 <= pvVar9) {
      pvVar13 = (void *)0xffffffffffffffff;
    }
    lVar6 = FUN_18002be40((size_t)pvVar13);
    if (lVar6 == 0) goto LAB_18003da15;
    pvVar9 = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)pvVar9 - 8) = lVar6;
  }
  plVar5[2] = lVar1 + param_2;
  plVar5[3] = uVar7;
  local_res10[0] = pvVar9;
  if (uVar2 < 0x10) {
    FUN_180001120(pvVar9,plVar5,lVar1 + 1U);
    puVar10 = (undefined8 *)FUN_180002680(local_res10);
    uVar11 = FUN_180002680(plVar5);
    puVar12 = (undefined8 *)FUN_180001100(plVar5,uVar11);
    *puVar12 = *puVar10;
  }
  else {
    pvVar13 = (void *)*plVar5;
    FUN_180001120(pvVar9,pvVar13,lVar1 + 1U);
    pvVar9 = pvVar13;
    if ((0xfff < uVar2 + 1) &&
       (pvVar9 = *(void **)((longlong)pvVar13 + -8),
       0x1f < (ulonglong)((longlong)pvVar13 + (-8 - (longlong)pvVar9)))) {
LAB_18003da15:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar9);
    *plVar5 = (longlong)local_res10[0];
  }
  return param_1;
}

