// Function: FUN_18003a150
// Address: 18003a150
// Size: 336 bytes


void FUN_18003a150(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *_Memory;
  void *_Memory_00;
  
  param_1[6] = 0;
  param_1[5] = 0;
  FUN_180011140(param_1);
  param_1[3] = param_1[2];
  plVar1 = param_1 + 9;
  FUN_180011140(plVar1);
  plVar2 = param_1 + 0xd;
  FUN_180011140(plVar2);
  FUN_180011140(plVar2);
  free((void *)*plVar2);
  FUN_180011140(plVar1);
  free((void *)*plVar1);
  plVar1 = param_1 + 7;
  plVar2 = (longlong *)*plVar1;
  _Memory = (longlong *)*plVar2;
  *plVar2 = (longlong)plVar2;
  *(longlong *)(*plVar1 + 8) = *plVar1;
  param_1[8] = 0;
  if (_Memory != (longlong *)*plVar1) {
    do {
      plVar2 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar2;
    } while (plVar2 != (longlong *)*plVar1);
  }
  free((void *)*plVar1);
  pvVar3 = (void *)param_1[2];
  if (pvVar3 != (void *)0x0) {
    _Memory_00 = pvVar3;
    if ((0xfff < (ulonglong)((param_1[4] - (longlong)pvVar3 >> 3) * 8)) &&
       (_Memory_00 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory_00)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory_00);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_180011140(param_1);
  free((void *)*param_1);
  return;
}

