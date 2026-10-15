// Function: FUN_1800214c0
// Address: 1800214c0
// Size: 133 bytes


void FUN_1800214c0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800214c0(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_1800211b0(param_2 + 8);
    FUN_180001630(param_2 + 4);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

