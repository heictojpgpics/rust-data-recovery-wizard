// Function: FUN_180022340
// Address: 180022340
// Size: 587 bytes


longlong FUN_180022340(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  void *_Memory;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  ulonglong local_res10;
  
  uVar10 = *param_1;
  uVar14 = (longlong)param_2 - uVar10;
  uVar15 = (longlong)(param_1[1] - uVar10) >> 4;
  uVar13 = 0xfffffffffffffff;
  local_res8 = 0xfffffffffffffff;
  uVar4 = FUN_1800012f0();
  local_res10 = uVar4;
  puVar5 = FUN_180001e40(&local_res10,&local_res8);
  if (uVar15 == *puVar5) {
    FUN_180002090();
    pcVar2 = (code *)swi(3);
    lVar6 = (*pcVar2)();
    return lVar6;
  }
  uVar15 = uVar15 + 1;
  uVar12 = (longlong)(param_1[2] - uVar10) >> 4;
  local_res8 = uVar13;
  local_res10 = uVar4;
  puVar5 = FUN_180001e40(&local_res10,&local_res8);
  uVar10 = *puVar5 - (uVar12 >> 1);
  uVar4 = uVar15;
  if ((uVar12 <= uVar10) && (uVar4 = (uVar12 >> 1) + uVar12, uVar4 < uVar15)) {
    uVar4 = uVar15;
  }
  uVar12 = uVar4 << 4;
  local_res8 = uVar4;
  if (uVar13 < uVar4) {
    uVar12 = 0xffffffffffffffff;
  }
  else if (uVar12 < 0x1000) {
    if (uVar12 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = FUN_1800020c0(uVar12);
      uVar10 = uVar12;
    }
    goto LAB_180022462;
  }
  uVar10 = uVar12 + 0x27;
  if (uVar10 <= uVar12) {
    uVar10 = 0xffffffffffffffff;
  }
  lVar6 = FUN_1800020c0(uVar10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar13 = lVar6 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar13 - 8) = lVar6;
LAB_180022462:
  lVar6 = (uVar14 & 0xfffffffffffffff0) + uVar13;
  local_res10 = uVar13;
  puVar7 = (undefined8 *)FUN_1800012e0(uVar10,lVar6);
  uVar3 = param_3[1];
  *puVar7 = *param_3;
  puVar7[1] = uVar3;
  puVar7 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)*param_1;
  uVar10 = uVar13;
  if (param_2 == puVar7) {
    for (; puVar9 != puVar7; puVar9 = puVar9 + 2) {
      puVar8 = (undefined8 *)FUN_1800012e0(puVar9,uVar10);
      uVar3 = puVar9[1];
      *puVar8 = *puVar9;
      puVar8[1] = uVar3;
      uVar10 = uVar10 + 0x10;
    }
  }
  else {
    for (; puVar9 != param_2; puVar9 = puVar9 + 2) {
      puVar7 = (undefined8 *)FUN_1800012e0(puVar9,uVar10);
      uVar3 = puVar9[1];
      *puVar7 = *puVar9;
      puVar7[1] = uVar3;
      uVar10 = uVar10 + 0x10;
    }
    puVar7 = (undefined8 *)param_1[1];
    lVar11 = lVar6;
    for (; lVar11 = lVar11 + 0x10, param_2 != puVar7; param_2 = param_2 + 2) {
      puVar9 = (undefined8 *)FUN_1800012e0(puVar7,lVar11);
      uVar3 = param_2[1];
      *puVar9 = *param_2;
      puVar9[1] = uVar3;
    }
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffff0)) &&
       (_Memory = *(void **)((longlong)pvVar1 - 8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = uVar13;
  param_1[1] = uVar15 * 0x10 + uVar13;
  param_1[2] = uVar4 * 0x10 + uVar13;
  return lVar6;
}

