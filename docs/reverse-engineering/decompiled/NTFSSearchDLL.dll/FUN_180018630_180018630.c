// Function: FUN_180018630
// Address: 180018630
// Size: 257 bytes


void FUN_180018630(longlong param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    free(*(void **)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_1800199a0(param_1);
  FUN_180011140((longlong *)(param_1 + 0x68));
  free(*(void **)(param_1 + 0x68));
  pvVar1 = *(void **)(param_1 + 0x40);
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)((*(longlong *)(param_1 + 0x50) - (longlong)pvVar1 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  FUN_180011140((longlong *)(param_1 + 0x30));
  free(*(void **)(param_1 + 0x30));
  FUN_180011140((longlong *)(param_1 + 0x20));
  free(*(void **)(param_1 + 0x20));
  return;
}

