// Function: FUN_180002020
// Address: 180002020
// Size: 100 bytes


longlong * FUN_180002020(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (7 < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    _Memory = pvVar1;
    if ((0xfff < param_1[3] * 2 + 2U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  return param_1;
}

