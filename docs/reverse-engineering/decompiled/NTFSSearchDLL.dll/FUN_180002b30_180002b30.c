// Function: FUN_180002b30
// Address: 180002b30
// Size: 89 bytes


void FUN_180002b30(size_t param_1)

{
  longlong lVar1;
  size_t sVar2;
  
  if (param_1 < 0x1000) {
    if (param_1 != 0) {
      FUN_18002be40(param_1);
      return;
    }
    return;
  }
  sVar2 = param_1 + 0x27;
  if (sVar2 <= param_1) {
    sVar2 = 0xffffffffffffffff;
  }
  lVar1 = FUN_18002be40(sVar2);
  if (lVar1 != 0) {
    *(longlong *)((lVar1 + 0x27U & 0xffffffffffffffe0) - 8) = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}

