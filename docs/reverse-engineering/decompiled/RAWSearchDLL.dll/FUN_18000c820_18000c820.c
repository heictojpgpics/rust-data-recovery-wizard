// Function: FUN_18000c820
// Address: 18000c820
// Size: 1516 bytes


void FUN_18000c820(undefined4 *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  uint *puVar1;
  undefined **ppuVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  undefined7 extraout_var;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  uint *puVar19;
  undefined4 uVar20;
  undefined1 auStackY_218 [32];
  longlong local_1e0;
  longlong *local_1d0;
  uint *local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined4 local_1a0;
  int local_19c;
  undefined8 local_198;
  longlong local_190;
  longlong *local_188;
  undefined8 local_180;
  undefined8 local_178 [2];
  byte local_168 [8];
  uint *local_160;
  longlong local_158;
  uint local_150;
  ulonglong local_58;
  
  local_180 = 0xfffffffffffffffe;
  local_58 = DAT_18008f028 ^ (ulonglong)auStackY_218;
  local_1c0 = param_4;
  local_1b8 = param_3;
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (iVar8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 8))
                        (*(longlong **)(param_1 + 0x30),
                         (ulonglong)((uint)param_1[0x36] >> 1) + *(longlong *)(param_1 + 0x38),
                         param_2,param_3), iVar8 != 0)) {
    plVar10 = FUN_1800424b0();
    if (((longlong *)*plVar10 == (longlong *)0x0) ||
       (iVar8 = (**(code **)(*(longlong *)*plVar10 + 0x10))(), iVar8 != 0)) {
      local_1e0 = 0;
      if (0 < param_3) {
        do {
          bVar5 = false;
          if ((param_4 == (longlong *)0x0) || (*param_4 == 0)) {
LAB_18000c992:
            if (!bVar5) goto LAB_18000c99a;
          }
          else {
            if (*(char *)((longlong)param_4 + 0x1d) == '\0') {
              uVar9 = *(uint *)(param_4 + 3);
              bVar6 = FUN_180058df0(local_1c0,(ulonglong)(param_2 + local_1e0) / (ulonglong)uVar9);
              if ((((int)CONCAT71(extraout_var,bVar6) != 0) ||
                  (((longlong *)local_1c0[0xc] != (longlong *)0x0 &&
                   (cVar7 = (**(code **)(*(longlong *)local_1c0[0xc] + 0x20))(), cVar7 != '\0'))))
                 && (bVar5 = true, (ulonglong)(param_2 + local_1e0) % (ulonglong)uVar9 == 0)) {
                local_1e0 = local_1e0 + (ulonglong)(uVar9 - 1);
              }
              goto LAB_18000c992;
            }
LAB_18000c99a:
            plVar10 = *(longlong **)(param_1 + 0x30);
            ppuVar2 = (undefined **)*plVar10;
            if ((code *)ppuVar2[4] == FUN_180042590) {
              lVar11 = plVar10[3];
              if (lVar11 == 0) {
                if (ppuVar2 == CRawFileCellTestStorageDevice::vftable) {
                  lVar11 = plVar10[7];
                }
                else {
                  lVar11 = (*(code *)ppuVar2[3])();
                }
              }
            }
            else {
              lVar11 = (*(code *)ppuVar2[4])();
            }
            puVar1 = (uint *)(param_2 + local_1e0);
            local_1c8 = puVar1;
            if (lVar11 <= (longlong)puVar1) break;
            lVar11 = param_2;
            FUN_18000b520((undefined8 *)local_168);
            ppuVar2 = (undefined **)**(longlong **)(param_1 + 0x30);
            local_160 = puVar1;
            if (ppuVar2 == CRawFileCellTestStorageDevice::vftable) {
              iVar8 = *(int *)((longlong)*(longlong **)(param_1 + 0x30) + 0xc);
              if (iVar8 < 1) {
                iVar8 = 0x200;
              }
            }
            else {
              iVar8 = (*(code *)ppuVar2[5])();
              lVar11 = param_2;
            }
            puVar19 = (uint *)(iVar8 * local_1e0 + (ulonglong)((uint)param_1[0x36] >> 1) +
                              *(longlong *)(param_1 + 0x38));
            uVar20 = 4;
            if (*puVar19 != 0) {
              uVar20 = 0;
            }
            iVar17 = 0;
            iVar8 = 0x1c;
            piVar15 = (int *)((longlong)(int)param_1[0x3c] + -4 + (longlong)puVar19);
            do {
              if (*piVar15 != 0) break;
              iVar17 = iVar17 + 4;
              piVar15 = piVar15 + -1;
              iVar8 = iVar8 + -4;
            } while (-1 < iVar8);
            lVar14 = lVar11;
            if (0 < lVar11) {
              ppuVar2 = (undefined **)**(longlong **)(param_1 + 0x30);
              if (ppuVar2 == CRawFileCellTestStorageDevice::vftable) {
                uVar9 = *(uint *)((longlong)*(longlong **)(param_1 + 0x30) + 0xc);
                uVar16 = (ulonglong)uVar9;
                if ((int)uVar9 < 1) {
                  uVar16 = 0x200;
                }
              }
              else {
                uVar9 = (*(code *)ppuVar2[5])();
                uVar16 = (ulonglong)uVar9;
                lVar14 = param_2;
              }
              lVar11 = lVar14 - ((uint)param_1[0x36] >> 1) / uVar16;
            }
            local_1a8 = local_1b8 + lVar14;
            local_198 = 0;
            local_1b0 = lVar11;
            local_1a0 = uVar20;
            local_19c = iVar17;
            plVar10 = (longlong *)FUN_18000cf60(param_1,puVar19,local_168,puVar1,&local_1b0);
            plVar12 = (longlong *)0x0;
            if (plVar10 == (longlong *)0x0) {
LAB_18000ccfc:
              FUN_18000d670((longlong)param_1,(longlong)puVar19,plVar12,local_1c8,
                            (longlong)&local_1b0,*(longlong *)(param_1 + 0x30));
            }
            else {
              plVar12 = (longlong *)(**(code **)(*plVar10 + 0x38))(plVar10);
              if (plVar12 != (longlong *)0x0) {
                if (local_150 == 0) {
                  local_150 = *(uint *)(plVar10 + 1);
                }
                *(uint *)(plVar12 + 3) = local_150;
                plVar12[2] = local_158;
                plVar12[1] = (longlong)local_1c8;
                plVar12[0x1a] = (longlong)plVar10;
                *(int *)((longlong)plVar12 + 0x1c) = (int)plVar10[1];
                lVar11 = *(longlong *)(param_1 + 0x34);
                lVar3 = *(longlong *)(lVar11 + 0x10000);
                plVar10 = *(longlong **)(lVar3 + 8);
                plVar18 = plVar10;
                local_1d0 = plVar12;
                lVar13 = FUN_180009f00((ulonglong)local_150,lVar3,(longlong)plVar10,&local_1d0);
                if (*(longlong *)(lVar11 + 0x10008) != 0xaaaaaaaaaaaaaa9) {
                  *(longlong *)(lVar11 + 0x10008) = *(longlong *)(lVar11 + 0x10008) + 1;
                  *(longlong *)(lVar3 + 8) = lVar13;
                  *plVar10 = lVar13;
                  local_190 = local_1d0[1];
                  local_188 = local_1d0;
                  FUN_18000e4e0((longlong *)(lVar11 + 0x10028),local_178,plVar18,&local_190);
                  if (plVar12[2] != 0) {
                    if (*(undefined8 **)(param_1 + 0x42) != (undefined8 *)0x0) {
                      (**(code **)**(undefined8 **)(param_1 + 0x42))();
                    }
                    FUN_18000b6b0((undefined8 *)local_168);
                    goto LAB_18000cd2f;
                  }
                  plVar10 = plVar12;
                  local_1d0 = plVar12;
                  cVar7 = (**(code **)(*plVar12 + 8))();
                  if (cVar7 != '\0') {
                    if (((*(longlong *)(param_1 + 0x40) != 0) &&
                        (0x10 < *(longlong *)(param_1 + 0x40) + 1U)) &&
                       (plVar18 = *(longlong **)(**(longlong **)(param_1 + 0x3e) + 0x10),
                       plVar18 != (longlong *)0x0)) {
                      (**(code **)(*plVar18 + 0x10))(plVar18,puVar19,local_1c8);
                      if (((*(longlong *)(param_1 + 0x42) != 0) && (plVar18[2] != 0)) &&
                         (plVar18[0x1a] == 0)) {
                        FUN_18000d980((longlong)param_1,plVar18[1],(ulonglong)*(uint *)(plVar18 + 3)
                                     );
                        (**(code **)**(undefined8 **)(param_1 + 0x42))
                                  (*(undefined8 **)(param_1 + 0x42),plVar18);
                      }
                      plVar10 = (longlong *)**(undefined8 **)(param_1 + 0x3e);
                      *(longlong *)plVar10[1] = *plVar10;
                      *(longlong *)(*plVar10 + 8) = plVar10[1];
                      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
                      free(plVar10);
                    }
                    lVar11 = *(longlong *)(param_1 + 0x3e);
                    plVar18 = *(longlong **)(lVar11 + 8);
                    lVar14 = FUN_180009f00(plVar10,lVar11,(longlong)plVar18,&local_1d0);
                    if (*(longlong *)(param_1 + 0x40) == 0xaaaaaaaaaaaaaa9) {
                      std::_Xlength_error("list<T> too long");
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
                    *(longlong *)(lVar11 + 8) = lVar14;
                    *plVar18 = lVar14;
                  }
                  goto LAB_18000ccfc;
                }
                param_2 = lVar14;
                std::_Xlength_error("list<T> too long");
                break;
              }
            }
            FUN_18000b6b0((undefined8 *)local_168);
          }
LAB_18000cd2f:
          local_1e0 = local_1e0 + 1;
          param_4 = local_1c0;
        } while (local_1e0 < local_1b8);
      }
      memmove(*(void **)(param_1 + 0x38),
              (void *)((longlong)*(void **)(param_1 + 0x38) + (ulonglong)((uint)param_1[0x36] >> 1))
              ,(ulonglong)((uint)param_1[0x36] >> 1));
      plVar10 = *(longlong **)(param_1 + 0x56);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x40))
                  (plVar10,(int)param_1[0x3c] * param_2,*(undefined8 *)(param_1 + 0x38),
                   (uint)param_1[0x36] >> 1);
      }
    }
  }
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_218);
  return;
}

