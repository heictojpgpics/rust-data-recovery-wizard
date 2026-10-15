// Function: FUN_180024800
// Address: 180024800
// Size: 216 bytes


ulonglong FUN_180024800(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong in_RAX;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  ulonglong local_res10;
  
  uVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar6 = 0x1fffffffffffffff;
  local_res8 = 0x1fffffffffffffff;
  local_res10 = FUN_180001110();
  puVar3 = FUN_180002960(&local_res10,&local_res8);
  if (*puVar3 < param_2) {
    FUN_180002bd0();
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  uVar1 = param_2 * 8;
  if (uVar6 < param_2) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    uVar6 = uVar1;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        uVar5 = FUN_18002be40(uVar1);
      }
      goto LAB_1800248b7;
    }
  }
  uVar5 = uVar6 + 0x27;
  if (uVar5 <= uVar6) {
    uVar5 = 0xffffffffffffffff;
  }
  lVar4 = FUN_18002be40(uVar5);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar5 - 8) = lVar4;
LAB_1800248b7:
  *param_1 = uVar5;
  param_1[2] = uVar1 + uVar5;
  param_1[1] = uVar5;
  return CONCAT71((int7)(uVar1 + uVar5 >> 8),1);
}

