// Function: FUN_180025a50
// Address: 180025a50
// Size: 127 bytes


void FUN_180025a50(undefined8 param_1,void *param_2)

{
  void *pvVar1;
  void *_Memory;
  
  pvVar1 = *(void **)((longlong)param_2 + 0x28);
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (*(longlong *)((longlong)param_2 + 0x38) - (longlong)pvVar1 & 0xfffffffffffffff8U))
       && (_Memory = *(void **)((longlong)pvVar1 + -8),
          0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *(undefined8 *)((longlong)param_2 + 0x28) = 0;
    *(undefined8 *)((longlong)param_2 + 0x30) = 0;
    *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  }
  free(param_2);
  return;
}

