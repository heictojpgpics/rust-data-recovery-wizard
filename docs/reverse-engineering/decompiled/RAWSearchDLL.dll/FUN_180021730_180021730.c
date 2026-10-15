// Function: FUN_180021730
// Address: 180021730
// Size: 569 bytes


longlong FUN_180021730(longlong *param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  longlong local_res10;
  longlong local_res18;
  ulonglong local_res20;
  
  lVar7 = *param_1;
  lVar10 = 0xe38e38e38e38e39;
  lVar5 = (param_2 - lVar7) / 0x12 + (param_2 - lVar7 >> 0x3f);
  lVar6 = (param_1[1] - lVar7) / 0x12 + (param_1[1] - lVar7 >> 0x3f);
  uVar12 = (lVar6 >> 2) - (lVar6 >> 0x3f);
  local_res8 = 0x38e38e38e38e38e;
  local_res10 = param_2;
  local_res18 = param_3;
  uVar2 = FUN_1800012f0();
  local_res20 = uVar2;
  puVar3 = FUN_180001e40(&local_res20,&local_res8);
  if (uVar12 == *puVar3) {
    FUN_180002090();
    pcVar1 = (code *)swi(3);
    lVar7 = (*pcVar1)();
    return lVar7;
  }
  uVar12 = uVar12 + 1;
  lVar7 = SUB168(SEXT816(lVar10) * SEXT816(param_1[2] - lVar7),8);
  uVar11 = (lVar7 >> 2) - (lVar7 >> 0x3f);
  local_res8 = 0x38e38e38e38e38e;
  local_res20 = uVar2;
  puVar3 = FUN_180001e40(&local_res20,&local_res8);
  uVar2 = *puVar3 - (uVar11 >> 1);
  uVar9 = uVar12;
  if ((uVar11 <= uVar2) && (uVar9 = (uVar11 >> 1) + uVar11, uVar9 < uVar12)) {
    uVar9 = uVar12;
  }
  uVar11 = uVar9 * 0x48;
  local_res20 = uVar9;
  if (uVar9 < 0x38e38e38e38e38f) {
    if (uVar11 < 0x1000) {
      if (uVar11 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_1800020c0(uVar11);
        uVar2 = uVar11;
        param_3 = local_res18;
      }
      goto LAB_1800218c5;
    }
  }
  else {
    uVar11 = 0xffffffffffffffff;
  }
  uVar2 = uVar11 + 0x27;
  if (uVar2 <= uVar11) {
    uVar2 = 0xffffffffffffffff;
  }
  lVar7 = FUN_1800020c0(uVar2);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar8 = lVar7 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar8 - 8) = lVar7;
  param_3 = local_res18;
LAB_1800218c5:
  lVar5 = ((lVar5 >> 2) - (lVar5 >> 0x3f)) * 0x48;
  lVar7 = uVar8 + lVar5;
  local_res8 = uVar8;
  lVar6 = FUN_1800012e0(uVar2,lVar7);
  FUN_18001e970(lVar6,param_3);
  lVar10 = local_res10;
  lVar6 = param_1[1];
  lVar4 = *param_1;
  uVar2 = uVar8;
  if (local_res10 != lVar6) {
    FUN_1800233a0(*param_1,local_res10,uVar8);
    lVar6 = param_1[1];
    lVar4 = lVar10;
    uVar2 = lVar7 + 0x48;
  }
  FUN_1800233a0(lVar4,lVar6,uVar2);
  FUN_1800221f0(param_1,uVar8,uVar12,uVar9);
  return *param_1 + lVar5;
}

