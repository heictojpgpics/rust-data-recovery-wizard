// Function: FUN_180038ec0
// Address: 180038ec0
// Size: 125 bytes


void FUN_180038ec0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *_Memory;
  
  plVar1 = (longlong *)(param_1 + 8);
  FUN_180013490(plVar1);
  plVar2 = (longlong *)*plVar1;
  _Memory = (longlong *)*plVar2;
  *plVar2 = (longlong)plVar2;
  *(longlong *)(*plVar1 + 8) = *plVar1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (_Memory != (longlong *)*plVar1) {
    do {
      plVar2 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar2;
    } while (plVar2 != (longlong *)*plVar1);
  }
  free((void *)*plVar1);
  return;
}

