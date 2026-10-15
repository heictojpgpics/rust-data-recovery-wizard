// Function: FUN_18003eec0
// Address: 18003eec0
// Size: 912 bytes


undefined8
FUN_18003eec0(undefined4 *param_1,longlong **param_2,longlong param_3,int param_4,uint param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint *local_res8;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  longlong *local_48;
  longlong *local_40;
  
  uVar11 = 0;
  pplVar7 = param_2;
  if (param_3 == *(longlong *)(param_1 + 2)) {
    plVar9 = (longlong *)(param_1 + 0x50);
    lVar2 = *plVar9;
    lVar3 = lVar2;
    plVar4 = *(longlong **)(lVar2 + 8);
    local_res8 = param_1;
    if (*(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19) == '\0') {
      do {
        FUN_180007770(plVar9,(longlong *)plVar4[2]);
        plVar8 = (longlong *)*plVar4;
        pplVar7 = (longlong **)0x30;
        free(plVar4);
        plVar4 = plVar8;
      } while (*(char *)((longlong)plVar8 + 0x19) == '\0');
      lVar3 = *plVar9;
    }
    *(longlong *)(lVar3 + 8) = lVar2;
    local_res18 = 1;
    *(longlong *)*plVar9 = lVar2;
    *(longlong *)(*plVar9 + 0x10) = lVar2;
    *(undefined8 *)(param_1 + 0x52) = 0;
    plVar4 = (longlong *)*plVar9;
    cVar1 = *(char *)(plVar4[1] + 0x19);
    plVar8 = plVar4;
    plVar6 = (longlong *)plVar4[1];
    while (cVar1 == '\0') {
      if ((int)plVar6[4] < 1) {
        plVar5 = (longlong *)plVar6[2];
        plVar6 = plVar8;
      }
      else {
        plVar5 = (longlong *)*plVar6;
      }
      plVar8 = plVar6;
      plVar6 = plVar5;
      cVar1 = *(char *)((longlong)plVar5 + 0x19);
    }
    if ((plVar8 == plVar4) || (1 < (int)plVar8[4])) {
      local_48 = (longlong *)&local_res18;
      plVar4 = (longlong *)FUN_18000acf0(plVar9,pplVar7,&local_48);
      pplVar7 = &local_40;
      FUN_18003fbe0(plVar9,pplVar7,plVar8,(int *)(plVar4 + 4),plVar4);
      plVar8 = local_40;
    }
    plVar8[5] = 0;
    plVar4 = (longlong *)*plVar9;
    local_res18 = 2;
    cVar1 = *(char *)(plVar4[1] + 0x19);
    plVar8 = plVar4;
    plVar6 = (longlong *)plVar4[1];
    while (cVar1 == '\0') {
      if ((int)plVar6[4] < 2) {
        plVar5 = (longlong *)plVar6[2];
        plVar6 = plVar8;
      }
      else {
        plVar5 = (longlong *)*plVar6;
      }
      plVar8 = plVar6;
      plVar6 = plVar5;
      cVar1 = *(char *)((longlong)plVar5 + 0x19);
    }
    if ((plVar8 == plVar4) || (2 < (int)plVar8[4])) {
      local_40 = (longlong *)&local_res18;
      plVar4 = (longlong *)FUN_18000acf0(plVar9,pplVar7,&local_40);
      pplVar7 = &local_48;
      FUN_18003fbe0(plVar9,pplVar7,plVar8,(int *)(plVar4 + 4),plVar4);
      plVar8 = local_48;
    }
    plVar8[5] = 0;
    plVar4 = (longlong *)*plVar9;
    local_res18 = 3;
    cVar1 = *(char *)(plVar4[1] + 0x19);
    plVar8 = plVar4;
    plVar6 = (longlong *)plVar4[1];
    while (cVar1 == '\0') {
      if ((int)plVar6[4] < 3) {
        plVar5 = (longlong *)plVar6[2];
        plVar6 = plVar8;
      }
      else {
        plVar5 = (longlong *)*plVar6;
      }
      plVar8 = plVar6;
      plVar6 = plVar5;
      cVar1 = *(char *)((longlong)plVar5 + 0x19);
    }
    if ((plVar8 == plVar4) || (3 < (int)plVar8[4])) {
      local_40 = (longlong *)&local_res18;
      plVar4 = (longlong *)FUN_18000acf0(plVar9,pplVar7,&local_40);
      pplVar7 = &local_48;
      FUN_18003fbe0(plVar9,pplVar7,plVar8,(int *)(plVar4 + 4),plVar4);
      plVar8 = local_48;
    }
    plVar8[5] = 0;
    param_1 = local_res8;
  }
  if (((param_4 == 0) || (param_5 == 1)) ||
     (pplVar7 = (longlong **)(*(ulonglong *)(param_1 + 0x44) % (ulonglong)(longlong)param_4),
     pplVar7 == (longlong **)0x0)) {
    if ((*(int *)((longlong)param_2 + 4) == *(int *)param_2) && (*(int *)param_2 == 0)) {
      puVar10 = param_1 + 0x50;
      plVar4 = *(longlong **)puVar10;
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar9 = plVar4;
      plVar8 = (longlong *)plVar4[1];
      while (cVar1 == '\0') {
        if ((int)plVar8[4] < (int)param_5) {
          plVar6 = (longlong *)plVar8[2];
          plVar8 = plVar9;
        }
        else {
          plVar6 = (longlong *)*plVar8;
        }
        plVar9 = plVar8;
        plVar8 = plVar6;
        cVar1 = *(char *)((longlong)plVar6 + 0x19);
      }
      if ((plVar9 == plVar4) || ((int)param_5 < (int)plVar9[4])) {
        local_res8 = &param_5;
        plVar4 = (longlong *)FUN_18000acf0((undefined8 *)puVar10,pplVar7,&local_res8);
        FUN_18003fbe0((longlong *)puVar10,(undefined8 *)&local_res18,plVar9,(int *)(plVar4 + 4),
                      plVar4);
        plVar9 = (longlong *)CONCAT44(uStackX_1c,local_res18);
      }
      plVar9[5] = plVar9[5] + 1;
    }
    else {
      puVar10 = param_1 + 0x50;
      plVar4 = *(longlong **)puVar10;
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar9 = plVar4;
      plVar8 = (longlong *)plVar4[1];
      while (cVar1 == '\0') {
        if ((int)plVar8[4] < (int)param_5) {
          plVar6 = (longlong *)plVar8[2];
          plVar8 = plVar9;
        }
        else {
          plVar6 = (longlong *)*plVar8;
        }
        plVar9 = plVar8;
        plVar8 = plVar6;
        cVar1 = *(char *)((longlong)plVar6 + 0x19);
      }
      if ((plVar9 == plVar4) || ((int)param_5 < (int)plVar9[4])) {
        local_res8 = &param_5;
        plVar4 = (longlong *)FUN_18000acf0((undefined8 *)puVar10,pplVar7,&local_res8);
        FUN_18003fbe0((longlong *)puVar10,(undefined8 *)&local_res18,plVar9,(int *)(plVar4 + 4),
                      plVar4);
        plVar9 = (longlong *)CONCAT44(uStackX_1c,local_res18);
      }
      plVar9[5] = 0;
    }
    puVar10 = param_1 + 0x50;
    plVar4 = *(longlong **)puVar10;
    cVar1 = *(char *)(plVar4[1] + 0x19);
    plVar9 = plVar4;
    plVar8 = (longlong *)plVar4[1];
    while (cVar1 == '\0') {
      if ((int)plVar8[4] < (int)param_5) {
        plVar6 = (longlong *)plVar8[2];
        plVar8 = plVar9;
      }
      else {
        plVar6 = (longlong *)*plVar8;
      }
      plVar9 = plVar8;
      plVar8 = plVar6;
      cVar1 = *(char *)((longlong)plVar6 + 0x19);
    }
    if ((plVar9 == plVar4) || ((int)param_5 < (int)plVar9[4])) {
      local_res8 = &param_5;
      plVar4 = (longlong *)FUN_18000acf0((undefined8 *)puVar10,(ulonglong)param_5,&local_res8);
      FUN_18003fbe0((longlong *)puVar10,(undefined8 *)&local_res18,plVar9,(int *)(plVar4 + 4),plVar4
                   );
      plVar9 = (longlong *)CONCAT44(uStackX_1c,local_res18);
    }
    if ((2 < plVar9[5]) || (*(ulonglong *)(param_1 + 0x56) < *(ulonglong *)(param_1 + 0x44))) {
      uVar11 = 1;
    }
  }
  return uVar11;
}

