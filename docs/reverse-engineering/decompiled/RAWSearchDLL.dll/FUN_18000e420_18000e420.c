// Function: FUN_18000e420
// Address: 18000e420
// Size: 181 bytes


void FUN_18000e420(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[1];
    if (plVar1 != plVar2) {
      do {
        FUN_180001630(plVar1);
        plVar1 = plVar1 + 4;
      } while (plVar1 != plVar2);
      plVar1 = (longlong *)*param_1;
    }
    plVar2 = plVar1;
    if ((0xfff < (param_1[2] - (longlong)plVar1 & 0xffffffffffffffe0U)) &&
       (plVar2 = (longlong *)plVar1[-1],
       0x1f < (ulonglong)((longlong)plVar1 + (-8 - (longlong)plVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar2);
  }
  *param_1 = param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  return;
}

