// Function: FUN_18000e1b0
// Address: 18000e1b0
// Size: 485 bytes


longlong FUN_18000e1b0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong local_res8;
  undefined8 *local_res10;
  undefined8 *local_res18;
  ulonglong local_res20;
  
  lVar5 = *param_1;
  uVar12 = (longlong)param_2 - lVar5;
  uVar13 = param_1[1] - lVar5 >> 5;
  local_res8 = 0x7ffffffffffffff;
  local_res10 = param_2;
  local_res18 = param_3;
  uVar3 = FUN_1800012f0();
  local_res20 = uVar3;
  puVar4 = FUN_180001e40(&local_res20,&local_res8);
  if (uVar13 == *puVar4) {
    FUN_180002090();
    pcVar1 = (code *)swi(3);
    lVar5 = (*pcVar1)();
    return lVar5;
  }
  uVar13 = uVar13 + 1;
  uVar11 = param_1[2] - lVar5 >> 5;
  local_res8 = 0x7ffffffffffffff;
  local_res20 = uVar3;
  puVar4 = FUN_180001e40(&local_res20,&local_res8);
  uVar3 = *puVar4 - (uVar11 >> 1);
  uVar10 = uVar13;
  if ((uVar11 <= uVar3) && (uVar10 = (uVar11 >> 1) + uVar11, uVar10 < uVar13)) {
    uVar10 = uVar13;
  }
  uVar11 = uVar10 << 5;
  local_res20 = uVar10;
  if (uVar10 < 0x800000000000000) {
    if (uVar11 < 0x1000) {
      if (uVar11 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_1800020c0(uVar11);
        uVar3 = uVar11;
        param_3 = local_res18;
      }
      goto LAB_18000e2f9;
    }
  }
  else {
    uVar11 = 0xffffffffffffffff;
  }
  uVar3 = uVar11 + 0x27;
  if (uVar3 <= uVar11) {
    uVar3 = 0xffffffffffffffff;
  }
  lVar5 = FUN_1800020c0(uVar3);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar9 = lVar5 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar9 - 8) = lVar5;
  param_3 = local_res18;
LAB_18000e2f9:
  uVar12 = uVar12 & 0xffffffffffffffe0;
  lVar5 = uVar12 + uVar9;
  local_res8 = uVar9;
  lVar6 = FUN_1800012e0(uVar3,lVar5);
  FUN_180007060(lVar6,param_3);
  puVar2 = local_res10;
  puVar8 = (undefined8 *)param_1[1];
  puVar7 = (undefined8 *)*param_1;
  uVar3 = uVar9;
  if (local_res10 != puVar8) {
    FUN_18000e620((undefined8 *)*param_1,local_res10,uVar9);
    puVar8 = (undefined8 *)param_1[1];
    puVar7 = puVar2;
    uVar3 = lVar5 + 0x20;
  }
  FUN_18000e620(puVar7,puVar8,uVar3);
  FUN_18000e420(param_1,uVar9,uVar13,uVar10);
  return *param_1 + uVar12;
}

