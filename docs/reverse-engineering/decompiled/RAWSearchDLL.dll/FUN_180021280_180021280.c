// Function: FUN_180021280
// Address: 180021280
// Size: 65 bytes


void FUN_180021280(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < (ulonglong)(param_3 << 4)) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  free(_Memory);
  return;
}

