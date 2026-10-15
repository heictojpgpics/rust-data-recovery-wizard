// Function: FUN_180034c20
// Address: 180034c20
// Size: 247 bytes


void FUN_180034c20(longlong *param_1)

{
  void *pvVar1;
  void *_Memory;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[7];
  if (plVar3 != (longlong *)param_1[8]) {
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,1);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != (longlong *)param_1[8]);
  }
  param_1[8] = param_1[7];
  param_1[0x12] = 0;
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)((param_1[9] - (longlong)pvVar1 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  FUN_180011600(param_1 + 2);
  plVar3 = (longlong *)*param_1;
  plVar2 = (longlong *)*plVar3;
  *plVar3 = (longlong)plVar3;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  if (plVar2 != (longlong *)*param_1) {
    do {
      plVar3 = (longlong *)*plVar2;
      free(plVar2);
      plVar2 = plVar3;
    } while (plVar3 != (longlong *)*param_1);
  }
  free((void *)*param_1);
  return;
}

