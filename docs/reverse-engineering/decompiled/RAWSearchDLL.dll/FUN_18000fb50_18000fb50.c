// Function: FUN_18000fb50
// Address: 18000fb50
// Size: 1608 bytes


undefined8 *
FUN_18000fb50(undefined8 *param_1,undefined8 *param_2,longlong *param_3,ushort *param_4,
             longlong *param_5)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined8 in_stack_ffffffffffffff48;
  ulonglong local_88 [2];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28 [2];
  
  local_28[1] = 0xfffffffffffffffe;
  lVar13 = 0;
  puVar6 = param_1;
  puVar8 = param_2;
  puVar10 = param_4;
  plVar3 = (longlong *)FUN_1800016b0(param_1);
  if (puVar6[1] == lVar13) {
    FUN_180010270(puVar6,puVar8,'\x01',(undefined8 *)*plVar3,in_stack_ffffffffffffff48,param_5);
    return param_2;
  }
  plVar4 = FUN_180001950(puVar6,local_88);
  iVar12 = (int)lVar13;
  if (param_3 == (longlong *)*plVar4) {
    puVar10 = (ushort *)(param_3 + 4);
    uVar1 = param_3[6];
    if (7 < (ulonglong)param_3[7]) {
      puVar10 = *(ushort **)puVar10;
    }
    uVar14 = *(ulonglong *)(param_4 + 8);
    puVar9 = param_4;
    if (7 < *(ulonglong *)(param_4 + 0xc)) {
      puVar9 = *(ushort **)param_4;
    }
    local_78 = uVar1;
    local_70 = uVar14;
    puVar5 = FUN_180001e40(&local_70,&local_78);
    uVar7 = *puVar5;
    if (uVar7 != 0) {
      while( true ) {
        if (*puVar9 < *puVar10) break;
        if (*puVar10 < *puVar9) {
          iVar12 = 1;
          goto LAB_18000fc2b;
        }
        if (uVar7 == 1) goto LAB_18000fc2b;
        uVar7 = uVar7 - 1;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      iVar12 = -1;
    }
LAB_18000fc2b:
    if (iVar12 == 0) {
      if (uVar14 < uVar1) {
LAB_18000fc5e:
        FUN_180010270(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffff48,param_5);
        return param_2;
      }
    }
    else if (iVar12 < 0) goto LAB_18000fc5e;
    goto LAB_18001014c;
  }
  plVar4 = FUN_180001550(param_1,local_88);
  if (param_3 == (longlong *)*plVar4) {
    puVar6 = *(undefined8 **)(*plVar3 + 0x10);
    puVar9 = (ushort *)(puVar6 + 4);
    uVar1 = *(ulonglong *)(puVar10 + 8);
    if (7 < *(ulonglong *)(puVar10 + 0xc)) {
      puVar10 = *(ushort **)puVar10;
    }
    uVar14 = puVar6[6];
    if (7 < (ulonglong)puVar6[7]) {
      puVar9 = *(ushort **)puVar9;
    }
    local_68 = uVar1;
    local_60 = uVar14;
    puVar5 = FUN_180001e40(&local_60,&local_68);
    uVar7 = *puVar5;
    if (uVar7 != 0) {
      while( true ) {
        if (*puVar9 < *puVar10) break;
        if (*puVar10 < *puVar9) {
          iVar12 = 1;
          goto LAB_18000fd08;
        }
        if (uVar7 == 1) goto LAB_18000fd08;
        uVar7 = uVar7 - 1;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      iVar12 = -1;
    }
LAB_18000fd08:
    if (iVar12 == 0) {
      if (uVar14 < uVar1) {
LAB_18000fd3b:
        FUN_180010270(param_1,param_2,'\0',puVar6,in_stack_ffffffffffffff48,param_5);
        return param_2;
      }
    }
    else if (iVar12 < 0) goto LAB_18000fd3b;
    goto LAB_18001014c;
  }
  puVar10 = (ushort *)(param_3 + 4);
  uVar1 = param_3[6];
  if (7 < (ulonglong)param_3[7]) {
    puVar10 = *(ushort **)puVar10;
  }
  uVar14 = *(ulonglong *)(param_4 + 8);
  puVar9 = param_4;
  if (7 < *(ulonglong *)(param_4 + 0xc)) {
    puVar9 = *(ushort **)param_4;
  }
  local_58 = uVar1;
  local_50 = uVar14;
  puVar5 = FUN_180001e40(&local_50,&local_58);
  uVar7 = *puVar5;
  iVar2 = iVar12;
  if (uVar7 != 0) {
    while( true ) {
      if (*puVar9 < *puVar10) break;
      if (*puVar10 < *puVar9) {
        iVar2 = 1;
        goto LAB_18000fdd6;
      }
      if (uVar7 == 1) goto LAB_18000fdd6;
      uVar7 = uVar7 - 1;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar2 = -1;
  }
LAB_18000fdd6:
  if (iVar2 == 0) {
    if (uVar14 < uVar1) {
LAB_18000fe07:
      if (*(char *)((longlong)param_3 + 0x19) == '\0') {
        plVar3 = param_3;
        plVar4 = (longlong *)*param_3;
        if (*(char *)(*param_3 + 0x19) == '\0') {
          do {
            plVar11 = plVar4;
            plVar4 = (longlong *)plVar11[2];
          } while (*(char *)(plVar11[2] + 0x19) == '\0');
        }
        else {
          do {
            plVar11 = plVar3;
            plVar3 = (longlong *)plVar11[1];
            if (*(char *)((longlong)plVar3 + 0x19) != '\0') break;
          } while (plVar11 == (longlong *)*plVar3);
          if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
            plVar11 = plVar3;
          }
        }
      }
      else {
        plVar11 = (longlong *)param_3[2];
      }
      puVar10 = (ushort *)(plVar11 + 4);
      uVar1 = *(ulonglong *)(param_4 + 8);
      puVar9 = param_4;
      if (7 < *(ulonglong *)(param_4 + 0xc)) {
        puVar9 = *(ushort **)param_4;
      }
      uVar14 = plVar11[6];
      if (7 < (ulonglong)plVar11[7]) {
        puVar10 = *(ushort **)puVar10;
      }
      local_48 = uVar1;
      local_40 = uVar14;
      puVar5 = FUN_180001e40(&local_40,&local_48);
      uVar7 = *puVar5;
      iVar2 = iVar12;
      if (uVar7 != 0) {
        while( true ) {
          if (*puVar10 < *puVar9) break;
          if (*puVar9 < *puVar10) {
            iVar2 = 1;
            goto LAB_18000fe99;
          }
          if (uVar7 == 1) goto LAB_18000fe99;
          uVar7 = uVar7 - 1;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
        }
        iVar2 = -1;
      }
LAB_18000fe99:
      if (iVar2 == 0) {
        if (uVar14 < uVar1) {
LAB_18000ff3b:
          if (*(char *)(plVar11[2] + 0x19) != '\0') {
            FUN_180010270(param_1,param_2,'\0',plVar11,in_stack_ffffffffffffff48,param_5);
            return param_2;
          }
          FUN_180010270(param_1,param_2,'\x01',param_3,in_stack_ffffffffffffff48,param_5);
          return param_2;
        }
      }
      else if (iVar2 < 0) goto LAB_18000ff3b;
    }
  }
  else if (iVar2 < 0) goto LAB_18000fe07;
  puVar10 = (ushort *)(param_3 + 4);
  uVar1 = *(ulonglong *)(param_4 + 8);
  puVar9 = param_4;
  if (7 < *(ulonglong *)(param_4 + 0xc)) {
    puVar9 = *(ushort **)param_4;
  }
  uVar14 = param_3[6];
  if (7 < (ulonglong)param_3[7]) {
    puVar10 = *(ushort **)puVar10;
  }
  local_38 = uVar1;
  local_30 = uVar14;
  puVar5 = FUN_180001e40(&local_30,&local_38);
  uVar7 = *puVar5;
  iVar2 = iVar12;
  if (uVar7 != 0) {
    while( true ) {
      if (*puVar10 < *puVar9) break;
      if (*puVar9 < *puVar10) {
        iVar2 = 1;
        goto LAB_18000ffe8;
      }
      if (uVar7 == 1) goto LAB_18000ffe8;
      uVar7 = uVar7 - 1;
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
    }
    iVar2 = -1;
  }
LAB_18000ffe8:
  if (iVar2 == 0) {
    if (uVar1 <= uVar14) goto LAB_18001014c;
  }
  else if (-1 < iVar2) goto LAB_18001014c;
  plVar3 = (longlong *)param_3[2];
  plVar4 = param_3;
  if (*(char *)(param_3[2] + 0x19) == '\0') {
    do {
      plVar11 = plVar3;
      plVar3 = (longlong *)*plVar11;
    } while (*(char *)(*plVar11 + 0x19) == '\0');
  }
  else {
    do {
      plVar11 = (longlong *)plVar4[1];
      if (*(char *)((longlong)plVar11 + 0x19) != '\0') break;
      bVar15 = plVar4 == (longlong *)plVar11[2];
      plVar4 = plVar11;
    } while (bVar15);
  }
  puVar6 = FUN_180001550(param_1,local_88);
  if (plVar11 != (longlong *)*puVar6) {
    puVar10 = (ushort *)(plVar11 + 4);
    uVar1 = plVar11[6];
    if (7 < (ulonglong)plVar11[7]) {
      puVar10 = *(ushort **)puVar10;
    }
    uVar14 = *(ulonglong *)(param_4 + 8);
    puVar9 = param_4;
    if (7 < *(ulonglong *)(param_4 + 0xc)) {
      puVar9 = *(ushort **)param_4;
    }
    local_88[0] = uVar14;
    local_28[0] = uVar1;
    puVar5 = FUN_180001e40(local_88,local_28);
    uVar7 = *puVar5;
    if (uVar7 != 0) {
      while( true ) {
        if (*puVar9 < *puVar10) break;
        if (*puVar10 < *puVar9) {
          iVar12 = 1;
          goto LAB_1800100e7;
        }
        if (uVar7 == 1) goto LAB_1800100e7;
        uVar7 = uVar7 - 1;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      iVar12 = -1;
    }
LAB_1800100e7:
    if (iVar12 == 0) {
      if (uVar14 < uVar1) goto LAB_180010112;
    }
    else if (iVar12 < 0) goto LAB_180010112;
LAB_18001014c:
    puVar6 = FUN_180010520(param_1,local_88,'\0',param_4,param_5);
    *param_2 = *puVar6;
    return param_2;
  }
LAB_180010112:
  if (*(char *)(param_3[2] + 0x19) != '\0') {
    FUN_180010270(param_1,param_2,'\0',param_3,in_stack_ffffffffffffff48,param_5);
    return param_2;
  }
  FUN_180010270(param_1,param_2,'\x01',plVar11,in_stack_ffffffffffffff48,param_5);
  return param_2;
}

