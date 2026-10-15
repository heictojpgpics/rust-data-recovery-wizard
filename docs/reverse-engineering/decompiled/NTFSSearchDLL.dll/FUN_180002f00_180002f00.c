// Function: FUN_180002f00
// Address: 180002f00
// Size: 139 bytes


longlong * FUN_180002f00(longlong *param_1,uint param_2)

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
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

