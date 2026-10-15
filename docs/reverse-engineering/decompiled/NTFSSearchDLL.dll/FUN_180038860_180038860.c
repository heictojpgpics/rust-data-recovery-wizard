// Function: FUN_180038860
// Address: 180038860
// Size: 84 bytes


void FUN_180038860(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180038860(&DAT_180088190,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

