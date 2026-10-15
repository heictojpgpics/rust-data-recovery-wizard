// Function: FUN_18000e4e0
// Address: 18000e4e0
// Size: 309 bytes


undefined8 *
FUN_18000e4e0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 local_res8;
  
  plVar1 = (longlong *)*param_1;
  bVar2 = true;
  plVar5 = (longlong *)plVar1[1];
  plVar6 = plVar1;
  while (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    bVar2 = *param_4 < plVar5[4];
    plVar6 = plVar5;
    if (bVar2) {
      plVar5 = (longlong *)*plVar5;
    }
    else {
      plVar5 = (longlong *)plVar5[2];
    }
  }
  plVar5 = plVar6;
  if (bVar2) {
    if (plVar6 == (longlong *)*plVar1) {
      puVar4 = FUN_18000e6c0(param_1,&local_res8,'\x01',plVar6,param_4);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      plVar3 = (longlong *)*plVar6;
      plVar1 = plVar6;
      if (*(char *)(*plVar6 + 0x19) == '\0') {
        do {
          plVar5 = plVar3;
          plVar3 = (longlong *)plVar5[2];
        } while (*(char *)(plVar5[2] + 0x19) == '\0');
      }
      else {
        do {
          plVar5 = plVar1;
          plVar1 = (longlong *)plVar5[1];
          if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
        } while (plVar5 == (longlong *)*plVar1);
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          plVar5 = plVar1;
        }
      }
    }
    else {
      plVar5 = (longlong *)plVar6[2];
    }
  }
  if (plVar5[4] < *param_4) {
    puVar4 = FUN_18000e6c0(param_1,&local_res8,bVar2,plVar6,param_4);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}

