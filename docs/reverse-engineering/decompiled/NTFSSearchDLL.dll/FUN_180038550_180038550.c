// Function: FUN_180038550
// Address: 180038550
// Size: 95 bytes


void FUN_180038550(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  plVar2 = (longlong *)*param_1;
  _Memory = (longlong *)*plVar2;
  *plVar2 = (longlong)plVar2;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  plVar2 = (longlong *)*param_1;
  if (_Memory != plVar2) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      plVar2 = (longlong *)*param_1;
      _Memory = plVar1;
    } while (plVar1 != plVar2);
  }
  free(plVar2);
  return;
}

