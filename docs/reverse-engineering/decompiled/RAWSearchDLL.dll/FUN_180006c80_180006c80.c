// Function: FUN_180006c80
// Address: 180006c80
// Size: 145 bytes


longlong * FUN_180006c80(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint *local_res8;
  longlong local_res18 [2];
  
  plVar1 = (longlong *)*param_1;
  plVar3 = plVar1;
  if (*(char *)(plVar1[1] + 0x19) == '\0') {
    plVar2 = plVar1;
    plVar4 = (longlong *)plVar1[1];
    do {
      plVar3 = plVar4;
      if (*(uint *)(plVar3 + 4) < *param_2) {
        plVar4 = (longlong *)plVar3[2];
        plVar3 = plVar2;
      }
      else {
        plVar4 = (longlong *)*plVar3;
      }
      plVar2 = plVar3;
    } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
  }
  if ((plVar3 != plVar1) && (*(uint *)(plVar3 + 4) <= *param_2)) {
    return plVar3 + 5;
  }
  local_res8 = param_2;
  plVar1 = (longlong *)FUN_18000acf0(param_1,param_2,&local_res8);
  FUN_18000ad50(param_1,local_res18,plVar3,(uint *)(plVar1 + 4),plVar1);
  return (longlong *)(local_res18[0] + 0x28);
}

