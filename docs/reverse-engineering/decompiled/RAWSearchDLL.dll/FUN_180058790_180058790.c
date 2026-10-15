// Function: FUN_180058790
// Address: 180058790
// Size: 108 bytes


void FUN_180058790(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  void *_Memory;
  
  if (0xf < *(ulonglong *)((longlong)param_2 + 0x38)) {
    pvVar1 = *(void **)((longlong)param_2 + 0x20);
    _Memory = pvVar1;
    if ((0xfff < *(ulonglong *)((longlong)param_2 + 0x38) + 1) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0xf;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  free(param_2);
  return;
}

