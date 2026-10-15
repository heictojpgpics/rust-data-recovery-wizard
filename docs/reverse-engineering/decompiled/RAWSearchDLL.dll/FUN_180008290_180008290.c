// Function: FUN_180008290
// Address: 180008290
// Size: 136 bytes


void FUN_180008290(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  plVar2 = (longlong *)*param_1;
  _Memory = (longlong *)*plVar2;
  if (_Memory != plVar2) {
    do {
      puVar1 = (undefined8 *)_Memory[2];
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      _Memory = (longlong *)*_Memory;
      plVar2 = (longlong *)*param_1;
    } while (_Memory != plVar2);
    _Memory = (longlong *)*plVar2;
  }
  *plVar2 = (longlong)plVar2;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  if (_Memory != (longlong *)*param_1) {
    do {
      plVar2 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar2;
    } while (plVar2 != (longlong *)*param_1);
  }
  return;
}

