// Function: FUN_1800585c0
// Address: 1800585c0
// Size: 398 bytes


undefined8 *
FUN_1800585c0(longlong *param_1,undefined8 *param_2,undefined1 param_3,uint *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  undefined8 in_stack_ffffffffffffffc8;
  
  plVar2 = (longlong *)*param_1;
  bVar8 = true;
  plVar7 = plVar2;
  if (*(char *)(plVar2[1] + 0x19) == '\0') {
    plVar6 = (longlong *)plVar2[1];
    do {
      plVar7 = plVar6;
      bVar8 = *param_4 < *(uint *)(plVar7 + 4);
      if (bVar8) {
        plVar6 = (longlong *)*plVar7;
      }
      else {
        plVar6 = (longlong *)plVar7[2];
      }
    } while (*(char *)((longlong)plVar6 + 0x19) == '\0');
  }
  plVar6 = plVar7;
  if (bVar8) {
    if (plVar7 == (longlong *)*plVar2) {
      local_res18[0] = 1;
      puVar4 = FUN_180058b40(param_1,&local_res8,'\x01',plVar7,in_stack_ffffffffffffffc8,param_5);
      *param_2 = *puVar4;
      puVar5 = (undefined1 *)FUN_1800016b0(local_res18);
      *(undefined1 *)(param_2 + 1) = *puVar5;
      return param_2;
    }
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar6 = (longlong *)*plVar7;
      if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar6[2] + 0x19);
        plVar2 = (longlong *)plVar6[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar2[2] + 0x19);
          plVar6 = plVar2;
          plVar2 = (longlong *)plVar2[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x19);
        plVar2 = (longlong *)plVar7[1];
        plVar6 = plVar7;
        while ((plVar3 = plVar2, cVar1 == '\0' && (plVar6 == (longlong *)*plVar3))) {
          cVar1 = *(char *)(plVar3[1] + 0x19);
          plVar2 = (longlong *)plVar3[1];
          plVar6 = plVar3;
        }
        if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
          plVar6 = plVar3;
        }
      }
    }
    else {
      plVar6 = (longlong *)plVar7[2];
    }
  }
  if (*(uint *)(plVar6 + 4) < *param_4) {
    local_res18[0] = 1;
    puVar4 = FUN_180058b40(param_1,&local_res8,bVar8,plVar7,in_stack_ffffffffffffffc8,param_5);
    *param_2 = *puVar4;
    puVar5 = (undefined1 *)FUN_1800016b0(local_res18);
    *(undefined1 *)(param_2 + 1) = *puVar5;
  }
  else {
    local_res18[0] = param_3;
    free(param_5);
    local_res18[0] = 0;
    *param_2 = plVar6;
    puVar5 = (undefined1 *)FUN_1800016b0(local_res18);
    *(undefined1 *)(param_2 + 1) = *puVar5;
  }
  return param_2;
}

