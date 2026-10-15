// Function: FUN_180021970
// Address: 180021970
// Size: 550 bytes


longlong FUN_180021970(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  ulonglong local_res10;
  undefined8 local_res18;
  ulonglong local_res20;
  
  lVar7 = *param_1;
  uVar14 = (longlong)param_2 - lVar7;
  uVar15 = param_1[1] - lVar7 >> 5;
  local_res8 = 0x7ffffffffffffff;
  local_res18 = param_3;
  uVar5 = FUN_1800012f0();
  local_res10 = uVar5;
  puVar6 = FUN_180001e40(&local_res10,&local_res8);
  if (uVar15 == *puVar6) {
    FUN_180002090();
    pcVar1 = (code *)swi(3);
    lVar7 = (*pcVar1)();
    return lVar7;
  }
  uVar15 = uVar15 + 1;
  uVar13 = param_1[2] - lVar7 >> 5;
  local_res8 = 0x7ffffffffffffff;
  local_res10 = uVar5;
  puVar6 = FUN_180001e40(&local_res10,&local_res8);
  uVar5 = *puVar6 - (uVar13 >> 1);
  uVar12 = uVar15;
  if ((uVar13 <= uVar5) && (uVar12 = (uVar13 >> 1) + uVar13, uVar12 < uVar15)) {
    uVar12 = uVar15;
  }
  uVar13 = uVar12 << 5;
  local_res20 = uVar12;
  if (uVar12 < 0x800000000000000) {
    if (uVar13 < 0x1000) {
      if (uVar13 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_1800020c0(uVar13);
        uVar5 = uVar13;
        param_3 = local_res18;
      }
      goto LAB_180021abb;
    }
  }
  else {
    uVar13 = 0xffffffffffffffff;
  }
  uVar5 = uVar13 + 0x27;
  if (uVar5 <= uVar13) {
    uVar5 = 0xffffffffffffffff;
  }
  lVar7 = FUN_1800020c0(uVar5);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar11 = lVar7 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar11 - 8) = lVar7;
  param_3 = local_res18;
LAB_180021abb:
  uVar14 = uVar14 & 0xffffffffffffffe0;
  lVar7 = uVar14 + uVar11;
  local_res10 = uVar11;
  lVar8 = FUN_1800012e0(uVar5,lVar7);
  FUN_180001780(lVar8);
  puVar9 = (undefined8 *)FUN_1800016b0(param_3);
  puVar10 = (undefined8 *)FUN_1800016b0(lVar8);
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  *puVar10 = *puVar9;
  puVar10[1] = uVar2;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  puVar9[2] = 0;
  puVar9[3] = 0xf;
  local_res8 = local_res8 & 0xffffffffffffff00;
  FUN_180001300((undefined1 *)puVar9,(undefined1 *)&local_res8);
  puVar9 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)*param_1;
  uVar5 = uVar11;
  if (param_2 != puVar9) {
    FUN_18000e620((undefined8 *)*param_1,param_2,uVar11);
    puVar9 = (undefined8 *)param_1[1];
    puVar10 = param_2;
    uVar5 = lVar7 + 0x20;
  }
  FUN_18000e620(puVar10,puVar9,uVar5);
  FUN_18000e420(param_1,uVar11,uVar15,uVar12);
  return *param_1 + uVar14;
}

