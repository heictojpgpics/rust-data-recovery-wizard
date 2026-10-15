// Function: FUN_180010520
// Address: 180010520
// Size: 925 bytes


undefined8 *
FUN_180010520(undefined8 *param_1,undefined8 *param_2,char param_3,ushort *param_4,longlong *param_5
             )

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 in_stack_ffffffffffffff78;
  uint local_78;
  uint local_74;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38 [2];
  
  local_38[1] = 0xfffffffffffffffe;
  plVar4 = (longlong *)FUN_1800016b0(param_1);
  uVar10 = 1;
  plVar6 = (longlong *)((longlong *)*plVar4)[1];
  plVar4 = (longlong *)*plVar4;
  while (cVar9 = (char)uVar10, *(char *)((longlong)plVar6 + 0x19) == '\0') {
    puVar11 = (ushort *)(plVar6 + 4);
    if (param_3 == '\0') {
      uVar1 = plVar6[6];
      if (7 < (ulonglong)plVar6[7]) {
        puVar11 = *(ushort **)puVar11;
      }
      uVar13 = *(ulonglong *)(param_4 + 8);
      puVar12 = param_4;
      if (7 < *(ulonglong *)(param_4 + 0xc)) {
        puVar12 = *(ushort **)param_4;
      }
      local_48 = uVar1;
      local_40 = uVar13;
      puVar5 = FUN_180001e40(&local_40,&local_48);
      uVar8 = *puVar5;
      local_74 = 0;
      if (uVar8 != 0) {
        while( true ) {
          if (*puVar12 < *puVar11) break;
          if (*puVar11 < *puVar12) {
            local_74 = 1;
            goto LAB_180010698;
          }
          if (uVar8 == 1) goto LAB_180010698;
          uVar8 = uVar8 - 1;
          puVar12 = puVar12 + 1;
          puVar11 = puVar11 + 1;
        }
        local_74 = 0xffffffff;
      }
LAB_180010698:
      if (local_74 == 0) {
        if (uVar13 < uVar1) {
          local_74 = 0xffffffff;
        }
        else {
          local_74 = (uint)(uVar1 < uVar13);
        }
      }
    }
    else {
      uVar1 = *(ulonglong *)(param_4 + 8);
      puVar12 = param_4;
      if (7 < *(ulonglong *)(param_4 + 0xc)) {
        puVar12 = *(ushort **)param_4;
      }
      uVar13 = plVar6[6];
      if (7 < (ulonglong)plVar6[7]) {
        puVar11 = *(ushort **)puVar11;
      }
      local_58 = uVar1;
      local_50 = uVar13;
      puVar5 = FUN_180001e40(&local_50,&local_58);
      uVar8 = *puVar5;
      local_78 = 0;
      if (uVar8 != 0) {
        while( true ) {
          if (*puVar11 < *puVar12) break;
          if (*puVar12 < *puVar11) {
            local_78 = 1;
            goto LAB_1800105e8;
          }
          if (uVar8 == 1) goto LAB_1800105e8;
          uVar8 = uVar8 - 1;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        local_78 = 0xffffffff;
      }
LAB_1800105e8:
      if (local_78 == 0) {
        if (uVar13 < uVar1) {
          local_74 = 0;
          goto LAB_1800106ce;
        }
        local_78 = (uint)(uVar1 < uVar13);
      }
      local_74 = ~local_78;
    }
LAB_1800106ce:
    uVar10 = local_74 >> 0x1f;
    plVar4 = plVar6;
    if ((int)local_74 < 0) {
      plVar6 = (longlong *)*plVar6;
    }
    else {
      plVar6 = (longlong *)plVar6[2];
    }
  }
  plVar6 = plVar4;
  if (cVar9 != '\0') {
    plVar6 = FUN_180001950(param_1,&local_60);
    if (plVar4 == (longlong *)*plVar6) {
      puVar7 = FUN_180010270(param_1,&local_60,'\x01',plVar4,in_stack_ffffffffffffff78,param_5);
      *param_2 = *puVar7;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      plVar3 = (longlong *)*plVar4;
      plVar2 = plVar4;
      if (*(char *)(*plVar4 + 0x19) == '\0') {
        do {
          plVar6 = plVar3;
          plVar3 = (longlong *)plVar6[2];
        } while (*(char *)(plVar6[2] + 0x19) == '\0');
      }
      else {
        do {
          plVar6 = plVar2;
          plVar2 = (longlong *)plVar6[1];
          if (*(char *)((longlong)plVar2 + 0x19) != '\0') break;
        } while (plVar6 == (longlong *)*plVar2);
        if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
          plVar6 = plVar2;
        }
      }
    }
    else {
      plVar6 = (longlong *)plVar4[2];
    }
  }
  puVar11 = (ushort *)(plVar6 + 4);
  uVar1 = *(ulonglong *)(param_4 + 8);
  if (7 < *(ulonglong *)(param_4 + 0xc)) {
    param_4 = *(ushort **)param_4;
  }
  uVar13 = plVar6[6];
  if (7 < (ulonglong)plVar6[7]) {
    puVar11 = *(ushort **)puVar11;
  }
  local_60 = uVar13;
  local_38[0] = uVar1;
  puVar5 = FUN_180001e40(&local_60,local_38);
  uVar8 = *puVar5;
  iVar14 = 0;
  if (uVar8 != 0) {
    while( true ) {
      if (*puVar11 < *param_4) break;
      if (*param_4 < *puVar11) {
        iVar14 = 1;
        goto LAB_1800107b8;
      }
      iVar14 = 0;
      if (uVar8 == 1) goto LAB_1800107b8;
      uVar8 = uVar8 - 1;
      puVar11 = puVar11 + 1;
      param_4 = param_4 + 1;
    }
    iVar14 = -1;
  }
LAB_1800107b8:
  if (iVar14 == 0) {
    if (uVar1 <= uVar13) {
LAB_180010873:
      plVar4 = (longlong *)FUN_1800016b0(param_5 + 4);
      FUN_180002020(plVar4);
      FUN_180001e30(plVar4,param_5);
      *param_2 = plVar6;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  else if (-1 < iVar14) goto LAB_180010873;
  puVar7 = FUN_180010270(param_1,&local_60,cVar9,plVar4,in_stack_ffffffffffffff78,param_5);
  *param_2 = *puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

