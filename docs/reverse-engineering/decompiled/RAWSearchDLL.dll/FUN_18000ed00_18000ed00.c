// Function: FUN_18000ed00
// Address: 18000ed00
// Size: 585 bytes


void FUN_18000ed00(longlong param_1,ushort *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong **pplVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  ushort *puVar12;
  ushort *puVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStackY_88 [32];
  longlong *local_58;
  longlong *local_50;
  ushort *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ushort *local_28;
  ulonglong local_20;
  
  local_38 = 0xfffffffffffffffe;
  local_20 = DAT_18008f028 ^ (ulonglong)auStackY_88;
  plVar1 = (longlong *)(param_1 + 0x30);
  local_28 = param_2;
  FUN_18000f680(plVar1,(longlong *)&local_50,param_2);
  puVar4 = FUN_180001550(plVar1,&local_40);
  if (local_50 == (longlong *)*puVar4) {
LAB_18000ede8:
    pplVar5 = (longlong **)FUN_180001550(plVar1,&local_48);
  }
  else {
    puVar12 = (ushort *)(local_50 + 4);
    plVar10 = (longlong *)local_50[6];
    if (7 < (ulonglong)local_50[7]) {
      puVar12 = *(ushort **)puVar12;
    }
    plVar7 = *(longlong **)(param_2 + 8);
    puVar13 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      puVar13 = *(ushort **)param_2;
    }
    plVar6 = local_50;
    local_58 = plVar7;
    local_50 = plVar10;
    puVar4 = FUN_180001e40((ulonglong *)&local_58,(ulonglong *)&local_50);
    uVar8 = *puVar4;
    iVar11 = 0;
    if (uVar8 != 0) {
      uVar2 = *puVar13;
      uVar3 = *puVar12;
      if (uVar3 <= uVar2) {
        lVar14 = (longlong)puVar13 - (longlong)puVar12;
        bVar15 = uVar2 < uVar3;
        bVar16 = uVar2 == uVar3;
        do {
          if (!bVar15 && !bVar16) {
            iVar11 = 1;
            goto LAB_18000edde;
          }
          if (uVar8 == 1) goto LAB_18000edde;
          uVar8 = uVar8 - 1;
          puVar12 = puVar12 + 1;
          uVar2 = *(ushort *)(lVar14 + (longlong)puVar12);
          bVar15 = uVar2 < *puVar12;
          bVar16 = uVar2 == *puVar12;
        } while (!bVar15);
      }
      iVar11 = -1;
    }
LAB_18000edde:
    if (iVar11 == 0) {
      if (plVar7 < plVar10) goto LAB_18000ede8;
    }
    else if (iVar11 < 0) goto LAB_18000ede8;
    local_58 = plVar6;
    pplVar5 = &local_58;
  }
  plVar10 = *pplVar5;
  plVar7 = plVar1;
  plVar6 = FUN_180001550(plVar1,&local_58);
  if (plVar10 != (longlong *)*plVar6) {
    plVar10[8] = plVar10[8] + 1;
    goto LAB_18000ef1f;
  }
  FUN_18000f680(plVar7,(longlong *)&local_58,param_2);
  puVar9 = &local_30;
  plVar7 = FUN_180001550(plVar1,puVar9);
  plVar10 = local_58;
  if (local_58 == (longlong *)*plVar7) {
LAB_18000eede:
    local_48 = param_2;
    plVar7 = (longlong *)FUN_18000fad0(plVar1,puVar9,&local_48);
    FUN_18000fb50(plVar1,&local_40,plVar10,(ushort *)(plVar7 + 4),plVar7);
    plVar10 = local_40;
  }
  else {
    puVar12 = (ushort *)(local_58 + 4);
    plVar7 = (longlong *)local_58[6];
    if (7 < (ulonglong)local_58[7]) {
      puVar12 = *(ushort **)puVar12;
    }
    plVar6 = *(longlong **)(param_2 + 8);
    puVar13 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      puVar13 = *(ushort **)param_2;
    }
    local_58 = plVar7;
    local_50 = plVar6;
    puVar4 = FUN_180001e40((ulonglong *)&local_50,(ulonglong *)&local_58);
    puVar9 = (undefined8 *)*puVar4;
    iVar11 = 0;
    if (puVar9 != (undefined8 *)0x0) {
      uVar2 = *puVar13;
      uVar3 = *puVar12;
      if (uVar3 <= uVar2) {
        lVar14 = (longlong)puVar13 - (longlong)puVar12;
        bVar15 = uVar2 < uVar3;
        bVar16 = uVar2 == uVar3;
        do {
          if (!bVar15 && !bVar16) {
            iVar11 = 1;
            goto LAB_18000eeca;
          }
          iVar11 = 0;
          if (puVar9 == (undefined8 *)0x1) goto LAB_18000eeca;
          puVar9 = (undefined8 *)((longlong)puVar9 + -1);
          puVar12 = puVar12 + 1;
          uVar2 = *(ushort *)(lVar14 + (longlong)puVar12);
          bVar15 = uVar2 < *puVar12;
          bVar16 = uVar2 == *puVar12;
        } while (!bVar15);
      }
      iVar11 = -1;
    }
LAB_18000eeca:
    if (iVar11 == 0) {
      if (plVar6 < plVar7) goto LAB_18000eede;
    }
    else if (iVar11 < 0) goto LAB_18000eede;
  }
  lVar14 = FUN_1800016b0(plVar10 + 4);
  *(undefined8 *)(lVar14 + 0x20) = 1;
LAB_18000ef1f:
  FUN_1800015c0((longlong *)param_2);
  __security_check_cookie(local_20 ^ (ulonglong)auStackY_88);
  return;
}

