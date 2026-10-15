// Function: FUN_180013090
// Address: 180013090
// Size: 128 bytes


void FUN_180013090(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180013090(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_1800025f0(param_2 + 9);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

