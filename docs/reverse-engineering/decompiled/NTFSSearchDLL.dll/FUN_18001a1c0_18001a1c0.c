// Function: FUN_18001a1c0
// Address: 18001a1c0
// Size: 339 bytes


undefined8 *
FUN_18001a1c0(longlong *param_1,undefined8 *param_2,undefined8 param_3,ulonglong *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  
  plVar1 = (longlong *)*param_1;
  bVar6 = true;
  plVar4 = (longlong *)plVar1[1];
  plVar5 = plVar1;
  while (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    bVar6 = *param_4 < (ulonglong)plVar4[4];
    plVar5 = plVar4;
    if (bVar6) {
      plVar4 = (longlong *)*plVar4;
    }
    else {
      plVar4 = (longlong *)plVar4[2];
    }
  }
  plVar4 = plVar5;
  if (bVar6) {
    if (plVar5 == (longlong *)*plVar1) {
      puVar3 = FUN_180014ef0(param_1,&local_res8,'\x01',plVar5,in_stack_ffffffffffffffc8,param_5);
      *param_2 = *puVar3;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      plVar2 = (longlong *)*plVar5;
      plVar1 = plVar5;
      if (*(char *)(*plVar5 + 0x19) == '\0') {
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
      plVar4 = (longlong *)plVar5[2];
    }
  }
  if ((ulonglong)plVar4[4] < *param_4) {
    puVar3 = FUN_180014ef0(param_1,&local_res8,bVar6,plVar5,in_stack_ffffffffffffffc8,param_5);
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

