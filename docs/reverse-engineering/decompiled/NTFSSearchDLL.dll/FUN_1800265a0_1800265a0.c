// Function: FUN_1800265a0
// Address: 1800265a0
// Size: 371 bytes


undefined8 *
FUN_1800265a0(longlong *param_1,undefined8 *param_2,char param_3,uint *param_4,longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  
  plVar1 = (longlong *)*param_1;
  bVar5 = true;
  plVar6 = plVar1;
  plVar4 = (longlong *)plVar1[1];
  while (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    if (param_3 == '\0') {
      bVar5 = *param_4 < *(uint *)(plVar4 + 4);
    }
    else {
      bVar5 = *param_4 <= *(uint *)(plVar4 + 4);
    }
    plVar6 = plVar4;
    if (bVar5 == false) {
      plVar4 = (longlong *)plVar4[2];
    }
    else {
      plVar4 = (longlong *)*plVar4;
    }
  }
  plVar4 = plVar6;
  if (bVar5 != false) {
    if (plVar6 == (longlong *)*plVar1) {
      puVar3 = FUN_180014ef0(param_1,&local_res8,'\x01',plVar6,in_stack_ffffffffffffffc8,param_5);
      *param_2 = *puVar3;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      plVar1 = plVar6;
      plVar2 = (longlong *)*plVar6;
      if (*(char *)(*plVar6 + 0x19) == '\0') {
        do {
          plVar4 = plVar2;
          plVar2 = (longlong *)plVar4[2];
        } while (*(char *)(plVar4[2] + 0x19) == '\0');
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (longlong *)plVar4[1];
          if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
        } while (plVar4 == (longlong *)*plVar1);
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          plVar4 = plVar1;
        }
      }
    }
    else {
      plVar4 = (longlong *)plVar6[2];
    }
  }
  if (*(uint *)(plVar4 + 4) < *param_4) {
    puVar3 = FUN_180014ef0(param_1,&local_res8,bVar5,plVar6,in_stack_ffffffffffffffc8,param_5);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    free(param_5);
    *param_2 = plVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}

