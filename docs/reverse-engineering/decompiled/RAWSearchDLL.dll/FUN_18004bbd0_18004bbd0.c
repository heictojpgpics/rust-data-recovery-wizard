// Function: FUN_18004bbd0
// Address: 18004bbd0
// Size: 1454 bytes


void FUN_18004bbd0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ushort uVar12;
  undefined1 uVar13;
  int *piVar14;
  ulonglong uVar15;
  ushort uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *_Dst;
  uint uVar20;
  undefined1 auStackY_618 [32];
  undefined1 local_5e8;
  char local_5e7;
  char local_5e6;
  ushort local_5e4;
  longlong local_5e0;
  ulonglong local_5d8;
  longlong *local_5d0;
  longlong local_5c8;
  longlong *local_5c0;
  ulonglong local_5b8;
  undefined8 local_5b0;
  undefined1 local_5a8 [32];
  longlong local_588 [4];
  longlong local_568 [4];
  undefined1 local_548 [13];
  char local_53b [32];
  char local_51b [40];
  char local_4f3 [1195];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_5b0 = 0xfffffffffffffffe;
  local_40 = DAT_18008f028 ^ (ulonglong)auStackY_618;
  local_48 = DAT_18006c09c;
  local_44 = DAT_18006c0a0;
  uVar12 = 0;
  local_5e6 = '\0';
  local_5e7 = '\0';
  local_5e4 = 0;
  uVar17 = 0;
  local_5e0 = param_1;
  local_5c8 = param_2;
  local_5c0 = param_3;
  puVar3 = FUN_180001350();
  uVar15 = *(ulonglong *)(puVar3 + 0x70);
  local_5b8 = uVar15 / 10;
  puVar3 = FUN_180042930(param_3,0);
  if ((puVar3 != (undefined *)0x0) && (iVar2 = strncmp((char *)&local_48,puVar3 + 6,4), iVar2 == 0))
  {
    uVar11 = 2;
    local_5d8 = 2;
    pcVar4 = FUN_180042930(param_3,2);
    if ((pcVar4 != (char *)0x0) && (*pcVar4 == -1)) {
      uVar5 = 0;
      memset(local_548,0,0x500);
      DAT_180117f98 = local_548;
      uVar16 = *(ushort *)(pcVar4 + 0x14);
      piVar14 = (int *)(pcVar4 + 0x16);
      uVar5 = FUN_18004adb0((longlong)(pcVar4 + 0x14),uVar5,piVar14,
                            (uint)(ushort)(uVar16 << 8 | uVar16 >> 8));
      uVar13 = SUB81(piVar14,0);
      uVar16 = 0;
      uVar15 = uVar15 / 10;
      if ((int)uVar5 != 0) {
        FUN_180001780((longlong)local_568);
        puVar6 = (undefined8 *)FUN_1800016b0(local_568);
        puVar6[2] = 0;
        puVar6[3] = 0xf;
        local_5e8 = 0;
        FUN_180001300((undefined1 *)puVar6,&local_5e8);
        uVar15 = 0xffffffffffffffff;
        do {
          uVar19 = uVar15 + 1;
          lVar1 = uVar15 + 1;
          uVar15 = uVar19;
        } while (local_51b[lVar1] != '\0');
        if ((ulonglong)puVar6[3] < uVar19) {
          FUN_1800086f0((longlong)local_568,uVar19,uVar13,local_51b);
        }
        else {
          puVar8 = puVar6;
          if (0xf < (ulonglong)puVar6[3]) {
            puVar8 = (undefined8 *)*puVar6;
          }
          puVar6[2] = uVar19;
          memmove(puVar8,local_51b,uVar19);
          uVar13 = (undefined1)uVar15;
          local_5e8 = 0;
          FUN_180001300((undefined1 *)((longlong)puVar8 + uVar19),&local_5e8);
        }
        lVar1 = local_5e0;
        plVar9 = (longlong *)(local_5e0 + 0x10);
        uVar15 = 0xffffffffffffffff;
        do {
          uVar19 = uVar15 + 1;
          lVar18 = uVar15 + 1;
          uVar15 = uVar19;
        } while (local_53b[lVar18] != '\0');
        puVar6 = (undefined8 *)FUN_1800016b0(plVar9);
        if ((ulonglong)puVar6[3] < uVar19) {
          FUN_1800086f0((longlong)plVar9,uVar19,uVar13,local_53b);
          lVar18 = lVar1;
        }
        else {
          puVar8 = puVar6;
          if (0xf < (ulonglong)puVar6[3]) {
            puVar8 = (undefined8 *)*puVar6;
          }
          puVar6[2] = uVar19;
          memmove(puVar8,local_53b,uVar19);
          uVar13 = (undefined1)uVar15;
          local_5e8 = 0;
          FUN_180001300((undefined1 *)(uVar19 + (longlong)puVar8),&local_5e8);
          lVar18 = local_5e0;
        }
        local_5d0 = (longlong *)local_5a8;
        plVar7 = (longlong *)FUN_180007060((longlong)local_5a8,plVar9);
        plVar7 = (longlong *)FUN_180017060((longlong)local_588,plVar7);
        FUN_180019970(plVar9,plVar7);
        FUN_180001630(local_588);
        plVar7 = (longlong *)(lVar18 + 0x60);
        local_5d0 = plVar7;
        if (plVar7 != plVar9) {
          plVar10 = plVar9;
          if (0xf < *(ulonglong *)(lVar1 + 0x28)) {
            plVar10 = (longlong *)*plVar9;
          }
          uVar15 = *(ulonglong *)(lVar1 + 0x20);
          FUN_1800071e0((longlong)plVar7,plVar10,uVar15);
          uVar13 = (undefined1)uVar15;
        }
        puVar6 = (undefined8 *)(lVar18 + 0x30);
        uVar15 = 0xffffffffffffffff;
        do {
          uVar19 = uVar15 + 1;
          lVar1 = uVar15 + 1;
          uVar15 = uVar19;
        } while (local_4f3[lVar1] != '\0');
        puVar8 = (undefined8 *)FUN_1800016b0(puVar6);
        if ((ulonglong)puVar8[3] < uVar19) {
          FUN_1800086f0((longlong)puVar6,uVar19,uVar13,local_4f3);
        }
        else {
          _Dst = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            _Dst = (undefined8 *)*puVar8;
          }
          puVar8[2] = uVar19;
          memmove(_Dst,local_4f3,uVar19);
          local_5e8 = 0;
          FUN_180001300((undefined1 *)((longlong)_Dst + uVar19),&local_5e8);
          plVar7 = local_5d0;
        }
        local_5d0 = local_588;
        plVar9 = (longlong *)FUN_180007060((longlong)local_588,plVar9);
        lVar18 = local_5c8;
        FUN_1800173f0(local_5c8,plVar9);
        local_5d0 = local_588;
        plVar9 = (longlong *)FUN_180007060((longlong)local_588,puVar6);
        FUN_1800174f0(lVar18,plVar9);
        lVar1 = local_5e0;
        if (*(longlong *)(local_5e0 + 0x70) != 0) {
          *(undefined4 *)(local_5e0 + 0x58) = 1;
          local_5d0 = local_588;
          plVar9 = (longlong *)FUN_180007060((longlong)local_588,plVar7);
          FUN_180017550(lVar18,*(undefined4 *)(lVar1 + 0x58),plVar9);
        }
        FUN_180001630(local_568);
        uVar17 = (uint)local_5e4;
        uVar16 = local_5e4;
        uVar15 = local_5b8;
        param_3 = local_5c0;
      }
      do {
        lVar1 = local_5c8;
        if ((longlong)uVar15 <= (longlong)uVar11) {
          if ((longlong)uVar11 <= (longlong)uVar15) goto LAB_18004c13f;
          goto LAB_18004c154;
        }
        switch(pcVar4[1]) {
        case -0x40:
          uVar12 = *(ushort *)(pcVar4 + 2) << 8 | *(ushort *)(pcVar4 + 2) >> 8;
          pcVar4 = FUN_180042930(param_3,uVar11 + 4);
          if ((pcVar4 == (char *)0x0) || (*pcVar4 != '\b')) goto LAB_18004c154;
          uVar17 = (uint)(ushort)(*(ushort *)(pcVar4 + 1) << 8 | *(ushort *)(pcVar4 + 1) >> 8);
          uVar16 = *(ushort *)(pcVar4 + 3) << 8 | *(ushort *)(pcVar4 + 3) >> 8;
          local_5e7 = '\x01';
          break;
        default:
          uVar12 = *(ushort *)(pcVar4 + 2) << 8 | *(ushort *)(pcVar4 + 2) >> 8;
          break;
        case -0x3e:
          if (uVar17 * uVar16 == 0) {
            uVar12 = *(ushort *)(pcVar4 + 2) << 8 | *(ushort *)(pcVar4 + 2) >> 8;
            pcVar4 = FUN_180042930(param_3,uVar11 + 4);
            if ((pcVar4 == (char *)0x0) || (*pcVar4 != '\b')) goto LAB_18004c154;
            uVar17 = (uint)(ushort)(*(ushort *)(pcVar4 + 1) << 8 | *(ushort *)(pcVar4 + 1) >> 8);
            uVar16 = *(ushort *)(pcVar4 + 3) << 8 | *(ushort *)(pcVar4 + 3) >> 8;
            local_5e7 = '\x01';
          }
          break;
        case -0x26:
          if (local_5e7 == '\0') {
            FUN_18004c480(local_5e0,local_5c8,param_3,&local_5d8,(uint)uVar15);
            *(ulonglong *)(lVar1 + 0x10) = local_5d8;
            goto LAB_18004c154;
          }
          uVar12 = *(ushort *)(pcVar4 + 2) << 8 | *(ushort *)(pcVar4 + 2) >> 8;
          puVar3 = FUN_180042930(param_3,uVar11 + 4);
          if (puVar3 == (undefined *)0x0) goto LAB_18004c154;
          local_5e6 = '\x01';
          break;
        case -1:
          uVar12 = 0;
        }
        uVar11 = uVar11 + (ulonglong)uVar12 + 2;
        local_5d8 = uVar11;
        pcVar4 = FUN_180042930(param_3,uVar11);
        if (pcVar4 == (char *)0x0) goto LAB_18004c154;
      } while (local_5e6 == '\0');
      uVar17 = uVar17 * uVar16 * 3;
      puVar3 = FUN_180042930(param_3,uVar11);
      if (puVar3 != (undefined *)0x0) {
        uVar20 = (uint)uVar15;
        if (uVar17 != 0) {
          uVar20 = uVar17;
        }
        FUN_18004c480(local_5e0,local_5c8,param_3,&local_5d8,uVar20);
        uVar11 = local_5d8;
LAB_18004c13f:
        *(undefined4 *)(local_5c8 + 0x18) = 0x23;
        *(ulonglong *)(local_5c8 + 0x10) = uVar11;
      }
    }
  }
LAB_18004c154:
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_618);
  return;
}

