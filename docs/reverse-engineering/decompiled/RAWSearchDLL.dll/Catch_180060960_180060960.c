// Function: Catch@180060960
// Address: 180060960
// Size: 80 bytes


undefined * Catch_180060960(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *_Memory;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_2 + 0xa0);
  _Memory = *(longlong **)(param_2 + 0x30);
  lVar3 = *_Memory;
  *(longlong *)(param_2 + 0x30) = lVar3;
  *(longlong *)_Memory[1] = lVar3;
  *(longlong *)(*_Memory + 8) = _Memory[1];
  plVar1 = (longlong *)(lVar2 + 0x100);
  *plVar1 = *plVar1 + -1;
  free(_Memory);
  return &DAT_18000d8e3;
}

