// Function: FUN_18004e720
// Address: 18004e720
// Size: 4161 bytes


void FUN_18004e720(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong ****pppplVar1;
  longlong ****pppplVar2;
  ushort uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined6 uVar9;
  ushort uVar10;
  longlong *plVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  ushort *puVar17;
  size_t sVar18;
  uint *puVar19;
  longlong lVar20;
  longlong *plVar21;
  int *piVar22;
  short sVar23;
  int iVar24;
  char *pcVar25;
  void *_Memory;
  ulonglong uVar26;
  int iVar27;
  longlong ****pppplVar28;
  ulonglong uVar29;
  ushort uVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  undefined1 uVar34;
  ushort uVar35;
  uint uVar36;
  longlong lVar37;
  ulonglong uVar38;
  undefined8 *puVar39;
  int iVar40;
  bool bVar41;
  undefined1 auStack_778 [32];
  undefined8 *local_758;
  undefined8 local_748;
  undefined8 local_740;
  longlong *local_738;
  longlong *local_730;
  longlong *local_728;
  longlong *local_720;
  longlong local_718;
  undefined8 local_710;
  int local_708;
  ulonglong local_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined1 local_6e0;
  longlong local_6d0 [4];
  longlong ***local_6b0 [2];
  ulonglong local_6a0;
  ulonglong local_698;
  longlong local_690 [4];
  char acStack_66b [16];
  char acStack_65b [32];
  char acStack_63b [40];
  char acStack_613 [1195];
  uint local_168;
  undefined1 local_164;
  char local_158 [272];
  ulonglong local_48;
  
  local_6f8 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_778;
  local_738 = param_2;
  local_728 = param_3;
  FUN_18004e4c0(param_1);
  local_700 = *(ulonglong *)(param_1 + 0xe8) / 10;
  local_718 = param_2[1];
  local_710 = 0xffffffffffffffff;
  local_720 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_708 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_708 = *(int *)((longlong)param_3 + 0xc);
    if (local_708 < 1) {
      local_708 = 0x200;
    }
  }
  else {
    local_708 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_708 = local_708 << 7;
  plVar11 = (longlong *)FUN_180042930((longlong *)&local_720,0);
  if (plVar11 == (longlong *)0x0) goto LAB_18004f71a;
  local_6f0._0_4_ = 0x494a5546;
  local_6f0._4_4_ = 0x4d4c4946;
  local_6e8 = 0x2d444343;
  uStack_6e4 = 0x20574152;
  local_6e0 = 0;
  if ((*plVar11 == 0x4d4c4946494a5546) && (plVar11[1] == 0x205741522d444343)) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
    iVar40 = *(int *)((longlong)plVar11 + 0x54);
    local_740._2_1_ = (undefined1)((uint)iVar40 >> 0x10);
    local_740._1_1_ = (undefined1)((uint)iVar40 >> 8);
    uVar9 = CONCAT51(CONCAT41(local_740._4_4_,(char)iVar40),local_740._1_1_);
    local_740._0_2_ = CONCAT11(local_740._2_1_,(char)((uint)iVar40 >> 0x18));
    local_740 = (void *)CONCAT62(uVar9,(ushort)local_740);
    iVar40 = (int)plVar11[0xb];
    local_748._2_1_ = (undefined1)((uint)iVar40 >> 0x10);
    local_748._1_1_ = (undefined1)((uint)iVar40 >> 8);
    uVar9 = CONCAT51(CONCAT41(local_748._4_4_,(char)iVar40),local_748._1_1_);
    local_748._0_2_ = CONCAT11(local_748._2_1_,(char)((uint)iVar40 >> 0x18));
    local_748 = CONCAT62(uVar9,(undefined2)local_748);
    uVar13 = 0;
    memset(acStack_66b + 3,0,0x500);
    DAT_180117f98 = acStack_66b + 3;
    uVar36 = (uint)local_740;
    uVar38 = (ulonglong)local_740 & 0xffffffff;
    if ((uint)local_740 < 0x80001) {
      puVar17 = (ushort *)((longlong)plVar11 + uVar38 + 4);
      uVar30 = *puVar17;
      piVar22 = (int *)((longlong)plVar11 + uVar38 + 6);
      uVar13 = FUN_18004adb0((longlong)puVar17,uVar13,piVar22,
                             (uint)(ushort)(uVar30 << 8 | uVar30 >> 8));
      uVar34 = SUB81(piVar22,0);
      iVar40 = (int)uVar13;
    }
    else {
      uVar33 = (ulonglong)local_740 & 0xffffffff;
      if (((*(ulonglong *)(param_1 + 0xe8) < uVar38) ||
          (*(ulonglong *)(param_1 + 0xe8) < (local_748 & 0xffffffff))) ||
         (puVar12 = FUN_180042930((longlong *)&local_720,uVar33), puVar12 == (undefined *)0x0))
      goto LAB_18004f71a;
      piVar22 = (int *)(puVar12 + 6);
      uVar13 = FUN_18004adb0((longlong)(puVar12 + 4),uVar33,piVar22,
                             (uint)(ushort)(*(ushort *)(puVar12 + 4) << 8 |
                                           *(ushort *)(puVar12 + 4) >> 8));
      uVar34 = SUB81(piVar22,0);
      iVar40 = (int)uVar13;
      plVar11 = (longlong *)FUN_180042930((longlong *)&local_720,0);
    }
    param_2 = local_738;
    if (iVar40 != 0) {
      FUN_180001780((longlong)&local_6f0);
      puVar14 = (undefined8 *)FUN_1800016b0(&local_6f0);
      puVar14[2] = 0;
      puVar14[3] = 0xf;
      local_740 = (void *)((ulonglong)local_740 & 0xffffffffffffff00);
      FUN_180001300((undefined1 *)puVar14,(undefined1 *)&local_740);
      uVar38 = 0xffffffffffffffff;
      do {
        uVar33 = uVar38 + 1;
        lVar20 = uVar38 + 1;
        uVar38 = uVar33;
      } while (acStack_63b[lVar20] != '\0');
      if ((ulonglong)puVar14[3] < uVar33) {
        FUN_1800086f0((longlong)&local_6f0,uVar33,uVar34,acStack_63b);
      }
      else {
        puVar16 = puVar14;
        if (0xf < (ulonglong)puVar14[3]) {
          puVar16 = (undefined8 *)*puVar14;
        }
        puVar14[2] = uVar33;
        memmove(puVar16,acStack_63b,uVar33);
        uVar34 = (undefined1)uVar38;
        local_740 = (void *)((ulonglong)local_740 & 0xffffffffffffff00);
        FUN_180001300((undefined1 *)((longlong)puVar16 + uVar33),(undefined1 *)&local_740);
      }
      FUN_180001780((longlong)local_6b0);
      puVar14 = (undefined8 *)FUN_1800016b0(local_6b0);
      puVar14[2] = 0;
      puVar14[3] = 0xf;
      local_740 = (void *)((ulonglong)local_740 & 0xffffffffffffff00);
      FUN_180001300((undefined1 *)puVar14,(undefined1 *)&local_740);
      uVar38 = 0xffffffffffffffff;
      do {
        uVar33 = uVar38 + 1;
        lVar20 = uVar38 + 1;
        uVar38 = uVar33;
      } while (acStack_65b[lVar20] != '\0');
      if ((ulonglong)puVar14[3] < uVar33) {
        FUN_1800086f0((longlong)local_6b0,uVar33,uVar34,acStack_65b);
      }
      else {
        puVar16 = puVar14;
        if (0xf < (ulonglong)puVar14[3]) {
          puVar16 = (undefined8 *)*puVar14;
        }
        puVar14[2] = uVar33;
        memmove(puVar16,acStack_65b,uVar33);
        uVar34 = (undefined1)uVar38;
        local_740 = (void *)((ulonglong)local_740 & 0xffffffffffffff00);
        FUN_180001300((undefined1 *)((longlong)puVar16 + uVar33),(undefined1 *)&local_740);
      }
      pppplVar1 = (longlong ****)(param_1 + 0x58);
      uVar38 = 0xffffffffffffffff;
      do {
        uVar33 = uVar38 + 1;
        lVar20 = uVar38 + 1;
        uVar38 = uVar33;
      } while (acStack_63b[lVar20] != '\0');
      puVar14 = (undefined8 *)FUN_1800016b0(pppplVar1);
      if ((ulonglong)puVar14[3] < uVar33) {
        FUN_1800086f0((longlong)pppplVar1,uVar33,uVar34,acStack_63b);
      }
      else {
        puVar16 = puVar14;
        if (0xf < (ulonglong)puVar14[3]) {
          puVar16 = (undefined8 *)*puVar14;
        }
        puVar14[2] = uVar33;
        memmove(puVar16,acStack_63b,uVar33);
        local_740 = (void *)((ulonglong)local_740 & 0xffffffffffffff00);
        FUN_180001300((undefined1 *)((longlong)puVar16 + uVar33),(undefined1 *)&local_740);
      }
      local_730 = local_690;
      plVar15 = (longlong *)FUN_180007060((longlong)local_690,pppplVar1);
      plVar15 = (longlong *)FUN_180017060((longlong)local_6d0,plVar15);
      FUN_180019970((longlong *)pppplVar1,plVar15);
      FUN_180001630(local_6d0);
      pppplVar2 = (longlong ****)(param_1 + 0xa0);
      if (local_6a0 == 0) {
        if (pppplVar2 != pppplVar1) {
          pppplVar28 = pppplVar1;
          if (0xf < *(ulonglong *)(param_1 + 0x70)) {
            pppplVar28 = (longlong ****)*pppplVar1;
          }
          uVar38 = *(ulonglong *)(param_1 + 0x68);
          goto LAB_18004eb46;
        }
      }
      else if (pppplVar2 != local_6b0) {
        pppplVar28 = local_6b0;
        uVar38 = local_6a0;
        if (0xf < local_698) {
          pppplVar28 = (longlong ****)local_6b0[0];
        }
LAB_18004eb46:
        FUN_1800071e0((longlong)pppplVar2,pppplVar28,uVar38);
        local_6a0 = uVar38;
      }
      uVar34 = (undefined1)local_6a0;
      puVar14 = (undefined8 *)(param_1 + 0x78);
      uVar38 = 0xffffffffffffffff;
      do {
        uVar33 = uVar38 + 1;
        lVar20 = uVar38 + 1;
        uVar38 = uVar33;
      } while (acStack_613[lVar20] != '\0');
      puVar16 = (undefined8 *)FUN_1800016b0(puVar14);
      if ((ulonglong)puVar16[3] < uVar33) {
        FUN_1800086f0((longlong)puVar14,uVar33,uVar34,acStack_613);
      }
      else {
        puVar39 = puVar16;
        if (0xf < (ulonglong)puVar16[3]) {
          puVar39 = (undefined8 *)*puVar16;
        }
        puVar16[2] = uVar33;
        memmove(puVar39,acStack_613,uVar33);
        local_740 = (void *)((ulonglong)local_740 & 0xffffffffffffff00);
        FUN_180001300((undefined1 *)((longlong)puVar39 + uVar33),(undefined1 *)&local_740);
      }
      local_730 = local_6d0;
      plVar15 = (longlong *)FUN_180007060((longlong)local_6d0,pppplVar1);
      param_2 = local_738;
      FUN_1800173f0((longlong)local_738,plVar15);
      local_730 = local_6d0;
      plVar15 = (longlong *)FUN_180007060((longlong)local_6d0,puVar14);
      FUN_1800174f0((longlong)param_2,plVar15);
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        *(undefined4 *)(param_1 + 0x98) = 1;
      }
      FUN_180001630((longlong *)local_6b0);
      FUN_180001630(&local_6f0);
    }
    uVar38 = (ulonglong)((uint)local_748 + uVar36);
    *(ulonglong *)(param_1 + 0x18) = uVar38;
    iVar40 = *(int *)((longlong)plVar11 + 0x5c);
    local_748._2_1_ = (undefined1)((uint)iVar40 >> 0x10);
    local_748._1_1_ = (undefined1)((uint)iVar40 >> 8);
    uVar9 = CONCAT51(CONCAT41(local_748._4_4_,(char)iVar40),local_748._1_1_);
    local_748._0_2_ = CONCAT11(local_748._2_1_,(char)((uint)iVar40 >> 0x18));
    local_748 = CONCAT62(uVar9,(undefined2)local_748);
    iVar40 = (int)plVar11[0xc];
    local_740._2_1_ = (undefined1)((uint)iVar40 >> 0x10);
    local_740._1_1_ = (undefined1)((uint)iVar40 >> 8);
    uVar9 = CONCAT51(CONCAT41(local_740._4_4_,(char)iVar40),local_740._1_1_);
    local_740._0_2_ = CONCAT11(local_740._2_1_,(char)((uint)iVar40 >> 0x18));
    local_740 = (void *)CONCAT62(uVar9,(ushort)local_740);
    local_740._0_4_ = (uint)local_740 + (uint)local_748;
    if (uVar38 < (uint)local_740) {
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)(uint)local_740;
      uVar38 = (ulonglong)(uint)local_740;
    }
    iVar40 = *(int *)((longlong)plVar11 + 100);
    local_748._2_1_ = (undefined1)((uint)iVar40 >> 0x10);
    local_748._1_1_ = (undefined1)((uint)iVar40 >> 8);
    uVar9 = CONCAT51(CONCAT41(local_748._4_4_,(char)iVar40),local_748._1_1_);
    local_748._0_2_ = CONCAT11(local_748._2_1_,(char)((uint)iVar40 >> 0x18));
    local_748 = CONCAT62(uVar9,(undefined2)local_748);
    iVar40 = (int)plVar11[0xd];
    local_740._2_1_ = (undefined1)((uint)iVar40 >> 0x10);
    local_740._1_1_ = (undefined1)((uint)iVar40 >> 8);
    uVar9 = CONCAT51(CONCAT41(local_740._4_4_,(char)iVar40),local_740._1_1_);
    local_740._0_2_ = CONCAT11(local_740._2_1_,(char)((uint)iVar40 >> 0x18));
    local_740 = (void *)CONCAT62(uVar9,(ushort)local_740);
    local_748._0_4_ = (uint)local_748 + (uint)local_740;
    if (uVar38 < (uint)local_748) {
      *(ulonglong *)(param_1 + 0x18) = (ulonglong)(uint)local_748;
      uVar38 = (ulonglong)(uint)local_748;
    }
    iVar40 = *(int *)((longlong)plVar11 + 0x84);
    local_748._2_1_ = (undefined1)((uint)iVar40 >> 0x10);
    local_748._1_1_ = (undefined1)((uint)iVar40 >> 8);
    uVar9 = CONCAT51(CONCAT41(local_748._4_4_,(char)iVar40),local_748._1_1_);
    local_748._0_2_ = CONCAT11(local_748._2_1_,(char)((uint)iVar40 >> 0x18));
    local_748 = CONCAT62(uVar9,(undefined2)local_748);
    if ((uint)local_748 != 0) {
      *(ulonglong *)(param_1 + 0x18) = (local_748 & 0xffffffff) + uVar38;
    }
    plVar11 = plVar11 + 0x14;
  }
  plVar15 = local_730;
  if ((int)*plVar11 == 0x2a004d4d) {
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  local_164 = 0;
  local_730 = (longlong *)((ulonglong)local_730 & 0xffffffff00000000);
  if ((int)*plVar11 == 0x554949) {
    *(undefined4 *)(param_2 + 3) = 0x56;
    local_730 = (longlong *)CONCAT44(SUB84(plVar15,4),1);
  }
  local_168 = 0;
  uVar36 = *(uint *)((longlong)plVar11 + 4);
  uVar34 = (undefined1)(uVar36 >> 0x18);
  uVar32 = uVar36 & 0xff;
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar36 = uVar36 + 0xa0;
    uVar34 = (undefined1)(uVar36 >> 0x18);
    uVar32 = uVar36;
  }
  local_748 = CONCAT44(local_748._4_4_,uVar36);
  if (*(int *)(param_1 + 0x10) != 0) {
    local_748._2_1_ = (undefined1)(uVar36 >> 0x10);
    local_748._1_1_ = (undefined1)(uVar36 >> 8);
    uVar9 = CONCAT51(CONCAT41(local_748._4_4_,(char)uVar32),local_748._1_1_);
    local_748._0_2_ = CONCAT11(local_748._2_1_,uVar34);
    local_748 = CONCAT62(uVar9,(undefined2)local_748);
    uVar36 = (uint)local_748;
  }
  uVar33 = (ulonglong)uVar36;
  bVar41 = true;
  uVar38 = *(ulonglong *)(param_1 + 0xe8);
  if (uVar33 <= uVar38) {
    uVar31 = *(ulonglong *)(param_1 + 0x170);
    while ((iVar40 = 0, uVar31 <= uVar38 &&
           (puVar17 = (ushort *)FUN_180042930((longlong *)&local_720,(ulonglong)uVar36),
           puVar17 != (ushort *)0x0))) {
      uVar30 = *puVar17;
      local_740 = (void *)CONCAT62(local_740._2_6_,uVar30);
      if (*(int *)(param_1 + 0x10) != 0) {
        local_740 = (void *)CONCAT71(CONCAT61(local_740._2_6_,(char)uVar30),(char)(uVar30 >> 8));
        uVar30 = (ushort)local_740;
      }
      local_748 = uVar33 + 2;
      if (0x1ff < (ushort)(uVar30 - 1)) break;
      sVar18 = SUB168(ZEXT816(0xc) * ZEXT216(uVar30),0);
      if (SUB168(ZEXT816(0xc) * ZEXT216(uVar30),8) != 0) {
        sVar18 = 0xffffffffffffffff;
      }
      local_740 = (void *)FUN_1800020c0(sVar18);
      uVar38 = (ulonglong)(uVar36 + 2);
      if (*(ulonglong *)(param_1 + 0x170) < uVar38) {
        *(ulonglong *)(param_1 + 0x170) = uVar38;
      }
      else if (bVar41) {
        *(ulonglong *)(param_1 + 0x170) = *(ulonglong *)(param_1 + 0x170) + 2;
      }
      uVar33 = (ulonglong)uVar30;
      if (uVar30 != 0) {
        piVar22 = (int *)((longlong)local_740 + 8);
        do {
          puVar17 = (ushort *)FUN_180042930((longlong *)&local_720,uVar38);
          if (puVar17 == (ushort *)0x0) goto LAB_18004f71a;
          iVar24 = *(int *)(puVar17 + 2);
          piVar22[-1] = iVar24;
          iVar27 = *(int *)(puVar17 + 4);
          if (*(int *)(param_1 + 0x3c) != 0) {
            iVar27 = iVar27 + 0xa0;
          }
          *piVar22 = iVar27;
          uVar35 = *puVar17;
          *(ushort *)(piVar22 + -2) = uVar35;
          uVar3 = puVar17[1];
          *(ushort *)((longlong)piVar22 + -6) = uVar3;
          if (*(int *)(param_1 + 0x10) != 0) {
            uVar10 = (ushort)((uint)iVar24 >> 0x10);
            piVar22[-1] = CONCAT22((ushort)iVar24 << 8 | (ushort)iVar24 >> 8,
                                   uVar10 << 8 | uVar10 >> 8);
            uVar10 = (ushort)((uint)iVar27 >> 0x10);
            iVar24 = CONCAT22((ushort)iVar27 << 8 | (ushort)iVar27 >> 8,uVar10 << 8 | uVar10 >> 8);
            if (*(int *)(param_1 + 0x3c) != 0) {
              iVar24 = iVar24 + 0xa0;
            }
            *piVar22 = iVar24;
            uVar35 = uVar35 << 8 | uVar35 >> 8;
            *(ushort *)(piVar22 + -2) = uVar35;
            *(ushort *)((longlong)piVar22 + -6) = uVar3 << 8 | uVar3 >> 8;
          }
          if (0xefff < uVar35) {
            *(undefined8 *)(param_1 + 0x170) = 0;
            goto LAB_18004f71a;
          }
          uVar38 = uVar38 + 0xc;
          local_748 = local_748 + 0xc;
          if (bVar41) {
            *(longlong *)(param_1 + 0x170) = *(longlong *)(param_1 + 0x170) + 0xc;
          }
          iVar40 = iVar40 + 1;
          piVar22 = piVar22 + 3;
        } while (iVar40 < (int)(uint)uVar30);
      }
      plVar11 = local_738;
      if (uVar30 != 0) {
        puVar19 = (uint *)((longlong)local_740 + 8);
        do {
          iVar40 = 0;
          switch(*(undefined2 *)((longlong)puVar19 + -6)) {
          case 1:
          case 2:
          case 6:
          case 7:
            iVar40 = 1;
            break;
          case 3:
          case 8:
            iVar40 = 2;
            break;
          case 4:
          case 9:
          case 0xb:
            iVar40 = 4;
            break;
          case 5:
          case 10:
          case 0xc:
            iVar40 = 8;
          }
          uVar36 = iVar40 * puVar19[-1];
          if (uVar36 < 5) {
            pcVar25 = "GetMainTag tag = %d, len = %u, size = %u\n";
          }
          else {
            if (*(ulonglong *)(param_1 + 0x18) < (ulonglong)(*puVar19 + uVar36)) {
              *(ulonglong *)(param_1 + 0x18) = (ulonglong)(*puVar19 + uVar36);
            }
            pcVar25 = "GetMainTag tag = %d, len = %u,offset = %u\n";
          }
          FUN_1800108c0(pcVar25,(ulonglong)(ushort)puVar19[-2],(ulonglong)uVar36,(ulonglong)*puVar19
                       );
          plVar11 = local_738;
          FUN_18004f960(param_1,(longlong)local_738,(longlong *)&local_720,(ushort *)(puVar19 + -2))
          ;
          puVar19 = puVar19 + 3;
          uVar33 = uVar33 - 1;
        } while (uVar33 != 0);
      }
      if (*(int *)(param_1 + 0x3c) != 0) {
        *(undefined4 *)(plVar11 + 3) = 0x59;
        local_728 = local_6d0;
        plVar15 = (longlong *)FUN_180007060((longlong)local_6d0,(undefined8 *)(param_1 + 0x58));
        FUN_1800173f0((longlong)plVar11,plVar15);
        plVar15 = (longlong *)FUN_180007060((longlong)local_6d0,(undefined8 *)(param_1 + 0x78));
        local_728 = plVar15;
        if (plVar11 + 8 != plVar15) {
          plVar21 = plVar15;
          if (0xf < (ulonglong)plVar15[3]) {
            plVar21 = (longlong *)*plVar15;
          }
          FUN_1800071e0((longlong)(plVar11 + 8),plVar21,plVar15[2]);
        }
        FUN_180001630(plVar15);
        if (*(longlong *)(param_1 + 0xb0) != 0) {
          *(undefined4 *)(param_1 + 0x98) = 1;
        }
        goto LAB_18004f71a;
      }
      if (local_740 != (void *)0x0) {
        free(local_740);
      }
      uVar38 = local_748;
      puVar19 = (uint *)FUN_180042930((longlong *)&local_720,local_748);
      if (puVar19 == (uint *)0x0) break;
      uVar32 = *puVar19;
      local_748 = CONCAT44(local_748._4_4_,uVar32);
      if (*(int *)(param_1 + 0x10) != 0) {
        local_748._2_1_ = (undefined1)(uVar32 >> 0x10);
        local_748._1_1_ = (undefined1)(uVar32 >> 8);
        uVar9 = CONCAT51(CONCAT41(local_748._4_4_,(char)uVar32),local_748._1_1_);
        local_748._0_2_ = CONCAT11(local_748._2_1_,(char)(uVar32 >> 0x18));
        local_748 = CONCAT62(uVar9,(undefined2)local_748);
        uVar32 = (uint)local_748;
      }
      if ((uVar32 <= local_168) && (uVar32 != 0)) break;
      uVar26 = (ulonglong)uVar32;
      uVar36 = uVar32;
      if ((*(int *)(param_1 + 0x3c) != 0) && (uVar32 != 0)) {
        uVar36 = uVar32 + 0xa0;
        uVar26 = (ulonglong)uVar36;
      }
      uVar29 = (ulonglong)uVar36;
      bVar41 = uVar38 < uVar29;
      uVar33 = (ulonglong)uVar36;
      *(longlong *)(param_1 + 0x170) = *(longlong *)(param_1 + 0x170) + 4;
      uVar31 = *(ulonglong *)(param_1 + 0x170);
      if (uVar31 < uVar29) {
        *(ulonglong *)(param_1 + 0x170) = uVar29;
        uVar31 = (ulonglong)uVar36;
      }
      local_168 = uVar32;
      if ((uVar36 == 0) || (uVar38 = *(ulonglong *)(param_1 + 0xe8), uVar38 < uVar26)) break;
    }
  }
  plVar11 = local_738;
  iVar40 = 0;
  lVar37 = 0x1ff;
  lVar20 = -1;
  do {
    lVar20 = lVar20 + 1;
  } while (*(char *)(param_1 + 0x130 + lVar20) != '\0');
  if ((lVar20 == 0) && (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x170))) {
    *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x170);
  }
  FUN_180051560(param_1,(longlong)local_738,(char)local_730);
  local_738 = local_6d0;
  puVar14 = (undefined8 *)(param_1 + 0x58);
  plVar15 = (longlong *)FUN_180007060((longlong)local_6d0,puVar14);
  puVar16 = (undefined8 *)FUN_180017060((longlong)local_690,plVar15);
  if (puVar14 != puVar16) {
    plVar15 = (longlong *)FUN_1800016b0(puVar14);
    if (0xf < (ulonglong)plVar15[3]) {
      pvVar4 = (void *)*plVar15;
      _Memory = pvVar4;
      if ((0xfff < plVar15[3] + 1U) &&
         (_Memory = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    plVar15[2] = 0;
    plVar15[3] = 0xf;
    local_740 = (void *)((ulonglong)local_740 & 0xffffffffffffff00);
    FUN_180001300((undefined1 *)plVar15,(undefined1 *)&local_740);
    plVar21 = (longlong *)FUN_1800016b0(puVar16);
    lVar20 = plVar21[1];
    lVar5 = plVar21[2];
    lVar6 = plVar21[3];
    *plVar15 = *plVar21;
    plVar15[1] = lVar20;
    plVar15[2] = lVar5;
    plVar15[3] = lVar6;
    plVar21[2] = 0;
    plVar21[3] = 0xf;
    local_740 = (void *)((ulonglong)local_740 & 0xffffffffffffff00);
    FUN_180001300((undefined1 *)plVar21,(undefined1 *)&local_740);
  }
  FUN_180001630(local_690);
  memset(local_158,0,0x104);
  if (*(longlong *)(param_1 + 0x68) == 0) {
    if ((*(longlong *)(param_1 + 0xb0) != 0) &&
       (puVar16 = (undefined8 *)(param_1 + 0xa0), puVar14 != puVar16)) {
      if (0xf < *(ulonglong *)(param_1 + 0xb8)) {
        puVar16 = (undefined8 *)*puVar16;
      }
      FUN_1800071e0((longlong)puVar14,puVar16,*(ulonglong *)(param_1 + 0xb0));
    }
  }
  else if (*(longlong *)(param_1 + 0xb0) != 0) {
    local_758 = puVar14;
    if (0xf < *(ulonglong *)(param_1 + 0x70)) {
      local_758 = (undefined8 *)*puVar14;
    }
    plVar15 = (longlong *)(param_1 + 0xa0);
    if (0xf < *(ulonglong *)(param_1 + 0xb8)) {
      plVar15 = (longlong *)*plVar15;
    }
    uVar34 = 0x74;
    snprintf(local_158,0x104,"%s_%s",plVar15);
    uVar38 = 0xffffffffffffffff;
    do {
      uVar33 = uVar38 + 1;
      lVar20 = uVar38 + 1;
      uVar38 = uVar33;
    } while (local_158[lVar20] != '\0');
    puVar16 = (undefined8 *)FUN_1800016b0(puVar14);
    if ((ulonglong)puVar16[3] < uVar33) {
      FUN_1800086f0((longlong)puVar14,uVar33,uVar34,local_158);
    }
    else {
      puVar39 = puVar16;
      if (0xf < (ulonglong)puVar16[3]) {
        puVar39 = (undefined8 *)*puVar16;
      }
      puVar16[2] = uVar33;
      memmove(puVar39,local_158,uVar33);
      local_740 = (void *)((ulonglong)local_740 & 0xffffffffffffff00);
      FUN_180001300((undefined1 *)((longlong)puVar39 + uVar33),(undefined1 *)&local_740);
    }
  }
  local_738 = local_6d0;
  plVar15 = (longlong *)FUN_180007060((longlong)local_6d0,puVar14);
  FUN_1800173f0((longlong)plVar11,plVar15);
  plVar15 = (longlong *)FUN_180007060((longlong)local_6d0,(undefined8 *)(param_1 + 0x78));
  local_738 = plVar15;
  if (plVar11 + 8 != plVar15) {
    plVar21 = plVar15;
    if (0xf < (ulonglong)plVar15[3]) {
      plVar21 = (longlong *)*plVar15;
    }
    FUN_1800071e0((longlong)(plVar11 + 8),plVar21,plVar15[2]);
  }
  FUN_180001630(plVar15);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  }
  else {
    local_738 = local_6d0;
    plVar15 = (longlong *)FUN_180007060((longlong)local_6d0,(undefined8 *)(param_1 + 0xa0));
    FUN_180017550((longlong)plVar11,*(undefined4 *)(param_1 + 0x98),plVar15);
  }
  lVar20 = *(longlong *)(param_1 + 200);
  plVar11[0x1b] = *(longlong *)(param_1 + 0xc0);
  plVar11[0x1c] = lVar20;
  uVar38 = *(ulonglong *)(param_1 + 0x170);
  uVar33 = *(ulonglong *)(param_1 + 0x18);
  if (*(ulonglong *)(param_1 + 0x18) < uVar38) {
    *(ulonglong *)(param_1 + 0x18) = uVar38;
    uVar33 = uVar38;
  }
  if ((uVar33 < 0x2800) || (*(ulonglong *)(param_1 + 0xe8) < uVar33)) {
    *(ulonglong *)(param_1 + 0x18) = local_700;
    uVar33 = local_700;
  }
  if ((undefined **)*local_728 == CRawFileCellTestStorageDevice::vftable) {
    iVar24 = *(int *)((longlong)local_728 + 0xc);
    if (iVar24 < 1) {
      iVar24 = 0x200;
    }
  }
  else {
    iVar24 = (*(code *)((undefined **)*local_728)[5])();
    uVar33 = *(ulonglong *)(param_1 + 0x18);
  }
  uVar31 = (ulonglong)iVar24;
  uVar38 = uVar33 / uVar31 + 1;
  if (uVar33 % uVar31 == 0) {
    uVar38 = uVar33 / uVar31;
  }
  if (uVar33 < 0x100000) {
    lVar20 = uVar38 - 1;
    if (uVar38 == 0) {
      lVar20 = 0;
    }
    uVar26 = lVar20 * uVar31;
    *(ulonglong *)(param_1 + 0x18) = uVar26;
    uVar38 = (longlong)local_700 / 3;
    do {
      if ((uVar38 < uVar33) ||
         (piVar22 = (int *)FUN_180042930((longlong *)&local_720,uVar26), piVar22 == (int *)0x0))
      goto LAB_18004f6c9;
      if (*(int *)((uVar31 - 4) + (longlong)piVar22) == 0) {
        if ((*(int *)((uVar31 - 8) + (longlong)piVar22) == 0) &&
           (*(int *)((uVar31 - 0xc) + (longlong)piVar22) == 0)) {
          iVar40 = *(int *)((uVar31 - 0x10) + (longlong)piVar22);
LAB_18004f5a4:
          if (iVar40 == 0) {
            *(ulonglong *)(param_1 + 0x18) = uVar33;
            *(undefined4 *)(param_1 + 0x184) = 1;
            goto LAB_18004f6c9;
          }
        }
      }
      else if ((*piVar22 == 0x49495500) || (*piVar22 == 0x554949)) {
        iVar40 = piVar22[-1];
        goto LAB_18004f5a4;
      }
      uVar26 = *(longlong *)(param_1 + 0x18) + uVar31;
      *(ulonglong *)(param_1 + 0x18) = uVar26;
      uVar33 = uVar26;
    } while( true );
  }
  if (((*(int *)(param_1 + 0x40) != 0) && ((int)plVar11[3] != 0x9a)) &&
     (puVar14 = (undefined8 *)FUN_180042930((longlong *)&local_720,uVar33),
     puVar14 != (undefined8 *)0x0)) {
    sVar23 = *(short *)((longlong)puVar14 + -2);
    local_740 = (void *)CONCAT62(local_740._2_6_,sVar23);
    if (*(int *)(param_1 + 0x10) != 0) {
      local_740 = (void *)CONCAT71(CONCAT61(local_740._2_6_,(char)sVar23),
                                   (char)((ushort)sVar23 >> 8));
      sVar23 = (ushort)local_740;
    }
    if ((sVar23 != -0x27) && (sVar23 != -0x2601)) {
      lVar20 = 4;
      pcVar25 = acStack_66b + 3;
      do {
        uVar13 = puVar14[1];
        uVar7 = puVar14[2];
        uVar8 = puVar14[3];
        *(undefined8 *)pcVar25 = *puVar14;
        *(undefined8 *)(pcVar25 + 8) = uVar13;
        *(undefined8 *)(pcVar25 + 0x10) = uVar7;
        *(undefined8 *)(pcVar25 + 0x18) = uVar8;
        uVar13 = puVar14[5];
        uVar7 = puVar14[6];
        uVar8 = puVar14[7];
        *(undefined8 *)(pcVar25 + 0x20) = puVar14[4];
        *(undefined8 *)(pcVar25 + 0x28) = uVar13;
        *(undefined8 *)(pcVar25 + 0x30) = uVar7;
        *(undefined8 *)(pcVar25 + 0x38) = uVar8;
        uVar13 = puVar14[9];
        uVar7 = puVar14[10];
        uVar8 = puVar14[0xb];
        *(undefined8 *)(pcVar25 + 0x40) = puVar14[8];
        *(undefined8 *)(pcVar25 + 0x48) = uVar13;
        *(undefined8 *)(pcVar25 + 0x50) = uVar7;
        *(undefined8 *)(pcVar25 + 0x58) = uVar8;
        uVar13 = puVar14[0xd];
        *(undefined8 *)(pcVar25 + 0x60) = puVar14[0xc];
        *(undefined8 *)(pcVar25 + 0x68) = uVar13;
        uVar13 = puVar14[0xf];
        *(undefined8 *)(pcVar25 + 0x70) = puVar14[0xe];
        *(undefined8 *)(pcVar25 + 0x78) = uVar13;
        puVar14 = puVar14 + 0x10;
        lVar20 = lVar20 + -1;
        pcVar25 = pcVar25 + 0x80;
      } while (lVar20 != 0);
      do {
        if (acStack_66b[lVar37 + 3] != '\0') break;
        if (acStack_66b[lVar37 + 2] != '\0') {
          iVar40 = iVar40 + 1;
          break;
        }
        if (acStack_66b[lVar37 + 1] != '\0') {
          iVar40 = iVar40 + 2;
          break;
        }
        if (acStack_66b[lVar37] != '\0') {
          iVar40 = iVar40 + 3;
          break;
        }
        iVar40 = iVar40 + 4;
        lVar37 = lVar37 + -4;
      } while (-1 < lVar37);
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + (longlong)(0x200 - iVar40);
    }
  }
LAB_18004f6c9:
  if ((*(uint *)(param_1 + 0x178) != 0) && (*(int *)(param_1 + 0x184) == 0)) {
    *(longlong *)(param_1 + 0x18) =
         *(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x178);
  }
  if (((int)plVar11[3] == 0x9d) && (0x6400000 < *(ulonglong *)(param_1 + 0x18))) {
    *(undefined4 *)(plVar11 + 3) = 99;
  }
  FUN_18004f7a0(param_1,(longlong)plVar11,(longlong *)&local_720);
LAB_18004f71a:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_778);
  return;
}

