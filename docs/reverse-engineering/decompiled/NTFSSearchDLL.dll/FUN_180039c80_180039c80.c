// Function: FUN_180039c80
// Address: 180039c80
// Size: 128 bytes


void FUN_180039c80(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *_Memory;
  
  plVar2 = (longlong *)FUN_180002680(param_1);
  puVar3 = (undefined8 *)*plVar2;
  _Memory = (longlong *)*puVar3;
  *puVar3 = puVar3;
  *(longlong *)(*plVar2 + 8) = *plVar2;
  puVar3 = (undefined8 *)FUN_180002670(param_1);
  *puVar3 = 0;
  if (_Memory != (longlong *)*plVar2) {
    do {
      plVar1 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar1;
    } while (plVar1 != (longlong *)*plVar2);
  }
  free((void *)*plVar2);
  return;
}

