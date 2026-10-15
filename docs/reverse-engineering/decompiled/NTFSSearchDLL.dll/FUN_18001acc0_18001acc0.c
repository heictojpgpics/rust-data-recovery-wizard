// Function: FUN_18001acc0
// Address: 18001acc0
// Size: 1163 bytes


undefined8 FUN_18001acc0(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  longlong *plVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  longlong lVar14;
  ulonglong extraout_RAX;
  char *pcVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  longlong local_c0;
  ulonglong local_a8;
  longlong *local_a0;
  ulonglong local_98;
  undefined8 local_90;
  longlong local_88 [10];
  
  local_90 = 0xfffffffffffffffe;
  if ((param_2 != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))();
    if ((int)uVar8 < 1) {
      uVar8 = 0x200;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    uVar16 = 0x400;
    if (0x400 < uVar8) {
      uVar16 = uVar8;
    }
    local_c0 = 0;
    uVar9 = uVar8 * param_3;
    in_RAX = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      do {
        if ((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) &&
           (in_RAX = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(), (int)in_RAX == 0))
        break;
        piVar1 = (int *)(local_c0 + param_2);
        if ((*piVar1 == 0x454c4946) &&
           ((in_RAX = FUN_180041bb0(piVar1,uVar16), (int)in_RAX != 0 &&
            (in_RAX = FUN_180034b20(piVar1,uVar16), (int)in_RAX == 0)))) {
          bVar4 = FUN_180041970((longlong)piVar1);
          in_RAX = CONCAT71(extraout_var,bVar4);
          if ((int)in_RAX != 0) goto LAB_18001b0cb;
          uVar19 = (ulonglong)(int)uVar8;
          lVar18 = local_c0 / (longlong)uVar19 + param_4;
          local_a8 = 0;
          FUN_1800431d0(local_88,piVar1,(ulonglong)uVar16,lVar18,*(longlong **)(param_1 + 0x20),
                        (undefined8 *)0x0);
          bVar4 = FUN_180043030(local_88);
          if (((int)CONCAT71(extraout_var_00,bVar4) == 0) ||
             (plVar10 = FUN_180006db0(lVar18,local_88,(longlong)(int)(iVar2 * uVar8),&local_a8,0x200
                                     ), plVar10 == (longlong *)0x0)) {
LAB_18001b0b8:
            in_RAX = FUN_180043170(local_88);
            uVar19 = (ulonglong)uVar16;
          }
          else {
            if ((undefined **)*plVar10 == CNTFSFileProperties::vftable) {
              uVar7 = *(ushort *)((longlong)plVar10 + 0x23);
              ppuVar11 = CNTFSFileProperties::vftable;
            }
            else {
              uVar7 = (*(code *)((undefined **)*plVar10)[7])(plVar10);
              ppuVar11 = (undefined **)*plVar10;
            }
            if (ppuVar11 == CNTFSFileProperties::vftable) {
              pcVar15 = *(char **)((longlong)plVar10 + 0x11);
            }
            else {
              pcVar15 = (char *)(*(code *)ppuVar11[2])(plVar10);
            }
            if ((((uVar7 & 4) != 0) || (pcVar15 == (char *)0x0)) || (*pcVar15 == '$')) {
              (**(code **)(*plVar10 + 0x138))(plVar10,1);
              goto LAB_18001b0b8;
            }
            if ((uVar7 & 0x10) == 0) {
              if ((undefined **)*plVar10 == CNTFSFileProperties::vftable) {
                if ((ushort *)plVar10[9] == (ushort *)0x0) {
                  puVar12 = (undefined8 *)0x0;
                }
                else {
                  puVar12 = FUN_180033aa0((ushort *)plVar10[9]);
                }
              }
              else {
                puVar12 = (undefined8 *)(*(code *)((undefined **)*plVar10)[0xf])(plVar10);
              }
              if ((undefined **)*plVar10 == CNTFSFileProperties::vftable) {
                lVar18 = *(longlong *)((longlong)plVar10 + 0x1b);
              }
              else {
                lVar18 = (*(code *)((undefined **)*plVar10)[3])(plVar10);
              }
              if (0x3ff < lVar18) {
                plVar17 = *(longlong **)(param_1 + 0x40);
                if (plVar17 == (longlong *)0x0) {
                  plVar17 = *(longlong **)(param_1 + 0x48);
                }
                if (puVar12 != (undefined8 *)0x0) {
                  if ((plVar17 != (longlong *)0x0) && (*plVar17 != 0)) {
                    iVar21 = 0;
                    iVar20 = 0;
                    plVar13 = FUN_1800340b0((longlong)puVar12);
                    if (plVar13 != (longlong *)0x0) {
                      do {
                        if (*plVar13 != -1) {
                          iVar21 = iVar21 + 1;
                          lVar18 = (longlong)*(int *)(param_1 + 0x28) * *plVar13;
                          bVar5 = FUN_18002c2e0(plVar17,lVar18);
                          if (((int)CONCAT71(extraout_var_01,bVar5) != 0) ||
                             ((plVar13 = (longlong *)plVar17[0xc], plVar13 != (longlong *)0x0 &&
                              (cVar6 = (**(code **)(*plVar13 + 0x20))(plVar13,lVar18), cVar6 != '\0'
                              )))) {
                            iVar20 = iVar20 + 1;
                          }
                        }
                        plVar13 = (longlong *)0x0;
                        puVar12[8] = puVar12[8] + 1;
                        bVar4 = FUN_1800341c0((longlong)puVar12);
                        if ((int)CONCAT71(extraout_var_02,bVar4) == 0) {
                          if ((longlong *)puVar12[6] == (longlong *)0x0) {
                            lVar18 = 0;
                          }
                          else {
                            lVar18 = *(longlong *)puVar12[6];
                          }
                          plVar13 = *(longlong **)
                                     (*(longlong *)
                                       (*(longlong *)(lVar18 + 8) +
                                       (*(longlong *)(lVar18 + 0x10) - 1U &
                                       (ulonglong)puVar12[8] >> 1) * 8) +
                                     (ulonglong)((uint)puVar12[8] & 1) * 8);
                        }
                      } while (plVar13 != (longlong *)0x0);
                      if ((0 < iVar21) && (iVar20 == iVar21)) goto LAB_18001b06f;
                    }
                  }
                  (**(code **)*puVar12)(puVar12,1);
                }
                goto LAB_18001afe6;
              }
LAB_18001b06f:
              (**(code **)(*plVar10 + 0x138))(plVar10,1);
              uVar19 = (ulonglong)uVar16;
              if (puVar12 != (undefined8 *)0x0) {
                (**(code **)*puVar12)(puVar12,1);
              }
              in_RAX = FUN_180043170(local_88);
            }
            else {
LAB_18001afe6:
              ppuVar11 = (undefined **)*plVar10;
              pcVar3 = (code *)ppuVar11[0xe];
              if (ppuVar11 == CNTFSFileProperties::vftable) {
                uVar7 = (ushort)*(byte *)((longlong)plVar10 + 0x3d);
              }
              else {
                uVar7 = (*(code *)ppuVar11[0xd])(plVar10);
              }
              plVar13 = plVar10;
              (*pcVar3)(plVar10,uVar7 | 1);
              local_98 = local_a8;
              lVar18 = *(longlong *)(param_1 + 0x10);
              plVar17 = *(longlong **)(lVar18 + 8);
              local_a0 = plVar10;
              lVar14 = FUN_18001b150(plVar13,lVar18,(longlong)plVar17,&local_a0);
              if (*(longlong *)(param_1 + 0x18) == 0x7fffffffffffffe) {
                std::_Xlength_error("list<T> too long");
                in_RAX = extraout_RAX;
                break;
              }
              *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
              *(longlong *)(lVar18 + 8) = lVar14;
              *plVar17 = lVar14;
              in_RAX = FUN_180043170(local_88);
            }
          }
        }
        else {
LAB_18001b0cb:
          uVar19 = (ulonglong)(int)uVar8;
        }
        local_c0 = local_c0 + uVar19;
      } while (local_c0 < (int)uVar9);
    }
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}

