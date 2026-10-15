// Function: FUN_180013cb0
// Address: 180013cb0
// Size: 164 bytes


void FUN_180013cb0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *_Memory;
  
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = *plVar1;
  lVar4 = lVar2;
  _Memory = *(longlong **)(lVar2 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19) == '\0') {
    do {
      FUN_180011da0(plVar1,(longlong *)_Memory[2]);
      plVar3 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar3;
    } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
    lVar4 = *plVar1;
  }
  *(longlong *)(lVar4 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  free((void *)*plVar1);
  return;
}

