// Function: FUN_180048c50
// Address: 180048c50
// Size: 1222 bytes


void FUN_180048c50(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined *puVar9;
  short *psVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 ****ppppuVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined1 local_1d3;
  undefined1 local_1d2;
  undefined1 local_1d1;
  undefined1 local_1d0;
  undefined1 local_1cf [3];
  undefined4 local_1cc;
  longlong *local_1c8;
  undefined1 *local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  int local_1a0;
  undefined8 local_198;
  longlong local_190 [4];
  longlong local_170 [4];
  undefined1 local_150 [32];
  undefined1 local_130 [32];
  undefined8 ***local_110 [3];
  ulonglong local_f8;
  longlong local_f0 [4];
  longlong local_d0 [4];
  longlong local_b0 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_72;
  undefined2 local_6a;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_4a;
  undefined2 local_42;
  ulonglong local_40;
  
  local_198 = 0xfffffffffffffffe;
  local_40 = DAT_18008f028 ^ (ulonglong)auStack_1f8;
  local_1b0 = *(undefined8 *)(param_2 + 8);
  local_1a8 = 0xffffffffffffffff;
  local_1b8 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_1a0 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_1a0 = *(int *)((longlong)param_3 + 0xc);
    if (local_1a0 < 1) {
      local_1a0 = 0x200;
    }
  }
  else {
    local_1a0 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  uVar19 = SUB81(param_3,0);
  local_1a0 = local_1a0 << 7;
  puVar9 = FUN_180042930((longlong *)&local_1b8,0);
  if (puVar9 != (undefined *)0x0) {
    local_1cc = 0x474154;
    uVar1 = *(undefined4 *)(puVar9 + 0x30);
    local_1d8._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
    local_1d8._1_1_ = (undefined1)((uint)uVar1 >> 8);
    uVar6 = CONCAT11((char)uVar1,local_1d8._1_1_);
    local_1d8 = CONCAT22(uVar6,CONCAT11(local_1d8._2_1_,(char)((uint)uVar1 >> 0x18)));
    uVar16 = local_1d8;
    psVar10 = (short *)FUN_180042930((longlong *)&local_1b8,(ulonglong)local_1d8);
    if (psVar10 != (short *)0x0) {
      if ((*psVar10 == (short)local_1cc) && ((char)psVar10[1] == 'G')) {
        local_1d8 = uVar16 + 0x80;
        local_4a = 0;
        local_42 = 0;
        local_72 = 0;
        local_6a = 0;
        local_90 = *(undefined8 *)((longlong)psVar10 + 3);
        uStack_88 = *(undefined8 *)((longlong)psVar10 + 0xb);
        local_80 = *(undefined8 *)((longlong)psVar10 + 0x13);
        local_78 = *(undefined4 *)((longlong)psVar10 + 0x1b);
        local_74 = *(undefined2 *)((longlong)psVar10 + 0x1f);
        local_68 = *(undefined8 *)((longlong)psVar10 + 0x21);
        uStack_60 = *(undefined8 *)((longlong)psVar10 + 0x29);
        local_58 = *(undefined8 *)((longlong)psVar10 + 0x31);
        local_50 = *(undefined4 *)((longlong)psVar10 + 0x39);
        local_4c = *(undefined2 *)((longlong)psVar10 + 0x3d);
        FUN_180001780((longlong)local_110);
        puVar11 = (undefined8 *)FUN_1800016b0(local_110);
        puVar11[2] = 0;
        puVar11[3] = 0xf;
        local_1d4 = 0;
        FUN_180001300((undefined1 *)puVar11,&local_1d4);
        uVar18 = 0xffffffffffffffff;
        do {
          uVar17 = uVar18 + 1;
          lVar7 = uVar18 + 1;
          uVar18 = uVar17;
        } while (*(char *)((longlong)&local_90 + lVar7) != '\0');
        if ((ulonglong)puVar11[3] < uVar17) {
          param_4 = &local_90;
          FUN_1800086f0((longlong)local_110,uVar17,uVar19,param_4);
        }
        else {
          puVar12 = puVar11;
          if (0xf < (ulonglong)puVar11[3]) {
            puVar12 = (undefined8 *)*puVar11;
          }
          puVar11[2] = uVar17;
          memmove(puVar12,&local_90,uVar17);
          uVar19 = (undefined1)uVar18;
          local_1d3 = 0;
          FUN_180001300((undefined1 *)((longlong)puVar12 + uVar17),&local_1d3);
        }
        FUN_180001780((longlong)local_f0);
        puVar12 = (undefined8 *)FUN_1800016b0(local_f0);
        puVar12[2] = 0;
        puVar12[3] = 0xf;
        local_1d2 = 0;
        FUN_180001300((undefined1 *)puVar12,&local_1d2);
        uVar18 = 0xffffffffffffffff;
        do {
          uVar17 = uVar18 + 1;
          lVar7 = uVar18 + 1;
          uVar18 = uVar17;
        } while (*(char *)((longlong)&local_68 + lVar7) != '\0');
        if ((ulonglong)puVar12[3] < uVar17) {
          param_4 = &local_68;
          FUN_1800086f0((longlong)local_f0,uVar17,uVar19,param_4);
        }
        else {
          puVar15 = puVar12;
          if (0xf < (ulonglong)puVar12[3]) {
            puVar15 = (undefined8 *)*puVar12;
          }
          puVar12[2] = uVar17;
          memmove(puVar15,&local_68,uVar17);
          local_1d1 = 0;
          FUN_180001300((undefined1 *)((longlong)puVar15 + uVar17),&local_1d1);
        }
        local_1c8 = local_190;
        plVar13 = (longlong *)FUN_180007060((longlong)local_190,local_110);
        ppppuVar14 = (undefined8 ****)FUN_180017060((longlong)local_d0,plVar13);
        if (local_110 != ppppuVar14) {
          FUN_180001630((longlong *)local_110);
          puVar15 = (undefined8 *)FUN_1800016b0(ppppuVar14);
          uVar3 = puVar15[1];
          uVar4 = puVar15[2];
          uVar5 = puVar15[3];
          *puVar11 = *puVar15;
          puVar11[1] = uVar3;
          puVar11[2] = uVar4;
          puVar11[3] = uVar5;
          puVar15[2] = 0;
          puVar15[3] = 0xf;
          local_1d0 = 0;
          FUN_180001300((undefined1 *)puVar15,&local_1d0);
        }
        FUN_180001630(local_d0);
        local_1c8 = local_170;
        plVar13 = (longlong *)FUN_180007060((longlong)local_170,local_f0);
        plVar13 = (longlong *)FUN_180017060((longlong)local_b0,plVar13);
        if (local_f0 != plVar13) {
          FUN_180001630(local_f0);
          puVar11 = (undefined8 *)FUN_1800016b0(plVar13);
          uVar3 = puVar11[1];
          uVar4 = puVar11[2];
          uVar5 = puVar11[3];
          *puVar12 = *puVar11;
          puVar12[1] = uVar3;
          puVar12[2] = uVar4;
          puVar12[3] = uVar5;
          puVar11[2] = 0;
          puVar11[3] = 0xf;
          local_1cf[0] = 0;
          FUN_180001300((undefined1 *)puVar11,local_1cf);
        }
        FUN_180001630(local_b0);
        plVar13 = (longlong *)FUN_180002520();
        if (plVar13 == (longlong *)0x0) {
          FUN_180047ec0(0x80004005);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((undefined **)*plVar13 == ATL::CAtlStringMgr::vftable) {
          LOCK();
          *(int *)(plVar13 + 4) = (int)plVar13[4] + 1;
          UNLOCK();
          plVar13 = plVar13 + 2;
        }
        else {
          plVar13 = (longlong *)(*(code *)((undefined **)*plVar13)[3])();
        }
        local_1c8 = plVar13 + 3;
        ppppuVar14 = local_110;
        if (0xf < local_f8) {
          ppppuVar14 = (undefined8 ****)local_110[0];
        }
        FUN_180049950((longlong *)&local_1c8,0x180067c5c,ppppuVar14,param_4);
        plVar8 = local_1c8;
        local_1c0 = local_150;
        plVar13 = (longlong *)FUN_180007000((longlong)local_150,local_1c8);
        FUN_1800173f0(param_2,plVar13);
        local_1c0 = local_130;
        plVar13 = (longlong *)FUN_180007060((longlong)local_130,local_f0);
        FUN_180017550(param_2,0,plVar13);
        LOCK();
        plVar13 = plVar8 + -1;
        lVar7 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar7 < 2) {
          (**(code **)(*(longlong *)plVar8[-3] + 8))();
        }
        FUN_180001630(local_f0);
        FUN_180001630((longlong *)local_110);
        uVar16 = local_1d8;
      }
      *(ulonglong *)(param_2 + 0x10) = (ulonglong)uVar16;
    }
  }
  __security_check_cookie(local_40 ^ (ulonglong)auStack_1f8);
  return;
}

