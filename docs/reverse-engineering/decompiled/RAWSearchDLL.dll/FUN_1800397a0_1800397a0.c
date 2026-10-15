// Function: FUN_1800397a0
// Address: 1800397a0
// Size: 727 bytes


void FUN_1800397a0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
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
  undefined8 ****ppppuVar12;
  ulonglong _Size;
  undefined1 uVar13;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [8];
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [32];
  undefined8 ***local_a0 [2];
  ulonglong local_90;
  ulonglong local_88;
  undefined8 local_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_39;
  ulonglong local_38;
  
  local_c8 = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStackY_108;
  uVar1 = *(uint *)(param_6 + 8);
  local_39 = 0;
  uVar11 = (ulonglong)(*(int *)(param_6 + 0xc) + uVar1);
  if (*(longlong *)(param_1 + 0x138) < (longlong)uVar11) {
    *(ulonglong *)(param_1 + 0x138) = uVar11;
  }
  if ((param_4 <= *(longlong *)(param_1 + 8)) &&
     ((longlong)(ulonglong)(uVar1 + 0x3f) <
      (param_5 - *(longlong *)(param_1 + 8)) * (longlong)(int)param_3)) {
    lVar6 = FUN_180038fb0(param_1,param_2,(int)param_3,param_4,param_5);
    uVar13 = (undefined1)param_3;
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x128) = 1;
    }
    else if (*(int *)(param_1 + 0x23c) == 0) {
      *(undefined4 *)(param_1 + 0x23c) = 1;
      plVar8 = (longlong *)(lVar6 + (ulonglong)uVar1);
      local_78 = *plVar8;
      lStack_70 = plVar8[1];
      lStack_68 = plVar8[2];
      lStack_60 = plVar8[3];
      local_58 = plVar8[4];
      lStack_50 = plVar8[5];
      local_48 = plVar8[6];
      local_40 = (undefined4)plVar8[7];
      local_3c = *(undefined2 *)((longlong)plVar8 + 0x3c);
      local_3a = *(undefined1 *)((longlong)plVar8 + 0x3e);
      FUN_180001780((longlong)local_a0);
      puVar7 = (undefined8 *)FUN_1800016b0(local_a0);
      puVar7[2] = 0;
      puVar7[3] = 0xf;
      local_d8[0] = 0;
      FUN_180001300((undefined1 *)puVar7,local_d8);
      uVar11 = 0xffffffffffffffff;
      do {
        _Size = uVar11 + 1;
        lVar6 = uVar11 + 1;
        uVar11 = _Size;
      } while (*(char *)((longlong)&local_78 + lVar6) != '\0');
      if ((ulonglong)puVar7[3] < _Size) {
        FUN_1800086f0((longlong)local_a0,_Size,uVar13,&local_78);
      }
      else {
        puVar10 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar10 = (undefined8 *)*puVar7;
        }
        puVar7[2] = _Size;
        memmove(puVar10,&local_78,_Size);
        local_d8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar10 + _Size),local_d8);
      }
      local_d0 = (undefined8 *)local_c0;
      plVar8 = (longlong *)FUN_180007060((longlong)local_c0,local_a0);
      ppppuVar9 = (undefined8 ****)FUN_180017060((longlong)&local_78,plVar8);
      if (local_a0 != ppppuVar9) {
        FUN_180001630((longlong *)local_a0);
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
        local_d8[0] = 0;
        FUN_180001300((undefined1 *)puVar10,local_d8);
      }
      FUN_180001630(&local_78);
      local_d0 = &local_78;
      plVar8 = (longlong *)FUN_180007060((longlong)&local_78,local_a0);
      cVar5 = FUN_18002a1e0(plVar8);
      ppppuVar9 = (undefined8 ****)(param_1 + 0x1c8);
      if (cVar5 == '\0') {
        if (ppppuVar9 != local_a0) {
          ppppuVar12 = local_a0;
          if (0xf < local_88) {
            ppppuVar12 = (undefined8 ****)local_a0[0];
          }
          FUN_1800071e0((longlong)ppppuVar9,ppppuVar12,local_90);
        }
      }
      else {
        puVar10 = (undefined8 *)FUN_1800016b0(ppppuVar9);
        puVar7 = puVar10;
        if (0xf < (ulonglong)puVar10[3]) {
          puVar7 = (undefined8 *)*puVar10;
        }
        puVar10[2] = 0;
        local_d8[0] = 0;
        FUN_180001300((undefined1 *)puVar7,local_d8);
      }
      if ((*(longlong *)(param_1 + 0x1b8) == 0) && (*(longlong *)(param_1 + 0x1d8) != 0)) {
        local_d0 = &local_78;
        plVar8 = (longlong *)FUN_180007060((longlong)&local_78,ppppuVar9);
        FUN_180017550(param_1,1,plVar8);
      }
      FUN_180001630((longlong *)local_a0);
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_108);
  return;
}

