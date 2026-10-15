// Function: FUN_180033a90
// Address: 180033a90
// Size: 2136 bytes


void FUN_180033a90(double param_1,char *param_2,int param_3,longlong param_4,longlong **param_5)

{
  byte bVar1;
  undefined1 uVar2;
  longlong **pplVar3;
  short sVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  ulonglong in_RCX;
  ulonglong uVar15;
  char *pcVar16;
  int *piVar17;
  int *piVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  uint uVar21;
  int *piVar22;
  longlong lVar23;
  ulonglong uVar24;
  byte *pbVar25;
  longlong lVar26;
  ushort uVar27;
  byte *pbVar28;
  bool bVar29;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  double extraout_XMM0_Qa_02;
  undefined1 auStackY_d8 [32];
  uint local_a8;
  undefined1 local_a4 [4];
  int local_a0 [2];
  longlong *local_98;
  longlong local_90;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  longlong **local_68;
  short local_60;
  ulonglong local_58;
  
  local_70 = 0xfffffffffffffffe;
  local_58 = DAT_18008f028 ^ (ulonglong)auStackY_d8;
  lVar26 = (longlong)param_3;
  local_68 = param_5;
  local_a8 = 0;
  pbVar28 = (byte *)(param_2 + ((longlong)param_5[1] - param_4) * lVar26);
  *(longlong ***)(in_RCX + 0x158) = param_5;
  *(longlong *)(in_RCX + 0x160) = param_4;
  *(longlong *)(in_RCX + 0x168) = lVar26;
  *(byte **)(in_RCX + 0x140) = pbVar28;
  uVar15 = in_RCX;
  local_a0[0] = param_3;
  local_78 = lVar26;
  if (param_4 == *(longlong *)(in_RCX + 8)) {
    *(undefined4 *)(in_RCX + 0x60) = 0;
    piVar22 = (int *)(param_2 + 6);
    if (*piVar22 == 0x66697845) {
      *(undefined4 *)(in_RCX + 0x150) = 1;
LAB_180033b4a:
      FUN_180034560(param_1,(longlong)piVar22,in_RCX,pbVar28);
      param_1 = extraout_XMM0_Qa;
    }
    else if (*piVar22 == 0x4649464a) {
      piVar22 = (int *)(param_2 + 0x18);
      goto LAB_180033b4a;
    }
    if (*(longlong *)(in_RCX + 0xd8) < 0x401) {
      *(undefined8 *)(in_RCX + 0x130) = 2;
    }
    if ((*(short *)(in_RCX + 0x60) == 0) && (*(short *)(in_RCX + 0x62) == 0)) {
      uVar27 = (ushort)(byte)param_2[5];
      uVar6 = (ushort)(byte)param_2[4];
      if (*(char *)(in_RCX + 0x110) == '\0') {
        uVar6 = (ushort)(byte)param_2[4] << 8;
      }
      else {
        uVar27 = (ushort)(byte)param_2[5] << 8;
      }
      local_90 = *(longlong *)(in_RCX + 8);
      local_98 = *(longlong **)(in_RCX + 0xe8);
      local_88 = 0xffffffffffffffff;
      if (local_98 == (longlong *)0x0) {
        local_80 = 0x200;
      }
      else if ((undefined **)*local_98 == CRawFileCellTestStorageDevice::vftable) {
        local_80 = *(int *)((longlong)local_98 + 0xc);
        if (local_80 < 1) {
          local_80 = 0x200;
        }
      }
      else {
        local_80 = (*(code *)((undefined **)*local_98)[5])();
      }
      local_80 = local_80 << 7;
      uVar24 = (ulonglong)(ushort)((uVar27 | uVar6) << 8 | (uVar27 | uVar6) >> 8) + 4;
      puVar8 = (ushort *)FUN_180042930((longlong *)&local_98,uVar24);
      param_1 = extraout_XMM0_Qa_00;
      while (puVar8 != (ushort *)0x0) {
        uVar15 = 0xff;
        uVar6 = *puVar8;
        if ((uVar6 == 0) || ((uVar6 & 0xff) != 0xff)) goto LAB_180033d7e;
        if (*(char *)(in_RCX + 0x110) == '\0') {
          bVar1 = (byte)puVar8[1];
          uVar2 = *(undefined1 *)((longlong)puVar8 + 3);
        }
        else {
          bVar1 = *(byte *)((longlong)puVar8 + 3);
          uVar2 = (undefined1)puVar8[1];
        }
        if ((uVar6 + 0x3f01 & 0xfdff) == 0) {
          uVar6 = *(ushort *)((longlong)puVar8 + 5) << 8 | *(ushort *)((longlong)puVar8 + 5) >> 8;
          *(ushort *)(in_RCX + 0x62) = uVar6;
          uVar27 = *(ushort *)((longlong)puVar8 + 7) << 8 | *(ushort *)((longlong)puVar8 + 7) >> 8;
          *(ushort *)(in_RCX + 0x60) = uVar27;
          if ((uVar27 < 20000) && (uVar6 < 20000)) {
            uVar15 = (ulonglong)((uint)uVar6 * (uint)uVar27);
            lVar23 = (longlong)(int)((uint)uVar6 * (uint)uVar27);
            *(longlong *)(in_RCX + 0x118) = lVar23;
            *(longlong *)(in_RCX + 0x128) = lVar23;
            if (*(longlong *)(in_RCX + 0xd8) == 0x400) {
              *(longlong *)(in_RCX + 0xd8) = lVar23 / 6;
              *(undefined4 *)(in_RCX + 0x154) = 0;
            }
          }
          else {
            *(undefined4 *)(in_RCX + 0x60) = 0;
            uVar15 = 20000;
          }
          goto LAB_180033d7e;
        }
        uVar24 = uVar24 + (ulonglong)(ushort)(CONCAT11(bVar1,uVar2) << 8 | (ushort)bVar1) + 2;
        *(undefined8 *)(in_RCX + 0x128) = 0x7800000;
        uVar6 = *(ushort *)(in_RCX + 0x62);
        uVar9 = 0x7800000;
        if ((uVar6 != 0) && (*(ushort *)(in_RCX + 0x60) != 0)) {
          uVar9 = (ulonglong)(int)((uint)*(ushort *)(in_RCX + 0x60) * (uint)uVar6);
          *(ulonglong *)(in_RCX + 0x128) = uVar9;
        }
        uVar15 = (ulonglong)uVar6;
        if (uVar9 < uVar24) goto LAB_180033d7e;
        puVar8 = (ushort *)FUN_180042930((longlong *)&local_98,uVar24);
        param_1 = extraout_XMM0_Qa_01;
      }
      goto LAB_1800342b6;
    }
  }
LAB_180033d7e:
  lVar23 = *(longlong *)(in_RCX + 0x130);
  if (lVar23 != 0) {
    uVar15 = param_4 - *(longlong *)(in_RCX + 8);
    if (uVar15 == lVar23 / lVar26) {
      pbVar25 = (byte *)(param_2 + lVar23 % lVar26);
      while( true ) {
        if ((param_2 + lVar26 <= pbVar25) || (uVar24 = 0, param_3 = local_a0[0], pbVar28 <= pbVar25)
           ) goto LAB_180033eaa;
        if (*pbVar25 != 0xff) break;
        bVar1 = pbVar25[1];
        uVar15 = (ulonglong)bVar1;
        if (0x3e < (byte)(bVar1 + 0x40)) break;
        if (((bVar1 == 0xc0) && (pbVar25[4] == 8)) && (*(longlong *)(in_RCX + 0x118) == 0)) {
          if (400 < CONCAT11(pbVar25[5],pbVar25[6])) {
            iVar7 = (uint)CONCAT11(pbVar25[5],pbVar25[6]) * (uint)CONCAT11(pbVar25[7],pbVar25[8]);
            *(longlong *)(in_RCX + 0x118) = (longlong)iVar7;
            *(longlong *)(in_RCX + 0xd8) =
                 *(longlong *)(in_RCX + 0xd8) +
                 ((longlong)((longlong)iVar7 + (ulonglong)(iVar7 >> 0x1f & 7)) >> 3);
            *(undefined4 *)(in_RCX + 0x154) = 0;
            uVar15 = (ulonglong)pbVar25[1];
          }
        }
        if ((char)uVar15 != -0x28) {
          uVar24 = (ulonglong)CONCAT11(pbVar25[2],pbVar25[3]);
        }
        if (((char)uVar15 == -0x1f) && (*(int *)(pbVar25 + 4) == 0x66697845)) {
          uVar15 = in_RCX;
          FUN_180034560(param_1,(longlong)(pbVar25 + 4),in_RCX,pbVar28);
          param_1 = extraout_XMM0_Qa_02;
        }
        pbVar25 = pbVar25 + uVar24 + 2;
        *(longlong *)(in_RCX + 0x130) = *(longlong *)(in_RCX + 0x130) + uVar24 + 2;
        param_3 = local_a0[0];
      }
      *(undefined8 *)(in_RCX + 0x130) = 0;
    }
  }
LAB_180033eaa:
  pplVar3 = local_68;
  uVar21 = 0;
  iVar7 = param_3 - *(int *)((longlong)local_68 + 0x14);
  local_a0[0] = iVar7;
  if (*(int *)((longlong)local_68 + 0x14) < 8) {
    lVar26 = local_78;
    if (*(int *)(in_RCX + 0x150) != 0) {
      uVar10 = FUN_180034440(uVar15,param_2,param_3,local_a0);
      iVar7 = local_a0[0];
      local_a8 = (uint)uVar10 & 0xff;
      if ((char)uVar10 != '\0') {
        uVar15 = FUN_1800342f0(in_RCX,param_4,param_2,param_3,local_a0[0]);
        local_a8 = (uint)uVar15 & 0xff;
      }
      goto LAB_180033f0d;
    }
  }
  else {
LAB_180033f0d:
    lVar26 = local_78;
    uVar21 = local_a8;
    if (7 < *(int *)((longlong)pplVar3 + 0x14)) {
      lVar26 = (longlong)param_3;
      for (pcVar16 = param_2 + (lVar26 - *(int *)((longlong)pplVar3 + 0x14)); param_2 <= pcVar16;
          pcVar16 = pcVar16 + -1) {
        if ((*pcVar16 == -1) && (pcVar16[1] == DAT_180068025)) {
          iVar7 = ((int)pcVar16 - (int)param_2) + 2;
          goto LAB_180033f52;
        }
      }
      iVar7 = 0;
LAB_180033f52:
      if (iVar7 == 0) {
        if ((*(longlong *)(in_RCX + 0x178) != 0) &&
           ((longlong)*pplVar3 <= *(longlong *)(in_RCX + 0x178))) {
          pcVar16 = param_2 + -10;
          bVar29 = param_2 < pcVar16;
          pcVar11 = param_2;
          while (iVar7 = 0, !bVar29) {
            if ((*pcVar11 == -1) && (pcVar11[1] == DAT_180068025)) {
              iVar7 = ((int)pcVar11 - (int)pcVar16) + 2;
              break;
            }
            pcVar11 = pcVar11 + -1;
            bVar29 = pcVar11 < pcVar16;
          }
          if (((iVar7 != 0) && (iVar7 < param_3)) &&
             (*(int *)(param_2 + (longlong)iVar7 + -10) == 0)) {
            iVar7 = iVar7 + -10;
            uVar21 = 1;
          }
        }
      }
      else if ((*(int *)(in_RCX + 0x154) == 0) && (*(int *)(in_RCX + 0x150) == 0)) {
        uVar21 = (uint)(*(int *)(param_2 + iVar7) == 0);
      }
      else {
        uVar15 = FUN_1800342f0(in_RCX,param_4,param_2,param_3,iVar7);
        uVar21 = (uint)uVar15 & 0xff;
      }
    }
  }
  *(longlong *)(in_RCX + 0x178) = param_4;
  uVar15 = *(ulonglong *)(in_RCX + 0x118);
  if ((uVar15 != 0) &&
     (uVar24 = (param_4 - *(longlong *)(in_RCX + 8)) * lVar26,
     uVar15 <= uVar24 && uVar24 - uVar15 != 0)) {
    iVar7 = 0;
    for (pcVar16 = param_2 + (lVar26 - *(int *)((longlong)pplVar3 + 0x14)); param_2 <= pcVar16;
        pcVar16 = pcVar16 + -1) {
      if ((*pcVar16 == -1) && (pcVar16[1] == DAT_180068025)) {
        iVar7 = ((int)pcVar16 - (int)param_2) + 2;
        break;
      }
    }
    uVar21 = (uint)(iVar7 != 0);
  }
  if (*(int *)(in_RCX + 0x150) == 0) {
    *(undefined8 *)(in_RCX + 0x128) = 0x7800000;
  }
  if (uVar21 == 0) goto LAB_1800342b6;
  piVar22 = (int *)(in_RCX + 0xb0);
  piVar17 = piVar22;
  if (0xf < *(ulonglong *)(in_RCX + 200)) {
    piVar17 = *(int **)piVar22;
  }
  if ((((*(longlong *)(in_RCX + 0xc0) == 5) && (*piVar17 == s_APPLE_18006c0cc._0_4_)) &&
      ((char)piVar17[1] == s_APPLE_18006c0cc[4])) &&
     ((ulonglong)((param_4 - *(longlong *)(in_RCX + 8)) * lVar26) < *(ulonglong *)(in_RCX + 0xd8)))
  goto LAB_1800342b6;
  local_68 = &local_98;
  piVar17 = (int *)(in_RCX + 0x20);
  plVar12 = (longlong *)FUN_180007060((longlong)&local_98,(undefined8 *)piVar17);
  cVar5 = FUN_18002a1e0(plVar12);
  piVar18 = piVar17;
  if (cVar5 == '\0') {
    local_68 = &local_98;
    plVar12 = (longlong *)FUN_180007060((longlong)&local_98,(undefined8 *)piVar22);
    cVar5 = FUN_18002a1e0(plVar12);
    piVar18 = piVar22;
    if (cVar5 != '\0') goto LAB_180034120;
  }
  else {
LAB_180034120:
    puVar13 = (undefined8 *)FUN_1800016b0(piVar18);
    puVar19 = puVar13;
    if (0xf < (ulonglong)puVar13[3]) {
      puVar19 = (undefined8 *)*puVar13;
    }
    puVar13[2] = 0;
    local_a4[0] = 0;
    FUN_180001300((undefined1 *)puVar19,local_a4);
  }
  lVar23 = *(longlong *)(in_RCX + 8);
  uVar15 = (param_4 - lVar23) * lVar26 + (longlong)iVar7;
  *(ulonglong *)(in_RCX + 0x10) = uVar15;
  if (0x7800000 < uVar15) {
    *(undefined8 *)(in_RCX + 0x10) = 0x7800000;
    uVar15 = 0x7800000;
  }
  *(undefined4 *)(in_RCX + 0x18) = 0x23;
  if (0xf < *(ulonglong *)(in_RCX + 0x38)) {
    piVar17 = *(int **)piVar17;
  }
  uVar24 = FUN_18000f820((longlong)piVar17,*(ulonglong *)(in_RCX + 0x30),0,"Insta360",8);
  if (uVar24 != 0xffffffffffffffff) {
    *(undefined4 *)(in_RCX + 0x18) = 0x99;
    uVar24 = 0;
    local_68 = (longlong **)0x3936643234626438;
    local_60 = 0x6334;
    local_98 = *(longlong **)(in_RCX + 0xe8);
    local_88 = 0xffffffffffffffff;
    local_90 = lVar23;
    if (local_98 == (longlong *)0x0) {
      local_80 = 0x200;
    }
    else if ((undefined **)*local_98 == CRawFileCellTestStorageDevice::vftable) {
      local_80 = *(int *)((longlong)local_98 + 0xc);
      if (local_80 < 1) {
        local_80 = 0x200;
      }
    }
    else {
      local_80 = (*(code *)((undefined **)*local_98)[5])();
      uVar15 = *(ulonglong *)(in_RCX + 0x10);
    }
    local_80 = local_80 << 7;
    puVar14 = FUN_180042930((longlong *)&local_98,uVar15);
    sVar4 = local_60;
    pplVar3 = local_68;
    uVar15 = uVar24;
    uVar9 = uVar24;
    if (puVar14 != (undefined *)0x0) {
      while( true ) {
        lVar26 = 0x200;
        uVar20 = uVar24;
        do {
          if (((*(longlong ***)(puVar14 + uVar20) == pplVar3) &&
              (*(short *)(puVar14 + uVar20 + 8) == sVar4)) && (puVar14[uVar20 + 10] == 'c')) {
            uVar9 = 1;
            uVar15 = uVar15 + uVar20;
          }
          uVar20 = uVar20 + 1;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        if ((int)uVar9 != 0) break;
        uVar15 = uVar15 + 0x200;
        if ((0x100000 < uVar15) ||
           (puVar14 = FUN_180042930((longlong *)&local_98,*(longlong *)(in_RCX + 0x10) + uVar15),
           puVar14 == (undefined *)0x0)) goto LAB_1800342b6;
      }
      *(ulonglong *)(in_RCX + 0x10) = *(longlong *)(in_RCX + 0x10) + 0x20 + uVar15;
    }
  }
LAB_1800342b6:
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_d8);
  return;
}

