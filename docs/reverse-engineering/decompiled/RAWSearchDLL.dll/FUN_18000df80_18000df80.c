// Function: FUN_18000df80
// Address: 18000df80
// Size: 215 bytes


ulonglong FUN_18000df80(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong in_RAX;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  ulonglong local_res10;
  
  uVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar6 = 0x7ffffffffffffff;
  local_res8 = 0x7ffffffffffffff;
  local_res10 = FUN_1800012f0();
  puVar2 = FUN_180001e40(&local_res10,&local_res8);
  if (*puVar2 < param_2) {
    FUN_180002090();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  uVar5 = param_2 * 0x20;
  if (uVar6 < param_2) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    uVar6 = uVar5;
    if (uVar5 < 0x1000) {
      if (uVar5 != 0) {
        uVar4 = FUN_1800020c0(uVar5);
      }
      goto LAB_18000e036;
    }
  }
  uVar4 = uVar6 + 0x27;
  if (uVar4 <= uVar6) {
    uVar4 = 0xffffffffffffffff;
  }
  lVar3 = FUN_1800020c0(uVar4);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar4 - 8) = lVar3;
LAB_18000e036:
  *param_1 = uVar4;
  param_1[2] = uVar5 + uVar4;
  param_1[1] = uVar4;
  return CONCAT71((int7)(uVar5 + uVar4 >> 8),1);
}

