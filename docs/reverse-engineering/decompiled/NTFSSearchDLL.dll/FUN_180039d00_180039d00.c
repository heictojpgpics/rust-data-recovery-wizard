// Function: FUN_180039d00
// Address: 180039d00
// Size: 121 bytes


void FUN_180039d00(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *_Memory;
  
  plVar2 = (longlong *)FUN_180002680(param_1);
  plVar1 = (longlong *)*plVar2;
  _Memory = (longlong *)*plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong *)(*plVar2 + 8) = *plVar2;
  puVar3 = (undefined8 *)FUN_180002670(param_1);
  *puVar3 = 0;
  if (_Memory != (longlong *)*plVar2) {
    do {
      plVar1 = (longlong *)*_Memory;
      lVar4 = FUN_180002680(_Memory + 2);
      FUN_180005f30(lVar4);
      free(_Memory);
      _Memory = plVar1;
    } while (plVar1 != (longlong *)*plVar2);
  }
  return;
}

