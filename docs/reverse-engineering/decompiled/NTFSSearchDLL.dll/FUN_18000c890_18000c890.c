// Function: FUN_18000c890
// Address: 18000c890
// Size: 1482 bytes


void FUN_18000c890(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined7 extraout_var;
  int *piVar8;
  short *psVar9;
  ulonglong *puVar10;
  longlong lVar11;
  LPCRITICAL_SECTION p_Var12;
  ulonglong uVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_b8 [4];
  uint local_b4;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong *local_70;
  ulonglong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_180086010 ^ (ulonglong)auStack_e8;
  plVar21 = *(longlong **)(param_1 + 0xb8);
  local_b0 = param_2;
  if (plVar21 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x11c) < param_3) {
      param_3 = (longlong)*(int *)(param_1 + 0x11c);
    }
    DAT_1800881b0 = 0;
    *(undefined8 *)(param_1 + 0x838) = 0;
    local_c8 = 0;
    local_a0 = param_3;
    (**(code **)(*plVar21 + 8))
              (plVar21,(longlong)*(int *)(param_1 + 0x120) + *(longlong *)(param_1 + 0xc0),param_2,
               param_3);
    local_b4 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
    lVar16 = *(longlong *)(param_1 + 0xc0);
    uVar17 = (ulonglong)local_b4;
    local_60 = (local_b0 + param_3) * uVar17;
    lVar18 = (param_2 - DAT_180086d6c) * uVar17;
    plVar21 = (longlong *)
              ((ulonglong)(*(int *)(param_1 + 0x120) - DAT_180086d6c * local_b4) + lVar16);
    local_a8 = lVar18;
    local_68 = uVar17;
    if (lVar18 < local_60) {
      do {
        local_a8 = lVar18;
        if (*plVar21 == 0) {
LAB_18000cd98:
          uVar13 = 0x200;
          lVar18 = local_a8;
        }
        else {
          uVar7 = lVar18 / (longlong)uVar17;
          if ((param_4 == (longlong *)0x0) || (*param_4 == 0)) {
LAB_18000ca0c:
            puVar10 = (ulonglong *)(param_1 + 0x7f8);
            lVar16 = (local_b0 - uVar7) + local_a0;
            if (0x10 < lVar16) {
              lVar16 = 0x10;
            }
            uVar15 = (int)lVar16 * local_b4;
            bVar3 = false;
            if ((((*puVar10 != *(ulonglong *)(param_1 + 0x800)) &&
                 (uVar7 - *(longlong *)(*(longlong *)(param_1 + 0x800) + -0x10) == 8)) &&
                (0x1ff < (int)uVar15)) && ((*plVar21 == -1 && (plVar21[0x3f] == -1)))) {
              bVar3 = true;
            }
            cVar5 = FUN_18003f6d0(plVar21);
            if (cVar5 == '\0') {
              if (((int)uVar15 < 0x1000) || (uVar15 < 0x98)) {
LAB_18000cbfb:
                iVar6 = FUN_18000b4c0(param_1,uVar7,(int *)plVar21,uVar15);
                if (iVar6 == 0) {
                  if ((int)uVar15 < 0x1000) {
                    iVar6 = FUN_1800469e0(local_b8,(int *)plVar21);
                  }
                  else {
                    uVar14 = FUN_180046980(local_b8,(int *)plVar21);
                    iVar6 = (int)uVar14;
                  }
                  if ((iVar6 != 0) || (bVar3)) {
                    if (*puVar10 != *(ulonglong *)(param_1 + 0x800)) {
                      lVar16 = *(longlong *)(param_1 + 0x800);
                      if ((*(longlong *)(lVar16 + -0x20) == 0) &&
                         (uVar7 - *(longlong *)(lVar16 + -0x28) == 8)) {
                        *(ulonglong *)(lVar16 + -0x20) = uVar7 - 8;
                        *(ulonglong *)(lVar16 + -0x28) = uVar7 - 0x10;
                        *(ulonglong *)(lVar16 + -0x10) = uVar7 - 8;
                      }
                      if (uVar7 - *(longlong *)(lVar16 + -0x10) == 8) {
                        *(longlong *)(lVar16 + -0x18) = *(longlong *)(lVar16 + -0x18) + 8;
                        *(ulonglong *)(lVar16 + -0x10) = uVar7;
                      }
                    }
                    *(ulonglong *)(param_1 + 2000) = uVar7;
                    *(ulonglong *)(param_1 + 0x838) = uVar7;
                  }
                  else {
                    p_Var12 = FUN_18000c390(param_1,uVar7,(int *)plVar21,uVar15);
                    if ((int)p_Var12 == 0) goto LAB_18000cc56;
                  }
                }
              }
              else {
                local_58 = 0x54004e;
                uStack_54 = 0x530046;
                if (((int)*plVar21 != 0x52545352) || (plVar21[0x12] != 0x5300460054004e))
                goto LAB_18000cbfb;
                psVar9 = (short *)((longlong)plVar21 + 0x1fe);
                lVar16 = 0;
                do {
                  if (*psVar9 != *(short *)((longlong)plVar21 + 0x1e)) goto LAB_18000cbfb;
                  lVar16 = lVar16 + 1;
                  psVar9 = psVar9 + 0x100;
                } while (lVar16 < 8);
                puVar1 = *(undefined8 **)(param_1 + 0x800);
                if ((undefined8 *)*puVar10 == puVar1) {
LAB_18000cb11:
                  uStack_90 = 0;
                  uStack_88 = 0;
                  uStack_80 = 0;
                  uStack_78 = 0;
                  local_98 = uVar7;
                  if (*(undefined8 **)(param_1 + 0x808) == puVar1) {
                    FUN_180013720(puVar10,puVar1,&local_98);
                  }
                  else {
                    puVar10 = (ulonglong *)FUN_180001100(lVar16,puVar1);
                    *puVar10 = local_98;
                    puVar10[1] = uStack_90;
                    *(undefined4 *)(puVar10 + 2) = (undefined4)uStack_88;
                    *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_88._4_4_;
                    *(undefined4 *)(puVar10 + 3) = (undefined4)uStack_80;
                    *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_80._4_4_;
                    puVar10[4] = uStack_78;
                    *(longlong *)(param_1 + 0x800) = *(longlong *)(param_1 + 0x800) + 0x28;
                  }
                }
                else {
                  lVar16 = *(longlong *)(param_1 + 0x800);
                  lVar18 = *(longlong *)(lVar16 + -0x28);
                  if ((0 < lVar18) && (lVar18 < *(longlong *)(lVar16 + -0x20))) goto LAB_18000cb11;
                  *(ulonglong *)(lVar16 + -0x20) = uVar7;
                  *(ulonglong *)(lVar16 + -0x10) = uVar7;
                  *(ulonglong *)(lVar16 + -0x18) = uVar7 - lVar18;
                }
                lVar16 = *(longlong *)(param_1 + 0xf8);
                if (*(ulonglong *)(lVar16 + 0x18) < 500000) {
                  uVar14 = 8;
                  puVar10 = (ulonglong *)FUN_18002be40(8);
                  if (puVar10 != (ulonglong *)0x0) {
                    *puVar10 = uVar7;
                    lVar18 = *(longlong *)(lVar16 + 0x10);
                    plVar20 = *(longlong **)(lVar18 + 8);
                    local_70 = puVar10;
                    lVar11 = FUN_1800143b0(uVar14,lVar18,(longlong)plVar20,&local_70);
                    if (*(longlong *)(lVar16 + 0x18) == 0xaaaaaaaaaaaaaa9) {
                      std::_Xlength_error("list<T> too long");
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    *(longlong *)(lVar16 + 0x18) = *(longlong *)(lVar16 + 0x18) + 1;
                    *(longlong *)(lVar18 + 8) = lVar11;
                    *plVar20 = lVar11;
                  }
                }
              }
            }
            else {
              piVar8 = (int *)FUN_18002c550();
              if (*piVar8 != 0) {
                FUN_18000af80(param_1,uVar7,plVar21);
              }
LAB_18000cc56:
              FUN_18000abd0(param_1,plVar21,uVar15,uVar7);
            }
            pwVar19 = L"$STANDARD_INFORMATION";
            plVar20 = plVar21 + -0x300099ce;
            do {
              lVar16 = 0;
              while ((*(char *)((longlong)plVar20 + lVar16 + (longlong)pwVar19) ==
                      *(char *)(lVar16 + (longlong)pwVar19) &&
                     (*(char *)(lVar16 + 0x100 + (longlong)plVar21) ==
                      *(char *)(lVar16 + 0x100 + (longlong)pwVar19)))) {
                lVar16 = lVar16 + 1;
                if (0xff < lVar16) {
                  FUN_18002bd60((longlong *)(*(longlong *)(param_1 + 0xe8) + 0x10),uVar7);
                  goto LAB_18000cd23;
                }
              }
              pwVar19 = pwVar19 + 0x100;
              plVar20 = plVar20 + -0x40;
            } while ((longlong)pwVar19 < 0x18004d870);
LAB_18000cd23:
            lVar16 = 0;
            lVar18 = (ulonglong)*(byte *)((longlong)plVar21 + 1) * 0x200;
            do {
              uVar17 = local_68;
              if ((*(char *)(lVar16 + (longlong)plVar21) != (&DAT_18004d870)[lVar16 + lVar18]) ||
                 (*(char *)(lVar16 + 0x100 + (longlong)plVar21) != (&DAT_18004d970)[lVar16 + lVar18]
                 )) goto LAB_18000cd98;
              lVar16 = lVar16 + 1;
            } while (lVar16 < 0x100);
            FUN_18002bd60((longlong *)(*(longlong *)(param_1 + 0xf0) + 0x10),uVar7);
            uVar17 = local_68;
            goto LAB_18000cd98;
          }
          uVar15 = *(uint *)(param_4 + 3);
          bVar4 = FUN_18002c2e0(param_4,uVar7);
          if (((int)CONCAT71(extraout_var,bVar4) == 0) &&
             ((plVar20 = (longlong *)param_4[0xc], plVar20 == (longlong *)0x0 ||
              (cVar5 = (**(code **)(*plVar20 + 0x20))(plVar20,uVar7), cVar5 == '\0'))))
          goto LAB_18000ca0c;
          uVar13 = uVar17;
          if ((longlong)uVar7 % (longlong)(ulonglong)uVar15 == 0) {
            uVar13 = (ulonglong)(uVar15 * local_b4);
          }
        }
        lVar18 = lVar18 + uVar13;
        plVar21 = (longlong *)((longlong)plVar21 + uVar13);
      } while (lVar18 < local_60);
      lVar16 = *(longlong *)(param_1 + 0xc0);
      param_3 = local_a0;
      local_a8 = lVar18;
    }
    DAT_180086d6c = 0;
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
    memcpy(*(void **)(param_1 + 0xc0),(void *)(iVar6 * param_3 + lVar16),
           (longlong)*(int *)(param_1 + 0x120));
  }
  __security_check_cookie(local_50 ^ (ulonglong)auStack_e8);
  return;
}

