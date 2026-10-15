// Function: FUN_180013490
// Address: 180013490
// Size: 136 bytes


void FUN_180013490(longlong *param_1)

{
  longlong *plVar1;
  longlong *_Memory;
  
  plVar1 = (longlong *)*param_1;
  _Memory = (longlong *)*plVar1;
  if (_Memory != plVar1) {
    do {
      if ((void *)_Memory[2] != (void *)0x0) {
        free((void *)_Memory[2]);
      }
      _Memory = (longlong *)*_Memory;
      plVar1 = (longlong *)*param_1;
    } while (_Memory != plVar1);
    _Memory = (longlong *)*plVar1;
  }
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
  return;
}

