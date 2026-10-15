// Function: FUN_180002480
// Address: 180002480
// Size: 111 bytes


void FUN_180002480(longlong *param_1)

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
      FUN_180001700((longlong)(_Memory + 2));
      free(_Memory);
      plVar2 = (longlong *)*param_1;
      _Memory = plVar1;
    } while (plVar1 != plVar2);
  }
  free(plVar2);
  return;
}

