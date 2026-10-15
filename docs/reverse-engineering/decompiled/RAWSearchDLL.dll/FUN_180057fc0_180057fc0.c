// Function: FUN_180057fc0
// Address: 180057fc0
// Size: 140 bytes


void FUN_180057fc0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *_Memory;
  
  lVar1 = *param_1;
  lVar3 = lVar1;
  _Memory = *(longlong **)(lVar1 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar1 + 8) + 0x19) == '\0') {
    do {
      FUN_180007770(param_1,(longlong *)_Memory[2]);
      plVar2 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}

