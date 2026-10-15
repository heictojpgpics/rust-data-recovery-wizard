// Function: FUN_180033180
// Address: 180033180
// Size: 1176 bytes


void FUN_180033180(longlong param_1,undefined1 (*param_2) [32],int param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined4 uVar6;
  ushort uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined *puVar10;
  undefined1 (*pauVar11) [16];
  ulonglong uVar12;
  uint *puVar13;
  int iVar14;
  ulonglong uVar15;
  char *pcVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  undefined1 auStack_c8 [32];
  int local_a8;
  longlong local_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [16];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_18008f028 ^ (ulonglong)auStack_c8;
  uVar9 = (ulonglong)param_3;
  lVar18 = *(longlong *)(param_5 + 8);
  if (*(char *)(param_1 + 0x134) == '\0') {
    *(undefined1 *)(param_1 + 0x134) = 1;
  }
  local_a8 = param_3;
  puVar10 = FUN_180001350();
  uVar4 = *(longlong *)(puVar10 + 0x70) * 10;
  if (param_2 != (undefined1 (*) [32])0x0) {
    uVar7 = *(ushort *)(param_1 + 0x128);
    iVar21 = 0;
    if (uVar7 == 0) {
      local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)*param_2);
      uVar7 = *(ushort *)(*param_2 + 4);
      *(ushort *)(param_1 + 0x128) = uVar7;
      if ((9999 < uVar7) || (uVar7 < 1000)) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        goto LAB_1800335d7;
      }
    }
    local_a0 = *(longlong *)(param_1 + 0x110);
    uVar17 = local_a0 + uVar9;
    *(ulonglong *)(param_1 + 0x110) = uVar17;
    if ((uVar17 < uVar4) && (*(ulonglong *)(param_1 + 0x10) < uVar4)) {
      uVar22 = 0;
      auVar2 = local_60;
      if (*(ulonglong *)(param_1 + 0x10) == 0) {
        uVar12 = *(ulonglong *)(param_1 + 0x118);
        uVar19 = uVar22;
        if (uVar12 == 0) {
          if (uVar7 < 0xf8c) {
            auVar2 = *param_2;
            uVar15 = vpextrq_avx(auVar2._0_16_,1);
            uVar19 = (uint)uVar15 & 4 | 0x20;
            uVar12 = (ulonglong)uVar19;
            if ((uVar15 & 0x10) == 0) {
              local_60._24_4_ = auVar2._24_4_;
            }
            else {
              local_60._24_4_ = *(undefined4 *)(*param_2 + uVar12);
              uVar12 = (ulonglong)(uVar19 + 4);
            }
            local_60._16_4_ = auVar2._16_4_;
            if (local_60._16_4_ != 0) {
              uVar12 = (ulonglong)((int)uVar12 + 0x2c);
            }
            uVar19 = (uint)uVar12;
            uVar3 = ((uint)uVar15 & 8 | 0x10) >> 3;
            if ((uVar15 & 1) != 0) {
              uVar3 = 8;
            }
            uVar20 = (uint)(ushort)(uVar15 >> 0x10);
            iVar14 = uVar20 * uVar3;
            *(int *)(param_1 + 300) = iVar14;
            if ((iVar14 == 0) || (1 < uVar20 - 1)) goto LAB_180033358;
            if (((uint *)(*param_2 + uVar12) != (uint *)0x0) &&
               ((uVar3 = *(uint *)(*param_2 + uVar12), uVar12 = (ulonglong)uVar3, uVar3 != 0 &&
                (uVar12 < uVar4)))) {
              *(ulonglong *)(param_1 + 0x118) = uVar12;
              if (*(ushort *)(param_1 + 0x128) < 0xed9) {
                uVar12 = uVar12 - (uint)local_60._24_4_;
                *(ulonglong *)(param_1 + 0x118) = uVar12;
              }
              goto LAB_180033421;
            }
          }
          else {
            local_98 = *param_2;
            local_78 = *(undefined1 (*) [16])param_2[1];
            iVar14 = vpextrd_avx(local_98._0_16_,2);
            if (((0 < iVar14) &&
                (pauVar11 = (undefined1 (*) [16])(*param_2 + iVar14),
                pauVar11 != (undefined1 (*) [16])0x0)) &&
               (pauVar11[1] + 8 < *param_2 + (lVar18 - param_4) * uVar9)) {
              uVar1 = *(undefined8 *)pauVar11[1];
              local_60._16_8_ = uVar1;
              auVar2 = local_60;
              uVar19 = (uint)((ulonglong)uVar1 >> 0x10) & 0xffff;
              local_60._16_2_ = (undefined2)uVar1;
              iVar8 = ((ushort)local_60._16_2_ >> 3) * uVar19;
              local_60._16_16_ = auVar2._16_16_;
              local_60._0_16_ = *pauVar11;
              *(int *)(param_1 + 300) = iVar8;
              auVar2 = local_60;
              if ((iVar8 != 0) && (uVar19 - 1 < 2)) {
                uVar6 = local_98._16_4_;
                lVar18 = (ulonglong)(uint)local_78._0_4_ +
                         ((ulonglong)local_98._8_8_ >> 0x20) + local_98._24_8_ +
                         ((ulonglong)local_98._16_8_ >> 0x20) + (ulonglong)(uint)(uVar6 + iVar14);
                goto LAB_18003349b;
              }
LAB_180033358:
              local_60 = auVar2;
              *(undefined8 *)(param_1 + 0x10) = 0;
              auVar2 = local_60;
            }
          }
        }
        else {
LAB_180033421:
          local_60 = auVar2;
          uVar19 = uVar19 >> 2;
          uVar15 = uVar9;
          if (uVar12 <= uVar9) {
            uVar15 = uVar12;
          }
          for (puVar13 = (uint *)(*param_2 + (ulonglong)uVar19 * 4);
              ((ulonglong)(longlong)(int)uVar19 < uVar15 >> 2 && (puVar13 != (uint *)0x0));
              puVar13 = puVar13 + 1) {
            uVar3 = *puVar13;
            if ((uVar3 == 0) || (uVar4 <= uVar3)) break;
            uVar12 = *(ulonglong *)(param_1 + 0x120);
            if (*(ulonglong *)(param_1 + 0x120) <= (ulonglong)uVar3) {
              uVar12 = (ulonglong)uVar3;
            }
            uVar19 = uVar19 + 1;
            *(ulonglong *)(param_1 + 0x120) = uVar12;
          }
          if (uVar9 < *(longlong *)(param_1 + 0x118) - 4U) {
            *(ulonglong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) - uVar9;
            auVar2 = local_60;
          }
          else {
            lVar18 = *(longlong *)(param_1 + 0x120);
LAB_18003349b:
            *(longlong *)(param_1 + 0x10) = lVar18;
            auVar2 = local_60;
          }
        }
      }
      local_60 = auVar2;
      if (((*(ulonglong *)(param_1 + 0x10) != 0) &&
          (uVar9 = (ulonglong)*(int *)(param_1 + 300), 0 < *(int *)(param_1 + 300))) &&
         (*(ulonglong *)(param_1 + 0x10) <= uVar17)) {
        if (*(int *)(param_5 + 0x14) < 1) {
          if (*(ushort *)(param_1 + 0x128) < 0xf8c) {
            *(ulonglong *)(param_1 + 0x10) = uVar17;
          }
        }
        else {
          iVar14 = local_a8 + -1;
          bVar5 = true;
          uVar19 = uVar22;
          if (-1 < iVar14) {
            pcVar16 = *param_2 + iVar14;
            uVar19 = 0;
            do {
              if (bVar5) {
                if (*pcVar16 == '\0') {
                  uVar19 = uVar19 + 1;
                }
                else {
                  bVar5 = false;
                }
              }
              if (((*(longlong *)(*param_2 + iVar14) == s_APETAGEX_18006bf70._0_8_) &&
                  (local_60 = *(undefined1 (*) [32])(*param_2 + iVar14), local_60._16_4_ < 0x10000))
                 && ((int)(local_60._12_4_ - 0x20) < 0x1000001)) {
                uVar22 = local_60._12_4_ + 0x20;
                if (-1 < (int)local_60._20_4_) {
                  uVar22 = local_60._12_4_;
                }
                iVar21 = iVar14;
                if ((local_60[0x17] >> 5 & 1) == 0) {
                  iVar21 = (iVar14 - uVar22) + 0x20;
                }
                break;
              }
              pcVar16 = pcVar16 + -1;
              iVar14 = iVar14 + -1;
            } while (-1 < iVar14);
          }
          if ((int)uVar22 < 1) {
            uVar17 = uVar17 - (longlong)(int)uVar19;
            if (uVar17 % uVar9 != 0) {
              uVar17 = (uVar17 - uVar17 % uVar9) + uVar9;
            }
            lVar18 = uVar17 + uVar9;
          }
          else if (*(ushort *)(param_1 + 0x128) < 0xf8c) {
            lVar18 = iVar21 + local_a0 + (longlong)(int)uVar22;
          }
          else {
            uVar17 = *(longlong *)(param_1 + 0x10) + (longlong)(int)uVar22;
            lVar18 = (uVar17 - uVar17 % uVar9) + uVar9;
          }
          *(longlong *)(param_1 + 0x10) = lVar18;
        }
      }
    }
  }
  if (uVar4 < *(ulonglong *)(param_1 + 0x10)) {
    *(ulonglong *)(param_1 + 0x10) = uVar4;
  }
LAB_1800335d7:
  __security_check_cookie(local_40 ^ (ulonglong)auStack_c8);
  return;
}

