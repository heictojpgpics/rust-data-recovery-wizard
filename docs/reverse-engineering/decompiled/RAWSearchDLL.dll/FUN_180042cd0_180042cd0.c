// Function: FUN_180042cd0
// Address: 180042cd0
// Size: 118 bytes


void FUN_180042cd0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_180042cd0(&DAT_180117f10,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_180001630(param_2 + 5);
    free(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

