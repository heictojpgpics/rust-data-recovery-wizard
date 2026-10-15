// Function: FUN_18002ac20
// Address: 18002ac20
// Size: 145 bytes


longlong * FUN_18002ac20(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int *local_res8;
  longlong local_res18 [2];
  
  plVar1 = (longlong *)*param_1;
  plVar3 = plVar1;
  if (*(char *)(plVar1[1] + 0x19) == '\0') {
    plVar2 = plVar1;
    plVar4 = (longlong *)plVar1[1];
    do {
      plVar3 = plVar4;
      if ((int)plVar3[4] < *param_2) {
        plVar4 = (longlong *)plVar3[2];
        plVar3 = plVar2;
      }
      else {
        plVar4 = (longlong *)*plVar3;
      }
      plVar2 = plVar3;
    } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
  }
  if ((plVar3 != plVar1) && ((int)plVar3[4] <= *param_2)) {
    return plVar3 + 5;
  }
  local_res8 = param_2;
  plVar1 = (longlong *)FUN_18002b4c0(param_1,param_2,&local_res8);
  FUN_18002b520(param_1,local_res18,plVar3,(int *)(plVar1 + 4),plVar1);
  return (longlong *)(local_res18[0] + 0x28);
}

