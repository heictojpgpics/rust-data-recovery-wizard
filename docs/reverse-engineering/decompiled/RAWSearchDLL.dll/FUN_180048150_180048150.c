// Function: FUN_180048150
// Address: 180048150
// Size: 2637 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180048150(byte *param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  longlong **pplVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined6 extraout_var;
  int *piVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined6 extraout_var_00;
  char *pcVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  ushort uVar16;
  undefined **ppuVar17;
  byte *pbVar18;
  byte *pbVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 uVar26;
  byte *pbVar27;
  LPSTR pCVar28;
  CHAR *pCVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong *plVar32;
  undefined1 auStack_1058 [32];
  undefined1 local_1038 [4];
  short local_1034;
  short local_1030;
  short local_102c;
  ulonglong local_1028;
  uint local_1020;
  int local_101c;
  longlong **local_1018;
  longlong *local_1010;
  byte *local_1008;
  longlong local_1000;
  longlong *local_ff8;
  undefined8 local_ff0;
  undefined8 local_fe8;
  int local_fe0;
  byte *local_fd8;
  byte *local_fd0;
  undefined8 local_fc8;
  byte local_fc0 [8];
  int local_fb8;
  uint local_fac;
  int local_fa4;
  int local_fa0;
  undefined2 local_f9a;
  longlong local_f90;
  int local_f88;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined4 local_f60;
  undefined2 local_f5c;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 local_e58;
  undefined4 local_e50;
  undefined2 local_e4c;
  undefined4 local_d58;
  CHAR local_c48 [1024];
  CHAR local_848 [1024];
  CHAR local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x18004816e;
  local_fc8 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_1058;
  param_1[0x50] = 0xff;
  param_1[0x51] = 0xff;
  param_1[0x52] = 0xff;
  param_1[0x53] = 0xff;
  pbVar27 = param_1 + 0x30;
  local_1010 = param_3;
  local_1008 = param_1;
  local_1000 = param_2;
  local_fd0 = pbVar27;
  puVar8 = (undefined8 *)FUN_1800016b0(pbVar27);
  puVar14 = puVar8;
  if (0xf < (ulonglong)puVar8[3]) {
    puVar14 = (undefined8 *)*puVar8;
  }
  uVar23 = 0;
  puVar8[2] = 0;
  local_1038[0] = 0;
  FUN_180001300((undefined1 *)puVar14,local_1038);
  pbVar19 = param_1 + 0x58;
  local_1018 = (longlong **)pbVar19;
  if (pbVar19 != pbVar27) {
    pbVar18 = pbVar27;
    if (0xf < *(ulonglong *)(pbVar27 + 0x18)) {
      pbVar18 = *(byte **)pbVar27;
    }
    FUN_1800071e0((longlong)pbVar19,pbVar18,*(ulonglong *)(pbVar27 + 0x10));
  }
  local_fd8 = param_1 + 0x10;
  if (local_fd8 != pbVar19) {
    if (0xf < *(ulonglong *)(param_1 + 0x70)) {
      pbVar19 = *(byte **)pbVar19;
    }
    FUN_1800071e0((longlong)local_fd8,pbVar19,*(ulonglong *)(param_1 + 0x68));
  }
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  local_ff0 = *(undefined8 *)(param_2 + 8);
  local_fe8 = 0xffffffffffffffff;
  local_ff8 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_fe0 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_fe0 = *(int *)((longlong)param_3 + 0xc);
    if (local_fe0 < 1) {
      local_fe0 = 0x200;
    }
  }
  else {
    local_fe0 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_fe0 = local_fe0 << 7;
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    iVar7 = *(int *)((longlong)param_3 + 0xc);
    ppuVar17 = CRawFileCellTestStorageDevice::vftable;
    if (iVar7 < 1) {
      iVar7 = 0x200;
    }
  }
  else {
    iVar7 = (*(code *)((undefined **)*param_3)[5])(param_3);
    ppuVar17 = (undefined **)*param_3;
  }
  uVar24 = iVar7 - 1;
  local_1020 = uVar24;
  if (ppuVar17 == CRawFileCellTestStorageDevice::vftable) {
    local_101c = *(int *)((longlong)param_3 + 0xc);
    if (local_101c < 1) {
      local_101c = 0x200;
    }
  }
  else {
    local_101c = (*(code *)ppuVar17[5])(param_3);
  }
  local_1034 = 0x4449;
  local_1028 = CONCAT44(local_1028._4_4_,0xfbff);
  local_1030 = -0x401;
  local_102c = -0x401;
  local_f88 = 0x6f666e49;
  local_f90 = CONCAT35(local_f90._5_3_,0x676e6958);
  psVar9 = (short *)FUN_180042930((longlong *)&local_ff8,0);
  if (psVar9 == (short *)0x0) goto LAB_180048372;
  local_f9a = 0;
  if ((*psVar9 != local_1034) || ((char)psVar9[1] != '3')) {
    sVar3 = *psVar9;
    if (sVar3 == (short)local_1028) {
      if ((((sVar3 == local_1030) && ((char)psVar9[1] == -0x20)) ||
          ((sVar3 == local_102c && ((char)psVar9[1] == -0x50)))) &&
         ((*(int *)(psVar9 + 0x12) == local_f88 || (*(int *)(psVar9 + 0x12) == (int)local_f90)))) {
        FUN_180048c50(param_1,param_2,param_3,param_4);
        goto LAB_180048372;
      }
    }
    else {
      uVar6 = FUN_180049c60(local_fc0,(longlong)psVar9);
      if ((int)CONCAT62(extraout_var,uVar6) == 0) goto LAB_1800483bc;
    }
    FUN_180049120((longlong)param_1,param_2,param_3);
    goto LAB_180048372;
  }
