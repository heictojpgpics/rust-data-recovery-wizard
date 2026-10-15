// Function: FUN_18003d6d0
// Address: 18003d6d0
// Size: 523 bytes


undefined8
FUN_18003d6d0(undefined8 param_1,ulonglong param_2,undefined1 param_3,void *param_4,size_t param_5)

{
  size_t sVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  void *pvVar14;
  void *local_res10;
  undefined1 local_res18 [8];
  void *local_res20;
  ulonglong local_48 [2];
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  plVar6 = (longlong *)FUN_180002680(param_1);
  sVar1 = plVar6[2];
  lVar7 = FUN_180001110();
  if (lVar7 - sVar1 < param_2) {
    FUN_180002c50();
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return uVar12;
  }
  uVar2 = plVar6[3];
  uVar8 = FUN_180001110();
  local_48[0] = sVar1 + param_2 | 0xf;
  if (local_48[0] <= uVar8) {
    lVar7 = FUN_180002680(param_1);
    uVar3 = *(ulonglong *)(lVar7 + 0x18);
    if (uVar3 <= uVar8 - (uVar3 >> 1)) {
      local_res10 = (void *)((uVar3 >> 1) + uVar3);
      puVar9 = FUN_1800026b0(local_48,(ulonglong *)&local_res10);
      uVar8 = *puVar9;
    }
  }
  pvVar10 = (void *)(uVar8 + 1);
  if (pvVar10 < (void *)0x1000) {
    if (pvVar10 != (void *)0x0) {
      pvVar10 = (void *)FUN_18002be40((size_t)pvVar10);
    }
  }
  else {
    pvVar14 = (void *)(uVar8 + 0x28);
    if (pvVar14 <= pvVar10) {
      pvVar14 = (void *)0xffffffffffffffff;
    }
    lVar7 = FUN_18002be40((size_t)pvVar14);
    if (lVar7 == 0) goto LAB_18003d855;
    pvVar10 = (void *)(lVar7 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)pvVar10 - 8) = lVar7;
  }
  plVar6[2] = sVar1 + param_2;
  plVar6[3] = uVar8;
  pvVar14 = (void *)((longlong)pvVar10 + sVar1);
  local_res10 = pvVar10;
  if (uVar2 < 0x10) {
    FUN_180001120(pvVar10,plVar6,sVar1);
    FUN_180001120(pvVar14,local_res20,param_5);
    local_res18[0] = 0;
    FUN_180001150((undefined1 *)((longlong)pvVar14 + param_5),local_res18);
    puVar11 = (undefined8 *)FUN_180002680(&local_res10);
    uVar12 = FUN_180002680(plVar6);
    puVar13 = (undefined8 *)FUN_180001100(plVar6,uVar12);
    *puVar13 = *puVar11;
  }
  else {
    pvVar4 = (void *)*plVar6;
    FUN_180001120(pvVar10,pvVar4,sVar1);
    FUN_180001120(pvVar14,local_res20,param_5);
    local_res18[0] = 0;
    FUN_180001150((undefined1 *)((longlong)pvVar14 + param_5),local_res18);
    pvVar10 = pvVar4;
    if ((0xfff < uVar2 + 1) &&
       (pvVar10 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10)))) {
LAB_18003d855:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar10);
    *plVar6 = (longlong)local_res10;
  }
  return param_1;
}

