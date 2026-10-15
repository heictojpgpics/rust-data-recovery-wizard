// Function: FUN_18004b3b0
// Address: 18004b3b0
// Size: 1985 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_18004b3b0(ulonglong param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  char *pcVar11;
  undefined8 *******pppppppuVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *_Dst;
  ushort uVar16;
  undefined1 uVar17;
  int *piVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStackY_608 [32];
  undefined1 local_5d8;
  char local_5d7;
  char local_5d6;
  ushort local_5d4;
  ushort local_5d2;
  ulonglong local_5d0;
  undefined8 *******local_5c8;
  undefined8 *******local_5c0 [2];
  ulonglong local_5b0;
  ulonglong local_5a8;
  longlong *local_5a0;
  undefined8 local_598;
  undefined8 *******local_590 [2];
  size_t local_580;
  ulonglong local_578;
  longlong local_570 [5];
  undefined1 local_548 [13];
  char local_53b [32];
  char local_51b [40];
  char local_4f3 [1195];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_598 = 0xfffffffffffffffe;
  local_40 = DAT_18008f028 ^ (ulonglong)auStackY_608;
  local_48 = DAT_18006c094;
  local_44 = DAT_18006c098;
  local_5d6 = '\0';
  local_5d7 = '\0';
  local_5d2 = 0;
  local_5d4 = 0;
  local_5d0 = param_1;
  local_5a0 = param_3;
  puVar4 = FUN_180001350();
  uVar20 = *(ulonglong *)(puVar4 + 0x70) / 0xf;
  puVar4 = FUN_180042930(param_3,0);
  if ((puVar4 == (undefined *)0x0) ||
     (iVar3 = _strnicmp((char *)&local_48,puVar4 + 6,4), iVar3 != 0)) goto LAB_18004bb47;
  uVar5 = 0;
  memset(local_548,0,0x500);
  DAT_180117f98 = local_548;
  uVar16 = *(ushort *)(puVar4 + 4);
  piVar18 = (int *)(puVar4 + 6);
  uVar5 = FUN_18004adb0((longlong)(puVar4 + 4),uVar5,piVar18,
                        (uint)(ushort)(uVar16 << 8 | uVar16 >> 8));
  uVar17 = SUB81(piVar18,0);
  if ((int)uVar5 != 0) {
    FUN_180001780((longlong)local_590);
    puVar6 = (undefined8 *)FUN_1800016b0(local_590);
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_5d8 = 0;
    FUN_180001300((undefined1 *)puVar6,&local_5d8);
    uVar15 = 0xffffffffffffffff;
    do {
      uVar14 = uVar15 + 1;
      lVar2 = uVar15 + 1;
      uVar15 = uVar14;
    } while (local_51b[lVar2] != '\0');
    if ((ulonglong)puVar6[3] < uVar14) {
      FUN_1800086f0((longlong)local_590,uVar14,uVar17,local_51b);
    }
    else {
      puVar9 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar9 = (undefined8 *)*puVar6;
      }
      puVar6[2] = uVar14;
      memmove(puVar9,local_51b,uVar14);
      local_5d8 = 0;
      FUN_180001300((undefined1 *)((longlong)puVar9 + uVar14),&local_5d8);
    }
    pppppppuVar12 = local_590;
    if (0xf < local_578) {
      pppppppuVar12 = local_590[0];
    }
    if (local_580 == 0) {
LAB_18004b588:
      uVar17 = (undefined1)local_580;
      iVar3 = -1;
    }
    else {
      pvVar7 = memchr(pppppppuVar12,0x3c,local_580);
      uVar17 = (undefined1)local_580;
      if (pvVar7 == (void *)0x0) goto LAB_18004b588;
      iVar3 = (int)pvVar7 - (int)pppppppuVar12;
    }
    plVar10 = (longlong *)(param_1 + 0x10);
    uVar15 = 0xffffffffffffffff;
    if (iVar3 < 0) {
      do {
        uVar14 = uVar15 + 1;
        lVar2 = uVar15 + 1;
        uVar15 = uVar14;
      } while (local_51b[lVar2] != '\0');
      puVar6 = (undefined8 *)FUN_1800016b0(plVar10);
      if ((ulonglong)puVar6[3] < uVar14) {
        pcVar11 = local_51b;
        goto LAB_18004b652;
      }
      puVar9 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar9 = (undefined8 *)*puVar6;
      }
      puVar6[2] = uVar14;
      memmove(puVar9,local_51b,uVar14);
      uVar17 = (undefined1)uVar15;
      local_5d8 = 0;
      FUN_180001300((undefined1 *)((longlong)puVar9 + uVar14),&local_5d8);
    }
    else {
      do {
        uVar14 = uVar15 + 1;
        lVar2 = uVar15 + 1;
        uVar15 = uVar14;
      } while (local_53b[lVar2] != '\0');
      puVar6 = (undefined8 *)FUN_1800016b0(plVar10);
      if ((ulonglong)puVar6[3] < uVar14) {
        pcVar11 = local_53b;
LAB_18004b652:
        FUN_1800086f0((longlong)plVar10,uVar14,uVar17,pcVar11);
      }
      else {
        puVar9 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar9 = (undefined8 *)*puVar6;
        }
        puVar6[2] = uVar14;
        memmove(puVar9,local_53b,uVar14);
        uVar17 = (undefined1)uVar15;
        local_5d8 = 0;
        FUN_180001300((undefined1 *)((longlong)puVar9 + uVar14),&local_5d8);
      }
    }
    FUN_180001780((longlong)local_5c0);
    puVar6 = (undefined8 *)FUN_1800016b0(local_5c0);
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_5d8 = 0;
    FUN_180001300((undefined1 *)puVar6,&local_5d8);
    uVar15 = 0xffffffffffffffff;
    do {
      uVar14 = uVar15 + 1;
      lVar2 = uVar15 + 1;
      uVar15 = uVar14;
    } while (local_53b[lVar2] != '\0');
    if ((ulonglong)puVar6[3] < uVar14) {
      FUN_1800086f0((longlong)local_5c0,uVar14,uVar17,local_53b);
    }
    else {
      puVar9 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar9 = (undefined8 *)*puVar6;
      }
      puVar6[2] = uVar14;
      memmove(puVar9,local_53b,uVar14);
      uVar17 = (undefined1)uVar15;
      local_5d8 = 0;
      FUN_180001300((undefined1 *)((longlong)puVar9 + uVar14),&local_5d8);
    }
    local_5c8 = local_5c0;
    if ((undefined8 ********)(param_2 + 0x68) != local_5c0) {
      pppppppuVar12 = local_5c0;
      if (0xf < local_5a8) {
        pppppppuVar12 = local_5c0[0];
      }
      uVar15 = local_5b0;
      FUN_1800071e0((longlong)(param_2 + 0x68),pppppppuVar12,local_5b0);
      uVar17 = (undefined1)uVar15;
    }
    FUN_180001630((longlong *)local_5c0);
    FUN_180001780((longlong)local_5c0);
    puVar6 = (undefined8 *)FUN_1800016b0(local_5c0);
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_5d8 = 0;
    FUN_180001300((undefined1 *)puVar6,&local_5d8);
    uVar15 = 0xffffffffffffffff;
    do {
      uVar14 = uVar15 + 1;
      lVar2 = uVar15 + 1;
      uVar15 = uVar14;
    } while (local_51b[lVar2] != '\0');
    if ((ulonglong)puVar6[3] < uVar14) {
      FUN_1800086f0((longlong)local_5c0,uVar14,uVar17,local_51b);
    }
    else {
      puVar9 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar9 = (undefined8 *)*puVar6;
      }
      puVar6[2] = uVar14;
      memmove(puVar9,local_51b,uVar14);
      uVar17 = (undefined1)uVar15;
      local_5d8 = 0;
      FUN_180001300((undefined1 *)((longlong)puVar9 + uVar14),&local_5d8);
    }
    local_5c8 = local_5c0;
    if ((undefined8 ********)(param_2 + 0x88) != local_5c0) {
      pppppppuVar12 = local_5c0;
      if (0xf < local_5a8) {
        pppppppuVar12 = local_5c0[0];
      }
      FUN_1800071e0((longlong)(param_2 + 0x88),pppppppuVar12,local_5b0);
      uVar17 = (undefined1)local_5b0;
    }
    FUN_180001630((longlong *)local_5c0);
    local_5c8 = local_5c0;
    plVar8 = (longlong *)FUN_180007060((longlong)local_5c0,plVar10);
    plVar8 = (longlong *)FUN_180017060((longlong)local_570,plVar8);
    FUN_180019970(plVar10,plVar8);
    FUN_180001630(local_570);
    plVar8 = (longlong *)(param_1 + 0x60);
    if (plVar8 != plVar10) {
      plVar13 = plVar10;
      if (0xf < *(ulonglong *)(param_1 + 0x28)) {
        plVar13 = (longlong *)*plVar10;
      }
      uVar15 = *(ulonglong *)(param_1 + 0x20);
      FUN_1800071e0((longlong)plVar8,plVar13,uVar15);
      uVar17 = (undefined1)uVar15;
    }
    puVar6 = (undefined8 *)(local_5d0 + 0x30);
    uVar15 = 0xffffffffffffffff;
    do {
      uVar14 = uVar15 + 1;
      lVar2 = uVar15 + 1;
      uVar15 = uVar14;
    } while (local_4f3[lVar2] != '\0');
    puVar9 = (undefined8 *)FUN_1800016b0(puVar6);
    if ((ulonglong)puVar9[3] < uVar14) {
      FUN_1800086f0((longlong)puVar6,uVar14,uVar17,local_4f3);
    }
    else {
      _Dst = puVar9;
      if (0xf < (ulonglong)puVar9[3]) {
        _Dst = (undefined8 *)*puVar9;
      }
      puVar9[2] = uVar14;
      memmove(_Dst,local_4f3,uVar14);
      local_5d8 = 0;
      FUN_180001300((undefined1 *)((longlong)_Dst + uVar14),&local_5d8);
    }
    local_5c8 = (undefined8 *******)local_570;
    plVar10 = (longlong *)FUN_180007060((longlong)local_570,plVar10);
    FUN_1800173f0(param_2,plVar10);
    local_5c8 = (undefined8 *******)local_570;
    plVar10 = (longlong *)FUN_180007060((longlong)local_570,puVar6);
    FUN_1800174f0(param_2,plVar10);
    param_1 = local_5d0;
    if (*(longlong *)(local_5d0 + 0x70) != 0) {
      *(undefined4 *)(local_5d0 + 0x58) = 1;
      local_5c8 = (undefined8 *******)local_570;
      plVar10 = (longlong *)FUN_180007060((longlong)local_570,plVar8);
      param_1 = local_5d0;
      FUN_180017550(param_2,*(undefined4 *)(local_5d0 + 0x58),plVar10);
    }
    FUN_180001630((longlong *)local_590);
    param_3 = local_5a0;
  }
  local_5d0 = 2;
  pcVar11 = FUN_180042930(param_3,2);
  if ((pcVar11 != (char *)0x0) && (*pcVar11 == -1)) {
    uVar15 = 2;
    do {
      if ((longlong)uVar20 <= (longlong)uVar15) {
        if ((longlong)uVar20 < (longlong)uVar15) goto LAB_18004bb47;
        goto LAB_18004bafe;
      }
      switch(pcVar11[1]) {
      case -0x40:
        uVar16 = *(ushort *)(pcVar11 + 2) << 8 | *(ushort *)(pcVar11 + 2) >> 8;
        pcVar11 = FUN_180042930(param_3,uVar15 + 4);
        if ((pcVar11 == (char *)0x0) || (*pcVar11 != '\b')) goto LAB_18004bb47;
        local_5d4 = *(ushort *)(pcVar11 + 1) << 8 | *(ushort *)(pcVar11 + 1) >> 8;
        local_5d2 = *(ushort *)(pcVar11 + 3) << 8 | *(ushort *)(pcVar11 + 3) >> 8;
        local_5d7 = '\x01';
        break;
      default:
        uVar16 = *(ushort *)(pcVar11 + 2) << 8 | *(ushort *)(pcVar11 + 2) >> 8;
        break;
      case -0x26:
        if (local_5d7 == '\0') {
          FUN_18004c480(param_1,param_2,param_3,&local_5d0,(uint)uVar20);
          *(ulonglong *)(param_2 + 0x10) = local_5d0;
          goto LAB_18004bb47;
        }
        uVar16 = *(ushort *)(pcVar11 + 2) << 8 | *(ushort *)(pcVar11 + 2) >> 8;
        puVar4 = FUN_180042930(param_3,uVar15 + 4);
        if (puVar4 == (undefined *)0x0) goto LAB_18004bb47;
        local_5d6 = '\x01';
        break;
      case -1:
        uVar16 = 0;
      }
      uVar15 = (ulonglong)uVar16 + 2 + uVar15;
      local_5d0 = uVar15;
      pcVar11 = FUN_180042930(param_3,uVar15);
      if (pcVar11 == (char *)0x0) goto LAB_18004bb47;
    } while (local_5d6 == '\0');
    uVar1 = (uint)local_5d4 * (uint)local_5d2 * 3;
    puVar4 = FUN_180042930(param_3,uVar15);
    if (puVar4 != (undefined *)0x0) {
      uVar19 = (uint)uVar20;
      if (uVar1 != 0) {
        uVar19 = uVar1;
      }
      FUN_18004c480(param_1,param_2,param_3,&local_5d0,uVar19);
      uVar15 = local_5d0;
LAB_18004bafe:
      *(undefined4 *)(param_2 + 0x18) = 0x23;
      puVar6 = (undefined8 *)(param_1 + 0x60);
      if (0xf < *(ulonglong *)(param_1 + 0x78)) {
        puVar6 = (undefined8 *)*puVar6;
      }
      uVar20 = FUN_18000f820((longlong)puVar6,*(ulonglong *)(param_1 + 0x70),0,"Insta360",8);
      if (uVar20 != 0xffffffffffffffff) {
        *(undefined4 *)(param_2 + 0x18) = 0x99;
      }
      *(ulonglong *)(param_2 + 0x10) = uVar15;
    }
  }
LAB_18004bb47:
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_608);
  return;
}

