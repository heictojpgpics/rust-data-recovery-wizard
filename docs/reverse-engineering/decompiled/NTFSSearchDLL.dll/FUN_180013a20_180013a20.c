// Function: FUN_180013a20
// Address: 180013a20
// Size: 497 bytes


void * FUN_180013a20(longlong *param_1,void *param_2,undefined8 *param_3)

{
  void *pvVar1;
  code *pcVar2;
  void *pvVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  void *pvVar8;
  void *pvVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  size_t _Size;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong local_res8;
  void *local_res10 [2];
  ulonglong local_res20;
  
  lVar5 = *param_1;
  lVar13 = (longlong)param_2 - lVar5;
  uVar12 = param_1[1] - lVar5 >> 3;
  local_res8 = 0x1fffffffffffffff;
  pvVar3 = (void *)FUN_180001110();
  local_res10[0] = pvVar3;
  puVar4 = FUN_180002960((ulonglong *)local_res10,&local_res8);
  if (uVar12 == *puVar4) {
    FUN_180002bd0();
    pcVar2 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar2)();
    return pvVar3;
  }
  uVar12 = uVar12 + 1;
  uVar11 = param_1[2] - lVar5 >> 3;
  local_res8 = 0x1fffffffffffffff;
  local_res10[0] = pvVar3;
  puVar4 = FUN_180002960((ulonglong *)local_res10,&local_res8);
  uVar7 = *puVar4 - (uVar11 >> 1);
  local_res20 = uVar12;
  if ((uVar11 <= uVar7) && (local_res20 = (uVar11 >> 1) + uVar11, local_res20 < uVar12)) {
    local_res20 = uVar12;
  }
  uVar11 = local_res20 * 8;
  if (local_res20 < 0x2000000000000000) {
    uVar10 = uVar11;
    if (uVar11 < 0x1000) {
      if (uVar11 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        uVar7 = uVar11;
        pvVar3 = (void *)FUN_18002be40(uVar11);
      }
      goto LAB_180013b48;
    }
  }
  else {
    uVar10 = 0xffffffffffffffff;
  }
  uVar7 = uVar10 + 0x27;
  if (uVar7 <= uVar10) {
    uVar7 = 0xffffffffffffffff;
  }
  lVar5 = FUN_18002be40(uVar7);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  pvVar3 = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)pvVar3 - 8) = lVar5;
LAB_180013b48:
  pvVar1 = (void *)((longlong)pvVar3 + (lVar13 >> 3) * 8);
  local_res10[0] = pvVar3;
  puVar6 = (undefined8 *)FUN_180001100(uVar7,pvVar1);
  *puVar6 = *param_3;
  pvVar8 = (void *)param_1[1];
  pvVar9 = (void *)*param_1;
  FUN_180002ca0((undefined1 *)&local_res8);
  if (param_2 == pvVar8) {
    _Size = (longlong)pvVar8 - (longlong)pvVar9;
    pvVar8 = pvVar3;
    param_2 = pvVar9;
  }
  else {
    memmove(pvVar3,pvVar9,(longlong)param_2 - (longlong)pvVar9);
    lVar5 = param_1[1];
    FUN_180002ca0((undefined1 *)&local_res8);
    _Size = lVar5 - (longlong)param_2;
    pvVar8 = (void *)((longlong)pvVar1 + 8);
  }
  memmove(pvVar8,param_2,_Size);
  pvVar8 = (void *)*param_1;
  if (pvVar8 != (void *)0x0) {
    pvVar9 = pvVar8;
    if ((0xfff < (param_1[2] - (longlong)pvVar8 & 0xfffffffffffffff8U)) &&
       (pvVar9 = *(void **)((longlong)pvVar8 + -8),
       0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar9)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar9);
  }
  *param_1 = (longlong)pvVar3;
  param_1[1] = (longlong)((longlong)pvVar3 + uVar12 * 8);
  param_1[2] = (longlong)(uVar11 + (longlong)pvVar3);
  return pvVar1;
}

