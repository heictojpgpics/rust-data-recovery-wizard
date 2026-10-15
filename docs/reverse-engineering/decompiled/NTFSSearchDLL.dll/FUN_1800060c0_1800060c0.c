// Function: FUN_1800060c0
// Address: 1800060c0
// Size: 154 bytes


undefined8 FUN_1800060c0(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x7fffffffffffffff < param_2) {
      FUN_180002bd0();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    if (param_2 < 0x1000) {
      uVar4 = FUN_18002be40(param_2);
    }
    else {
      uVar4 = param_2 + 0x27;
      if (uVar4 <= param_2) {
        uVar4 = 0xffffffffffffffff;
      }
      lVar2 = FUN_18002be40(uVar4);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = lVar2 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar4 - 8) = lVar2;
    }
    *param_1 = uVar4;
    param_1[1] = uVar4;
    uVar3 = CONCAT71((int7)(*param_1 >> 8),1);
    param_1[2] = param_2 + *param_1;
  }
  return uVar3;
}