LAB_1800483bc:
  if (psVar9 + 3 == (short *)0x0) goto LAB_180048372;
  lVar20 = 4;
  uVar22 = uVar23;
  uVar31 = uVar23;
  do {
    bVar1 = *(byte *)(lVar20 + -1 + (longlong)(psVar9 + 3));
    if ((char)bVar1 < '\0') goto LAB_180048372;
    uVar30 = (uint)uVar31 | (uint)bVar1 << ((byte)uVar22 & 0x1f);
    uVar31 = (ulonglong)uVar30;
    uVar22 = (ulonglong)((int)uVar22 + 7);
    lVar20 = lVar20 + -1;
  } while (0 < lVar20);
  memset(&local_f78,0,0x104);
  memset(&local_e68,0,0x104);
  memset(&local_d58,0,0x104);
  lVar20 = local_1000;
  uVar22 = uVar23;
  if (uVar30 != 0) {
    do {
      iVar7 = (int)uVar22;
      piVar10 = (int *)FUN_180042930((longlong *)&local_ff8,(ulonglong)(iVar7 + 10));
      param_3 = local_1010;
      uVar24 = local_1020;
      if ((piVar10 == (int *)0x0) || (iVar4 = piVar10[1], iVar4 == 0)) break;
      uVar16 = (ushort)((uint)iVar4 >> 0x10);
      uVar25 = CONCAT22((ushort)iVar4 << 8 | (ushort)iVar4 >> 8,uVar16 << 8 | uVar16 >> 8);
      iVar4 = *piVar10;
      if (iVar4 == 0x31455054) {
        memset(local_448,0,0x400);
        pCVar29 = local_448;
        pCVar28 = (LPSTR)&local_e68;
LAB_18004852c:
        FUN_180048040((char *)((longlong)piVar10 + 10),uVar25,pCVar28,pCVar29);
      }
      else {
        if (iVar4 == 0x32544954) {
          memset(local_848,0,0x400);
          pCVar29 = local_848;
          pCVar28 = (LPSTR)&local_f78;
          goto LAB_18004852c;
        }
        if (iVar4 == 0x43495041) {
          *(ulonglong *)(param_1 + 0x78) = (ulonglong)(iVar7 + 0x3f);
          *(ulonglong *)(param_1 + 0x80) = (ulonglong)uVar25;
          *(ulonglong *)(lVar20 + 0xd8) = (ulonglong)(iVar7 + 0x3f);
          *(ulonglong *)(lVar20 + 0xe0) = (ulonglong)uVar25;
        }
        else if (iVar4 == 0x52455954) {
          memset(local_c48,0,0x400);
          pCVar29 = local_c48;
          pCVar28 = (LPSTR)&local_d58;
          goto LAB_18004852c;
        }
      }
      uVar25 = iVar7 + 10 + uVar25;
      uVar22 = (ulonglong)uVar25;
      param_3 = local_1010;
      uVar24 = local_1020;
    } while (uVar25 < uVar30);
  }
  puVar11 = FUN_180001350();
  local_1028 = *(longlong *)(puVar11 + 0x70) * 10;
  local_1010 = (longlong *)(ulonglong)(uVar30 + 10);
  plVar32 = (longlong *)(ulonglong)(uVar30 + 10);
  local_f9a = 0;
  local_f90 = 0;
  uVar22 = uVar23;
  uVar31 = uVar23;
