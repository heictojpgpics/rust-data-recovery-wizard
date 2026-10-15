// Function: FUN_1800330d0
// Address: 1800330d0
// Size: 196 bytes


void FUN_1800330d0(undefined8 *param_1)

{
  void *pvVar1;
  longlong lVar2;
  void *_Memory;
  
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    do {
      lVar2 = lVar2 + -1;
      param_1[4] = lVar2;
    } while (lVar2 != 0);
    param_1[3] = 0;
  }
  lVar2 = param_1[2];
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    pvVar1 = *(void **)(param_1[1] + lVar2 * 8);
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
    }
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(param_1[2] << 3)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  param_1[2] = 0;
  param_1[1] = 0;
  free((void *)*param_1);
  *param_1 = 0;
  return;
}

