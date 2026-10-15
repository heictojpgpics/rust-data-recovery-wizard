// Function: FUN_180017060
// Address: 180017060
// Size: 899 bytes


void FUN_180017060(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 uVar12;
  ulonglong uVar13;
  char ****ppppcVar14;
  undefined8 ****ppppuVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [8];
  undefined1 local_e0;
  undefined1 local_df [3];
  undefined4 local_dc;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 ***local_b8 [2];
  size_t local_a8;
  ulonglong local_a0;
  char ***local_98 [2];
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_d0 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_118;
  lVar17 = 0;
  local_dc = 0;
  lVar16 = param_2[2];
  local_d8 = param_1;
  local_c8 = param_1;
  local_c0 = param_2;
  if (lVar16 == 0) {
    FUN_180001780(param_1);
    puVar6 = (undefined8 *)FUN_1800016b0(param_1);
    puVar6[3] = 0xf;
    local_e8[0] = (undefined1)lVar17;
    FUN_180001300((undefined1 *)puVar6,local_e8);
    puVar7 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar7 = (undefined8 *)*puVar6;
    }
    puVar6[2] = lVar17;
    local_e8[0] = 0;
    FUN_180001300((undefined1 *)puVar7,local_e8);
    local_dc = 1;
    FUN_180001630(param_2);
  }
  else {
    puVar7 = (undefined8 *)FUN_1800016b0(param_2);
    do {
      uVar13 = puVar7[3];
      puVar6 = puVar7;
      if (0xf < uVar13) {
        puVar6 = (undefined8 *)*puVar7;
      }
      if (*(char *)((puVar7[2] - 1) + (longlong)puVar6) != ' ') break;
      uVar1 = lVar16 - 1;
      if ((ulonglong)puVar7[2] < uVar1) {
        FUN_1800072f0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_e8[0] = 0;
      puVar6 = puVar7;
      if (0xf < uVar13) {
        puVar6 = (undefined8 *)*puVar7;
      }
      puVar7[2] = uVar1;
      FUN_180001300((undefined1 *)((longlong)puVar6 + uVar1),local_e8);
      lVar16 = param_2[2];
    } while (lVar16 != 0);
    local_58 = 0x3a2f5c01;
    local_54 = 0x3e3c223f;
    local_50 = 0xa0d2a7c;
    FUN_180001780((longlong)local_98);
    puVar8 = (undefined8 *)FUN_1800016b0(local_98);
    puVar8[3] = 0xf;
    local_e8[0] = 0;
    puVar6 = puVar8;
    FUN_180001300((undefined1 *)puVar8,local_e8);
    if (0xf < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    puVar8[2] = lVar17;
    local_e8[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_e8);
    local_e0 = (undefined1)lVar17;
    lVar16 = lVar17;
    local_df[0] = local_e0;
    puVar6 = (undefined8 *)FUN_1800016b0(local_b8);
    do {
      uVar12 = (undefined1)uVar13;
      local_e8[0] = *(undefined1 *)((longlong)&local_58 + lVar17);
      puVar8[2] = 1;
      puVar10 = puVar8;
      if (0xf < (ulonglong)puVar8[3]) {
        puVar10 = (undefined8 *)*puVar8;
      }
      FUN_180001300((undefined1 *)puVar10,local_e8);
      FUN_180001300((undefined1 *)((longlong)puVar10 + 1),local_df);
      FUN_180001780((longlong)local_b8);
      puVar6[2] = lVar16;
      puVar6[3] = 0xf;
      FUN_180001300((undefined1 *)puVar6,&local_e0);
      if (puVar6[3] == 0) {
        FUN_1800086f0((longlong)local_b8,1,uVar12,&DAT_180067d58);
      }
      else {
        puVar10 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar10 = (undefined8 *)*puVar6;
        }
        puVar6[2] = 1;
        memmove(puVar10,&DAT_180067d58,1);
        local_e8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar10 + 1),local_e8);
      }
      while( true ) {
        uVar1 = local_88;
        ppppcVar14 = local_98;
        if (0xf < local_80) {
          ppppcVar14 = (char ****)local_98[0];
        }
        plVar11 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          plVar11 = (longlong *)*param_2;
        }
        uVar13 = 0;
        uVar9 = FUN_18000f820((longlong)plVar11,param_2[2],0,(char *)ppppcVar14,local_88);
        if (uVar9 == 0xffffffffffffffff) break;
        ppppuVar15 = local_b8;
        if (0xf < local_a0) {
          ppppuVar15 = (undefined8 ****)local_b8[0];
        }
        FUN_1800199e0((longlong)param_2,uVar9,uVar1,ppppuVar15,local_a8);
      }
      FUN_180007060((longlong)local_78,param_2);
      local_dc = 0;
      FUN_180001630(local_78);
      FUN_180001630((longlong *)local_b8);
      lVar17 = lVar17 + 1;
      lVar16 = 0;
    } while (lVar17 < 0xc);
    lVar17 = local_d8;
    FUN_180001780(local_d8);
    puVar6 = (undefined8 *)FUN_1800016b0(lVar17);
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = puVar7[3];
    *puVar6 = *puVar7;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    puVar7[2] = lVar16;
    puVar7[3] = 0xf;
    local_e0 = (undefined1)lVar16;
    FUN_180001300((undefined1 *)puVar7,&local_e0);
    local_dc = 1;
    FUN_180001630((longlong *)local_98);
    FUN_180001630(param_2);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_118);
  return;
}