LAB_180048580:
  do {
    iVar7 = (int)uVar22;
    uVar21 = uVar22 + (longlong)plVar32;
    if ((local_1028 < uVar21) ||
       (pcVar12 = FUN_180042930((longlong *)&local_ff8,uVar21), pcVar12 == (char *)0x0)) break;
    cVar2 = *pcVar12;
    if (cVar2 == -1) {
      if ((((pcVar12[1] & 0xe0U) == 0xe0) && ((pcVar12[2] & 0xf0U) != 0xf0)) &&
         (uVar6 = FUN_180049c60(local_fc0,(longlong)pcVar12),
         (int)CONCAT62(extraout_var_00,uVar6) != 0)) {
        lVar20 = (longlong)local_fb8;
        if (iVar7 == 0) {
          uVar31 = 0;
          local_f90 = 0;
        }
        else {
          uVar31 = (ulonglong)((int)uVar31 + 1);
          if (local_fac == 0) {
            local_f90 = local_f90 + uVar22;
          }
          else {
            local_f90 = local_f90 +
                        (ulonglong)
                        (iVar7 + ((uint)(*(int *)(&DAT_180068208 +
                                                 (lVar20 + (ulonglong)local_fc0[0] * 3) * 4) *
                                        local_fa4) / local_fac + local_fa0) *
                                 *(int *)(&DAT_180068090 + lVar20 * 4));
          }
        }
        uVar24 = local_1020;
        if (local_fac == 0) {
          plVar32 = (longlong *)((longlong)plVar32 + uVar22);
          uVar22 = uVar23;
        }
        else {
          plVar32 = (longlong *)
                    ((longlong)plVar32 +
                    (ulonglong)
                    (iVar7 + ((uint)(*(int *)(&DAT_180068208 +
                                             (lVar20 + (ulonglong)local_fc0[0] * 3) * 4) * local_fa4
                                    ) / local_fac + local_fa0) *
                             *(int *)(&DAT_180068090 + lVar20 * 4)));
          uVar22 = uVar23;
        }
        goto LAB_180048580;
      }
    }
    else if (cVar2 == 'T') {
      if ((pcVar12[1] == 'A') && (pcVar12[2] == 'G')) {
        if (((ulonglong)uVar24 & uVar21 + 0x80) != 0) {
          uVar25 = local_101c - ((int)uVar21 + 0x80U & uVar24);
          piVar10 = (int *)(pcVar12 + 0x80);
          uVar30 = uVar25 >> 2;
          while (uVar30 != 0) {
            uVar30 = uVar30 - 1;
            if (*piVar10 != 0) goto LAB_180048829;
            piVar10 = piVar10 + 1;
          }
          uVar25 = uVar25 & 3;
          if (uVar25 != 0) {
            while (uVar25 = uVar25 - 1, (char)*piVar10 == '\0') {
              if (uVar25 == 0) goto LAB_18004872e;
            }
            goto LAB_180048829;
          }
        }
LAB_18004872e:
        if ((char)local_f78 == '\0') {
          local_f78 = *(undefined8 *)(pcVar12 + 3);
          uStack_f70 = *(undefined8 *)(pcVar12 + 0xb);
          local_f68 = *(undefined8 *)(pcVar12 + 0x13);
          local_f60 = *(undefined4 *)(pcVar12 + 0x1b);
          local_f5c = *(undefined2 *)(pcVar12 + 0x1f);
        }
        if ((char)local_e68 == '\0') {
          local_e68 = *(undefined8 *)(pcVar12 + 0x21);
          uStack_e60 = *(undefined8 *)(pcVar12 + 0x29);
          local_e58 = *(undefined8 *)(pcVar12 + 0x31);
          local_e50 = *(undefined4 *)(pcVar12 + 0x39);
          local_e4c = *(undefined2 *)(pcVar12 + 0x3d);
        }
        if ((char)local_d58 == '\0') {
          local_d58 = *(undefined4 *)(pcVar12 + 0x5d);
        }
        plVar32 = (longlong *)((longlong)plVar32 + (ulonglong)(iVar7 + 0x80));
        break;
      }
    }
    else if (((uVar21 & uVar24) == 0) && (cVar2 == 'I')) {
      if ((((pcVar12[1] == 'D') && (pcVar12[2] == '3')) && ((byte)(pcVar12[3] - 3U) < 2)) &&
         (pcVar12 + 6 != (char *)0x0)) {
        lVar20 = 4;
        while (-1 < (pcVar12 + 6)[lVar20 + -1]) {
          lVar20 = lVar20 + -1;
          if (lVar20 < 1) goto LAB_18004891a;
        }
      }
    }
    else if (((cVar2 == 'A') &&
             ((((pcVar12[1] == 'P' && (pcVar12[2] == 'E')) && (pcVar12[3] == 'T')) &&
              ((pcVar12[4] == 'A' && (pcVar12[5] == 'G')))))) &&
            ((pcVar12[6] == 'E' && ((pcVar12[7] == 'X' && (pcVar12[8] == -0x30)))))) {
      local_f90 = CONCAT35(local_f90._5_3_,0x47415400);
      if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
        iVar7 = *(int *)((longlong)param_3 + 0xc);
        if (iVar7 < 1) {
          iVar7 = 0x200;
        }
      }
      else {
        iVar7 = (*(code *)((undefined **)*param_3)[5])(param_3);
      }
      uVar22 = (ulonglong)iVar7;
      plVar32 = (longlong *)(uVar22 * ((ulonglong)plVar32 / uVar22));
      pcVar12 = FUN_180042930((longlong *)&local_ff8,(ulonglong)plVar32);
      goto LAB_1800488a0;
    }
