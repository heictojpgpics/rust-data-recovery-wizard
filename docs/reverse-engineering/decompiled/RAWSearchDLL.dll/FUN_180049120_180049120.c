// Function: FUN_180049120
// Address: 180049120
// Size: 1973 bytes


void FUN_180049120(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined **ppuVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  longlong *plVar12;
  undefined6 extraout_var_01;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 ****ppppuVar15;
  undefined8 *puVar16;
  char *pcVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined1 auStack_258 [32];
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236;
  undefined1 local_235;
  undefined1 local_234;
  undefined1 local_233 [3];
  short local_230 [2];
  undefined4 local_22c;
  undefined1 local_228;
  longlong *local_220;
  undefined4 local_218;
  undefined1 local_214;
  byte local_210 [8];
  int local_208;
  uint local_1fc;
  int local_1f4;
  int local_1f0;
  undefined2 local_1ea;
  longlong local_1e0;
  undefined1 *local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  int local_1b8;
  undefined8 local_1b0;
  longlong local_1a8 [4];
  longlong local_188 [4];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined8 ***local_128 [3];
  ulonglong local_110;
  longlong local_108 [4];
  longlong local_e8 [4];
  longlong local_c8 [4];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined2 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_7a;
  undefined2 local_72;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined8 local_52;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_1b0 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_258;
  local_1e0 = param_1;
  if (param_3 != (longlong *)0x0) {
    local_1c8 = *(undefined8 *)(param_2 + 8);
    local_1c0 = 0xffffffffffffffff;
    lVar22 = 0;
    local_1d0 = param_3;
    if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
      local_1b8 = *(int *)((longlong)param_3 + 0xc);
      if (local_1b8 < 1) {
        local_1b8 = 0x200;
      }
    }
    else {
      local_1b8 = (*(code *)((undefined **)*param_3)[5])(param_3);
    }
    local_1b8 = local_1b8 << 7;
    puVar10 = (undefined4 *)FUN_180042930((longlong *)&local_1d0,0);
    if (puVar10 != (undefined4 *)0x0) {
      puVar11 = FUN_180001350();
      lVar1 = *(longlong *)(puVar11 + 0x70);
      uVar18 = 0;
      local_1ea = 0;
      local_228 = 0;
      local_22c = *puVar10;
      uVar8 = FUN_180049c60(local_210,(longlong)&local_22c);
      if ((int)CONCAT62(extraout_var,uVar8) != 0) {
        puVar23 = (undefined8 *)(ulonglong)local_1fc;
        uVar20 = 0;
        if (local_1fc != 0) {
          lVar22 = (longlong)local_208;
          uVar20 = ((uint)(*(int *)(&DAT_180068208 + (lVar22 + (ulonglong)local_210[0] * 3) * 4) *
                          local_1f4) / local_1fc + local_1f0) *
                   *(int *)(&DAT_180068090 + lVar22 * 4);
        }
        if (((((ulonglong)uVar20 - 1 < 0x56220) &&
             (puVar10 = (undefined4 *)FUN_180042930((longlong *)&local_1d0,(ulonglong)uVar20),
             puVar10 != (undefined4 *)0x0)) &&
            (local_22c = *puVar10, ((byte)((uint)local_22c >> 8) & 0xe0) == 0xe0)) &&
           ((((byte)((uint)local_22c >> 0x10) & 0xf0) != 0xf0 &&
            (uVar8 = FUN_180049c60(local_210,(longlong)&local_22c),
            (int)CONCAT62(extraout_var_00,uVar8) != 0)))) {
          *(undefined4 *)(param_2 + 0x18) = 0x2b;
          if (DAT_180117f0c == 0) {
            uVar19 = *(ulonglong *)(param_1 + 0x90);
          }
          else {
            *(undefined8 *)(param_1 + 0x98) = 0;
            *(undefined8 *)(param_1 + 0x90) = 0;
            DAT_180117f0c = 0;
            uVar19 = uVar18;
          }
          if ((*(ulonglong *)(param_2 + 8) <= uVar19) ||
             (uVar19 + *(longlong *)(param_1 + 0x98) <= *(ulonglong *)(param_2 + 8))) {
            local_214 = 0;
            local_230[0] = 0x4154;
            local_230[1] = 0x47;
            local_a8 = 0x54455041;
            uStack_a4 = 0x58454741;
            local_a0 = 0xd0;
            if (lVar1 * 10 != 0) {
              while( true ) {
                uVar20 = (uint)uVar18;
                plVar12 = (longlong *)FUN_180042930((longlong *)&local_1d0,uVar18);
                if (plVar12 == (longlong *)0x0) break;
                local_218 = (undefined4)*plVar12;
                uVar8 = FUN_180049c60(local_210,(longlong)&local_218);
                uVar21 = (undefined1)lVar22;
                if ((int)CONCAT62(extraout_var_01,uVar8) == 0) {
                  if (((short)*plVar12 == local_230[0]) && (*(char *)((longlong)plVar12 + 2) == 'G')
                     ) {
                    uVar20 = uVar20 + 0x80;
                    local_52 = 0;
                    local_4a = 0;
                    local_7a = 0;
                    local_72 = 0;
                    local_98 = *(undefined8 *)((longlong)plVar12 + 3);
                    uStack_90 = *(undefined8 *)((longlong)plVar12 + 0xb);
                    local_88 = *(undefined8 *)((longlong)plVar12 + 0x13);
                    local_80 = *(undefined4 *)((longlong)plVar12 + 0x1b);
                    local_7c = *(undefined2 *)((longlong)plVar12 + 0x1f);
                    local_70 = *(undefined8 *)((longlong)plVar12 + 0x21);
                    uStack_68 = *(undefined8 *)((longlong)plVar12 + 0x29);
                    local_60 = *(undefined8 *)((longlong)plVar12 + 0x31);
                    local_58 = *(undefined4 *)((longlong)plVar12 + 0x39);
                    local_54 = *(undefined2 *)((longlong)plVar12 + 0x3d);
                    FUN_180001780((longlong)local_128);
                    puVar13 = (undefined8 *)FUN_1800016b0(local_128);
                    puVar13[2] = 0;
                    puVar13[3] = 0xf;
                    local_238 = 0;
                    FUN_180001300((undefined1 *)puVar13,&local_238);
                    uVar18 = 0xffffffffffffffff;
                    do {
                      uVar19 = uVar18 + 1;
                      lVar22 = uVar18 + 1;
                      uVar18 = uVar19;
                    } while (*(char *)((longlong)&local_98 + lVar22) != '\0');
                    if ((ulonglong)puVar13[3] < uVar19) {
                      puVar23 = &local_98;
                      FUN_1800086f0((longlong)local_128,uVar19,uVar21,puVar23);
                    }
                    else {
                      puVar16 = puVar13;
                      if (0xf < (ulonglong)puVar13[3]) {
                        puVar16 = (undefined8 *)*puVar13;
                      }
                      puVar13[2] = uVar19;
                      memmove(puVar16,&local_98,uVar19);
                      uVar21 = (undefined1)uVar18;
                      local_237 = 0;
                      FUN_180001300((undefined1 *)((longlong)puVar16 + uVar19),&local_237);
                    }
                    FUN_180001780((longlong)local_108);
                    plVar12 = (longlong *)FUN_1800016b0(local_108);
                    plVar12[2] = 0;
                    plVar12[3] = 0xf;
                    local_236 = 0;
                    FUN_180001300((undefined1 *)plVar12,&local_236);
                    uVar18 = 0xffffffffffffffff;
                    do {
                      uVar19 = uVar18 + 1;
                      lVar22 = uVar18 + 1;
                      uVar18 = uVar19;
                    } while (*(char *)((longlong)&local_70 + lVar22) != '\0');
                    if ((ulonglong)plVar12[3] < uVar19) {
                      puVar23 = &local_70;
                      FUN_1800086f0((longlong)local_108,uVar19,uVar21,puVar23);
                    }
                    else {
                      local_220 = plVar12;
                      if (0xf < (ulonglong)plVar12[3]) {
                        local_220 = (longlong *)*plVar12;
                      }
                      plVar12[2] = uVar19;
                      memmove(local_220,&local_70,uVar19);
                      local_235 = 0;
                      FUN_180001300((undefined1 *)((longlong)local_220 + uVar19),&local_235);
                    }
                    local_220 = local_1a8;
                    plVar14 = (longlong *)FUN_180007060((longlong)local_1a8,local_128);
                    ppppuVar15 = (undefined8 ****)FUN_180017060((longlong)local_e8,plVar14);
                    if (local_128 != ppppuVar15) {
                      FUN_180001630((longlong *)local_128);
                      puVar16 = (undefined8 *)FUN_1800016b0(ppppuVar15);
                      uVar4 = puVar16[1];
                      uVar5 = puVar16[2];
                      uVar6 = puVar16[3];
                      *puVar13 = *puVar16;
                      puVar13[1] = uVar4;
                      puVar13[2] = uVar5;
                      puVar13[3] = uVar6;
                      puVar16[2] = 0;
                      puVar16[3] = 0xf;
                      local_234 = 0;
                      FUN_180001300((undefined1 *)puVar16,&local_234);
                    }
                    FUN_180001630(local_e8);
                    local_220 = local_188;
                    plVar14 = (longlong *)FUN_180007060((longlong)local_188,local_108);
                    plVar14 = (longlong *)FUN_180017060((longlong)local_c8,plVar14);
                    if (local_108 != plVar14) {
                      FUN_180001630(local_108);
                      plVar14 = (longlong *)FUN_1800016b0(plVar14);
                      lVar22 = plVar14[1];
                      lVar1 = plVar14[2];
                      lVar7 = plVar14[3];
                      *plVar12 = *plVar14;
                      plVar12[1] = lVar22;
                      plVar12[2] = lVar1;
                      plVar12[3] = lVar7;
                      plVar14[2] = 0;
                      plVar14[3] = 0xf;
                      local_233[0] = 0;
                      FUN_180001300((undefined1 *)plVar14,local_233);
                    }
                    FUN_180001630(local_c8);
                    plVar12 = (longlong *)FUN_180002520();
                    if (plVar12 == (longlong *)0x0) {
                      FUN_180047ec0(0x80004005);
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    if ((undefined **)*plVar12 == ATL::CAtlStringMgr::vftable) {
                      LOCK();
                      *(int *)(plVar12 + 4) = (int)plVar12[4] + 1;
                      UNLOCK();
                      plVar12 = plVar12 + 2;
                    }
                    else {
                      plVar12 = (longlong *)(*(code *)((undefined **)*plVar12)[3])();
                    }
                    local_220 = plVar12 + 3;
                    ppppuVar15 = local_128;
                    if (0xf < local_110) {
                      ppppuVar15 = (undefined8 ****)local_128[0];
                    }
                    FUN_180049950((longlong *)&local_220,0x180067c5c,ppppuVar15,puVar23);
                    plVar14 = local_220;
                    local_1d8 = local_168;
                    plVar12 = (longlong *)FUN_180007000((longlong)local_168,local_220);
                    FUN_1800173f0(param_2,plVar12);
                    local_1d8 = local_148;
                    plVar12 = (longlong *)FUN_180007060((longlong)local_148,local_108);
                    FUN_180017550(param_2,0,plVar12);
                    LOCK();
                    plVar12 = plVar14 + -1;
                    lVar22 = *plVar12;
                    *(int *)plVar12 = (int)*plVar12 + -1;
                    UNLOCK();
                    if ((int)lVar22 < 2) {
                      (**(code **)(*(longlong *)plVar14[-3] + 8))();
                    }
                    FUN_180001630(local_108);
                    FUN_180001630((longlong *)local_128);
                    param_1 = local_1e0;
                  }
                  else if ((*plVar12 == CONCAT44(uStack_a4,local_a8)) && ((char)plVar12[1] == -0x30)
                          ) {
                    uVar20 = uVar20 + 0x104;
                  }
                  else {
                    pcVar17 = FUN_180016fc0((char *)plVar12,0x80,(char *)local_230,3);
                    if (pcVar17 != (char *)0x0) {
                      uVar20 = uVar20 + 0x80 + ((int)pcVar17 - (int)plVar12);
                    }
                  }
                  break;
                }
                puVar23 = (undefined8 *)(ulonglong)local_1fc;
                uVar9 = 0;
                if (local_1fc != 0) {
                  lVar22 = (longlong)local_208;
                  uVar9 = ((uint)(*(int *)(&DAT_180068208 +
                                          (lVar22 + (ulonglong)local_210[0] * 3) * 4) * local_1f4) /
                           local_1fc + local_1f0) * *(int *)(&DAT_180068090 + lVar22 * 4);
                }
                uVar20 = uVar20 + uVar9;
                uVar18 = (ulonglong)uVar20;
                if ((ulonglong)(lVar1 * 10) <= uVar18) break;
              }
              if (0x27ff < uVar20) {
                lVar22 = *(longlong *)(param_2 + 8);
                if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
                  uVar18 = (ulonglong)*(uint *)((longlong)param_3 + 0xc);
                  if ((int)*(uint *)((longlong)param_3 + 0xc) < 1) {
                    uVar18 = 0x200;
                  }
                }
                else {
                  uVar9 = (*(code *)((undefined **)*param_3)[5])(param_3);
                  uVar18 = (ulonglong)uVar9;
                }
                ppuVar2 = (undefined **)*param_3;
                if ((int)((ulonglong)uVar20 % uVar18) == 0) {
                  if (ppuVar2 == CRawFileCellTestStorageDevice::vftable) {
                    uVar18 = (ulonglong)*(uint *)((longlong)param_3 + 0xc);
                    if ((int)*(uint *)((longlong)param_3 + 0xc) < 1) {
                      uVar18 = 0x200;
                    }
                  }
                  else {
                    uVar9 = (*(code *)ppuVar2[5])(param_3);
                    uVar18 = (ulonglong)uVar9;
                  }
                  uVar18 = uVar20 / uVar18;
                }
                else if (ppuVar2 == CRawFileCellTestStorageDevice::vftable) {
                  uVar18 = (ulonglong)*(uint *)((longlong)param_3 + 0xc);
                  if ((int)*(uint *)((longlong)param_3 + 0xc) < 1) {
                    uVar18 = 0x200;
                  }
                  uVar18 = (ulonglong)((int)(uVar20 / uVar18) + 1);
                }
                else {
                  uVar9 = (*(code *)ppuVar2[5])(param_3);
                  uVar18 = (ulonglong)(uVar20 / uVar9 + 1);
                }
                uVar19 = uVar18 + lVar22;
                if ((uVar19 < *(ulonglong *)(param_1 + 0x90)) ||
                   (*(ulonglong *)(param_1 + 0x90) + *(longlong *)(param_1 + 0x98) < uVar19)) {
                  *(longlong *)(param_1 + 0x90) = lVar22;
                  *(ulonglong *)(param_1 + 0x98) = uVar18;
                  *(ulonglong *)(param_2 + 0x10) = (ulonglong)uVar20;
                  goto LAB_18004985b;
                }
              }
            }
          }
          *(undefined8 *)(param_2 + 0x10) = 0;
        }
      }
    }
  }
LAB_18004985b:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_258);
  return;
}

