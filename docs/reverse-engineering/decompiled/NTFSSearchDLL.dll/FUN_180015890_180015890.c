// Function: FUN_180015890
// Address: 180015890
// Size: 189 bytes


void FUN_180015890(undefined8 param_1,void *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *_Memory;
  
  plVar1 = (longlong *)((longlong)param_2 + 0x28);
  lVar2 = *plVar1;
  _Memory = *(longlong **)(lVar2 + 8);
  lVar4 = lVar2;
  if (*(char *)((longlong)_Memory + 0x19) == '\0') {
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
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  free((void *)*plVar1);
  free(param_2);
  return;
}