LAB_180048829:
    if ((int)uVar31 == 2) {
      plVar32 = (longlong *)((longlong)plVar32 - local_f90);
      break;
    }
    uVar22 = (ulonglong)(iVar7 + 1U);
  } while (iVar7 + 1U < 0x1000);
  goto LAB_18004891a;
  while( true ) {
    if (*(int *)(pcVar12 + (uVar22 - 4)) == 0) {
      if ((*(int *)(pcVar12 + (uVar22 - 8)) == 0) && (*(int *)(pcVar12 + (uVar22 - 0xc)) == 0)) {
        plVar32 = (longlong *)((longlong)plVar32 + uVar22);
        break;
      }
      pcVar13 = FUN_180016fc0(pcVar12,iVar7,(char *)&local_f90,4);
      if (pcVar13 != (char *)0x0) {
        plVar32 = (longlong *)(pcVar13 + (longlong)plVar32 + (0x81 - (longlong)pcVar12));
        break;
      }
    }
    else {
      uVar23 = uVar23 + uVar22;
    }
    plVar32 = (longlong *)(((uVar22 + (longlong)plVar32) / uVar22) * uVar22);
    pcVar12 = FUN_180042930((longlong *)&local_ff8,(ulonglong)plVar32);
    if (0x19000 < uVar23) break;
LAB_1800488a0:
    if (pcVar12 == (char *)0x0) break;
  }
