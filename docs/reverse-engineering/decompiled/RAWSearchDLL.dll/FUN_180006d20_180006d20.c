// Function: FUN_180006d20
// Address: 180006d20
// Size: 109 bytes


void FUN_180006d20(longlong *param_1)

{
  longlong *plVar1;
  longlong *_Memory;
  
  plVar1 = (longlong *)*param_1;
  _Memory = (longlong *)*plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  if (_Memory != (longlong *)*param_1) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar1;
    } while (plVar1 != (longlong *)*param_1);
  }
  free((void *)*param_1);
  return;
}

