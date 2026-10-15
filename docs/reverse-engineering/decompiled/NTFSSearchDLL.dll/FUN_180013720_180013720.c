// Function: FUN_180013720
// Address: 180013720
// Size: 758 bytes


longlong FUN_180013720(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  void *_Memory;
  ulonglong uVar14;
  ulonglong local_res8;
  ulonglong local_res10;
  
  uVar11 = *param_1;
  lVar12 = (longlong)param_2 - uVar11;
  uVar13 = (longlong)(param_1[1] - uVar11) / 0x28;
  uVar14 = 0x666666666666666;
  local_res8 = 0x666666666666666;
  uVar4 = FUN_180001110();
  local_res10 = uVar4;
  puVar5 = FUN_180002960(&local_res10,&local_res8);
  if (uVar13 == *puVar5) {
    FUN_180002bd0();
    pcVar2 = (code *)swi(3);
    lVar12 = (*pcVar2)();
    return lVar12;
  }
  uVar13 = uVar13 + 1;
  uVar6 = (longlong)(param_1[2] - uVar11) / 0x28;
  local_res8 = uVar14;
  local_res10 = uVar4;
  puVar5 = FUN_180002960(&local_res10,&local_res8);
  uVar11 = *puVar5 - (uVar6 >> 1);
  uVar4 = uVar13;
  if ((uVar6 <= uVar11) && (uVar4 = (uVar6 >> 1) + uVar6, uVar4 < uVar13)) {
    uVar4 = uVar13;
  }
  uVar6 = uVar4 * 0x28;
  local_res8 = uVar4;
  if (uVar14 < uVar4) {
    uVar6 = 0xffffffffffffffff;
  }
  else if (uVar6 < 0x1000) {
    if (uVar6 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = FUN_18002be40(uVar6);
      uVar11 = uVar6;
    }
    goto LAB_180013889;
  }
  uVar11 = uVar6 + 0x27;
  if (uVar11 <= uVar6) {
    uVar11 = 0xffffffffffffffff;
  }
  lVar7 = FUN_18002be40(uVar11);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar14 = lVar7 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar14 - 8) = lVar7;
LAB_180013889:
  lVar12 = uVar14 + (lVar12 / 0x28) * 0x28;
  local_res10 = uVar14;
  puVar8 = (undefined8 *)FUN_180001100(uVar11,lVar12);
  uVar3 = param_3[1];
  *puVar8 = *param_3;
  puVar8[1] = uVar3;
  uVar3 = param_3[3];
  puVar8[2] = param_3[2];
  puVar8[3] = uVar3;
  puVar8[4] = param_3[4];
  puVar8 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)*param_1;
  uVar11 = uVar14;
  if (param_2 == puVar8) {
    for (; puVar10 != puVar8; puVar10 = puVar10 + 5) {
      puVar9 = (undefined8 *)FUN_180001100(puVar10,uVar11);
      uVar3 = puVar10[1];
      *puVar9 = *puVar10;
      puVar9[1] = uVar3;
      uVar3 = puVar10[3];
      puVar9[2] = puVar10[2];
      puVar9[3] = uVar3;
      puVar9[4] = puVar10[4];
      uVar11 = uVar11 + 0x28;
    }
  }
  else {
    for (; puVar10 != param_2; puVar10 = puVar10 + 5) {
      puVar8 = (undefined8 *)FUN_180001100(puVar10,uVar11);
      uVar3 = puVar10[1];
      *puVar8 = *puVar10;
      puVar8[1] = uVar3;
      uVar3 = puVar10[3];
      puVar8[2] = puVar10[2];
      puVar8[3] = uVar3;
      puVar8[4] = puVar10[4];
      uVar11 = uVar11 + 0x28;
    }
    puVar8 = (undefined8 *)param_1[1];
    lVar7 = lVar12;
    for (; lVar7 = lVar7 + 0x28, param_2 != puVar8; param_2 = param_2 + 5) {
      puVar10 = (undefined8 *)FUN_180001100(puVar8,lVar7);
      uVar3 = param_2[1];
      *puVar10 = *param_2;
      puVar10[1] = uVar3;
      uVar3 = param_2[3];
      puVar10[2] = param_2[2];
      puVar10[3] = uVar3;
      puVar10[4] = param_2[4];
    }
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(((longlong)(param_1[2] - (longlong)pvVar1) / 0x28) * 0x28)) &&
       (_Memory = *(void **)((longlong)pvVar1 - 8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *param_1 = uVar14;
  param_1[1] = uVar14 + uVar13 * 0x28;
  param_1[2] = uVar14 + uVar4 * 0x28;
  return lVar12;
}