LAB_18004891a:
  if (local_1010 < plVar32) {
    uVar22 = 0xffffffffffffffff;
    uVar23 = 0xffffffffffffffff;
    do {
      uVar31 = uVar23 + 1;
      lVar20 = uVar23 + 1;
      uVar23 = uVar31;
    } while (*(char *)((longlong)&local_f78 + lVar20) != '\0');
    pbVar27 = local_fd8;
    puVar14 = (undefined8 *)FUN_1800016b0(local_fd8);
    if ((ulonglong)puVar14[3] < uVar31) {
      FUN_1800086f0((longlong)pbVar27,uVar31,(char)pbVar27,&local_f78);
      uVar26 = SUB81(pbVar27,0);
    }
    else {
      puVar8 = puVar14;
      if (0xf < (ulonglong)puVar14[3]) {
        puVar8 = (undefined8 *)*puVar14;
      }
      puVar14[2] = uVar31;
      memmove(puVar8,&local_f78,uVar31);
      uVar26 = (undefined1)uVar23;
      local_1038[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar8 + uVar31),local_1038);
    }
    pbVar27 = local_fd0;
    uVar23 = 0xffffffffffffffff;
    do {
      uVar31 = uVar23 + 1;
      lVar20 = uVar23 + 1;
      uVar23 = uVar31;
    } while (*(char *)((longlong)&local_d58 + lVar20) != '\0');
    puVar14 = (undefined8 *)FUN_1800016b0(local_fd0);
    if ((ulonglong)puVar14[3] < uVar31) {
      FUN_1800086f0((longlong)pbVar27,uVar31,uVar26,&local_d58);
    }
    else {
      puVar8 = puVar14;
      if (0xf < (ulonglong)puVar14[3]) {
        puVar8 = (undefined8 *)*puVar14;
      }
      puVar14[2] = uVar31;
      memmove(puVar8,&local_d58,uVar31);
      uVar26 = (undefined1)uVar23;
      local_1038[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar8 + uVar31),local_1038);
    }
    do {
      pplVar5 = local_1018;
      uVar23 = uVar22 + 1;
      lVar20 = uVar22 + 1;
      uVar22 = uVar23;
    } while (*(char *)((longlong)&local_e68 + lVar20) != '\0');
    puVar14 = (undefined8 *)FUN_1800016b0(local_1018);
    if ((ulonglong)puVar14[3] < uVar23) {
      FUN_1800086f0((longlong)pplVar5,uVar23,uVar26,&local_e68);
    }
    else {
      puVar8 = puVar14;
      if (0xf < (ulonglong)puVar14[3]) {
        puVar8 = (undefined8 *)*puVar14;
      }
      puVar14[2] = uVar23;
      memmove(puVar8,&local_e68,uVar23);
      local_1038[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar8 + uVar23),local_1038);
    }
    local_1018 = &local_ff8;
    plVar15 = (longlong *)FUN_180007060((longlong)&local_ff8,pplVar5);
    plVar15 = (longlong *)FUN_180017060((longlong)local_fc0,plVar15);
    FUN_180019970((longlong *)pplVar5,plVar15);
    FUN_180001630((longlong *)local_fc0);
    local_1018 = (longlong **)local_fc0;
    plVar15 = (longlong *)FUN_180007060((longlong)local_fc0,(undefined8 *)pbVar27);
    lVar20 = local_1000;
    FUN_1800174f0(local_1000,plVar15);
    local_1018 = (longlong **)local_fc0;
    plVar15 = (longlong *)FUN_180007060((longlong)local_fc0,(undefined8 *)pbVar27);
    FUN_1800174f0(lVar20,plVar15);
    pbVar27 = local_1008;
    if (*(longlong *)(local_1008 + 0x68) != 0) {
      local_1008[0x50] = 0;
      local_1008[0x51] = 0;
      local_1008[0x52] = 0;
      local_1008[0x53] = 0;
      local_1008 = local_fc0;
      plVar15 = (longlong *)FUN_180007060((longlong)local_fc0,pplVar5);
      FUN_180017550(lVar20,*(undefined4 *)(pbVar27 + 0x50),plVar15);
    }
    local_1008 = local_fc0;
    plVar15 = (longlong *)FUN_180007060((longlong)local_fc0,(undefined8 *)(pbVar27 + 0x10));
    FUN_1800173f0(lVar20,plVar15);
    *(longlong **)(lVar20 + 0x10) = plVar32;
  }
LAB_180048372:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_1058);
  return;
}

