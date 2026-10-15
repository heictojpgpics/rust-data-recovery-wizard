// Function: FUN_180056580
// Address: 180056580
// Size: 1420 bytes


void FUN_180056580(int param_1,ushort *param_2,uint param_3,longlong *param_4,uint *param_5,
                  undefined *param_6)

{
  ushort uVar1;
  code *pcVar2;
  uint uVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  byte bVar7;
  ushort *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  char cVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  byte bVar24;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  int local_c4;
  uint local_c0;
  undefined *local_b8;
  undefined *local_b0;
  longlong *local_a8;
  undefined *local_a0;
  ushort *local_98;
  uint *local_90;
  ushort auStack_88 [16];
  ushort auStack_68 [16];
  ulonglong local_48;
  
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_f8;
  uVar21 = 0;
  uVar11 = (ulonglong)param_3;
  local_90 = param_5;
  local_a0 = param_6;
  do {
    uVar17 = (ulonglong)uVar21;
    local_c4 = param_1;
    local_a8 = param_4;
    local_98 = param_2;
    if (0x1f < uVar17 * 2) {
      __report_rangecheckfailure();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar21 = uVar21 + 1;
    auStack_88[uVar17] = 0;
  } while (uVar21 < 0x10);
  puVar8 = param_2;
  if (param_3 != 0) {
    do {
      auStack_88[*puVar8] = auStack_88[*puVar8] + 1;
      uVar11 = uVar11 - 1;
      puVar8 = puVar8 + 1;
    } while (uVar11 != 0);
  }
  uVar11 = 0xf;
  uVar21 = 0xd;
  do {
    uVar6 = (uint)uVar11;
    uVar17 = 0xffffffff;
    local_d0 = 0xffffffff;
    if (auStack_88[uVar11] != 0) goto LAB_18005669c;
    if (auStack_88[uVar21 + 1] != 0) {
      uVar6 = uVar6 - 1;
      goto LAB_18005669c;
    }
    if (auStack_88[uVar21] != 0) {
      uVar6 = uVar6 - 2;
      goto LAB_18005669c;
    }
    if (auStack_88[uVar21 - 1] != 0) {
      uVar6 = uVar6 - 3;
      goto LAB_18005669c;
    }
    if (auStack_88[uVar21 - 2] != 0) {
      uVar6 = uVar6 - 4;
      goto LAB_18005669c;
    }
    uVar11 = (ulonglong)(uVar6 - 5);
    uVar21 = uVar21 - 5;
  } while (uVar6 - 5 != 0);
  uVar6 = 0;
LAB_18005669c:
  uVar21 = uVar6;
  if (*param_5 <= uVar6) {
    uVar21 = *param_5;
  }
  if (uVar6 == 0) {
    local_d8 = 0x140;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *param_5 = 1;
  }
  else {
    uVar10 = 3;
    uVar11 = 1;
    do {
      iVar18 = (int)uVar11;
      if (auStack_88[uVar11] != 0) break;
      if (auStack_88[uVar10 - 1] != 0) {
        uVar11 = (ulonglong)(iVar18 + 1);
        break;
      }
      if (auStack_88[uVar10] != 0) {
        uVar11 = (ulonglong)(iVar18 + 2);
        break;
      }
      if (auStack_88[uVar10 + 1] != 0) {
        uVar11 = (ulonglong)(iVar18 + 3);
        break;
      }
      if (auStack_88[uVar10 + 2] != 0) {
        uVar11 = (ulonglong)(iVar18 + 4);
        break;
      }
      uVar11 = (ulonglong)(iVar18 + 5);
      uVar10 = uVar10 + 5;
    } while (uVar10 < 0x12);
    uVar12 = 1;
    local_d4 = (uint)uVar11;
    if ((uint)uVar11 <= uVar21) {
      local_d4 = uVar21;
    }
    iVar18 = 1;
    do {
      iVar18 = iVar18 * 2 - (uint)auStack_88[uVar12];
      if (iVar18 < 0) goto LAB_1800566d6;
      uVar21 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar21;
    } while (uVar21 < 0x10);
    if ((iVar18 < 1) || ((param_1 != 0 && (uVar6 == 1)))) {
      uVar21 = 0;
      auStack_68[1] = 0;
      lVar9 = 0;
      lVar13 = 0xe;
      do {
        *(short *)((longlong)auStack_68 + lVar9 + 4) =
             *(short *)((longlong)auStack_88 + lVar9 + 2) +
             *(short *)((longlong)auStack_68 + lVar9 + 2);
        lVar9 = lVar9 + 2;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      puVar8 = param_2;
      if (param_3 != 0) {
        do {
          if (*puVar8 != 0) {
            *(short *)(param_6 + (ulonglong)auStack_68[*puVar8] * 2) = (short)uVar21;
            auStack_68[*puVar8] = auStack_68[*puVar8] + 1;
          }
          uVar21 = uVar21 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar21 < param_3);
      }
      if (param_1 == 0) {
        local_b0 = param_6;
        local_b8 = param_6;
        iVar18 = 0x13;
      }
      else if (param_1 == 1) {
        iVar18 = 0x100;
        local_b8 = &DAT_18006890e;
        local_b0 = &DAT_18006894e;
      }
      else {
        iVar18 = -1;
        local_b8 = &DAT_180068b90;
        local_b0 = &DAT_180068bd0;
      }
      lVar9 = *param_4;
      local_cc = 0;
      bVar7 = (byte)local_d4;
      local_c8 = 1 << (bVar7 & 0x1f);
      uVar15 = (ulonglong)local_c8;
      uVar12 = 0;
      uVar21 = 0;
      local_c0 = local_c8 - 1;
      uVar10 = 0;
      if ((param_1 != 1) || (uVar10 = 0, local_c8 < 0x5b0)) {
LAB_1800568c0:
        while( true ) {
          do {
            cVar20 = (char)uVar11;
            bVar24 = (byte)uVar21;
            bVar4 = cVar20 - bVar24;
            uVar1 = *(ushort *)(param_6 + uVar12 * 2);
            if ((int)(uint)uVar1 < iVar18) {
              local_d8 = (uint)CONCAT21(uVar1,bVar4) << 8;
            }
            else {
              local_d8._1_3_ = (uint3)bVar4;
              if (iVar18 < (int)(uint)uVar1) {
                local_d8._0_2_ = CONCAT11(bVar4,local_b0[(ulonglong)uVar1 * 2]);
                uVar5 = *(undefined2 *)(local_b8 + (ulonglong)uVar1 * 2);
              }
              else {
                local_d8 = CONCAT31(local_d8._1_3_,0x60);
                uVar5 = 0;
              }
              local_d8 = CONCAT22(uVar5,(ushort)local_d8);
            }
            iVar22 = 1 << (cVar20 - bVar24 & 0x1f);
            uVar14 = (ulonglong)((uVar10 >> (bVar24 & 0x1f)) + (int)uVar15);
            uVar12 = uVar15;
            do {
              uVar14 = (ulonglong)(uint)((int)uVar14 - iVar22);
              *(uint *)(lVar9 + uVar14 * 4) = local_d8;
              uVar19 = (int)uVar12 - iVar22;
              uVar12 = (ulonglong)uVar19;
            } while (uVar19 != 0);
            for (uVar19 = 1 << (cVar20 - 1U & 0x1f); (uVar10 & uVar19) != 0; uVar19 = uVar19 >> 1) {
            }
            if (uVar19 == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = (uVar10 & uVar19 - 1) + uVar19;
            }
            local_cc = local_cc + 1;
            uVar12 = (ulonglong)local_cc;
            puVar8 = auStack_88 + uVar11;
            *puVar8 = *puVar8 - 1;
            if (*puVar8 == 0) {
              if ((uint)uVar11 == uVar6) {
                local_d8 = CONCAT31(local_d8._1_3_,0x40);
                local_d8 = local_d8 & 0xffff;
                goto joined_r0x000180056a8b;
              }
              uVar11 = (ulonglong)param_2[*(ushort *)(param_6 + uVar12 * 2)];
            }
            uVar19 = (uint)uVar11;
          } while (uVar19 <= local_d4);
          uVar16 = local_c0 & uVar10;
          uVar17 = (ulonglong)uVar16;
          if (uVar16 != local_d0) break;
          uVar17 = (ulonglong)local_d0;
        }
        lVar9 = lVar9 + uVar15 * 4;
        uVar3 = local_d4;
        if (uVar21 != 0) {
          uVar3 = uVar21;
        }
        uVar21 = uVar3;
        iVar23 = uVar19 - uVar21;
        bVar4 = (byte)iVar23;
        iVar22 = 1 << (bVar4 & 0x1f);
        uVar12 = uVar11;
        while (uVar19 < uVar6) {
          bVar4 = (byte)iVar23;
          puVar8 = auStack_88 + uVar12;
          if ((int)(iVar22 - (uint)*puVar8) < 1) break;
          iVar23 = iVar23 + 1;
          bVar4 = (byte)iVar23;
          uVar19 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar19;
          iVar22 = (iVar22 - (uint)*puVar8) * 2;
        }
        uVar19 = 1 << (bVar4 & 0x1f);
        uVar15 = (ulonglong)uVar19;
        local_c8 = local_c8 + uVar19;
        if ((param_1 != 1) || (local_c8 < 0x5b0)) {
          lVar13 = uVar17 * 4;
          *(byte *)(lVar13 + *param_4) = bVar4;
          *(byte *)(lVar13 + 1 + *param_4) = bVar7;
          *(short *)(lVar13 + 2 + *param_4) = (short)(lVar9 - *param_4 >> 2);
          uVar12 = (ulonglong)local_cc;
          local_d0 = uVar16;
          goto LAB_1800568c0;
        }
      }
    }
  }
LAB_1800566d6:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_f8);
  return;
joined_r0x000180056a8b:
  if (uVar10 == 0) goto LAB_180056aeb;
  if ((uVar21 != 0) && ((local_c0 & uVar10) != (uint)uVar17)) {
    lVar9 = *param_4;
    uVar11 = (ulonglong)local_d4;
    local_d8._0_2_ = CONCAT11(bVar7,(undefined1)local_d8);
    local_d8 = (uint)(ushort)local_d8;
    uVar21 = 0;
  }
  *(uint *)(lVar9 + (ulonglong)(uVar10 >> ((byte)uVar21 & 0x3f)) * 4) = local_d8;
  for (uVar6 = 1 << ((char)uVar11 - 1U & 0x1f); (uVar10 & uVar6) != 0; uVar6 = uVar6 >> 1) {
  }
  if (uVar6 == 0) goto LAB_180056aeb;
  uVar10 = (uVar10 & uVar6 - 1) + uVar6;
  goto joined_r0x000180056a8b;
LAB_180056aeb:
  *param_4 = *param_4 + (ulonglong)local_c8 * 4;
  *param_5 = local_d4;
  goto LAB_1800566d6;
}

