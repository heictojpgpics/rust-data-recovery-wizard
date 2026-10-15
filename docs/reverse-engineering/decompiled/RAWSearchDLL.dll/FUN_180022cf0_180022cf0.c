// Function: FUN_180022cf0
// Address: 180022cf0
// Size: 906 bytes


void FUN_180022cf0(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong local_res8;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  char cStack0000000000000028;
  
  plVar9 = DAT_180118398;
  lVar7 = ((longlong)param_4 - (longlong)param_3) / 0x12 +
          ((longlong)param_4 - (longlong)param_3 >> 0x3f);
  uVar10 = (lVar7 >> 2) - (lVar7 >> 0x3f);
  lVar7 = ((longlong)param_2 - (longlong)DAT_180118390) / 0x12 +
          ((longlong)param_2 - (longlong)DAT_180118390 >> 0x3f);
  lVar7 = (lVar7 >> 2) - (lVar7 >> 0x3f);
  if ((uVar10 == 1) && (param_2 == DAT_180118398)) {
    cStack0000000000000028 = '\x01';
  }
  else {
    cStack0000000000000028 = '\0';
    if (uVar10 == 0) {
      return;
    }
  }
  local_res8 = uVar10;
  local_res18 = param_3;
  if (uVar10 <= (ulonglong)((DAT_1801183a0 - (longlong)DAT_180118398) / 0x48)) {
    local_res20 = DAT_180118398;
    local_res10 = param_2;
    if (uVar10 < (ulonglong)(((longlong)DAT_180118398 - (longlong)param_2) / 0x48)) {
      plVar13 = DAT_180118398 + uVar10 * -9;
      DAT_180118398 =
           (longlong *)
           FUN_1800233a0((longlong)plVar13,(longlong)DAT_180118398,(longlong)DAT_180118398);
      plVar6 = param_2;
      FUN_180023b80((longlong)param_2,(longlong)plVar13,(longlong)plVar9);
      FUN_1800212d0(plVar6,param_2,param_2 + uVar10 * 9);
      FUN_180023ad0(plVar6,param_3,param_4,(longlong)param_2);
    }
    else {
      local_res18 = param_2 + uVar10 * 9;
      plVar6 = param_2;
      DAT_180118398 =
           (longlong *)
           FUN_1800233a0((longlong)param_2,(longlong)DAT_180118398,(longlong)local_res18);
      FUN_1800212d0(plVar6,param_2,plVar9);
      FUN_180023ad0(plVar6,param_3,param_4,(longlong)param_2);
    }
    return;
  }
  lVar8 = ((longlong)DAT_180118398 - (longlong)DAT_180118390) / 0x12 +
          ((longlong)DAT_180118398 - (longlong)DAT_180118390 >> 0x3f);
  lVar11 = (lVar8 >> 2) - (lVar8 >> 0x3f);
  local_res10 = (longlong *)0x38e38e38e38e38e;
  lVar8 = DAT_1801183a0;
  plVar9 = DAT_180118390;
  local_res20 = param_4;
  uVar3 = FUN_1800012f0();
  local_res8 = uVar3;
  puVar4 = FUN_180001e40(&local_res8,(ulonglong *)&local_res10);
  if (*puVar4 - lVar11 < uVar10) {
    FUN_180002090();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = lVar11 + uVar10;
  lVar8 = (lVar8 - (longlong)plVar9) / 0x12 + (lVar8 - (longlong)plVar9 >> 0x3f);
  uVar12 = (lVar8 >> 2) - (lVar8 >> 0x3f);
  local_res10 = (longlong *)0x38e38e38e38e38e;
  local_res8 = uVar3;
  puVar4 = FUN_180001e40(&local_res8,(ulonglong *)&local_res10);
  uVar3 = uVar1;
  if ((uVar12 <= *puVar4 - (uVar12 >> 1)) && (uVar3 = (uVar12 >> 1) + uVar12, uVar3 < uVar1)) {
    uVar3 = uVar1;
  }
  uVar12 = uVar3 * 0x48;
  local_res8 = uVar3;
  if (uVar3 < 0x38e38e38e38e38f) {
    if (uVar12 < 0x1000) {
      if (uVar12 == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)FUN_1800020c0(uVar12);
      }
      goto LAB_180022f01;
    }
  }
  else {
    uVar12 = 0xffffffffffffffff;
  }
  uVar5 = uVar12 + 0x27;
  if (uVar5 <= uVar12) {
    uVar5 = 0xffffffffffffffff;
  }
  lVar8 = FUN_1800020c0(uVar5);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  plVar9 = (longlong *)(lVar8 + 0x27U & 0xffffffffffffffe0);
  plVar9[-1] = lVar8;
LAB_180022f01:
  lVar8 = uVar10 + lVar7;
  local_res10 = plVar9;
  FUN_180023ad0(lVar8 * 9,local_res18,local_res20,(longlong)(plVar9 + lVar7 * 9));
  plVar6 = DAT_180118390;
  plVar13 = plVar9;
  if (cStack0000000000000028 == '\0') {
    FUN_1800233a0((longlong)DAT_180118390,(longlong)param_2,(longlong)plVar9);
    plVar6 = param_2;
    plVar13 = plVar9 + lVar8 * 9;
  }
  FUN_1800233a0((longlong)plVar6,(longlong)DAT_180118398,(longlong)plVar13);
  FUN_1800221f0((longlong *)&DAT_180118390,(longlong)plVar9,uVar1,uVar3);
  return;
}

