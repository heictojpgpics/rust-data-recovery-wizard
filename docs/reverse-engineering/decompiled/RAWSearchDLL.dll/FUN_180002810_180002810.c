// Function: FUN_180002810
// Address: 180002810
// Size: 563 bytes


void FUN_180002810(longlong param_1,byte *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  longlong lVar15;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [4];
  uint local_1a4;
  ulonglong local_1a0 [4];
  longlong local_180 [4];
  longlong local_160 [5];
  char local_138 [256];
  ulonglong local_38;
  
  local_1a0[2] = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStack_1c8;
  local_1a4 = 0;
  pbVar13 = &DAT_180066bb4;
  local_1a0[3] = param_1;
  uVar5 = FUN_180006ea0(param_2,&DAT_180066bb4);
  lVar15 = *(longlong *)(param_2 + 0x10);
  pbVar14 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar14 = *(byte **)param_2;
  }
  local_1a0[1] = 0xffffffffffffffff;
  if (lVar15 == 0) {
LAB_180002908:
    lVar15 = -1;
  }
  else {
    memset(local_138,0,0x100);
    lVar10 = 4;
    do {
      local_138[*pbVar13] = '\x01';
      pbVar13 = pbVar13 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    local_1a0[0] = lVar15 - 1;
    puVar6 = FUN_180001e40(local_1a0 + 1,local_1a0);
    pbVar13 = pbVar14 + *puVar6;
    cVar1 = local_138[*pbVar13];
    while (cVar1 != '\0') {
      if (pbVar13 == pbVar14) goto LAB_180002908;
      pbVar13 = pbVar13 + -1;
      cVar1 = local_138[*pbVar13];
    }
    lVar15 = (longlong)pbVar13 - (longlong)pbVar14;
  }
  if (uVar5 == 0xffffffffffffffff) {
    FUN_180001780((longlong)local_180);
    puVar7 = (undefined8 *)FUN_1800016b0(local_180);
    puVar7[3] = 0xf;
    local_1a8[0] = 0;
    FUN_180001300((undefined1 *)puVar7,local_1a8);
    puVar9 = puVar7;
    if (0xf < (ulonglong)puVar7[3]) {
      puVar9 = (undefined8 *)*puVar7;
    }
    puVar7[2] = 0;
    local_1a8[0] = 0;
    FUN_180001300((undefined1 *)puVar9,local_1a8);
    plVar8 = local_180;
    uVar11 = 1;
  }
  else {
    plVar8 = (longlong *)
             FUN_180006e00((undefined8 *)param_2,(longlong)local_160,uVar5,(lVar15 - uVar5) + 1);
    uVar11 = 2;
  }
  local_1a4 = uVar11;
  FUN_180001780(param_1);
  puVar9 = (undefined8 *)FUN_1800016b0(plVar8);
  puVar7 = (undefined8 *)FUN_1800016b0(param_1);
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  *puVar7 = *puVar9;
  puVar7[1] = uVar2;
  puVar7[2] = uVar3;
  puVar7[3] = uVar4;
  puVar9[2] = 0;
  puVar9[3] = 0xf;
  local_1a8[0] = 0;
  FUN_180001300((undefined1 *)puVar9,local_1a8);
  uVar12 = uVar11 | 4;
  local_1a4 = uVar12;
  if ((uVar11 & 2) != 0) {
    uVar12 = uVar11 & 0xfffffffd | 4;
    local_1a4 = uVar12;
    FUN_180001630(local_160);
  }
  if ((uVar12 & 1) != 0) {
    local_1a4 = uVar12 & 0xfffffffe;
    FUN_180001630(local_180);
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_1c8);
  return;
}

