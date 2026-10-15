// Function: FUN_180039470
// Address: 180039470
// Size: 809 bytes


void FUN_180039470(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined8 ****ppppuVar13;
  ulonglong _Size;
  undefined1 uVar14;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [8];
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [32];
  undefined8 ***local_b0 [2];
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 local_88;
  char cStack_80;
  char cStack_7f;
  char cStack_7e;
  char cStack_7d;
  char cStack_7c;
  char cStack_7b;
  char cStack_7a;
  char cStack_79;
  char cStack_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  char cStack_70;
  char cStack_6f;
  char cStack_6e;
  char cStack_6d;
  char cStack_6c;
  char cStack_6b;
  char cStack_6a;
  char cStack_69;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  char local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_d8 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_118;
  uVar1 = *(uint *)(param_6 + 8);
  local_49 = 0;
  uVar11 = (ulonglong)(*(int *)(param_6 + 0xc) + uVar1);
  if (*(longlong *)(param_1 + 0x138) < (longlong)uVar11) {
    *(ulonglong *)(param_1 + 0x138) = uVar11;
  }
  if (((*(longlong *)(param_1 + 0x178) != 0) && (param_4 <= *(longlong *)(param_1 + 8))) &&
     ((longlong)(ulonglong)(uVar1 + 0x3f) <=
      (param_5 - *(longlong *)(param_1 + 8)) * (longlong)(int)param_3)) {
    lVar6 = FUN_180038fb0(param_1,param_2,(int)param_3,param_4,param_5);
    uVar14 = (undefined1)param_3;
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x128) = 1;
    }
    else if (*(int *)(param_1 + 0x238) == 0) {
      *(undefined4 *)(param_1 + 0x238) = 1;
      pcVar12 = (char *)(lVar6 + (ulonglong)uVar1);
      cVar5 = *pcVar12;
      local_88._0_1_ = cVar5;
      local_88._1_1_ = pcVar12[1];
      local_88._2_1_ = pcVar12[2];
      local_88._3_1_ = pcVar12[3];
      local_88._4_1_ = pcVar12[4];
      local_88._5_1_ = pcVar12[5];
      local_88._6_1_ = pcVar12[6];
      local_88._7_1_ = pcVar12[7];
      cStack_80 = pcVar12[8];
      cStack_7f = pcVar12[9];
      cStack_7e = pcVar12[10];
      cStack_7d = pcVar12[0xb];
      cStack_7c = pcVar12[0xc];
      cStack_7b = pcVar12[0xd];
      cStack_7a = pcVar12[0xe];
      cStack_79 = pcVar12[0xf];
      cStack_78 = pcVar12[0x10];
      cStack_77 = pcVar12[0x11];
      cStack_76 = pcVar12[0x12];
      cStack_75 = pcVar12[0x13];
      cStack_74 = pcVar12[0x14];
      cStack_73 = pcVar12[0x15];
      cStack_72 = pcVar12[0x16];
      cStack_71 = pcVar12[0x17];
      cStack_70 = pcVar12[0x18];
      cStack_6f = pcVar12[0x19];
      cStack_6e = pcVar12[0x1a];
      cStack_6d = pcVar12[0x1b];
      cStack_6c = pcVar12[0x1c];
      cStack_6b = pcVar12[0x1d];
      cStack_6a = pcVar12[0x1e];
      cStack_69 = pcVar12[0x1f];
      local_68 = *(undefined8 *)(pcVar12 + 0x20);
      uStack_60 = *(undefined8 *)(pcVar12 + 0x28);
      local_58 = *(undefined8 *)(pcVar12 + 0x30);
      local_50 = *(undefined4 *)(pcVar12 + 0x38);
      local_4c = *(undefined2 *)(pcVar12 + 0x3c);
      local_4a = pcVar12[0x3e];
      pcVar12 = (char *)&local_88;
      while (cVar5 != '\0') {
        if ((byte)(cVar5 + 0x9fU) < 0x1a) {
          *pcVar12 = cVar5 + -0x20;
        }
        pcVar12 = pcVar12 + 1;
        cVar5 = *pcVar12;
      }
      FUN_180001780((longlong)local_b0);
      puVar7 = (undefined8 *)FUN_1800016b0(local_b0);
      puVar7[2] = 0;
      puVar7[3] = 0xf;
      local_e8[0] = 0;
      FUN_180001300((undefined1 *)puVar7,local_e8);
      uVar11 = 0xffffffffffffffff;
      do {
        _Size = uVar11 + 1;
        lVar6 = uVar11 + 1;
        uVar11 = _Size;
      } while (*(char *)((longlong)&local_88 + lVar6) != '\0');
      if ((ulonglong)puVar7[3] < _Size) {
        FUN_1800086f0((longlong)local_b0,_Size,uVar14,&local_88);
      }
      else {
        puVar10 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar10 = (undefined8 *)*puVar7;
        }
        puVar7[2] = _Size;
        memmove(puVar10,&local_88,_Size);
        local_e8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar10 + _Size),local_e8);
      }
      local_e0 = (undefined8 *)local_d0;
      plVar8 = (longlong *)FUN_180007060((longlong)local_d0,local_b0);
      ppppuVar9 = (undefined8 ****)FUN_180017060((longlong)&local_88,plVar8);
      if (local_b0 != ppppuVar9) {
        FUN_180001630((longlong *)local_b0);
        puVar10 = (undefined8 *)FUN_1800016b0(ppppuVar9);
        uVar2 = puVar10[1];
        uVar3 = puVar10[2];
        uVar4 = puVar10[3];
        *puVar7 = *puVar10;
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        puVar10[2] = 0;
        puVar10[3] = 0xf;
        local_e8[0] = 0;
        FUN_180001300((undefined1 *)puVar10,local_e8);
      }
      FUN_180001630(&local_88);
      local_e0 = &local_88;
      plVar8 = (longlong *)FUN_180007060((longlong)&local_88,local_b0);
      cVar5 = FUN_18002a1e0(plVar8);
      ppppuVar9 = (undefined8 ****)(param_1 + 0x1a8);
      if (cVar5 == '\0') {
        if (ppppuVar9 != local_b0) {
          ppppuVar13 = local_b0;
          if (0xf < local_98) {
            ppppuVar13 = (undefined8 ****)local_b0[0];
          }
          FUN_1800071e0((longlong)ppppuVar9,ppppuVar13,local_a0);
        }
      }
      else {
        puVar10 = (undefined8 *)FUN_1800016b0(ppppuVar9);
        puVar7 = puVar10;
        if (0xf < (ulonglong)puVar10[3]) {
          puVar7 = (undefined8 *)*puVar10;
        }
        puVar10[2] = 0;
        local_e8[0] = 0;
        FUN_180001300((undefined1 *)puVar7,local_e8);
      }
      if (*(longlong *)(param_1 + 0x1b8) - 1U < 0x1e) {
        local_e0 = &local_88;
        plVar8 = (longlong *)FUN_180007060((longlong)&local_88,ppppuVar9);
        FUN_180017550(param_1,1,plVar8);
      }
      else {
        puVar10 = (undefined8 *)FUN_1800016b0(ppppuVar9);
        puVar7 = puVar10;
        if (0xf < (ulonglong)puVar10[3]) {
          puVar7 = (undefined8 *)*puVar10;
        }
        puVar10[2] = 0;
        local_e8[0] = 0;
        FUN_180001300((undefined1 *)puVar7,local_e8);
      }
      FUN_180001630((longlong *)local_b0);
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_118);
  return;
}

