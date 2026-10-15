// Function: FUN_180011c90
// Address: 180011c90
// Size: 243 bytes


void FUN_180011c90(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *_Memory;
  
  cVar2 = *(char *)((longlong)param_2 + 0x19);
  while (cVar2 == '\0') {
    FUN_180011c90(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar3 = (longlong *)*param_2;
    plVar1 = param_2 + 5;
    lVar4 = *plVar1;
    cVar2 = *(char *)((longlong)*(longlong **)(lVar4 + 8) + 0x19);
    _Memory = *(longlong **)(lVar4 + 8);
    while (cVar2 == '\0') {
      FUN_180011da0(plVar1,(longlong *)_Memory[2]);
      plVar5 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar5;
      cVar2 = *(char *)((longlong)plVar5 + 0x19);
    }
    *(longlong *)(*plVar1 + 8) = lVar4;
    *(longlong *)*plVar1 = lVar4;
    *(longlong *)(*plVar1 + 0x10) = lVar4;
    param_2[6] = 0;
    free((void *)*plVar1);
    free(param_2);
    param_2 = plVar3;
    cVar2 = *(char *)((longlong)plVar3 + 0x19);
  }
  return;
}

