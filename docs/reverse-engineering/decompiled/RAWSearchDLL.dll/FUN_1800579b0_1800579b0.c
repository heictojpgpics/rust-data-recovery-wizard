// Function: FUN_1800579b0
// Address: 1800579b0
// Size: 457 bytes


undefined8 * FUN_1800579b0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  uint local_20 [2];
  undefined8 *local_18;
  
  if ((param_2 == *(uint *)(param_1 + 0x48)) &&
     (puVar6 = *(undefined8 **)(param_1 + 0x80), puVar6 != *(undefined8 **)(param_1 + 0x70)))
  goto LAB_180057b65;
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar2 = (undefined8 *)*plVar1;
  puVar5 = puVar2;
  puVar8 = (undefined8 *)puVar2[1];
  if (*(char *)((longlong)puVar2[1] + 0x19) == '\0') {
    do {
      puVar6 = puVar8;
      if (*(uint *)(puVar6 + 4) < param_2) {
        puVar8 = (undefined8 *)puVar6[2];
        puVar6 = puVar5;
      }
      else {
        puVar8 = (undefined8 *)*puVar6;
      }
      puVar5 = puVar6;
    } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
    if ((puVar6 == puVar2) || (param_2 < *(uint *)(puVar6 + 4))) goto LAB_180057a19;
  }
  else {
LAB_180057a19:
    puVar6 = puVar2;
  }
  if (puVar6 != puVar2) {
    *(uint *)(param_1 + 0x48) = param_2;
    *(undefined8 **)(param_1 + 0x80) = puVar6;
LAB_180057b65:
    return (undefined8 *)puVar6[5];
  }
  lVar3 = *(longlong *)(param_1 + 8);
  local_20[0] = param_2;
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0x18) != 6)) ||
       (plVar7 = *(longlong **)(lVar3 + 0x10), uVar4 = param_2, plVar7 == (longlong *)0x0))
    goto LAB_180057af8;
    do {
      if ((int)uVar4 < 1) break;
      uVar4 = uVar4 - 1;
      plVar7 = (longlong *)*plVar7;
    } while (plVar7 != (longlong *)0x0);
  }
  else {
    if ((*(int *)(lVar3 + 0x18) != 6) ||
       (plVar7 = *(longlong **)(lVar3 + 0x10), uVar4 = param_2, plVar7 == (longlong *)0x0))
    goto LAB_180057af8;
    do {
      if ((int)uVar4 < 1) break;
      uVar4 = uVar4 - 1;
      plVar7 = (longlong *)*plVar7;
    } while (plVar7 != (longlong *)0x0);
  }
  if (plVar7 != (longlong *)0x0) {
    puVar6 = (undefined8 *)FUN_1800020c0(0xa0);
    uVar9 = (undefined1)param_1;
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = FUN_180057f10(puVar6,plVar7);
    }
    local_18 = puVar6;
    plVar7 = (longlong *)FUN_180058580(plVar1,local_20);
    FUN_1800585c0(plVar1,(undefined8 *)local_20,uVar9,(uint *)(plVar7 + 4),plVar7);
    return puVar6;
  }
LAB_180057af8:
  puVar6 = (undefined8 *)FUN_1800020c0(0xa0);
  uVar9 = (undefined1)param_1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = FUN_180057320(puVar6);
  }
  local_18 = puVar6;
  plVar7 = (longlong *)FUN_180058580(plVar1,local_20);
  FUN_1800585c0(plVar1,(undefined8 *)local_20,uVar9,(uint *)(plVar7 + 4),plVar7);
  return puVar6;
}

