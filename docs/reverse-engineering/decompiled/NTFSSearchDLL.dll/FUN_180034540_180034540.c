// Function: FUN_180034540
// Address: 180034540
// Size: 180 bytes


void FUN_180034540(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  void *_Memory;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    do {
      lVar2 = lVar2 + -1;
      *(longlong *)(param_1 + 0x20) = lVar2;
    } while (lVar2 != 0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    pvVar1 = *(void **)(*(longlong *)(param_1 + 8) + lVar2 * 8);
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
    }
  }
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 3)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

