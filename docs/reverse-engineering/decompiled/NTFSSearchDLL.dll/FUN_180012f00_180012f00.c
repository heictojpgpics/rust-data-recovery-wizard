// Function: FUN_180012f00
// Address: 180012f00
// Size: 194 bytes


void FUN_180012f00(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *_Memory;
  
  cVar2 = *(char *)((longlong)param_2 + 0x19);
  while (cVar2 == '\0') {
    FUN_180012f00(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar3 = (longlong *)*param_2;
    plVar1 = param_2 + 5;
    plVar4 = (longlong *)*plVar1;
    _Memory = (longlong *)*plVar4;
    *plVar4 = (longlong)plVar4;
    *(longlong *)(*plVar1 + 8) = *plVar1;
    param_2[6] = 0;
    if (_Memory != (longlong *)*plVar1) {
      do {
        plVar4 = (longlong *)*_Memory;
        free(_Memory);
        _Memory = plVar4;
      } while (plVar4 != (longlong *)*plVar1);
    }
    free((void *)*plVar1);
    free(param_2);
    param_2 = plVar3;
    cVar2 = *(char *)((longlong)plVar3 + 0x19);
  }
  return;
}

