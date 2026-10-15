// Function: FUN_1800132a0
// Address: 1800132a0
// Size: 116 bytes


void FUN_1800132a0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = param_2 * 0x30;
  if (param_2 < 0x555555555555556) {
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        FUN_18002be40(uVar1);
        return;
      }
      return;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  uVar3 = uVar1 + 0x27;
  if (uVar3 <= uVar1) {
    uVar3 = 0xffffffffffffffff;
  }
  lVar2 = FUN_18002be40(uVar3);
  if (lVar2 != 0) {
    *(longlong *)((lVar2 + 0x27U & 0xffffffffffffffe0) - 8) = lVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}

