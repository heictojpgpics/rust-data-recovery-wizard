// Function: FUN_18001d0d0
// Address: 18001d0d0
// Size: 339 bytes


undefined8 *
FUN_18001d0d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  longlong *plVar7;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  
  bVar6 = true;
  plVar4 = (longlong *)DAT_180118278[1];
  plVar7 = DAT_180118278;
  while (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    bVar6 = *param_4 < (int)plVar4[4];
    plVar7 = plVar4;
    if (bVar6) {
      plVar4 = (longlong *)*plVar4;
    }
    else {
      plVar4 = (longlong *)plVar4[2];
    }
  }
  plVar5 = plVar7;
  local_res8 = param_1;
  if (bVar6 != false) {
    if (plVar7 == (longlong *)*DAT_180118278) {
      puVar3 = FUN_18001d5e0(plVar4,&local_res8,'\x01',plVar7,in_stack_ffffffffffffffc8,param_5);
      *param_2 = *puVar3;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar2 = (longlong *)*plVar7;
      plVar1 = plVar7;
      if (*(char *)(*plVar7 + 0x19) == '\0') {
        do {
          plVar5 = plVar2;
          plVar2 = (longlong *)plVar5[2];
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
      plVar5 = (longlong *)plVar7[2];
    }
  }
  if ((int)plVar5[4] < *param_4) {
    puVar3 = FUN_18001d5e0(plVar4,&local_res8,bVar6,plVar7,in_stack_ffffffffffffffc8,param_5);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    free(param_5);
    *param_2 = plVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}

