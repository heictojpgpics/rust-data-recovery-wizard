// Function: FUN_18001c1a0
// Address: 18001c1a0
// Size: 416 bytes


undefined8 FUN_18001c1a0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 uVar8;
  uint uVar9;
  
  uVar8 = 0;
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  if (param_3 == (longlong *)0x0) {
    return 0;
  }
  puVar6 = (undefined8 *)0x0;
  if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
    puVar5 = puVar6;
    if ((ushort *)param_2[9] != (ushort *)0x0) {
      puVar5 = FUN_180033aa0((ushort *)param_2[9]);
    }
  }
  else {
    puVar5 = (undefined8 *)(*(code *)((undefined **)*param_2)[0xf])(param_2);
  }
  if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
    if ((ushort *)param_3[9] != (ushort *)0x0) {
      puVar6 = FUN_180033aa0((ushort *)param_3[9]);
    }
  }
  else {
    puVar6 = (undefined8 *)(*(code *)((undefined **)*param_3)[0xf])(param_3);
  }
  uVar9 = *(uint *)(param_1 + 0x18);
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (puVar5 == (undefined8 *)0x0) goto LAB_18001c2fc;
  plVar7 = FUN_1800340b0((longlong)puVar5);
  if ((((plVar7 != (longlong *)0x0) && (plVar1 != (longlong *)0x0)) && (*plVar1 != 0)) &&
     (uVar9 != 0)) {
    lVar2 = *plVar7;
    bVar3 = FUN_18002c2e0(plVar1,(ulonglong)uVar9 * lVar2);
    if ((int)CONCAT71(extraout_var,bVar3) == 0) {
      plVar1 = (longlong *)plVar1[0xc];
      cVar4 = '\0';
      if (plVar1 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,(ulonglong)uVar9 * lVar2);
      }
      if (cVar4 == '\0') goto LAB_18001c2ee;
    }
    uVar9 = *(uint *)(param_1 + 0x18);
    plVar1 = *(longlong **)(param_1 + 0x50);
    if (((puVar6 == (undefined8 *)0x0) ||
        (plVar7 = FUN_1800340b0((longlong)puVar6), plVar7 == (longlong *)0x0)) ||
       ((plVar1 == (longlong *)0x0 || ((*plVar1 == 0 || (uVar9 == 0)))))) {
LAB_18001c2eb:
      uVar8 = 1;
    }
    else {
      lVar2 = *plVar7;
      bVar3 = FUN_18002c2e0(plVar1,(ulonglong)uVar9 * lVar2);
      if ((int)CONCAT71(extraout_var_00,bVar3) == 0) {
        plVar1 = (longlong *)plVar1[0xc];
        cVar4 = '\0';
        if (plVar1 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,(ulonglong)uVar9 * lVar2);
        }
        if (cVar4 == '\0') goto LAB_18001c2eb;
      }
    }
  }
LAB_18001c2ee:
  (**(code **)*puVar5)(puVar5,1);
LAB_18001c2fc:
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  return uVar8;
}

