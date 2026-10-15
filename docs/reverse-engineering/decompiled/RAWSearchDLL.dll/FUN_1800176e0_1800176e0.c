// Function: FUN_1800176e0
// Address: 1800176e0
// Size: 1364 bytes


void FUN_1800176e0(longlong param_1,undefined8 *****param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *****pppppuVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  longlong *plVar10;
  undefined8 *****pppppuVar11;
  undefined8 *puVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  undefined4 uVar18;
  undefined8 ****ppppuVar19;
  bool bVar20;
  undefined1 auStackY_148 [32];
  undefined1 local_f8 [4];
  uint local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8 [2];
  undefined8 *****local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8 [4];
  undefined8 ****local_a8 [4];
  longlong *local_88;
  undefined8 ****local_80;
  undefined8 local_78;
  int local_70;
  undefined8 ****local_68 [4];
  ulonglong local_48;
  
  local_d0 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_148;
  local_80 = param_2[1];
  local_78 = 0xffffffffffffffff;
  local_e0 = param_2;
  local_88 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_70 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_70 = *(int *)((longlong)param_3 + 0xc);
    if (local_70 < 1) {
      local_70 = 0x200;
    }
  }
  else {
    local_70 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_70 = local_70 << 7;
  local_f0 = 0x48;
  local_f4 = 0;
  local_e8[0] = 0;
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    iVar5 = *(int *)((longlong)param_3 + 0xc);
    if (iVar5 < 1) {
      iVar5 = 0x200;
    }
  }
  else {
    iVar5 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  uVar16 = (ulonglong)iVar5;
  piVar6 = (int *)FUN_180042930((longlong *)&local_88,0);
  if (piVar6 == (int *)0x0) goto LAB_180017bf9;
  iVar5 = *piVar6;
  if (iVar5 != 0x2014b50) {
    if (iVar5 == 0x4034b50) {
      if ((10 < *(ushort *)(piVar6 + 2)) ||
         (0x102 < (ushort)(*(short *)((longlong)piVar6 + 0x1a) - 1U))) goto LAB_180017905;
    }
    else if (iVar5 != 0x6054b50) {
LAB_180017905:
      param_2[2] = (undefined8 ****)0x0;
      goto LAB_180017bf9;
    }
  }
  pbVar1 = (byte *)(param_1 + 0x18);
  pbVar17 = pbVar1;
  FUN_180017c40(piVar6,uVar16,pbVar1,(char *)(param_1 + 0x19));
  FUN_180001780((longlong)local_a8);
  puVar7 = (undefined8 *)FUN_1800016b0(local_a8);
  puVar7[3] = 0xf;
  local_f8[0] = 0;
  puVar12 = puVar7;
  local_d8 = puVar7;
  FUN_180001300((undefined1 *)puVar7,local_f8);
  if (0xf < (ulonglong)puVar12[3]) {
    puVar12 = (undefined8 *)*puVar12;
  }
  puVar7[2] = 0;
  local_f8[0] = 0;
  FUN_180001300((undefined1 *)puVar12,local_f8);
  local_ec = 0;
  uVar8 = FUN_180045690(piVar6,(int *)&local_f4,pbVar17,*pbVar1,(longlong *)&local_f0,local_a8,
                        local_e8,&local_ec,local_c8);
  if ((int)uVar8 == 0) {
    FUN_180001630((longlong *)local_a8);
  }
  else {
    ppppuVar13 = (undefined8 ****)(ulonglong)local_f4;
    puVar9 = FUN_180001350();
    ppppuVar19 = (undefined8 ****)(*(longlong *)(puVar9 + 0x70) * 0x14);
    do {
      if ((ppppuVar19 < ppppuVar13) ||
         (piVar6 = (int *)FUN_180042930((longlong *)&local_88,(ulonglong)ppppuVar13),
         piVar6 == (int *)0x0)) break;
      iVar5 = *piVar6;
      if (iVar5 != 0x2014b50) {
        if (iVar5 == 0x4034b50) {
          if ((10 < *(ushort *)(piVar6 + 2)) ||
             (0x102 < (ushort)(*(short *)((longlong)piVar6 + 0x1a) - 1U))) break;
        }
        else if (iVar5 != 0x6054b50) break;
      }
      FUN_180001780((longlong)local_68);
      puVar7 = (undefined8 *)FUN_1800016b0(local_68);
      puVar7[3] = 0xf;
      local_f8[0] = 0;
      FUN_180001300((undefined1 *)puVar7,local_f8);
      puVar12 = puVar7;
      if (0xf < (ulonglong)puVar7[3]) {
        puVar12 = (undefined8 *)*puVar7;
      }
      uVar18 = 0;
      puVar7[2] = 0;
      local_f8[0] = 0;
      FUN_180001300((undefined1 *)puVar12,local_f8);
      local_ec = uVar18;
      uVar8 = FUN_180045690(piVar6,(int *)&local_f4,piVar6,*pbVar1,(longlong *)&local_f0,local_68,
                            local_e8,&local_ec,local_c8);
      bVar20 = (int)uVar8 != 0;
      if (bVar20) {
        ppppuVar13 = (undefined8 ****)((longlong)ppppuVar13 + (ulonglong)local_f4);
      }
      FUN_180001630((longlong *)local_68);
    } while (bVar20);
    uVar18 = local_f0;
    if ((*(char *)(param_1 + 0x19) != '\0') && (*pbVar1 == 0)) {
      uVar18 = 0xd;
    }
    ppppuVar14 = (undefined8 ****)((longlong)ppppuVar13 - (ulonglong)ppppuVar13 % uVar16);
    puVar9 = FUN_180042930((longlong *)&local_88,(ulonglong)ppppuVar14);
    pppppuVar4 = local_e0;
    if (puVar9 == (undefined *)0x0) {
      *(undefined4 *)(local_e0 + 3) = uVar18;
      local_e0[2] = ppppuVar14;
      local_e0 = local_68;
      plVar10 = (longlong *)FUN_180007060((longlong)local_68,local_a8);
      pppppuVar11 = (undefined8 *****)FUN_180017060((longlong)&local_88,plVar10);
      if (local_a8 != pppppuVar11) {
        FUN_180001630((longlong *)local_a8);
        puVar12 = (undefined8 *)FUN_1800016b0(pppppuVar11);
        uVar8 = puVar12[1];
        uVar2 = puVar12[2];
        uVar3 = puVar12[3];
        *local_d8 = *puVar12;
        local_d8[1] = uVar8;
        local_d8[2] = uVar2;
        local_d8[3] = uVar3;
        puVar12[2] = 0;
        puVar12[3] = 0xf;
        local_f8[0] = 0;
        FUN_180001300((undefined1 *)puVar12,local_f8);
      }
      FUN_180001630((longlong *)&local_88);
      local_e0 = local_68;
      plVar10 = (longlong *)FUN_180007060((longlong)local_68,local_a8);
      FUN_1800173f0((longlong)pppppuVar4,plVar10);
      FUN_180001630((longlong *)local_a8);
    }
    else {
      uVar15 = 0;
      if ((*(int *)(puVar9 + (uVar16 - 4)) != 0) &&
         (ppppuVar13 = ppppuVar14, ppppuVar14 <= ppppuVar19)) {
        while (ppppuVar13 = ppppuVar14, uVar15 < 0x500001) {
          ppppuVar14 = (undefined8 ****)((longlong)ppppuVar14 + uVar16);
          uVar15 = uVar15 + uVar16;
          puVar9 = FUN_180042930((longlong *)&local_88,(ulonglong)ppppuVar14);
          ppppuVar13 = ppppuVar14;
          if (((puVar9 == (undefined *)0x0) ||
              ((((*(int *)(puVar9 + (uVar16 - 4)) == 0 && (*(int *)(puVar9 + (uVar16 - 8)) == 0)) &&
                (*(int *)(puVar9 + (uVar16 - 0xc)) == 0)) &&
               (*(int *)(puVar9 + (uVar16 - 0x10)) == 0)))) || (ppppuVar19 < ppppuVar14)) break;
        }
      }
      *(undefined4 *)(pppppuVar4 + 3) = uVar18;
      pppppuVar4[2] = ppppuVar13;
      local_e0 = local_68;
      plVar10 = (longlong *)FUN_180007060((longlong)local_68,local_a8);
      pppppuVar11 = (undefined8 *****)FUN_180017060((longlong)&local_88,plVar10);
      if (local_a8 != pppppuVar11) {
        FUN_180001630((longlong *)local_a8);
        puVar12 = (undefined8 *)FUN_1800016b0(pppppuVar11);
        uVar8 = puVar12[1];
        uVar2 = puVar12[2];
        uVar3 = puVar12[3];
        *local_d8 = *puVar12;
        local_d8[1] = uVar8;
        local_d8[2] = uVar2;
        local_d8[3] = uVar3;
        puVar12[2] = 0;
        puVar12[3] = 0xf;
        local_f8[0] = 0;
        FUN_180001300((undefined1 *)puVar12,local_f8);
      }
      FUN_180001630((longlong *)&local_88);
      local_e0 = local_68;
      plVar10 = (longlong *)FUN_180007060((longlong)local_68,local_a8);
      FUN_1800173f0((longlong)pppppuVar4,plVar10);
      FUN_180001630((longlong *)local_a8);
    }
  }
LAB_180017bf9:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_148);
  return;
}

