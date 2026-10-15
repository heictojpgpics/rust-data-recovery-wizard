// Function: FUN_18003ce20
// Address: 18003ce20
// Size: 997 bytes


void FUN_18003ce20(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong **pplVar3;
  longlong ***ppplVar4;
  longlong *plVar5;
  longlong **pplVar6;
  longlong ***ppplVar7;
  longlong *plVar8;
  longlong ***ppplVar9;
  longlong **pplVar10;
  longlong **pplVar11;
  longlong ***ppplVar12;
  longlong ***ppplVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStackY_78 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  longlong **local_40;
  longlong **local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)auStackY_78;
  ppplVar9 = (longlong ***)0x0;
  *(undefined8 *)(param_1 + 0xe0) = 0x32000;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0x32000;
  *(undefined8 *)(param_1 + 0x150) = 0x6400000;
  local_30 = 0xa82807;
  local_2c = 0x28070000;
  local_28 = 0xb2;
  local_24 = 0xe42807;
  local_20 = 0;
  do {
    ((undefined1 *)((longlong)&local_30 + (longlong)ppplVar9))
    [(param_1 - (longlong)&local_30) + 0x110] =
         *(undefined1 *)((longlong)&local_30 + (longlong)ppplVar9);
    *(undefined1 *)(param_1 + 0x111 + (longlong)ppplVar9) =
         *(undefined1 *)((longlong)&local_30 + 1 + (longlong)ppplVar9);
    *(undefined1 *)(param_1 + 0x112 + (longlong)ppplVar9) =
         *(undefined1 *)((longlong)&local_30 + 2 + (longlong)ppplVar9);
    *(undefined1 *)(param_1 + 0x113 + (longlong)ppplVar9) =
         *(undefined1 *)((longlong)&local_30 + 3 + (longlong)ppplVar9);
    *(undefined1 *)(param_1 + 0x114 + (longlong)ppplVar9) =
         *(undefined1 *)((longlong)&local_2c + (longlong)ppplVar9);
    *(undefined1 *)(param_1 + 0x115 + (longlong)ppplVar9) =
         *(undefined1 *)((longlong)&local_2c + 1 + (longlong)ppplVar9);
    ppplVar9 = (longlong ***)((longlong)ppplVar9 + 6);
  } while ((longlong)ppplVar9 < 0x12);
  local_48 = 0xa8;
  plVar1 = (longlong *)(param_1 + 0x128);
  pplVar3 = (longlong **)*plVar1;
  cVar2 = *(char *)((longlong)pplVar3[1] + 0x19);
  pplVar11 = pplVar3;
  pplVar10 = (longlong **)pplVar3[1];
  while (cVar2 == '\0') {
    if (*(uint *)((longlong)pplVar10 + 0x1c) < 0xa8) {
      pplVar6 = (longlong **)pplVar10[2];
      pplVar10 = pplVar11;
    }
    else {
      pplVar6 = (longlong **)*pplVar10;
    }
    pplVar11 = pplVar10;
    pplVar10 = pplVar6;
    cVar2 = *(char *)((longlong)pplVar6 + 0x19);
  }
  if ((pplVar11 == pplVar3) || (0xa8 < *(uint *)((longlong)pplVar11 + 0x1c))) {
    local_40 = (longlong **)&local_48;
    plVar5 = (longlong *)FUN_18003ac60(plVar1,ppplVar9,&local_40);
    ppplVar9 = &local_38;
    FUN_18003acc0(plVar1,ppplVar9,(longlong *)pplVar11,(uint *)((longlong)plVar5 + 0x1c),plVar5);
    pplVar11 = local_38;
  }
  *(undefined4 *)(pplVar11 + 4) = 0x46;
  ppplVar4 = (longlong ***)*plVar1;
  local_48 = 0xb2;
  cVar2 = *(char *)((longlong)ppplVar4[1] + 0x19);
  ppplVar13 = ppplVar4;
  ppplVar12 = (longlong ***)ppplVar4[1];
  while (cVar2 == '\0') {
    if (*(uint *)((longlong)ppplVar12 + 0x1c) < 0xb2) {
      ppplVar7 = (longlong ***)ppplVar12[2];
      ppplVar12 = ppplVar13;
    }
    else {
      ppplVar7 = (longlong ***)*ppplVar12;
    }
    ppplVar13 = ppplVar12;
    ppplVar12 = ppplVar7;
    cVar2 = *(char *)((longlong)ppplVar7 + 0x19);
  }
  if ((ppplVar13 == ppplVar4) || (0xb2 < *(uint *)((longlong)ppplVar13 + 0x1c))) {
    local_38 = (longlong **)&local_48;
    plVar5 = (longlong *)FUN_18003ac60(plVar1,ppplVar9,&local_38);
    ppplVar9 = &local_40;
    FUN_18003acc0(plVar1,ppplVar9,(longlong *)ppplVar13,(uint *)((longlong)plVar5 + 0x1c),plVar5);
    ppplVar13 = (longlong ***)local_40;
  }
  *(undefined4 *)(ppplVar13 + 4) = 0x3c;
  ppplVar4 = (longlong ***)*plVar1;
  local_48 = 0xe4;
  cVar2 = *(char *)((longlong)ppplVar4[1] + 0x19);
  ppplVar13 = ppplVar4;
  ppplVar12 = (longlong ***)ppplVar4[1];
  while (cVar2 == '\0') {
    if (*(uint *)((longlong)ppplVar12 + 0x1c) < 0xe4) {
      ppplVar7 = (longlong ***)ppplVar12[2];
      ppplVar12 = ppplVar13;
    }
    else {
      ppplVar7 = (longlong ***)*ppplVar12;
    }
    ppplVar13 = ppplVar12;
    ppplVar12 = ppplVar7;
    cVar2 = *(char *)((longlong)ppplVar7 + 0x19);
  }
  if ((ppplVar13 == ppplVar4) || (0xe4 < *(uint *)((longlong)ppplVar13 + 0x1c))) {
    local_38 = (longlong **)&local_48;
    plVar5 = (longlong *)FUN_18003ac60(plVar1,ppplVar9,&local_38);
    FUN_18003acc0(plVar1,&local_40,(longlong *)ppplVar13,(uint *)((longlong)plVar5 + 0x1c),plVar5);
    ppplVar13 = (longlong ***)local_40;
  }
  *(undefined4 *)(ppplVar13 + 4) = 0x32;
  plVar1 = (longlong *)(param_1 + 0x138);
  plVar5 = (longlong *)*plVar1;
  local_38 = (longlong **)(param_1 + 0x110);
  cVar2 = *(char *)(plVar5[1] + 0x19);
  plVar14 = plVar5;
  plVar15 = (longlong *)plVar5[1];
  while (cVar2 == '\0') {
    if ((longlong **)plVar15[4] < local_38) {
      plVar8 = (longlong *)plVar15[2];
      plVar15 = plVar14;
    }
    else {
      plVar8 = (longlong *)*plVar15;
    }
    plVar14 = plVar15;
    plVar15 = plVar8;
    cVar2 = *(char *)((longlong)plVar8 + 0x19);
  }
  if ((plVar14 == plVar5) || (local_38 < (longlong **)plVar14[4])) {
    local_40 = (longlong **)&local_38;
    plVar5 = (longlong *)FUN_18002d9a0(plVar1,local_38,&local_40);
    FUN_18002da00(plVar1,(undefined8 *)&local_48,plVar14,(ulonglong *)(plVar5 + 4),plVar5);
    plVar14 = (longlong *)CONCAT44(uStack_44,local_48);
  }
  *(undefined4 *)(plVar14 + 5) = 5;
  local_38 = (longlong **)(param_1 + 0x116);
  plVar5 = (longlong *)*plVar1;
  cVar2 = *(char *)(plVar5[1] + 0x19);
  plVar14 = plVar5;
  plVar15 = (longlong *)plVar5[1];
  while (cVar2 == '\0') {
    if ((longlong **)plVar15[4] < local_38) {
      plVar8 = (longlong *)plVar15[2];
      plVar15 = plVar14;
    }
    else {
      plVar8 = (longlong *)*plVar15;
    }
    plVar14 = plVar15;
    plVar15 = plVar8;
    cVar2 = *(char *)((longlong)plVar8 + 0x19);
  }
  if ((plVar14 == plVar5) || (local_38 < (longlong **)plVar14[4])) {
    local_40 = (longlong **)&local_38;
    plVar5 = (longlong *)FUN_18002d9a0(plVar1,local_38,&local_40);
    FUN_18002da00(plVar1,(undefined8 *)&local_48,plVar14,(ulonglong *)(plVar5 + 4),plVar5);
    plVar14 = (longlong *)CONCAT44(uStack_44,local_48);
  }
  *(undefined4 *)(plVar14 + 5) = 5;
  local_38 = (longlong **)(param_1 + 0x11c);
  plVar5 = (longlong *)*plVar1;
  cVar2 = *(char *)(plVar5[1] + 0x19);
  plVar14 = plVar5;
  plVar15 = (longlong *)plVar5[1];
  while (cVar2 == '\0') {
    if ((longlong **)plVar15[4] < local_38) {
      plVar8 = (longlong *)plVar15[2];
      plVar15 = plVar14;
    }
    else {
      plVar8 = (longlong *)*plVar15;
    }
    plVar14 = plVar15;
    plVar15 = plVar8;
    cVar2 = *(char *)((longlong)plVar8 + 0x19);
  }
  if ((plVar14 == plVar5) || (local_38 < (longlong **)plVar14[4])) {
    local_40 = (longlong **)&local_38;
    plVar5 = (longlong *)FUN_18002d9a0(plVar1,local_38,&local_40);
    FUN_18002da00(plVar1,(undefined8 *)&local_48,plVar14,(ulonglong *)(plVar5 + 4),plVar5);
    *(undefined4 *)(CONCAT44(uStack_44,local_48) + 0x28) = 5;
  }
  else {
    *(undefined4 *)(plVar14 + 5) = 5;
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_78);
  return;
}

