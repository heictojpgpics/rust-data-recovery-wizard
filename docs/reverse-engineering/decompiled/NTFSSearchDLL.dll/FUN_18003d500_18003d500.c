// Function: FUN_18003d500
// Address: 18003d500
// Size: 450 bytes


longlong FUN_18003d500(longlong *param_1,void *param_2,undefined8 param_3)

{
  code *pcVar1;
  void *pvVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *_Src;
  ulonglong uVar9;
  ulonglong uVar10;
  void *pvVar11;
  size_t _Size;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong local_res8;
  void *local_res10 [2];
  ulonglong local_res20;
  
  lVar4 = *param_1;
  lVar13 = (longlong)param_2 - lVar4 >> 3;
  uVar14 = param_1[1] - lVar4 >> 3;
  uVar12 = 0x1fffffffffffffff;
  local_res8 = 0x1fffffffffffffff;
  pvVar2 = (void *)FUN_180001110();
  local_res10[0] = pvVar2;
  puVar3 = FUN_180002960((ulonglong *)local_res10,&local_res8);
  if (uVar14 == *puVar3) {
    FUN_180002bd0();
    pcVar1 = (code *)swi(3);
    lVar4 = (*pcVar1)();
    return lVar4;
  }
  uVar14 = uVar14 + 1;
  uVar10 = param_1[2] - lVar4 >> 3;
  local_res8 = uVar12;
  local_res10[0] = pvVar2;
  puVar3 = FUN_180002960((ulonglong *)local_res10,&local_res8);
  uVar9 = uVar14;
  if ((uVar10 <= *puVar3 - (uVar10 >> 1)) && (uVar9 = (uVar10 >> 1) + uVar10, uVar9 < uVar14)) {
    uVar9 = uVar14;
  }
  uVar10 = uVar9 * 8;
  local_res20 = uVar9;
  if (uVar12 < uVar9) {
    uVar10 = 0xffffffffffffffff;
  }
  else if (uVar10 < 0x1000) {
    if (uVar10 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_18002be40(uVar10);
    }
    goto LAB_18003d624;
  }
  uVar12 = uVar10 + 0x27;
  if (uVar12 <= uVar10) {
    uVar12 = 0xffffffffffffffff;
  }
  lVar4 = FUN_18002be40(uVar12);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  pvVar2 = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)pvVar2 - 8) = lVar4;
LAB_18003d624:
  local_res10[0] = pvVar2;
  uVar5 = FUN_180002680(param_3);
  pvVar8 = (void *)((longlong)pvVar2 + lVar13 * 8);
  puVar6 = (undefined8 *)FUN_180001100(uVar5,pvVar8);
  puVar7 = (undefined8 *)FUN_180002680(uVar5);
  *puVar6 = *puVar7;
  pvVar11 = (void *)param_1[1];
  _Src = (void *)*param_1;
  FUN_180002ca0((undefined1 *)&local_res8);
  if (param_2 == pvVar11) {
    _Size = (longlong)pvVar11 - (longlong)_Src;
    pvVar8 = pvVar2;
    param_2 = _Src;
  }
  else {
    memmove(pvVar2,_Src,(longlong)param_2 - (longlong)_Src);
    lVar4 = param_1[1];
    FUN_180002ca0((undefined1 *)&local_res8);
    _Size = lVar4 - (longlong)param_2;
    pvVar8 = (void *)((longlong)pvVar8 + 8);
  }
  memmove(pvVar8,param_2,_Size);
  FID_conflict__Change_array(param_1,(longlong)pvVar2,uVar14,uVar9);
  return *param_1 + lVar13 * 8;
}

