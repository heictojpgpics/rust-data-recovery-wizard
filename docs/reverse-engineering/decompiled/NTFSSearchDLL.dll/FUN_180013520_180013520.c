// Function: FUN_180013520
// Address: 180013520
// Size: 451 bytes


longlong FUN_180013520(longlong *param_1,void *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  void *pvVar7;
  void *_Src;
  ulonglong uVar8;
  ulonglong uVar9;
  void *pvVar10;
  size_t _Size;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  void *local_res10;
  undefined8 *local_res18;
  ulonglong local_res20;
  
  lVar4 = *param_1;
  lVar11 = (longlong)param_2 - lVar4 >> 3;
  uVar12 = param_1[1] - lVar4 >> 3;
  local_res8 = 0x1fffffffffffffff;
  local_res18 = param_3;
  pvVar2 = (void *)FUN_180001110();
  local_res10 = pvVar2;
  puVar3 = FUN_180002960((ulonglong *)&local_res10,&local_res8);
  if (uVar12 == *puVar3) {
    FUN_180002bd0();
    pcVar1 = (code *)swi(3);
    lVar4 = (*pcVar1)();
    return lVar4;
  }
  uVar12 = uVar12 + 1;
  uVar9 = param_1[2] - lVar4 >> 3;
  local_res8 = 0x1fffffffffffffff;
  local_res10 = pvVar2;
  puVar3 = FUN_180002960((ulonglong *)&local_res10,&local_res8);
  uVar6 = *puVar3 - (uVar9 >> 1);
  uVar8 = uVar12;
  if ((uVar9 <= uVar6) && (uVar8 = (uVar9 >> 1) + uVar9, uVar8 < uVar12)) {
    uVar8 = uVar12;
  }
  uVar9 = uVar8 * 8;
  local_res20 = uVar8;
  if (uVar8 < 0x2000000000000000) {
    if (uVar9 < 0x1000) {
      if (uVar9 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = (void *)FUN_18002be40(uVar9);
        uVar6 = uVar9;
        param_3 = local_res18;
      }
      goto LAB_180013658;
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
  }
  uVar6 = uVar9 + 0x27;
  if (uVar6 <= uVar9) {
    uVar6 = 0xffffffffffffffff;
  }
  lVar4 = FUN_18002be40(uVar6);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  pvVar2 = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)pvVar2 - 8) = lVar4;
  param_3 = local_res18;
LAB_180013658:
  pvVar7 = (void *)((longlong)pvVar2 + lVar11 * 8);
  local_res10 = pvVar2;
  puVar5 = (undefined8 *)FUN_180001100(uVar6,pvVar7);
  *puVar5 = *param_3;
  pvVar10 = (void *)param_1[1];
  _Src = (void *)*param_1;
  FUN_180002ca0((undefined1 *)&local_res8);
  if (param_2 == pvVar10) {
    _Size = (longlong)pvVar10 - (longlong)_Src;
    pvVar7 = pvVar2;
    param_2 = _Src;
  }
  else {
    memmove(pvVar2,_Src,(longlong)param_2 - (longlong)_Src);
    lVar4 = param_1[1];
    FUN_180002ca0((undefined1 *)&local_res8);
    _Size = lVar4 - (longlong)param_2;
    pvVar7 = (void *)((longlong)pvVar7 + 8);
  }
  memmove(pvVar7,param_2,_Size);
  FID_conflict__Change_array(param_1,(longlong)pvVar2,uVar12,uVar8);
  return *param_1 + lVar11 * 8;
}

