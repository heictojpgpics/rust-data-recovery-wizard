// Function: FUN_1800258d0
// Address: 1800258d0
// Size: 448 bytes


ulonglong * FUN_1800258d0(ulonglong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res10;
  ulonglong local_res18 [2];
  
  uVar11 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar6 = (param_2[1] - *param_2) / 0x12 + (param_2[1] - *param_2 >> 0x3f);
  uVar10 = (lVar6 >> 2) - (lVar6 >> 0x3f);
  if (uVar10 == 0) {
    return param_1;
  }
  uVar12 = 0x38e38e38e38e38e;
  local_res10 = 0x38e38e38e38e38e;
  local_res18[0] = FUN_1800012f0();
  puVar5 = local_res18;
  puVar3 = FUN_180001e40(puVar5,&local_res10);
  if (*puVar3 < uVar10) {
    FUN_180002090();
    pcVar2 = (code *)swi(3);
    puVar5 = (ulonglong *)(*pcVar2)();
    return puVar5;
  }
  puVar3 = (ulonglong *)(uVar10 * 0x48);
  if (uVar12 < uVar10) {
    puVar4 = (ulonglong *)0xffffffffffffffff;
  }
  else {
    puVar4 = puVar3;
    if (puVar3 < (ulonglong *)0x1000) {
      if (puVar3 != (ulonglong *)0x0) {
        puVar5 = puVar3;
        uVar11 = FUN_1800020c0((size_t)puVar3);
      }
      goto LAB_1800259ce;
    }
  }
  puVar5 = (ulonglong *)((longlong)puVar4 + 0x27);
  if (puVar5 <= puVar4) {
    puVar5 = (ulonglong *)0xffffffffffffffff;
  }
  lVar6 = FUN_1800020c0((size_t)puVar5);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar11 = lVar6 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar11 - 8) = lVar6;
LAB_1800259ce:
  *param_1 = uVar11;
  param_1[1] = uVar11;
  param_1[2] = (longlong)puVar3 + uVar11;
  plVar8 = (longlong *)*param_1;
  puVar1 = (undefined8 *)param_2[1];
  for (puVar9 = (undefined8 *)*param_2; plVar7 = plVar8, puVar9 != puVar1; puVar9 = puVar9 + 9) {
    uVar11 = FUN_1800012e0(puVar5,plVar8);
    local_res10 = uVar11;
    FUN_180007060(uVar11,puVar9);
    FUN_180007060(uVar11 + 0x20,puVar9 + 4);
    puVar5 = (ulonglong *)puVar9[8];
    *(ulonglong **)(uVar11 + 0x40) = puVar5;
    plVar8 = plVar8 + 9;
  }
  for (; plVar7 != plVar8; plVar7 = plVar7 + 9) {
    FUN_180001630(plVar7 + 4);
    FUN_180001630(plVar7);
  }
  param_1[1] = (ulonglong)plVar8;
  return param_1;
}

