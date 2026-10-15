// Function: FUN_18002b0c0
// Address: 18002b0c0
// Size: 1143 bytes


void FUN_18002b0c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  void *_Dst;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 ***pppuVar8;
  undefined8 *puVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ushort uVar13;
  undefined1 uVar14;
  longlong lVar15;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined8 local_88;
  undefined8 **local_80 [2];
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60 [4];
  longlong local_40 [4];
  ulonglong local_20;
  
  local_88 = 0xfffffffffffffffe;
  local_20 = DAT_18008f028 ^ (ulonglong)auStackY_c8;
  if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_3 + 4),*(undefined1 *)(param_3 + 5)),
                        *(undefined1 *)(param_3 + 6)),*(undefined1 *)(param_3 + 7)) == 0x6d766864) {
    lVar15 = param_3;
    FUN_180001780((longlong)local_80);
    puVar6 = (undefined8 *)FUN_1800016b0(local_80);
    puVar6[3] = 0xf;
    local_98[0] = 0;
    puVar9 = puVar6;
    FUN_180001300((undefined1 *)puVar6,local_98);
    if (0xf < (ulonglong)puVar9[3]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    puVar6[2] = 0;
    local_98[0] = 0;
    FUN_180001300((undefined1 *)puVar9,local_98);
    if (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar15 + 8),*(undefined1 *)(lVar15 + 9)),
                          *(undefined1 *)(lVar15 + 10)),*(undefined1 *)(lVar15 + 0xb)) == 0) {
      uVar4 = (ushort)((uint)*(undefined4 *)(lVar15 + 0x10) >> 0x10);
      uVar5 = (ushort)*(undefined4 *)(lVar15 + 0x10);
      uVar11 = (ulonglong)CONCAT22(uVar4,uVar5 << 8 | uVar5 >> 8);
      FUN_18002b540(uVar11,(longlong)local_60,
                    (ulonglong)(ushort)(uVar4 << 8 | uVar4 >> 8) | (uVar11 & 0xffff) << 0x10);
      local_90 = local_40;
      plVar7 = (longlong *)FUN_180007060((longlong)local_40,local_60);
      FUN_1800174f0(param_1,plVar7);
      uVar4 = (ushort)((uint)*(undefined4 *)(param_3 + 0x14) >> 0x10);
      uVar10 = (ushort)*(undefined4 *)(param_3 + 0x14);
      uVar5 = (ushort)((uint)*(undefined4 *)(param_3 + 0x18) >> 0x10);
      uVar13 = (ushort)*(undefined4 *)(param_3 + 0x18);
      lVar12 = (ulonglong)(ushort)(uVar13 << 8 | uVar13 >> 8) << 0x10;
      lVar15 = (longlong)(int)((uint)(ushort)(uVar5 << 8 | uVar5 >> 8) | (uint)lVar12) /
               (longlong)CONCAT22(uVar10 << 8 | uVar10 >> 8,uVar4 << 8 | uVar4 >> 8);
      uVar14 = (undefined1)lVar15;
      pppuVar8 = (undefined8 ***)FUN_18002b750(lVar12,(longlong)local_40,(int)lVar15);
      if (local_80 != pppuVar8) {
        FUN_180001630((longlong *)local_80);
        puVar9 = (undefined8 *)FUN_1800016b0(pppuVar8);
        uVar1 = puVar9[1];
        uVar2 = puVar9[2];
        uVar3 = puVar9[3];
        *puVar6 = *puVar9;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        puVar9[2] = 0;
        puVar9[3] = 0xf;
        local_98[0] = 0;
        FUN_180001300((undefined1 *)puVar9,local_98);
      }
      FUN_180001630(local_40);
    }
    else {
      uVar4 = (ushort)((ulonglong)*(undefined8 *)(lVar15 + 0x14) >> 0x20);
      lVar12 = (ulonglong)(ushort)(uVar4 << 8 | uVar4 >> 8) << 0x10;
      uVar4 = (ushort)((ulonglong)*(undefined8 *)(lVar15 + 0x14) >> 0x30);
      FUN_18002b540(lVar12,(longlong)local_60,
                    (longlong)(int)lVar12 | (ulonglong)(ushort)(uVar4 << 8 | uVar4 >> 8));
      local_90 = local_40;
      plVar7 = (longlong *)FUN_180007060((longlong)local_40,local_60);
      FUN_1800174f0(param_1,plVar7);
      uVar4 = (ushort)((uint)*(undefined4 *)(param_3 + 0x1c) >> 0x10);
      uVar10 = (ushort)*(undefined4 *)(param_3 + 0x1c);
      uVar5 = (ushort)((ulonglong)*(undefined8 *)(param_3 + 0x24) >> 0x30);
      uVar13 = (ushort)((ulonglong)*(undefined8 *)(param_3 + 0x24) >> 0x20);
      lVar12 = (ulonglong)(ushort)(uVar13 << 8 | uVar13 >> 8) << 0x10;
      lVar15 = (longlong)(int)((uint)(ushort)(uVar5 << 8 | uVar5 >> 8) | (uint)lVar12) /
               (longlong)CONCAT22(uVar10 << 8 | uVar10 >> 8,uVar4 << 8 | uVar4 >> 8);
      uVar14 = (undefined1)lVar15;
      pppuVar8 = (undefined8 ***)FUN_18002b750(lVar12,(longlong)local_40,(int)lVar15);
      if (local_80 != pppuVar8) {
        FUN_180001630((longlong *)local_80);
        puVar9 = (undefined8 *)FUN_1800016b0(pppuVar8);
        uVar1 = puVar9[1];
        uVar2 = puVar9[2];
        uVar3 = puVar9[3];
        *puVar6 = *puVar9;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        puVar9[2] = 0;
        puVar9[3] = 0xf;
        local_98[0] = 0;
        FUN_180001300((undefined1 *)puVar9,local_98);
      }
      FUN_180001630(local_40);
    }
    FUN_180001630(local_60);
    if (local_70 != 0) {
      FUN_180001780((longlong)local_60);
      puVar9 = (undefined8 *)FUN_1800016b0(local_60);
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      local_98[0] = 0;
      puVar6 = puVar9;
      FUN_180001300((undefined1 *)puVar9,local_98);
      if ((ulonglong)puVar6[3] < 0x10) {
        FUN_1800086f0((longlong)local_60,0x10,uVar14,"Lost Name File (");
      }
      else {
        _Dst = (void *)*puVar6;
        puVar6[2] = 0x10;
        uVar14 = 0x10;
        memmove(_Dst,"Lost Name File (",0x10);
        local_98[0] = 0;
        FUN_180001300((undefined1 *)((longlong)_Dst + 0x10),local_98);
      }
      pppuVar8 = local_80;
      if (0xf < local_68) {
        pppuVar8 = (undefined8 ***)local_80[0];
      }
      lVar15 = puVar9[2];
      if ((ulonglong)(puVar9[3] - lVar15) < local_70) {
        FUN_1800088a0((longlong)local_60,local_70,uVar14,pppuVar8,local_70);
      }
      else {
        puVar9[2] = local_70 + lVar15;
        puVar6 = puVar9;
        if (0xf < (ulonglong)puVar9[3]) {
          puVar6 = (undefined8 *)*puVar9;
        }
        uVar11 = local_70;
        memmove((void *)((longlong)puVar6 + lVar15),pppuVar8,local_70);
        uVar14 = (undefined1)uVar11;
        local_98[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar6 + lVar15 + local_70),local_98);
      }
      lVar15 = puVar9[2];
      if ((ulonglong)(puVar9[3] - lVar15) < 8) {
        FUN_1800088a0((longlong)local_60,8,uVar14,")_EaseUS",8);
      }
      else {
        puVar9[2] = lVar15 + 8;
        if (0xf < (ulonglong)puVar9[3]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        memmove((void *)((longlong)puVar9 + lVar15),")_EaseUS",8);
        local_98[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar9 + lVar15 + 8),local_98);
      }
      local_90 = local_40;
      plVar7 = (longlong *)FUN_180007060((longlong)local_40,local_60);
      FUN_1800173f0(param_1,plVar7);
      FUN_180001630(local_60);
    }
    FUN_180001630((longlong *)local_80);
  }
  __security_check_cookie(local_20 ^ (ulonglong)auStackY_c8);
  return;
}

