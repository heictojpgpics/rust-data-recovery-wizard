// Function: FUN_18004f960
// Address: 18004f960
// Size: 3275 bytes


void FUN_18004f960(longlong param_1,longlong param_2,longlong *param_3,ushort *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined8 ****ppppuVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ushort *puVar16;
  uint *puVar17;
  char *pcVar18;
  ushort uVar19;
  undefined8 ****ppppuVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  undefined1 auStackY_268 [32];
  undefined4 local_238;
  ushort *local_230;
  longlong local_228;
  uint local_220;
  undefined8 local_218;
  undefined8 ***local_210 [2];
  ulonglong local_200;
  ulonglong local_1f8;
  ushort local_1f0 [8];
  longlong local_1e0;
  ushort local_1d0 [20];
  undefined8 local_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  undefined8 local_170;
  char local_168 [272];
  ulonglong local_58;
  
  local_218 = 0xfffffffffffffffe;
  local_58 = DAT_18008f028 ^ (ulonglong)auStackY_268;
  local_1a8 = 0;
  lStack_1a0 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  local_188 = 0;
  lStack_180 = 0;
  local_178 = 0;
  local_170 = 0;
  uVar21 = 0;
  uVar6 = 0;
  local_238 = 0;
  plVar12 = param_3;
  puVar16 = param_4;
  local_230 = param_4;
  local_228 = param_2;
  uVar7 = FUN_180051030(param_1,(uint)param_4[1]);
  uVar22 = SUB81(plVar12,0);
  local_220 = (uint)uVar7;
  uVar7 = uVar7 & 0xffffffff;
  uVar25 = *(uint *)(puVar16 + 2);
  uVar24 = uVar25 * local_220;
  uVar19 = *puVar16;
  if (uVar19 < 0x104) {
    if (uVar19 == 0x103) {
      *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(puVar16 + 4);
    }
    else if (uVar19 == 0x2e) {
      *(undefined4 *)(param_1 + 0x4c) = 1;
      iVar5 = *(int *)(puVar16 + 4);
      uVar21 = param_3[2];
      piVar8 = (int *)FUN_180042930(param_3,(ulonglong)(iVar5 + 0x10));
      if (piVar8 != (int *)0x0) {
        FUN_180050750(param_1,param_3,iVar5 + 0xc + *piVar8,iVar5 + 0xc);
        FUN_180042930(param_3,0);
        FUN_180042930(param_3,uVar21);
        uVar25 = *(uint *)(param_4 + 4);
        goto LAB_180050600;
      }
    }
  }
  else if (uVar19 < 0x828e) {
    if (uVar19 == 0x828d) {
      *(undefined4 *)(param_1 + 0x17c) = 1;
    }
    else {
      switch(uVar19) {
      case 0x10f:
        puVar13 = (undefined8 *)FUN_180042930(param_3,(ulonglong)*(uint *)(puVar16 + 4));
        if (puVar13 == (undefined8 *)0x0) goto LAB_18005060e;
        uVar15 = puVar13[1];
        uVar1 = puVar13[2];
        uVar2 = puVar13[3];
        *(undefined8 *)(param_1 + 0xf0) = *puVar13;
        *(undefined8 *)(param_1 + 0xf8) = uVar15;
        *(undefined8 *)(param_1 + 0x100) = uVar1;
        *(undefined8 *)(param_1 + 0x108) = uVar2;
        uVar15 = puVar13[5];
        *(undefined8 *)(param_1 + 0x110) = puVar13[4];
        *(undefined8 *)(param_1 + 0x118) = uVar15;
        *(undefined8 *)(param_1 + 0x120) = puVar13[6];
        *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(puVar13 + 7);
        *(undefined2 *)(param_1 + 300) = *(undefined2 *)((longlong)puVar13 + 0x3c);
        *(undefined1 *)(param_1 + 0x12e) = *(undefined1 *)((longlong)puVar13 + 0x3e);
        pcVar18 = FUN_18004e410((char *)(param_1 + 0xf0));
        FUN_180001780((longlong)local_210);
        puVar13 = (undefined8 *)FUN_1800016b0(local_210);
        puVar13[2] = 0;
        puVar13[3] = 0xf;
        local_238 = local_238 & 0xffffff00;
        FUN_180001300((undefined1 *)puVar13,(undefined1 *)&local_238);
        uVar21 = 0xffffffffffffffff;
        do {
          uVar21 = uVar21 + 1;
        } while (pcVar18[uVar21] != '\0');
        if ((ulonglong)puVar13[3] < uVar21) {
          FUN_1800086f0((longlong)local_210,uVar21,uVar22,pcVar18);
        }
        else {
          puVar10 = puVar13;
          if (0xf < (ulonglong)puVar13[3]) {
            puVar10 = (undefined8 *)*puVar13;
          }
          puVar13[2] = uVar21;
          memmove(puVar10,pcVar18,uVar21);
          local_238 = local_238 & 0xffffff00;
          FUN_180001300((undefined1 *)(uVar21 + (longlong)puVar10),(undefined1 *)&local_238);
        }
        if (local_200 != 0) {
          local_230 = local_1f0;
          plVar12 = (longlong *)FUN_180007060((longlong)local_1f0,local_210);
          ppppuVar9 = (undefined8 ****)FUN_180017060((longlong)local_1d0,plVar12);
          if (local_210 != ppppuVar9) {
            FUN_180001630((longlong *)local_210);
            puVar10 = (undefined8 *)FUN_1800016b0(ppppuVar9);
            uVar15 = puVar10[1];
            uVar1 = puVar10[2];
            uVar2 = puVar10[3];
            *puVar13 = *puVar10;
            puVar13[1] = uVar15;
            puVar13[2] = uVar1;
            puVar13[3] = uVar2;
            puVar10[2] = 0;
            puVar10[3] = 0xf;
            local_238 = local_238 & 0xffffff00;
            FUN_180001300((undefined1 *)puVar10,(undefined1 *)&local_238);
          }
          FUN_180001630((longlong *)local_1d0);
          local_230 = local_1d0;
          plVar12 = (longlong *)FUN_180007060((longlong)local_1d0,local_210);
          cVar4 = FUN_18002a1e0(plVar12);
          ppppuVar9 = (undefined8 ****)(param_1 + 0xa0);
          if (cVar4 == '\0') {
            if (ppppuVar9 != local_210) {
              ppppuVar20 = local_210;
              if (0xf < local_1f8) {
                ppppuVar20 = (undefined8 ****)local_210[0];
              }
              FUN_1800071e0((longlong)ppppuVar9,ppppuVar20,local_200);
            }
          }
          else {
            puVar10 = (undefined8 *)FUN_1800016b0(ppppuVar9);
            puVar13 = puVar10;
            if (0xf < (ulonglong)puVar10[3]) {
              puVar13 = (undefined8 *)*puVar10;
            }
            puVar10[2] = 0;
            local_238 = local_238 & 0xffffff00;
            FUN_180001300((undefined1 *)puVar13,(undefined1 *)&local_238);
          }
          uVar21 = *(ulonglong *)(param_1 + 0xb0);
          if (0x1e < uVar21) {
            puVar10 = (undefined8 *)FUN_1800016b0(ppppuVar9);
            puVar13 = puVar10;
            if (0xf < (ulonglong)puVar10[3]) {
              puVar13 = (undefined8 *)*puVar10;
            }
            puVar10[2] = 0;
            local_238 = local_238 & 0xffffff00;
            FUN_180001300((undefined1 *)puVar13,(undefined1 *)&local_238);
            uVar21 = *(ulonglong *)(param_1 + 0xb0);
          }
          if (uVar21 != 0) {
            *(undefined4 *)(param_1 + 0x98) = 1;
            local_230 = local_1d0;
            plVar12 = (longlong *)FUN_180007060((longlong)local_1d0,ppppuVar9);
            FUN_180017550(local_228,*(undefined4 *)(param_1 + 0x98),plVar12);
          }
        }
        pcVar18 = strstr((char *)(param_1 + 0xf0),"EPSON");
        if (pcVar18 != (char *)0x0) {
          *(undefined4 *)(param_1 + 0x48) = 1;
        }
        if (*(ulonglong *)(param_1 + 0x18) < (ulonglong)(*(int *)(param_4 + 4) + uVar24)) {
          *(ulonglong *)(param_1 + 0x18) = (ulonglong)(*(int *)(param_4 + 4) + uVar24);
        }
        FUN_180001630((longlong *)local_210);
        break;
      case 0x110:
        puVar13 = (undefined8 *)FUN_180042930(param_3,(ulonglong)*(uint *)(puVar16 + 4));
        if (puVar13 == (undefined8 *)0x0) goto LAB_18005060e;
        if (*(ulonglong *)(param_1 + 0x18) < (ulonglong)(*(int *)(param_4 + 4) + uVar24)) {
          *(ulonglong *)(param_1 + 0x18) = (ulonglong)(*(int *)(param_4 + 4) + uVar24);
        }
        pcVar18 = (char *)(param_1 + 0x130);
        uVar15 = puVar13[1];
        uVar1 = puVar13[2];
        uVar2 = puVar13[3];
        *(undefined8 *)pcVar18 = *puVar13;
        *(undefined8 *)(param_1 + 0x138) = uVar15;
        *(undefined8 *)(param_1 + 0x140) = uVar1;
        *(undefined8 *)(param_1 + 0x148) = uVar2;
        uVar15 = puVar13[5];
        *(undefined8 *)(param_1 + 0x150) = puVar13[4];
        *(undefined8 *)(param_1 + 0x158) = uVar15;
        *(undefined8 *)(param_1 + 0x160) = puVar13[6];
        *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(puVar13 + 7);
        *(undefined2 *)(param_1 + 0x16c) = *(undefined2 *)((longlong)puVar13 + 0x3c);
        *(undefined1 *)(param_1 + 0x16e) = *(undefined1 *)((longlong)puVar13 + 0x3e);
        uVar7 = 0xffffffffffffffff;
        uVar23 = 0xffffffffffffffff;
        do {
          uVar23 = uVar23 + 1;
        } while (pcVar18[uVar23] != '\0');
        plVar12 = (longlong *)(param_1 + 0x58);
        FUN_1800071e0((longlong)plVar12,pcVar18,uVar23);
        if (0x28 < *(ulonglong *)(param_1 + 0x68)) {
          puVar10 = (undefined8 *)FUN_1800016b0(plVar12);
          puVar13 = puVar10;
          if (0xf < (ulonglong)puVar10[3]) {
            puVar13 = (undefined8 *)*puVar10;
          }
          puVar10[2] = 0;
          local_238 = local_238 & 0xffffff00;
          FUN_180001300((undefined1 *)puVar13,(undefined1 *)&local_238);
        }
        local_230 = local_1d0;
        plVar11 = (longlong *)FUN_180007060((longlong)local_1d0,plVar12);
        plVar11 = (longlong *)FUN_180017060((longlong)&local_1a8,plVar11);
        FUN_180019970(plVar12,plVar11);
        FUN_180001630(&local_1a8);
        local_230 = (ushort *)&local_1a8;
        plVar11 = (longlong *)FUN_180007060((longlong)&local_1a8,plVar12);
        cVar4 = FUN_18002a1e0(plVar11);
        if (cVar4 != '\0') {
          puVar10 = (undefined8 *)FUN_1800016b0(plVar12);
          puVar13 = puVar10;
          if (0xf < (ulonglong)puVar10[3]) {
            puVar13 = (undefined8 *)*puVar10;
          }
          puVar10[2] = 0;
          local_238 = local_238 & 0xffffff00;
          FUN_180001300((undefined1 *)puVar13,(undefined1 *)&local_238);
        }
        uVar23 = *(ulonglong *)(param_1 + 0xb0);
        lVar26 = local_228;
        if ((*(ulonglong *)(param_1 + 0xb0) == 0) &&
           (uVar23 = uVar21, *(longlong *)(param_1 + 0x68) != 0)) {
          *(undefined4 *)(param_1 + 0x98) = 1;
          local_230 = (ushort *)&local_1a8;
          plVar11 = (longlong *)FUN_180007060((longlong)&local_1a8,plVar12);
          lVar26 = local_228;
          FUN_180017550(local_228,*(undefined4 *)(param_1 + 0x98),plVar11);
          uVar23 = *(ulonglong *)(param_1 + 0xb0);
        }
        uVar22 = 4;
        memset(local_168,0,0x104);
        if (uVar23 != 0) {
          plVar11 = (longlong *)(param_1 + 0xa0);
          if (0xf < *(ulonglong *)(param_1 + 0xb8)) {
            plVar11 = (longlong *)*plVar11;
          }
          uVar22 = 0x74;
          snprintf(local_168,0x104,"%s_%s",plVar11);
        }
        FUN_180001780((longlong)local_1f0);
        puVar13 = (undefined8 *)FUN_1800016b0(local_1f0);
        puVar13[2] = 0;
        puVar13[3] = 0xf;
        local_238 = local_238 & 0xffffff00;
        FUN_180001300((undefined1 *)puVar13,(undefined1 *)&local_238);
        do {
          uVar7 = uVar7 + 1;
        } while (local_168[uVar7] != '\0');
        if ((ulonglong)puVar13[3] < uVar7) {
          FUN_1800086f0((longlong)local_1f0,uVar7,uVar22,local_168);
        }
        else {
          puVar10 = puVar13;
          if (0xf < (ulonglong)puVar13[3]) {
            puVar10 = (undefined8 *)*puVar13;
          }
          puVar13[2] = uVar7;
          memmove(puVar10,local_168,uVar7);
          local_238 = local_238 & 0xffffff00;
          FUN_180001300((undefined1 *)((longlong)puVar10 + uVar7),(undefined1 *)&local_238);
        }
        if (*(int *)(param_1 + 0x3c) != 0) {
          *(undefined4 *)(lVar26 + 0x18) = 0x59;
          local_230 = (ushort *)&local_1a8;
          if (local_1e0 == 0) {
            plVar12 = (longlong *)FUN_180007060((longlong)&local_1a8,plVar12);
          }
          else {
            plVar12 = (longlong *)FUN_180007060((longlong)&local_1a8,(undefined8 *)local_1f0);
          }
          FUN_1800173f0(lVar26,plVar12);
          local_230 = (ushort *)&local_1a8;
          plVar12 = (longlong *)FUN_180007060((longlong)&local_1a8,(undefined8 *)(param_1 + 0x78));
          FUN_1800174f0(lVar26,plVar12);
          FUN_180001630((longlong *)local_1f0);
          goto LAB_18005060e;
        }
        uVar7 = uVar21;
        if (4 < *(ulonglong *)(param_1 + 0x68)) {
          do {
            uVar23 = uVar7 + 1;
            if (pcVar18[uVar7] != (&DAT_18006c36c)[uVar7]) goto LAB_180050090;
            uVar7 = uVar23;
          } while (uVar23 != 6);
          goto LAB_1800500b9;
        }
        goto LAB_1800500c0;
      case 0x111:
      case 0x201:
        if (param_4 != (ushort *)0x0) {
          uVar6 = FUN_1800512d0(param_1,param_3,(longlong *)&local_230,&local_238,0);
        }
LAB_18005020a:
        *(uint *)(param_1 + 0x14) = uVar6;
        break;
      case 0x117:
      case 0x202:
        puVar17 = FUN_180051450(param_1,param_3,(longlong *)&local_230,&local_238);
        iVar5 = (int)puVar17;
        *(int *)(param_1 + 0x20) = iVar5;
        uVar21 = (ulonglong)(uint)(*(int *)(param_1 + 0x14) + iVar5);
        if (*(ulonglong *)(param_1 + 0x18) < uVar21) {
          *(ulonglong *)(param_1 + 0x18) = uVar21;
        }
        if (iVar5 == 0) goto LAB_18005020a;
        if (*(int *)(param_1 + 0x14) == 0) {
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        break;
      case 0x118:
        *(undefined4 *)(param_1 + 0x50) = 1;
        *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(puVar16 + 4);
        break;
      case 0x132:
        plVar12 = (longlong *)FUN_180042930(param_3,(ulonglong)*(uint *)(puVar16 + 4));
        if (plVar12 == (longlong *)0x0) goto LAB_18005060e;
        if (*(ulonglong *)(param_1 + 0x18) < (ulonglong)(*(int *)(param_4 + 4) + uVar24)) {
          *(ulonglong *)(param_1 + 0x18) = (ulonglong)(*(int *)(param_4 + 4) + uVar24);
        }
        local_1a8 = *plVar12;
        lStack_1a0 = plVar12[1];
        lStack_198 = plVar12[2];
        lStack_190 = plVar12[3];
        local_188 = plVar12[4];
        lStack_180 = plVar12[5];
        local_178 = plVar12[6];
        local_170 = CONCAT17(local_170._7_1_,(int7)plVar12[7]);
        uVar21 = 0xffffffffffffffff;
        do {
          uVar7 = uVar21 + 1;
          lVar26 = uVar21 + 1;
          uVar21 = uVar7;
        } while (*(char *)((longlong)&local_1a8 + lVar26) != '\0');
        puVar13 = (undefined8 *)FUN_1800016b0(param_1 + 0x78);
        if ((ulonglong)puVar13[3] < uVar7) {
          FUN_1800086f0(param_1 + 0x78,uVar7,uVar22,&local_1a8);
        }
        else {
          puVar10 = puVar13;
          if (0xf < (ulonglong)puVar13[3]) {
            puVar10 = (undefined8 *)*puVar13;
          }
          puVar13[2] = uVar7;
          memmove(puVar10,&local_1a8,uVar7);
          local_238 = local_238 & 0xffffff00;
          FUN_180001300((undefined1 *)((longlong)puVar10 + uVar7),(undefined1 *)&local_238);
        }
        break;
      case 0x144:
        uVar25 = *(uint *)(puVar16 + 4);
        if (*(ulonglong *)(param_1 + 0x18) < (ulonglong)(uVar25 + uVar24)) {
          *(ulonglong *)(param_1 + 0x18) = (ulonglong)(uVar25 + uVar24);
          uVar25 = *(uint *)(puVar16 + 4);
        }
        uVar21 = (ulonglong)uVar25;
        *(uint *)(param_1 + 0x24) = uVar25;
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(puVar16 + 2);
        uVar15 = FUN_180051030(uVar21,(uint)puVar16[1]);
        *(int *)(param_1 + 0x38) = (int)uVar15;
        uVar15 = FUN_180051030(uVar21,(uint)puVar16[1]);
        *(int *)(param_1 + 0x30) = (int)uVar15 * *(int *)(puVar16 + 2);
        break;
      case 0x145:
        uVar25 = *(uint *)(puVar16 + 4);
        if (*(ulonglong *)(param_1 + 0x18) < (ulonglong)(uVar25 + uVar24)) {
          *(ulonglong *)(param_1 + 0x18) = (ulonglong)(uVar25 + uVar24);
          uVar25 = *(uint *)(puVar16 + 4);
        }
        uVar21 = (ulonglong)uVar25;
        *(uint *)(param_1 + 0x28) = uVar25;
        uVar15 = FUN_180051030(uVar21,(uint)puVar16[1]);
        *(int *)(param_1 + 0x2c) = (int)uVar15;
        iVar5 = *(int *)(puVar16 + 2);
        uVar15 = FUN_180051030(uVar21,(uint)param_4[1]);
        if (((int)uVar15 * iVar5 == *(int *)(param_1 + 0x30)) && (iVar5 == *(int *)(param_1 + 0x34))
           ) {
          FUN_180051180(param_1,param_3);
        }
        break;
      case 0x14a:
        if (*(ulonglong *)(param_1 + 0x18) < (ulonglong)(*(int *)(puVar16 + 4) + uVar24)) {
          *(ulonglong *)(param_1 + 0x18) = (ulonglong)(*(int *)(puVar16 + 4) + uVar24);
        }
        if (*(int *)(param_1 + 0xd0) == 0) {
          do {
            if ((((int)uVar7 == 0) || (0x200 < uVar25)) ||
               (puVar14 = FUN_180042930(param_3,(ulonglong)*(uint *)(param_4 + 4)),
               puVar14 == (undefined *)0x0)) break;
            if (uVar24 < 5) {
              uVar6 = *(uint *)(param_4 + 4);
            }
            else {
              uVar6 = *(uint *)(puVar14 + uVar21);
              uVar21 = (ulonglong)(uint)((int)uVar21 + (int)uVar7);
              local_238 = uVar6;
              if (*(int *)(param_1 + 0x10) != 0) {
                local_238._2_1_ = (undefined1)(uVar6 >> 0x10);
                local_238._1_1_ = (undefined1)(uVar6 >> 8);
                uVar3 = CONCAT11((char)uVar6,local_238._1_1_);
                local_238._0_2_ = CONCAT11(local_238._2_1_,(char)(uVar6 >> 0x18));
                local_238 = CONCAT22(uVar3,(ushort)local_238);
                uVar6 = local_238;
              }
            }
            uVar7 = param_3[2];
            FUN_180050750(param_1,param_3,uVar6,0);
            FUN_180042930(param_3,0);
            FUN_180042930(param_3,uVar7);
            uVar25 = uVar25 - 1;
            uVar7 = (ulonglong)local_220;
          } while (uVar25 != 0);
        }
        else {
          *(ulonglong *)(param_1 + 0xd8) = (ulonglong)*(uint *)(puVar16 + 4);
        }
      }
    }
  }
  else if (uVar19 == 0x83bb) {
    uVar25 = *(uint *)(puVar16 + 4);
    uVar21 = (ulonglong)uVar25;
    pcVar18 = FUN_18004e410((char *)(param_1 + 0xf0));
    pcVar18 = strstr(pcVar18,"KODAK");
    if (pcVar18 != (char *)0x0) {
      pcVar18 = (char *)(param_1 + 0x58);
      if (0xf < *(ulonglong *)(param_1 + 0x70)) {
        pcVar18 = *(char **)pcVar18;
      }
      pcVar18 = strstr(pcVar18,"DCS Pro SLR");
      if ((pcVar18 != (char *)0x0) && (uVar24 == 0)) {
        uVar7 = param_3[2];
        puVar17 = (uint *)FUN_180042930(param_3,uVar21);
        if (puVar17 == (uint *)0x0) {
          if (*(ulonglong *)(param_1 + 0x18) < uVar21) {
            *(ulonglong *)(param_1 + 0x18) = uVar21;
          }
          goto switchD_18004faae_caseD_112;
        }
        uVar6 = *puVar17;
        local_238 = uVar6;
        if (*(int *)(param_1 + 0x10) != 0) {
          local_238._2_1_ = (undefined1)(uVar6 >> 0x10);
          local_238._1_1_ = (undefined1)(uVar6 >> 8);
          uVar3 = CONCAT11((char)uVar6,local_238._1_1_);
          local_238._0_2_ = CONCAT11(local_238._2_1_,(char)(uVar6 >> 0x18));
          local_238 = CONCAT22(uVar3,(ushort)local_238);
        }
        uVar6 = local_238;
        FUN_180042930(param_3,0);
        FUN_180042930(param_3,uVar7);
        if (*(ulonglong *)(param_1 + 0x18) < (ulonglong)(uVar6 + uVar25)) {
          *(ulonglong *)(param_1 + 0x18) = (ulonglong)(uVar6 + uVar25);
        }
      }
    }
LAB_180050600:
    if (*(ulonglong *)(param_1 + 0x18) < (ulonglong)(uVar25 + uVar24)) {
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)(uVar25 + uVar24);
    }
  }
  else if (uVar19 == 0x8769) {
    uVar25 = *(uint *)(puVar16 + 4);
    if (*(ulonglong *)(param_1 + 0x18) < (ulonglong)(uVar25 + uVar24)) {
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)(uVar25 + uVar24);
      uVar25 = *(uint *)(puVar16 + 4);
    }
    FUN_180042930(param_3,(ulonglong)uVar25);
    uVar21 = param_3[2];
    FUN_180050750(param_1,param_3,*(uint *)(param_4 + 4),0);
    FUN_180042930(param_3,0);
    FUN_180042930(param_3,uVar21);
  }
  else if (uVar19 == 0x935c) {
    uVar21 = (ulonglong)(*(int *)(puVar16 + 4) + uVar24);
    if ((*(ulonglong *)(param_1 + 0x18) < uVar21) &&
       (*(ulonglong *)(param_1 + 0x18) = uVar21, *(ulonglong *)(param_1 + 0x170) < uVar21)) {
      *(ulonglong *)(param_1 + 0x170) = uVar21;
    }
  }
  else if (uVar19 == 0xc612) {
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  else if ((uVar19 == 0xc634) && (*(int *)(param_1 + 0xd0) != 0)) {
    uVar21 = param_3[2];
    puVar16 = (ushort *)FUN_180042930(param_3,(ulonglong)(*(int *)(puVar16 + 4) + 4));
    uVar19 = *puVar16;
    local_238 = CONCAT22(local_238._2_2_,uVar19);
    if (*(int *)(param_1 + 0x10) != 0) {
      local_238 = CONCAT31(CONCAT21(local_238._2_2_,(char)uVar19),(char)(uVar19 >> 8));
      uVar19 = (ushort)local_238;
    }
    puVar17 = (uint *)FUN_180042930(param_3,(ulonglong)(*(int *)(param_4 + 4) + 4 + (uint)uVar19));
    if (puVar17 != (uint *)0x0) {
      *(ulonglong *)(param_1 + 0xe0) = (ulonglong)*puVar17;
      FUN_180042930(param_3,0);
      FUN_180042930(param_3,uVar21);
      uVar21 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_1 + 0xe0);
      if (*(ulonglong *)(param_1 + 0x18) < uVar21) {
        *(ulonglong *)(param_1 + 0x18) = uVar21;
      }
    }
  }
  goto switchD_18004faae_caseD_112;
  while (uVar21 = uVar7, uVar7 != 6) {
LAB_180050090:
    uVar7 = uVar21 + 1;
    if (pcVar18[uVar21] != (&DAT_18006deb4)[uVar21]) {
      iVar5 = strncmp(pcVar18,"NIKON",5);
      if (iVar5 != 0) goto LAB_1800500c0;
      break;
    }
  }
LAB_1800500b9:
  *(undefined4 *)(param_1 + 0x44) = 1;
LAB_1800500c0:
  if (8 < *(ulonglong *)(param_1 + 0x68)) {
    if (0xf < *(ulonglong *)(param_1 + 0x70)) {
      plVar12 = (longlong *)*plVar12;
    }
    iVar5 = strncmp((char *)plVar12,"DSLR-A100",9);
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0xd0) = 1;
    }
  }
  FUN_180001630((longlong *)local_1f0);
switchD_18004faae_caseD_112:
LAB_18005060e:
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_268);
  return;
}

