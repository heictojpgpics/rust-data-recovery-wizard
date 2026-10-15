// Function: FUN_180031d40
// Address: 180031d40
// Size: 1546 bytes


void FUN_180031d40(longlong param_1,longlong *param_2,int param_3,undefined8 *param_4,
                  longlong param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined2 uVar7;
  undefined6 extraout_var;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  short *psVar13;
  ulonglong uVar14;
  undefined1 uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  undefined8 *local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  longlong *local_f0;
  undefined8 local_e8;
  longlong local_e0 [2];
  longlong local_d0;
  longlong local_c0 [4];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 uStack_82;
  int iStack_80;
  undefined2 uStack_7c;
  undefined2 local_7a;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined8 local_52;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_e8 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_128;
  uVar18 = (ulonglong)param_3;
  uVar17 = ((longlong)param_4 + (1 - *(longlong *)(param_1 + 8))) * uVar18;
  *(ulonglong *)(param_1 + 0x128) = uVar17;
  iVar19 = 0;
  local_f4 = 0;
  local_7a = 0;
  uVar14 = *(ulonglong *)(param_1 + 0x118);
  local_100 = param_4;
  local_f0 = param_2;
LAB_180031dc0:
  iVar19 = iVar19 + 1;
  if (uVar17 <= uVar14) goto LAB_180032323;
  if (*(int *)(param_1 + 0x124) == 0) {
    param_2 = (longlong *)((longlong)local_f0 + uVar14 % uVar18);
  }
  else {
    param_2 = (longlong *)((longlong)param_2 + (uVar14 % uVar18 - uVar18));
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if ((longlong)(*(longlong *)(param_5 + 8) * uVar18) < (longlong)(uVar14 + 4)) {
    *(undefined4 *)(param_1 + 0x124) = 1;
  }
  local_f8 = (undefined4)*param_2;
  plVar11 = local_f0;
  uVar7 = FUN_180049c60((byte *)&local_a0,(longlong)&local_f8);
  uVar15 = SUB81(plVar11,0);
  if ((int)CONCAT62(extraout_var,uVar7) != 0) goto code_r0x000180031e26;
  if (((short)*param_2 == (short)DAT_180093754) &&
     (*(char *)((longlong)param_2 + 2) == DAT_180093754._2_1_)) {
    *(ulonglong *)(param_1 + 0x118) = uVar14 + 0x80;
    local_52 = 0;
    local_4a = 0;
    uStack_82 = 0;
    iStack_80 = 0;
    uStack_7c = 0;
    local_7a = 0;
    local_a0 = *(ulonglong *)((longlong)param_2 + 3);
    uStack_98 = *(undefined8 *)((longlong)param_2 + 0xb);
    local_90 = *(undefined8 *)((longlong)param_2 + 0x13);
    local_88 = *(undefined4 *)((longlong)param_2 + 0x1b);
    local_84 = *(undefined2 *)((longlong)param_2 + 0x1f);
    local_70 = *(longlong *)((longlong)param_2 + 0x21);
    uStack_68 = *(undefined8 *)((longlong)param_2 + 0x29);
    local_60 = *(undefined8 *)((longlong)param_2 + 0x31);
    local_58 = *(undefined4 *)((longlong)param_2 + 0x39);
    local_54 = *(undefined2 *)((longlong)param_2 + 0x3d);
    FUN_180001780((longlong)local_c0);
    puVar9 = (undefined8 *)FUN_1800016b0(local_c0);
    puVar9[2] = 0;
    puVar9[3] = 0xf;
    local_108[0] = 0;
    FUN_180001300((undefined1 *)puVar9,local_108);
    uVar14 = 0xffffffffffffffff;
    do {
      uVar17 = uVar14 + 1;
      lVar6 = uVar14 + 1;
      uVar14 = uVar17;
    } while (*(char *)((longlong)&local_a0 + lVar6) != '\0');
    if ((ulonglong)puVar9[3] < uVar17) {
      FUN_1800086f0((longlong)local_c0,uVar17,uVar15,&local_a0);
    }
    else {
      puVar10 = puVar9;
      if (0xf < (ulonglong)puVar9[3]) {
        puVar10 = (undefined8 *)*puVar9;
      }
      puVar9[2] = uVar17;
      memmove(puVar10,&local_a0,uVar17);
      uVar15 = (undefined1)uVar14;
      local_108[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar10 + uVar17),local_108);
    }
    FUN_180001780((longlong)local_e0);
    puVar10 = (undefined8 *)FUN_1800016b0(local_e0);
    puVar10[2] = 0;
    puVar10[3] = 0xf;
    local_108[0] = 0;
    FUN_180001300((undefined1 *)puVar10,local_108);
    uVar14 = 0xffffffffffffffff;
    do {
      uVar17 = uVar14 + 1;
      lVar6 = uVar14 + 1;
      uVar14 = uVar17;
    } while (*(char *)((longlong)&local_70 + lVar6) != '\0');
    if ((ulonglong)puVar10[3] < uVar17) {
      FUN_1800086f0((longlong)local_e0,uVar17,uVar15,&local_70);
    }
    else {
      puVar12 = puVar10;
      if (0xf < (ulonglong)puVar10[3]) {
        puVar12 = (undefined8 *)*puVar10;
      }
      puVar10[2] = uVar17;
      memmove(puVar12,&local_70,uVar17);
      local_108[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar12 + uVar17),local_108);
    }
    local_100 = &local_70;
    plVar11 = (longlong *)FUN_180007060((longlong)&local_70,local_c0);
    plVar11 = (longlong *)FUN_180017060((longlong)&local_a0,plVar11);
    if (local_c0 != plVar11) {
      FUN_180001630(local_c0);
      puVar12 = (undefined8 *)FUN_1800016b0(plVar11);
      uVar3 = puVar12[1];
      uVar4 = puVar12[2];
      uVar5 = puVar12[3];
      *puVar9 = *puVar12;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar12[2] = 0;
      puVar12[3] = 0xf;
      local_108[0] = 0;
      FUN_180001300((undefined1 *)puVar12,local_108);
    }
    FUN_180001630(&local_a0);
    local_100 = &local_a0;
    plVar11 = (longlong *)FUN_180007060((longlong)&local_a0,local_e0);
    plVar11 = (longlong *)FUN_180017060((longlong)&local_70,plVar11);
    if (local_e0 != plVar11) {
      FUN_180001630(local_e0);
      puVar12 = (undefined8 *)FUN_1800016b0(plVar11);
      uVar3 = puVar12[1];
      uVar4 = puVar12[2];
      uVar5 = puVar12[3];
      *puVar10 = *puVar12;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar12[2] = 0;
      puVar12[3] = 0xf;
      local_108[0] = 0;
      FUN_180001300((undefined1 *)puVar12,local_108);
    }
    FUN_180001630(&local_70);
    local_100 = &local_a0;
    puVar12 = &local_a0;
    plVar11 = (longlong *)FUN_180007060((longlong)puVar12,local_c0);
    plVar11 = (longlong *)FUN_180031650(puVar12,(longlong)&local_70,plVar11);
    if (local_c0 != plVar11) {
      FUN_180001630(local_c0);
      puVar12 = (undefined8 *)FUN_1800016b0(plVar11);
      uVar3 = puVar12[1];
      uVar4 = puVar12[2];
      uVar5 = puVar12[3];
      *puVar9 = *puVar12;
      puVar9[1] = uVar3;
      puVar9[2] = uVar4;
      puVar9[3] = uVar5;
      puVar12[2] = 0;
      puVar12[3] = 0xf;
      local_108[0] = 0;
      FUN_180001300((undefined1 *)puVar12,local_108);
    }
    FUN_180001630(&local_70);
    local_100 = &local_a0;
    puVar9 = &local_a0;
    plVar11 = (longlong *)FUN_180007060((longlong)puVar9,local_e0);
    plVar11 = (longlong *)FUN_180031650(puVar9,(longlong)&local_70,plVar11);
    if (local_e0 != plVar11) {
      FUN_180001630(local_e0);
      puVar9 = (undefined8 *)FUN_1800016b0(plVar11);
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      uVar5 = puVar9[3];
      *puVar10 = *puVar9;
      puVar10[1] = uVar3;
      puVar10[2] = uVar4;
      puVar10[3] = uVar5;
      puVar9[2] = 0;
      puVar9[3] = 0xf;
      local_108[0] = 0;
      FUN_180001300((undefined1 *)puVar9,local_108);
    }
    FUN_180001630(&local_70);
    if (local_d0 != 0) {
      local_100 = &local_a0;
      plVar11 = (longlong *)FUN_180007060((longlong)&local_a0,local_e0);
      FUN_180017550(param_1,0,plVar11);
    }
    local_100 = &local_a0;
    plVar11 = (longlong *)FUN_180007060((longlong)&local_a0,local_c0);
    FUN_1800173f0(param_1,plVar11);
    FUN_180001630(local_e0);
    FUN_180001630(local_c0);
    goto LAB_180032305;
  }
  if ((*param_2 == DAT_180093748) && ((char)param_2[1] == (char)DAT_180093750)) {
    if (((0x1ff < param_3) && (iVar19 = 0, -1 < (longlong)local_100)) &&
       (iVar16 = iVar19, (longlong)local_100 + 10 <= *(longlong *)(param_5 + 8)))
    goto LAB_1800322c0;
  }
  else {
    psVar13 = FUN_1800302e0((short *)param_2);
    if (psVar13 != (short *)0x0) {
      *(longlong *)(param_1 + 0x118) =
           (longlong)psVar13 + *(longlong *)(param_1 + 0x118) + (0x80 - (longlong)param_2);
    }
  }
  goto LAB_180032305;
code_r0x000180031e26:
  if (local_90._4_4_ == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulonglong)
            (((uint)(*(int *)(&DAT_180068208 +
                             ((longlong)(int)uStack_98 + (local_a0 & 0xff) * 3) * 4) *
                    CONCAT22(uStack_82,local_84)) / local_90._4_4_ + iStack_80) *
            *(int *)(&DAT_180068090 + (longlong)(int)uStack_98 * 4));
  }
  uVar14 = uVar14 + uVar8;
  *(ulonglong *)(param_1 + 0x118) = uVar14;
  if (0x400 < iVar19) goto LAB_180032305;
  goto LAB_180031dc0;
  while (iVar19 < 9) {
LAB_1800322c0:
    iVar19 = iVar19 + 1;
    iVar16 = iVar16 + param_3;
    iVar1 = *(int *)((longlong)iVar16 + (longlong)param_2);
    iVar2 = *(int *)((longlong)param_2 + (longlong)iVar16 + 4);
    *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + uVar18;
    if ((iVar2 == 0) && (iVar1 == 0)) break;
  }
LAB_180032305:
  if (*(ulonglong *)(param_1 + 0x118) < 0x2800) {
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
LAB_180032323:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_128);
  return;
}

