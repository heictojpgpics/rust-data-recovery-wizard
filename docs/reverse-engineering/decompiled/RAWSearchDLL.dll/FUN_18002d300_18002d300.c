// Function: FUN_18002d300
// Address: 18002d300
// Size: 765 bytes


void FUN_18002d300(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 ****ppppuVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 ****ppppuVar11;
  ulonglong _Size;
  undefined1 uVar13;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [32];
  undefined8 ***local_90 [2];
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_68;
  char cStack_60;
  char cStack_5f;
  char cStack_5e;
  char cStack_5d;
  char cStack_5c;
  char cStack_5b;
  char cStack_5a;
  char cStack_59;
  char cStack_58;
  char cStack_57;
  char cStack_56;
  char cStack_55;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  char local_2a;
  undefined1 local_29;
  ulonglong local_28;
  ulonglong uVar12;
  
  local_b8 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_e8;
  local_29 = 0;
  if ((param_4 <= *(longlong *)(param_1 + 8)) &&
     ((ulonglong)(*(uint *)(param_6 + 8) + 0x3f) <
      (ulonglong)((param_5 - *(longlong *)(param_1 + 8)) * (longlong)(int)param_3))) {
    pcVar10 = (char *)(*(longlong *)(param_1 + 0x130) + (ulonglong)*(uint *)(param_6 + 8));
    cVar5 = *pcVar10;
    local_68._0_1_ = cVar5;
    local_68._1_1_ = pcVar10[1];
    local_68._2_1_ = pcVar10[2];
    local_68._3_1_ = pcVar10[3];
    local_68._4_1_ = pcVar10[4];
    local_68._5_1_ = pcVar10[5];
    local_68._6_1_ = pcVar10[6];
    local_68._7_1_ = pcVar10[7];
    cStack_60 = pcVar10[8];
    cStack_5f = pcVar10[9];
    cStack_5e = pcVar10[10];
    cStack_5d = pcVar10[0xb];
    cStack_5c = pcVar10[0xc];
    cStack_5b = pcVar10[0xd];
    cStack_5a = pcVar10[0xe];
    cStack_59 = pcVar10[0xf];
    cStack_58 = pcVar10[0x10];
    cStack_57 = pcVar10[0x11];
    cStack_56 = pcVar10[0x12];
    cStack_55 = pcVar10[0x13];
    cStack_54 = pcVar10[0x14];
    cStack_53 = pcVar10[0x15];
    cStack_52 = pcVar10[0x16];
    cStack_51 = pcVar10[0x17];
    cStack_50 = pcVar10[0x18];
    cStack_4f = pcVar10[0x19];
    cStack_4e = pcVar10[0x1a];
    cStack_4d = pcVar10[0x1b];
    cStack_4c = pcVar10[0x1c];
    cStack_4b = pcVar10[0x1d];
    cStack_4a = pcVar10[0x1e];
    cStack_49 = pcVar10[0x1f];
    local_48 = *(undefined8 *)(pcVar10 + 0x20);
    uStack_40 = *(undefined8 *)(pcVar10 + 0x28);
    local_38 = *(undefined8 *)(pcVar10 + 0x30);
    local_30 = *(undefined4 *)(pcVar10 + 0x38);
    local_2c = *(undefined2 *)(pcVar10 + 0x3c);
    local_2a = pcVar10[0x3e];
    pcVar10 = (char *)&local_68;
    while (cVar5 != '\0') {
      if ((byte)(cVar5 + 0x9fU) < 0x1a) {
        *pcVar10 = cVar5 + -0x20;
      }
      pcVar10 = pcVar10 + 1;
      cVar5 = *pcVar10;
    }
    FUN_180001780((longlong)local_90);
    uVar13 = (undefined1)param_3;
    puVar6 = (undefined8 *)FUN_1800016b0(local_90);
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_c8[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_c8);
    uVar12 = 0xffffffffffffffff;
    do {
      _Size = uVar12 + 1;
      lVar4 = uVar12 + 1;
      uVar12 = _Size;
    } while (*(char *)((longlong)&local_68 + lVar4) != '\0');
    if ((ulonglong)puVar6[3] < _Size) {
      FUN_1800086f0((longlong)local_90,_Size,uVar13,&local_68);
    }
    else {
      puVar9 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar9 = (undefined8 *)*puVar6;
      }
      puVar6[2] = _Size;
      memmove(puVar9,&local_68,_Size);
      local_c8[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar9 + _Size),local_c8);
    }
    local_c0 = (undefined8 *)local_b0;
    plVar7 = (longlong *)FUN_180007060((longlong)local_b0,local_90);
    ppppuVar8 = (undefined8 ****)FUN_180017060((longlong)&local_68,plVar7);
    if (local_90 != ppppuVar8) {
      FUN_180001630((longlong *)local_90);
      puVar9 = (undefined8 *)FUN_1800016b0(ppppuVar8);
      uVar1 = puVar9[1];
      uVar2 = puVar9[2];
      uVar3 = puVar9[3];
      *puVar6 = *puVar9;
      puVar6[1] = uVar1;
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      local_c8[0] = 0;
      FUN_180001300((undefined1 *)puVar9,local_c8);
    }
    FUN_180001630(&local_68);
    local_c0 = &local_68;
    plVar7 = (longlong *)FUN_180007060((longlong)&local_68,local_90);
    cVar5 = FUN_18002a1e0(plVar7);
    ppppuVar8 = (undefined8 ****)(param_1 + 0x158);
    if (cVar5 == '\0') {
      if (ppppuVar8 != local_90) {
        ppppuVar11 = local_90;
        if (0xf < local_78) {
          ppppuVar11 = (undefined8 ****)local_90[0];
        }
        FUN_1800071e0((longlong)ppppuVar8,ppppuVar11,local_80);
      }
    }
    else {
      puVar9 = (undefined8 *)FUN_1800016b0(ppppuVar8);
      puVar6 = puVar9;
      if (0xf < (ulonglong)puVar9[3]) {
        puVar6 = (undefined8 *)*puVar9;
      }
      puVar9[2] = 0;
      local_c8[0] = 0;
      FUN_180001300((undefined1 *)puVar6,local_c8);
    }
    if ((*(longlong *)(param_1 + 0x148) == 0) && (*(longlong *)(param_1 + 0x168) != 0)) {
      if ((undefined8 ****)(param_1 + 0x138) != ppppuVar8) {
        ppppuVar11 = ppppuVar8;
        if (0xf < *(ulonglong *)(param_1 + 0x170)) {
          ppppuVar11 = (undefined8 ****)*ppppuVar8;
        }
        FUN_1800071e0(param_1 + 0x138,ppppuVar11,*(ulonglong *)(param_1 + 0x168));
      }
      local_c0 = &local_68;
      plVar7 = (longlong *)FUN_180007060((longlong)&local_68,ppppuVar8);
      FUN_180017550(param_1,6,plVar7);
      puVar9 = (undefined8 *)FUN_1800016b0(ppppuVar8);
      puVar6 = puVar9;
      if (0xf < (ulonglong)puVar9[3]) {
        puVar6 = (undefined8 *)*puVar9;
      }
      puVar9[2] = 0;
      local_c8[0] = 0;
      FUN_180001300((undefined1 *)puVar6,local_c8);
    }
    FUN_180001630((longlong *)local_90);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_e8);
  return;
}

