// Function: FUN_18002c720
// Address: 18002c720
// Size: 137 bytes


void FUN_18002c720(longlong param_1)

{
  void *pvVar1;
  void *_Memory;
  undefined8 local_res8;
  
  FUN_18002c810((longlong *)(param_1 + 0x30),&local_res8,(longlong *)**(longlong **)(param_1 + 0x30)
                ,*(longlong **)(param_1 + 0x30));
  free(*(void **)(param_1 + 0x30));
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - (longlong)pvVar1 & 0xfffffffffffffffcU)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}

