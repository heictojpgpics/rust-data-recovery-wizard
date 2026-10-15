// Function: FUN_180013dd0
// Address: 180013dd0
// Size: 107 bytes


void FUN_180013dd0(longlong param_1)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x18) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

