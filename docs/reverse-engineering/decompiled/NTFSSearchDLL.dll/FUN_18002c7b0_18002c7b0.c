// Function: FUN_18002c7b0
// Address: 18002c7b0
// Size: 94 bytes


void FUN_18002c7b0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_18002c7b0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    FUN_180019de0(param_2 + 4);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

