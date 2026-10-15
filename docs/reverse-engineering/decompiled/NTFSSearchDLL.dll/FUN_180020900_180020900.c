// Function: FUN_180020900
// Address: 180020900
// Size: 678 bytes


longlong FUN_180020900(longlong *param_1,void *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  void *pvVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  void *pvVar12;
  ulonglong uVar13;
  void *pvVar14;
  size_t _Size;
  longlong lVar15;
  void *pvVar16;
  longlong local_res10;
  void *local_res20;
  void *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  plVar5 = param_1;
  pvVar6 = param_2;
  plVar3 = (longlong *)FUN_180002680(param_1);
  lVar15 = 0x4924924924924925;
  lVar9 = ((longlong)pvVar6 - *plVar3) / 0x38;
  local_res10 = lVar9;
  lVar4 = FUN_180002680(plVar5);
  plVar5 = (longlong *)FUN_180002680(plVar5);
  lVar4 = SUB168(SEXT816(lVar15) * SEXT816(*(longlong *)(lVar4 + 8) - *plVar5),8);
  uVar13 = (lVar4 >> 4) - (lVar4 >> 0x3f);
  pvVar16 = (void *)0x492492492492492;
  local_res20 = (void *)0x492492492492492;
  pvVar6 = (void *)FUN_180001110();
  local_40 = pvVar6;
  puVar7 = FUN_180002960((ulonglong *)&local_40,(ulonglong *)&local_res20);
  if (uVar13 == *puVar7) {
    FUN_180002bd0();
    pcVar1 = (code *)swi(3);
    lVar9 = (*pcVar1)();
    return lVar9;
  }
  pvVar14 = (void *)(uVar13 + 1);
  uVar8 = FUN_180002820(param_1);
  local_res20 = pvVar16;
  local_40 = pvVar6;
  puVar7 = FUN_180002960((ulonglong *)&local_40,(ulonglong *)&local_res20);
  uVar13 = *puVar7 - (uVar8 >> 1);
  local_40 = pvVar14;
  if ((uVar8 <= uVar13) && (local_40 = (void *)((uVar8 >> 1) + uVar8), local_40 < pvVar14)) {
    local_40 = pvVar14;
  }
  uVar8 = (longlong)local_40 * 0x38;
  if (pvVar16 < local_40) {
    uVar11 = 0xffffffffffffffff;
  }
  else {
    uVar11 = uVar8;
    if (uVar8 < 0x1000) {
      if (uVar8 == 0) {
        pvVar6 = (void *)0x0;
      }
      else {
        uVar13 = uVar8;
        pvVar6 = (void *)FUN_18002be40(uVar8);
        lVar9 = local_res10;
      }
      goto LAB_180020a89;
    }
  }
  uVar13 = uVar11 + 0x27;
  if (uVar13 <= uVar11) {
    uVar13 = 0xffffffffffffffff;
  }
  lVar9 = FUN_18002be40(uVar13);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  pvVar6 = (void *)(lVar9 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)pvVar6 - 8) = lVar9;
  lVar9 = local_res10;
LAB_180020a89:
  lVar9 = lVar9 * 0x38;
  local_res20 = pvVar6;
  puVar10 = (undefined8 *)FUN_180001100(uVar13,(void *)((longlong)pvVar6 + lVar9));
  uVar2 = param_3[1];
  *puVar10 = *param_3;
  puVar10[1] = uVar2;
  uVar2 = param_3[3];
  puVar10[2] = param_3[2];
  puVar10[3] = uVar2;
  uVar2 = param_3[5];
  puVar10[4] = param_3[4];
  puVar10[5] = uVar2;
  puVar10[6] = param_3[6];
  plVar5 = (longlong *)FUN_180002670((longlong)param_1);
  pvVar16 = (void *)*plVar5;
  pvVar12 = (void *)*plVar3;
  FUN_180002ca0((undefined1 *)&local_res10);
  if (param_2 == pvVar16) {
    _Size = (longlong)pvVar16 - (longlong)pvVar12;
    pvVar16 = pvVar6;
    param_2 = pvVar12;
  }
  else {
    memmove(pvVar6,pvVar12,(longlong)param_2 - (longlong)pvVar12);
    lVar4 = *plVar5;
    lVar15 = lVar9;
    FUN_180002ca0((undefined1 *)&local_res10);
    _Size = lVar4 - (longlong)param_2;
    pvVar16 = (void *)(lVar15 + 0x38 + (longlong)pvVar6);
  }
  memmove(pvVar16,param_2,_Size);
  pvVar16 = (void *)*plVar3;
  if (pvVar16 != (void *)0x0) {
    lVar4 = FUN_180002820(param_1);
    pvVar12 = pvVar16;
    if ((0xfff < (ulonglong)(lVar4 * 0x38)) &&
       (pvVar12 = *(void **)((longlong)pvVar16 + -8),
       0x1f < (ulonglong)((longlong)pvVar16 + (-8 - (longlong)pvVar12)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar12);
  }
  *plVar3 = (longlong)pvVar6;
  *plVar5 = (longlong)((longlong)pvVar14 * 0x38 + (longlong)pvVar6);
  pvVar6 = (void *)((longlong)pvVar6 + uVar8);
  plVar5 = (longlong *)FUN_180002810((longlong)param_1);
  *plVar5 = (longlong)pvVar6;
  return *plVar3 + lVar9;
}

