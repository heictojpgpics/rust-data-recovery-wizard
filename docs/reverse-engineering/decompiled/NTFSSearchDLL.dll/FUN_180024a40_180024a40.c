// Function: FUN_180024a40
// Address: 180024a40
// Size: 808 bytes


void FUN_180024a40(longlong *param_1,void *param_2,void *param_3,longlong param_4)

{
  code *pcVar1;
  void *pvVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  void *pvVar8;
  longlong *_Dst;
  longlong lVar9;
  ulonglong uVar10;
  void *pvVar11;
  longlong lVar12;
  size_t sVar13;
  size_t sVar14;
  longlong lVar15;
  longlong *local_res8;
  void *local_res10;
  void *local_res18;
  void *local_res20;
  char cStack0000000000000028;
  
  sVar14 = param_4 - (longlong)param_3;
  uVar7 = (longlong)sVar14 >> 3;
  lVar4 = *param_1;
  lVar12 = (longlong)param_2 - lVar4 >> 3;
  if ((uVar7 == 1) && (param_2 == (void *)param_1[1])) {
    cStack0000000000000028 = '\x01';
  }
  else {
    cStack0000000000000028 = '\0';
    if (uVar7 == 0) {
      return;
    }
  }
  lVar9 = param_1[2];
  pvVar2 = (void *)param_1[1];
  local_res10 = param_2;
  local_res18 = param_3;
  if (uVar7 <= (ulonglong)(lVar9 - (longlong)pvVar2 >> 3)) {
    sVar13 = (longlong)pvVar2 - (longlong)param_2;
    local_res8 = param_1;
    local_res20 = pvVar2;
    if (uVar7 < (ulonglong)((longlong)sVar13 >> 3)) {
      pvVar8 = (void *)((longlong)pvVar2 + uVar7 * -8);
      FUN_180002ca0(&stack0x00000028);
      memmove(pvVar2,pvVar8,uVar7 * 8);
      param_1[1] = (longlong)(uVar7 * 8 + (longlong)pvVar2);
      sVar13 = (longlong)pvVar8 - (longlong)param_2;
      memmove((void *)((longlong)pvVar2 - sVar13),param_2,sVar13);
      FUN_180002ca0(&stack0x00000028);
      memmove(param_2,local_res18,sVar14);
    }
    else {
      pvVar2 = (void *)((longlong)param_2 + uVar7 * 8);
      pvVar8 = param_2;
      FUN_180002ca0(&stack0x00000028);
      memmove(pvVar2,pvVar8,sVar13);
      param_1[1] = sVar13 + (longlong)pvVar2;
      FUN_180002ca0(&stack0x00000028);
      memmove(param_2,local_res18,sVar14);
    }
    return;
  }
  lVar15 = (longlong)pvVar2 - lVar4 >> 3;
  local_res8 = (longlong *)0x1fffffffffffffff;
  pvVar2 = (void *)FUN_180001110();
  local_res10 = pvVar2;
  puVar3 = FUN_180002960((ulonglong *)&local_res10,(ulonglong *)&local_res8);
  if (*puVar3 - lVar15 < uVar7) {
    FUN_180002bd0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar8 = (void *)(lVar15 + uVar7);
  uVar10 = lVar9 - lVar4 >> 3;
  pvVar11 = (void *)0x1fffffffffffffff;
  local_res8 = (longlong *)0x1fffffffffffffff;
  local_res10 = pvVar2;
  local_res20 = pvVar8;
  puVar3 = FUN_180002960((ulonglong *)&local_res10,(ulonglong *)&local_res8);
  pvVar2 = pvVar8;
  if ((uVar10 <= *puVar3 - (uVar10 >> 1)) &&
     (pvVar2 = (void *)((uVar10 >> 1) + uVar10), pvVar2 < pvVar8)) {
    pvVar2 = pvVar8;
  }
  uVar10 = (longlong)pvVar2 * 8;
  local_res10 = pvVar2;
  if (pvVar11 < pvVar2) {
    uVar10 = 0xffffffffffffffff;
  }
  else if (uVar10 < 0x1000) {
    if (uVar10 == 0) {
      _Dst = (longlong *)0x0;
    }
    else {
      _Dst = (longlong *)FUN_18002be40(uVar10);
      param_3 = local_res18;
    }
    goto LAB_180024be4;
  }
  uVar5 = uVar10 + 0x27;
  if (uVar5 <= uVar10) {
    uVar5 = 0xffffffffffffffff;
  }
  lVar4 = FUN_18002be40(uVar5);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (longlong *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  _Dst[-1] = lVar4;
  param_3 = local_res18;
LAB_180024be4:
  plVar6 = _Dst + lVar12;
  local_res8 = _Dst;
  FUN_180002ca0((undefined1 *)&local_res18);
  memmove(plVar6,param_3,sVar14);
  pvVar8 = (void *)*param_1;
  if (cStack0000000000000028 == '\0') {
    FUN_180002ca0(&stack0x00000028);
    memmove(_Dst,pvVar8,(longlong)param_2 - (longlong)pvVar8);
    lVar4 = param_1[1];
    plVar6 = _Dst + lVar12 + uVar7;
    FUN_180002ca0(&stack0x00000028);
    sVar14 = lVar4 - (longlong)param_2;
  }
  else {
    lVar4 = param_1[1];
    FUN_180002ca0(&stack0x00000028);
    sVar14 = lVar4 - (longlong)pvVar8;
    plVar6 = _Dst;
    param_2 = pvVar8;
  }
  memmove(plVar6,param_2,sVar14);
  FID_conflict__Change_array(param_1,(longlong)_Dst,(longlong)local_res20,(longlong)pvVar2);
  return;
}

