// Function: FUN_18004c9c0
// Address: 18004c9c0
// Size: 2017 bytes


void FUN_18004c9c0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 ***pppuVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  undefined1 auStackY_298 [32];
  undefined1 local_268 [4];
  undefined4 local_264;
  undefined8 local_260;
  longlong local_258;
  longlong *local_250;
  undefined8 **local_248 [2];
  ulonglong local_238;
  ulonglong local_230;
  longlong local_228 [4];
  undefined8 **local_208 [2];
  size_t local_1f8;
  ulonglong local_1f0;
  undefined8 **local_1e8 [2];
  size_t local_1d8;
  ulonglong local_1d0;
  undefined8 **local_1c8 [2];
  size_t local_1b8;
  ulonglong local_1b0;
  undefined8 **local_1a8 [2];
  size_t local_198;
  ulonglong local_190;
  longlong local_188 [4];
  longlong local_168 [4];
  longlong local_148 [4];
  longlong local_128 [4];
  longlong local_108 [4];
  longlong local_e8 [4];
  longlong local_c8 [4];
  longlong local_a8 [4];
  longlong local_88 [4];
  longlong local_68 [4];
  ulonglong local_48;
  
  local_260 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_298;
  lVar4 = 0;
  local_264 = 0;
  local_258 = param_2;
  local_250 = param_3;
  if ((ulonglong)param_3[2] < 0x11) {
    FUN_180001780(param_2);
    puVar7 = (undefined8 *)FUN_1800016b0(param_2);
    puVar7[3] = 0xf;
    local_268[0] = 0;
    FUN_180001300((undefined1 *)puVar7,local_268);
    puVar6 = puVar7;
    if (0xf < (ulonglong)puVar7[3]) {
      puVar6 = (undefined8 *)*puVar7;
    }
    puVar7[2] = 0;
    local_268[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_268);
LAB_18004d164:
    local_264 = 1;
  }
  else {
    plVar8 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      plVar8 = (longlong *)*param_3;
    }
    do {
      if (9 < (byte)(*(char *)((longlong)plVar8 + lVar4 + 2) - 0x30U)) {
        FUN_180001780(param_2);
        puVar7 = (undefined8 *)FUN_1800016b0(param_2);
        puVar7[3] = 0xf;
        local_268[0] = 0;
        FUN_180001300((undefined1 *)puVar7,local_268);
        puVar6 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar6 = (undefined8 *)*puVar7;
        }
        puVar7[2] = 0;
        local_268[0] = 0;
        FUN_180001300((undefined1 *)puVar6,local_268);
        goto LAB_18004d164;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < 0xe);
    FUN_180006e00(param_3,(longlong)local_248,2,4);
    FUN_180006e00(param_3,(longlong)local_1a8,6,2);
    FUN_180006e00(param_3,(longlong)local_1c8,8,2);
    FUN_180006e00(param_3,(longlong)local_1e8,10,2);
    FUN_180006e00(param_3,(longlong)local_208,0xc,2);
    uVar10 = 0xe;
    FUN_180006e00(param_3,(longlong)local_68,0xe,2);
    puVar5 = FUN_180001690((undefined1 *)local_228);
    local_264 = 0x80;
    FUN_180011560((longlong)local_228,local_238 + 1);
    pppuVar9 = local_248;
    if (0xf < local_230) {
      pppuVar9 = (undefined8 ***)local_248[0];
    }
    puVar6 = (undefined8 *)FUN_1800016b0(local_228);
    lVar4 = puVar6[2];
    if ((ulonglong)(puVar6[3] - lVar4) < local_238) {
      FUN_1800088a0((longlong)local_228,local_238,uVar10,pppuVar9,local_238);
    }
    else {
      puVar6[2] = local_238 + lVar4;
      puVar7 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar7 = (undefined8 *)*puVar6;
      }
      uVar11 = local_238;
      memmove((void *)(lVar4 + (longlong)puVar7),pppuVar9,local_238);
      uVar10 = (undefined1)uVar11;
      local_268[0] = 0;
      FUN_180001300((undefined1 *)(local_238 + lVar4 + (longlong)puVar7),local_268);
    }
    uVar11 = puVar6[2];
    if (puVar6[3] == uVar11) {
      FUN_1800088a0((longlong)local_228,1,uVar10,&DAT_18006dde8,1);
    }
    else {
      puVar6[2] = uVar11 + 1;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      memmove((void *)((longlong)puVar6 + uVar11),&DAT_18006dde8,1);
      local_268[0] = 0;
      FUN_180001300((undefined1 *)((longlong)((longlong)puVar6 + uVar11) + 1),local_268);
    }
    pppuVar9 = local_1a8;
    if (0xf < local_190) {
      pppuVar9 = (undefined8 ***)local_1a8[0];
    }
    lVar4 = FUN_180007260((longlong)puVar5,pppuVar9,local_198);
    FUN_180001780((longlong)local_a8);
    puVar6 = (undefined8 *)FUN_1800016b0(lVar4);
    puVar7 = (undefined8 *)FUN_1800016b0(local_a8);
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar7 = *puVar6;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_268[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_268);
    local_264 = 0x180;
    lVar4 = FUN_180007260((longlong)local_a8,&DAT_18006dde8,1);
    FUN_180001780((longlong)local_c8);
    puVar6 = (undefined8 *)FUN_1800016b0(lVar4);
    puVar7 = (undefined8 *)FUN_1800016b0(local_c8);
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar7 = *puVar6;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_268[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_268);
    local_264 = 0x380;
    pppuVar9 = local_1c8;
    if (0xf < local_1b0) {
      pppuVar9 = (undefined8 ***)local_1c8[0];
    }
    lVar4 = FUN_180007260((longlong)local_c8,pppuVar9,local_1b8);
    FUN_180001780((longlong)local_e8);
    puVar6 = (undefined8 *)FUN_1800016b0(lVar4);
    puVar7 = (undefined8 *)FUN_1800016b0(local_e8);
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar7 = *puVar6;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_268[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_268);
    local_264 = 0x780;
    lVar4 = FUN_180007260((longlong)local_e8,&DAT_18006dbf0,1);
    FUN_180001780((longlong)local_108);
    puVar6 = (undefined8 *)FUN_1800016b0(lVar4);
    puVar7 = (undefined8 *)FUN_1800016b0(local_108);
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar7 = *puVar6;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_268[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_268);
    local_264 = 0xf80;
    pppuVar9 = local_1e8;
    if (0xf < local_1d0) {
      pppuVar9 = (undefined8 ***)local_1e8[0];
    }
    lVar4 = FUN_180007260((longlong)local_108,pppuVar9,local_1d8);
    FUN_180001780((longlong)local_128);
    puVar6 = (undefined8 *)FUN_1800016b0(lVar4);
    puVar7 = (undefined8 *)FUN_1800016b0(local_128);
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar7 = *puVar6;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_268[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_268);
    local_264 = 0x1f80;
    lVar4 = FUN_180007260((longlong)local_128,&DAT_18006dde8,1);
    FUN_180001780((longlong)local_148);
    puVar6 = (undefined8 *)FUN_1800016b0(lVar4);
    puVar7 = (undefined8 *)FUN_1800016b0(local_148);
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar7 = *puVar6;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_268[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_268);
    local_264 = 0x3f80;
    pppuVar9 = local_208;
    if (0xf < local_1f0) {
      pppuVar9 = (undefined8 ***)local_208[0];
    }
    lVar4 = FUN_180007260((longlong)local_148,pppuVar9,local_1f8);
    FUN_180001780((longlong)local_168);
    puVar6 = (undefined8 *)FUN_1800016b0(lVar4);
    puVar7 = (undefined8 *)FUN_1800016b0(local_168);
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar7 = *puVar6;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_268[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_268);
    local_264 = 0x7f80;
    lVar4 = FUN_180007260((longlong)local_168,&DAT_18006dde8,1);
    FUN_180001780((longlong)local_188);
    puVar6 = (undefined8 *)FUN_1800016b0(lVar4);
    puVar7 = (undefined8 *)FUN_1800016b0(local_188);
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar7 = *puVar6;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_268[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_268);
    local_264 = 0xff80;
    FUN_18004dcb0((longlong)local_88,(longlong)local_188,local_68);
    local_264 = 0x7f80;
    FUN_180001630(local_188);
    local_264 = 0x3f80;
    FUN_180001630(local_168);
    local_264 = 0x1f80;
    FUN_180001630(local_148);
    local_264 = 0xf80;
    FUN_180001630(local_128);
    local_264 = 0x780;
    FUN_180001630(local_108);
    local_264 = 0x380;
    FUN_180001630(local_e8);
    local_264 = 0x180;
    FUN_180001630(local_c8);
    local_264 = 0x80;
    FUN_180001630(local_a8);
    local_264 = 0;
    FUN_180001630(local_228);
    FUN_180001780(param_2);
    puVar6 = (undefined8 *)FUN_1800016b0(local_88);
    puVar7 = (undefined8 *)FUN_1800016b0(param_2);
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *puVar7 = *puVar6;
    puVar7[1] = uVar1;
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_268[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_268);
    local_264 = 1;
    FUN_180001630(local_88);
    FUN_180001630(local_68);
    FUN_180001630((longlong *)local_208);
    FUN_180001630((longlong *)local_1e8);
    FUN_180001630((longlong *)local_1c8);
    FUN_180001630((longlong *)local_1a8);
    FUN_180001630((longlong *)local_248);
  }
  FUN_180001630(param_3);
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_298);
  return;
}

