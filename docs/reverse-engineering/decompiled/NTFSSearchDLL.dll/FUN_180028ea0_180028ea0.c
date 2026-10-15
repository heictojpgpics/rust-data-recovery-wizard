// Function: FUN_180028ea0
// Address: 180028ea0
// Size: 542 bytes


void FUN_180028ea0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_38 [2];
  
  lVar12 = 0;
  if (*(longlong *)(param_2 + 200) != -1) {
    lVar13 = *(longlong *)(param_2 + 200) + 4;
    for (puVar2 = *(undefined8 **)*param_1; puVar2 != (undefined8 *)*param_1;
        puVar2 = (undefined8 *)*puVar2) {
      plVar11 = (longlong *)puVar2[2];
      if (*plVar11 == lVar13) goto LAB_180028f21;
      if (lVar13 < *plVar11) break;
    }
  }
  plVar3 = (longlong *)*param_1;
  plVar6 = (longlong *)*plVar3;
  if (plVar6 != plVar3) {
    lVar13 = *(longlong *)(param_2 + 0x60) + *(longlong *)(param_2 + 0x10);
    do {
      plVar11 = (longlong *)plVar6[2];
      lVar4 = *plVar11;
      if ((*(longlong *)(param_2 + 0x10) <= lVar4) && (lVar4 < lVar13)) goto LAB_180028f21;
    } while ((lVar4 < lVar13) && (plVar6 = (longlong *)*plVar6, plVar6 != plVar3));
  }
  plVar11 = (longlong *)0x0;
LAB_180028f21:
  if (plVar11 == (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0xb0) = 0;
    return;
  }
  plVar3 = plVar11 + 1;
  *(longlong *)(param_2 + 0xd0) = *plVar11;
  lVar13 = FUN_18002bc40(param_1 + 7,plVar3,*(longlong *)(param_2 + 0x10),
                         (ulonglong)*(uint *)(param_2 + 0xc));
  uVar1 = *(uint *)(param_2 + 0xc);
  puVar2 = (undefined8 *)(param_2 + 0x168);
  *(longlong *)(param_2 + 0xb0) = lVar13;
  if ((plVar3 != (longlong *)0x0) && (uVar1 != 0)) {
    FUN_180040ad0(plVar3,&local_res10);
    plVar11 = FUN_180040a90(plVar3,&local_res18);
    if (local_res10 != (undefined8 *)*plVar11) {
      do {
        if (local_res10[2] != 0) {
          lVar12 = lVar12 + *(longlong *)(local_res10[2] + 0x10);
        }
        local_res10 = (undefined8 *)*local_res10;
        puVar7 = FUN_180040a90(plVar3,&local_res18);
      } while (local_res10 != (undefined8 *)*puVar7);
    }
    lVar12 = (ulonglong)uVar1 * lVar12;
  }
  local_res20 = lVar12;
  lVar12 = FUN_180040570(plVar3,0);
  local_38[0] = (ulonglong)*(uint *)(param_2 + 0xc) * lVar12 + *(longlong *)(param_2 + 0x10);
  puVar7 = (undefined8 *)FUN_180002680(puVar2);
  plVar11 = (longlong *)*puVar7;
  plVar3 = (longlong *)plVar11[1];
  uVar8 = FUN_180002680(&local_res20);
  puVar7 = (undefined8 *)FUN_180002680(uVar8);
  uVar8 = FUN_180002680(local_38);
  puVar9 = (undefined8 *)FUN_180002680(uVar8);
  lVar12 = FUN_180006400(uVar8,plVar11,plVar3,puVar9,puVar7);
  puVar10 = (ulonglong *)FUN_180002670((longlong)puVar2);
  uVar14 = *puVar10;
  lVar13 = FUN_180006390();
  if (lVar13 + ~uVar14 == 0) {
    std::_Xlength_error("list<T> too long");
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *puVar10 = uVar14 + 1;
  plVar11[1] = lVar12;
  *plVar3 = lVar12;
  plVar11 = FUN_180003b90(puVar2,&local_res10);
  *plVar11 = *(longlong *)(*plVar11 + 8);
  return;
}

