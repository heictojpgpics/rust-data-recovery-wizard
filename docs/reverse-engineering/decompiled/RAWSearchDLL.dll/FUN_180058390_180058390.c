// Function: FUN_180058390
// Address: 180058390
// Size: 480 bytes


undefined8 *
FUN_180058390(longlong *param_1,undefined8 *param_2,undefined1 param_3,undefined8 *param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  undefined8 local_res8;
  undefined1 local_res18 [8];
  undefined8 in_stack_ffffffffffffffb8;
  
  plVar2 = (longlong *)*param_1;
  cVar10 = '\x01';
  cVar1 = *(char *)(plVar2[1] + 0x19);
  plVar3 = plVar2;
  plVar9 = (longlong *)plVar2[1];
  plVar7 = param_1;
  local_res18[0] = param_3;
  while (cVar1 == '\0') {
    uVar4 = FUN_180011400(plVar7,param_4,plVar9 + 4);
    cVar10 = (char)uVar4;
    if (cVar10 == '\0') {
      plVar8 = (longlong *)plVar9[2];
    }
    else {
      plVar8 = (longlong *)*plVar9;
    }
    plVar3 = plVar9;
    plVar9 = plVar8;
    cVar1 = *(char *)((longlong)plVar8 + 0x19);
  }
  plVar9 = plVar3;
  if (cVar10 != '\0') {
    if (plVar3 == (longlong *)*plVar2) {
      local_res18[0] = 1;
      puVar5 = FUN_180058890(param_1,&local_res8,'\x01',plVar3,in_stack_ffffffffffffffb8,param_5);
      *param_2 = *puVar5;
      puVar6 = (undefined1 *)FUN_1800016b0(local_res18);
      *(undefined1 *)(param_2 + 1) = *puVar6;
      return param_2;
    }
    if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
      plVar9 = (longlong *)*plVar3;
      if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar9[2] + 0x19);
        plVar2 = (longlong *)plVar9[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(plVar2[2] + 0x19);
          plVar9 = plVar2;
          plVar2 = (longlong *)plVar2[2];
        }
      }
      else {
        cVar1 = *(char *)(plVar3[1] + 0x19);
        plVar2 = (longlong *)plVar3[1];
        plVar9 = plVar3;
        while ((plVar8 = plVar2, cVar1 == '\0' && (plVar7 = plVar9, plVar9 == (longlong *)*plVar8)))
        {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar2 = (longlong *)plVar8[1];
          plVar9 = plVar8;
          plVar7 = plVar8;
        }
        if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
          plVar9 = plVar8;
        }
      }
    }
    else {
      plVar9 = (longlong *)plVar3[2];
    }
  }
  uVar4 = FUN_180011400(plVar7,plVar9 + 4,param_4);
  if ((char)uVar4 == '\0') {
    FUN_180058790(plVar7,param_5);
    local_res18[0] = 0;
    *param_2 = plVar9;
    puVar6 = (undefined1 *)FUN_1800016b0(local_res18);
    *(undefined1 *)(param_2 + 1) = *puVar6;
  }
  else {
    local_res18[0] = 1;
    puVar5 = FUN_180058890(param_1,&local_res8,cVar10,plVar3,in_stack_ffffffffffffffb8,param_5);
    *param_2 = *puVar5;
    puVar6 = (undefined1 *)FUN_1800016b0(local_res18);
    *(undefined1 *)(param_2 + 1) = *puVar6;
  }
  return param_2;
}

