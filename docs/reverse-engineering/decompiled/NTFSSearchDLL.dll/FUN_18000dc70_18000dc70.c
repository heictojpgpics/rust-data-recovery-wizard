// Function: FUN_18000dc70
// Address: 18000dc70
// Size: 2824 bytes


void FUN_18000dc70(longlong param_1,undefined8 param_2,longlong *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  longlong *local_res8;
  ulonglong local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  LPCRITICAL_SECTION local_60;
  undefined8 local_58 [3];
  
  local_res10 = param_2;
  local_res18 = param_3;
  puVar7 = FUN_18002c550();
  iVar25 = 0;
  uVar23 = *(ulonglong *)(param_1 + 0x148);
  *param_3 = 0;
  plVar8 = (longlong *)**(longlong **)(param_1 + 0x140);
  local_res10 = uVar23;
  if (plVar8 != *(longlong **)(param_1 + 0x140)) {
    do {
      plVar13 = (longlong *)(param_1 + 0x140);
      puVar3 = (undefined8 *)plVar8[4];
      if (puVar3 == (undefined8 *)0x0) {
        plVar21 = (longlong *)plVar8[2];
        if (*(char *)((longlong)plVar21 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar21 + 0x19);
          plVar8 = (longlong *)*plVar21;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar8 + 0x19);
            plVar21 = plVar8;
            plVar8 = (longlong *)*plVar8;
          }
        }
        else {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar13 = (longlong *)plVar8[1];
          while ((plVar21 = plVar13, cVar1 == '\0' && (plVar8 == (longlong *)plVar21[2]))) {
            cVar1 = *(char *)(plVar21[1] + 0x19);
            plVar13 = (longlong *)plVar21[1];
            plVar8 = plVar21;
          }
        }
      }
      else if (((ulonglong)*(uint *)(puVar3 + 0xb) * puVar3[0xc] < 0x4000000) &&
              (6 < *(ulonglong *)(param_1 + 0x148))) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7a8));
        plVar20 = (longlong *)plVar8[2];
        if (*(char *)((longlong)plVar20 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar20 + 0x19);
          plVar21 = plVar20;
          plVar18 = (longlong *)*plVar20;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar18 + 0x19);
            plVar21 = plVar18;
            plVar18 = (longlong *)*plVar18;
          }
        }
        else {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar19 = (longlong *)plVar8[1];
          plVar18 = plVar8;
          while ((plVar21 = plVar19, cVar1 == '\0' && (plVar18 == (longlong *)plVar21[2]))) {
            cVar1 = *(char *)(plVar21[1] + 0x19);
            plVar19 = (longlong *)plVar21[1];
            plVar18 = plVar21;
          }
        }
        if (*(char *)((longlong)plVar20 + 0x19) == '\0') {
          plVar20 = (longlong *)*plVar20;
          cVar1 = *(char *)((longlong)plVar20 + 0x19);
          while (cVar1 == '\0') {
            plVar20 = (longlong *)*plVar20;
            cVar1 = *(char *)((longlong)plVar20 + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar18 = (longlong *)plVar8[1];
          plVar20 = plVar8;
          while ((plVar19 = plVar18, cVar1 == '\0' && (plVar20 == (longlong *)plVar19[2]))) {
            cVar1 = *(char *)(plVar19[1] + 0x19);
            plVar18 = (longlong *)plVar19[1];
            plVar20 = plVar19;
          }
        }
        plVar8 = FUN_180012020(plVar13,plVar8);
        free(plVar8);
        (**(code **)*puVar3)(puVar3);
        iVar25 = iVar25 + -1;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7a8));
      }
      else {
        plVar20 = *(longlong **)(param_1 + 0xe8);
        if (puVar3[0x19] != -1) {
          lVar24 = puVar3[0x19] + 8;
          for (puVar12 = *(undefined8 **)*plVar20; puVar12 != (undefined8 *)*plVar20;
              puVar12 = (undefined8 *)*puVar12) {
            plVar21 = (longlong *)puVar12[2];
            if (*plVar21 == lVar24) goto LAB_18000deb0;
            if (lVar24 < *plVar21) break;
          }
        }
        plVar18 = (longlong *)*plVar20;
        plVar19 = (longlong *)*plVar18;
        if (plVar19 != plVar18) {
          lVar24 = puVar3[0xc] + puVar3[2];
          do {
            plVar21 = (longlong *)plVar19[2];
            lVar9 = *plVar21;
            if (((longlong)puVar3[2] <= lVar9) && (lVar9 < lVar24)) goto LAB_18000deb0;
          } while ((lVar9 < lVar24) && (plVar19 = (longlong *)*plVar19, plVar19 != plVar18));
        }
        plVar21 = (longlong *)0x0;
LAB_18000deb0:
        if (plVar21 == (longlong *)0x0) {
          puVar3[0x17] = 0;
        }
        else {
          puVar3[0x1b] = *plVar21;
          lVar24 = FUN_18002bc40(plVar20 + 2,plVar21 + 1,puVar3[2],
                                 (ulonglong)*(uint *)((longlong)puVar3 + 0xc));
          puVar3[0x17] = lVar24;
        }
        plVar20 = *(longlong **)(param_1 + 0xf0);
        if (puVar3[0x19] != -1) {
          lVar24 = puVar3[0x19] + 0x14;
          for (puVar12 = *(undefined8 **)*plVar20; puVar12 != (undefined8 *)*plVar20;
              puVar12 = (undefined8 *)*puVar12) {
            plVar21 = (longlong *)puVar12[2];
            if (*plVar21 == lVar24) goto LAB_18000df51;
            if (lVar24 < *plVar21) break;
          }
        }
        plVar18 = (longlong *)*plVar20;
        plVar19 = (longlong *)*plVar18;
        if (plVar19 != plVar18) {
          lVar24 = puVar3[0xc] + puVar3[2];
          do {
            plVar21 = (longlong *)plVar19[2];
            lVar9 = *plVar21;
            if (((longlong)puVar3[2] <= lVar9) && (lVar9 < lVar24)) goto LAB_18000df51;
          } while ((lVar9 < lVar24) && (plVar19 = (longlong *)*plVar19, plVar19 != plVar18));
        }
        plVar21 = (longlong *)0x0;
LAB_18000df51:
        if (plVar21 == (longlong *)0x0) {
          puVar3[0x18] = 0;
        }
        else {
          puVar3[0x1c] = *plVar21;
          lVar24 = FUN_18002bc40(plVar20 + 2,plVar21 + 1,puVar3[2],
                                 (ulonglong)*(uint *)((longlong)puVar3 + 0xc));
          puVar3[0x18] = lVar24;
        }
        FUN_180028ea0(*(longlong **)(param_1 + 0xf8),(longlong)puVar3);
        if (puVar3[0x19] != -1) {
          *(undefined4 *)(puVar3 + 0x14) = *(undefined4 *)(puVar7 + 0x58);
          *(undefined4 *)((longlong)puVar3 + 0xa4) = *(undefined4 *)(puVar7 + 0x5c);
        }
        uVar2 = *(uint *)((longlong)puVar3 + 0x9c);
        lVar24 = 0;
        if ((uVar2 & 1) != 0) {
          lVar24 = 0x1e;
        }
        if ((uVar2 & 2) != 0) {
          lVar24 = lVar24 + 10;
        }
        if ((uVar2 & 4) != 0) {
          lVar24 = lVar24 + 0x1e;
        }
        if ((uVar2 & 8) != 0) {
          lVar24 = lVar24 + 10;
        }
        if ((uVar2 & 0x10) != 0) {
          lVar24 = lVar24 + 10;
        }
        if ((uVar2 & 0x40) != 0) {
          lVar24 = lVar24 + 10;
        }
        if ((char)uVar2 < '\0') {
          lVar24 = lVar24 + 10;
        }
        lVar9 = puVar3[0x18];
        if (lVar9 < 0) {
          lVar9 = lVar9 + 0xff;
        }
        lVar9 = (lVar9 >> 8) * 10;
        if (10 < lVar9) {
          lVar9 = 10;
        }
        lVar10 = ((longlong)puVar3[0x16] / 10000) * 10;
        if (10 < lVar10) {
          lVar10 = 10;
        }
        lVar11 = ((longlong)puVar3[0x17] / 5) * 10;
        if (10 < lVar11) {
          lVar11 = 10;
        }
        puVar3[0xd] = lVar11 + lVar9 + lVar24 + lVar10;
        FUN_1800097d0(param_1,(longlong)puVar3);
        if ((((longlong)puVar3[0xd] < 1) && ((longlong)puVar3[2] < 0)) &&
           (*(char *)((longlong)puVar3 + 0xf1) == '\0')) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7a8));
          plVar20 = (longlong *)plVar8[2];
          if (*(char *)((longlong)plVar20 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar20 + 0x19);
            plVar21 = plVar20;
            plVar18 = (longlong *)*plVar20;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar18 + 0x19);
              plVar21 = plVar18;
              plVar18 = (longlong *)*plVar18;
            }
          }
          else {
            cVar1 = *(char *)(plVar8[1] + 0x19);
            plVar19 = (longlong *)plVar8[1];
            plVar18 = plVar8;
            while ((plVar21 = plVar19, cVar1 == '\0' && (plVar18 == (longlong *)plVar21[2]))) {
              cVar1 = *(char *)(plVar21[1] + 0x19);
              plVar19 = (longlong *)plVar21[1];
              plVar18 = plVar21;
            }
          }
          if (*(char *)((longlong)plVar20 + 0x19) == '\0') {
            plVar20 = (longlong *)*plVar20;
            cVar1 = *(char *)((longlong)plVar20 + 0x19);
            while (cVar1 == '\0') {
              plVar20 = (longlong *)*plVar20;
              cVar1 = *(char *)((longlong)plVar20 + 0x19);
            }
          }
          else {
            cVar1 = *(char *)(plVar8[1] + 0x19);
            plVar18 = (longlong *)plVar8[1];
            plVar20 = plVar8;
            while ((plVar19 = plVar18, cVar1 == '\0' && (plVar20 == (longlong *)plVar19[2]))) {
              cVar1 = *(char *)(plVar19[1] + 0x19);
              plVar18 = (longlong *)plVar19[1];
              plVar20 = plVar19;
            }
          }
          plVar8 = FUN_180012020(plVar13,plVar8);
          free(plVar8);
          (**(code **)*puVar3)(puVar3);
          iVar25 = iVar25 + -1;
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7a8));
        }
        else {
          lVar24 = puVar3[0xc];
          lVar9 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
          uVar22 = lVar24 - lVar9 >> 0x3f;
          if (((100 < uVar23) && (99 < iVar25)) && ((longlong)puVar3[0xd] < 0xb)) {
            if ((puVar3[2] != 0) || (0x7ff < (longlong)((lVar24 - lVar9 ^ uVar22) - uVar22))) {
              EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7a8));
              plVar20 = (longlong *)plVar8[2];
              if (*(char *)((longlong)plVar20 + 0x19) == '\0') {
                cVar1 = *(char *)(*plVar20 + 0x19);
                plVar21 = plVar20;
                plVar18 = (longlong *)*plVar20;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*plVar18 + 0x19);
                  plVar21 = plVar18;
                  plVar18 = (longlong *)*plVar18;
                }
              }
              else {
                cVar1 = *(char *)(plVar8[1] + 0x19);
                plVar19 = (longlong *)plVar8[1];
                plVar18 = plVar8;
                while ((plVar21 = plVar19, cVar1 == '\0' && (plVar18 == (longlong *)plVar21[2]))) {
                  cVar1 = *(char *)(plVar21[1] + 0x19);
                  plVar19 = (longlong *)plVar21[1];
                  plVar18 = plVar21;
                }
              }
              if (*(char *)((longlong)plVar20 + 0x19) == '\0') {
                plVar20 = (longlong *)*plVar20;
                cVar1 = *(char *)((longlong)plVar20 + 0x19);
                while (cVar1 == '\0') {
                  plVar20 = (longlong *)*plVar20;
                  cVar1 = *(char *)((longlong)plVar20 + 0x19);
                }
              }
              else {
                cVar1 = *(char *)(plVar8[1] + 0x19);
                plVar18 = (longlong *)plVar8[1];
                plVar20 = plVar8;
                while ((plVar19 = plVar18, cVar1 == '\0' && (plVar20 == (longlong *)plVar19[2]))) {
                  cVar1 = *(char *)(plVar19[1] + 0x19);
                  plVar18 = (longlong *)plVar19[1];
                  plVar20 = plVar19;
                }
              }
              plVar8 = FUN_180012020(plVar13,plVar8);
              free(plVar8);
              (**(code **)*puVar3)(puVar3);
              LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7a8));
              goto LAB_18000e757;
            }
            puVar3[0xd] = 10;
          }
          lVar24 = puVar3[2];
          puVar3[3] = lVar24;
          lVar9 = *(longlong *)(param_1 + 200);
          puVar12 = FUN_180003ba0((undefined8 *)(param_1 + 0x1a0),&local_88);
          puVar12 = (undefined8 *)*puVar12;
          plVar13 = FUN_180003b90((undefined8 *)(param_1 + 0x1a0),&local_res20);
          if (puVar12 != (undefined8 *)*plVar13) {
            do {
              if (lVar24 <= (longlong)puVar12[4]) {
                if (puVar3[0xc] + lVar24 <= (longlong)puVar12[4]) break;
                lVar10 = (ulonglong)*(uint *)((longlong)puVar3 + 0xc) * puVar12[3] + lVar24;
                if ((lVar24 <= lVar10) && (lVar10 < puVar3[0xc] + lVar24)) {
                  puVar17 = (undefined8 *)(lVar9 + 0x10028);
                  bVar5 = FUN_180019dd0((longlong)puVar17);
                  if (!bVar5) {
                    plVar13 = (longlong *)FUN_180002680(puVar17);
                    puVar15 = (undefined8 *)((undefined8 *)*plVar13)[1];
                    cVar1 = *(char *)((longlong)puVar15 + 0x19);
                    puVar16 = (undefined8 *)*plVar13;
                    while (cVar1 == '\0') {
                      if ((longlong)puVar15[4] < lVar10) {
                        puVar14 = (undefined8 *)puVar15[2];
                        puVar15 = puVar16;
                      }
                      else {
                        puVar14 = (undefined8 *)*puVar15;
                      }
                      puVar16 = puVar15;
                      puVar15 = puVar14;
                      cVar1 = *(char *)((longlong)puVar14 + 0x19);
                    }
                    puVar15 = FUN_180003b90(puVar17,&local_80);
                    if ((puVar16 == (undefined8 *)*puVar15) ||
                       (puVar15 = puVar16, lVar10 < (longlong)puVar16[4])) {
                      puVar16 = FUN_180003b90(puVar17,&local_70);
                      puVar16 = (undefined8 *)*puVar16;
                      puVar15 = local_78;
                    }
                    local_78 = puVar15;
                    puVar17 = FUN_180003b90(puVar17,&local_68);
                    if (puVar16 != (undefined8 *)*puVar17) {
                      lVar11 = FUN_180002680(puVar16 + 4);
                      lVar11 = *(longlong *)(lVar11 + 8);
                      if ((lVar11 != 0) && (*(int *)(lVar11 + 0x18) == *(int *)(puVar12 + 2))) {
                        puVar3[4] = puVar3[4] + 1;
                        if ((longlong)puVar3[7] < lVar10) {
                          iVar6 = *(int *)(puVar3 + 0xb);
                          if (iVar6 == 0) {
                            iVar6 = 0x200;
                          }
                          puVar3[7] = *(ulonglong *)(lVar11 + 0x10) / (ulonglong)(longlong)iVar6 +
                                      lVar10;
                        }
                        if ((puVar3[6] == -1) || (lVar10 < (longlong)puVar3[6])) {
                          puVar3[6] = lVar10;
                        }
                      }
                    }
                  }
                }
              }
              puVar12 = (undefined8 *)*puVar12;
              puVar17 = FUN_180003b90((undefined8 *)(param_1 + 0x1a0),&local_res20);
            } while (puVar12 != (undefined8 *)*puVar17);
          }
          if (*(int *)((longlong)puVar3 + 0x9c) == 0x100) {
            lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x7a8);
            local_60 = lpCriticalSection;
            EnterCriticalSection(lpCriticalSection);
            *local_res18 = (longlong)puVar3;
            plVar13 = *(longlong **)(param_1 + 0x920);
            plVar20 = (longlong *)plVar13[1];
            plVar21 = plVar13;
            if (*(char *)((longlong)plVar20 + 0x19) == '\0') {
              plVar18 = plVar20;
              do {
                if (plVar18[4] < (longlong)puVar3[2]) {
                  plVar19 = (longlong *)plVar18[2];
                }
                else {
                  if ((*(char *)((longlong)plVar13 + 0x19) != '\0') &&
                     ((longlong)puVar3[2] < plVar18[4])) {
                    plVar13 = plVar18;
                  }
                  plVar19 = (longlong *)*plVar18;
                  plVar21 = plVar18;
                }
                plVar18 = plVar19;
              } while (*(char *)((longlong)plVar19 + 0x19) == '\0');
            }
            if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
              plVar20 = (longlong *)*plVar13;
            }
            plVar18 = plVar21;
            if (*(char *)((longlong)plVar20 + 0x19) == '\0') {
              do {
                if ((longlong)puVar3[2] < plVar20[4]) {
                  plVar19 = (longlong *)*plVar20;
                  plVar13 = plVar20;
                }
                else {
                  plVar19 = (longlong *)plVar20[2];
                }
                plVar20 = plVar19;
              } while (*(char *)((longlong)plVar19 + 0x19) == '\0');
            }
            while (plVar18 != plVar13) {
              plVar20 = (longlong *)plVar18[2];
              if (*(char *)((longlong)plVar20 + 0x19) == '\0') {
                cVar1 = *(char *)(*plVar20 + 0x19);
                plVar18 = plVar20;
                plVar20 = (longlong *)*plVar20;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*plVar20 + 0x19);
                  plVar18 = plVar20;
                  plVar20 = (longlong *)*plVar20;
                }
              }
              else {
                cVar1 = *(char *)(plVar18[1] + 0x19);
                plVar19 = (longlong *)plVar18[1];
                plVar20 = plVar18;
                while ((plVar18 = plVar19, cVar1 == '\0' && (plVar20 == (longlong *)plVar18[2]))) {
                  cVar1 = *(char *)(plVar18[1] + 0x19);
                  plVar19 = (longlong *)plVar18[1];
                  plVar20 = plVar18;
                }
              }
            }
            FUN_180011e00((longlong *)(param_1 + 0x920),local_58,plVar21,plVar13);
            plVar13 = (longlong *)plVar8[2];
            if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar13 + 0x19);
              plVar21 = plVar13;
              plVar20 = (longlong *)*plVar13;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar20 + 0x19);
                plVar21 = plVar20;
                plVar20 = (longlong *)*plVar20;
              }
            }
            else {
              cVar1 = *(char *)(plVar8[1] + 0x19);
              plVar18 = (longlong *)plVar8[1];
              plVar20 = plVar8;
              while ((plVar21 = plVar18, cVar1 == '\0' && (plVar20 == (longlong *)plVar21[2]))) {
                cVar1 = *(char *)(plVar21[1] + 0x19);
                plVar18 = (longlong *)plVar21[1];
                plVar20 = plVar21;
              }
            }
            if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
              plVar13 = (longlong *)*plVar13;
              cVar1 = *(char *)((longlong)plVar13 + 0x19);
              while (cVar1 == '\0') {
                plVar13 = (longlong *)*plVar13;
                cVar1 = *(char *)((longlong)plVar13 + 0x19);
              }
            }
            else {
              cVar1 = *(char *)(plVar8[1] + 0x19);
              plVar20 = (longlong *)plVar8[1];
              plVar13 = plVar8;
              while ((plVar18 = plVar20, cVar1 == '\0' && (plVar13 == (longlong *)plVar18[2]))) {
                cVar1 = *(char *)(plVar18[1] + 0x19);
                plVar20 = (longlong *)plVar18[1];
                plVar13 = plVar18;
              }
            }
            plVar8 = FUN_180012020((longlong *)(param_1 + 0x140),plVar8);
            free(plVar8);
            LeaveCriticalSection(lpCriticalSection);
            uVar23 = local_res10;
          }
          else {
            plVar13 = *(longlong **)**(longlong **)(param_1 + 0xd0);
            if (plVar13 != (longlong *)**(longlong **)(param_1 + 0xd0)) {
              do {
                local_res8 = (longlong *)plVar13[2];
                if ((int)*(short *)((longlong)local_res8 + 0x1a) == *(int *)((longlong)puVar3 + 0xc)
                   ) {
                  lVar24 = FUN_180040570(local_res8 + 1,0);
                  if (*local_res8 - puVar3[2] ==
                      (ulonglong)(uint)(int)*(short *)((longlong)local_res8 + 0x1a) * lVar24) {
                    plVar20 = (longlong *)puVar3[0x20];
                    plVar21 = (longlong *)puVar3[0x21];
                    if (plVar20 != plVar21) {
                      do {
                        if (*plVar20 == *local_res8) break;
                        plVar20 = plVar20 + 1;
                      } while (plVar20 != plVar21);
                      if (plVar20 != plVar21) goto LAB_18000e6e2;
                    }
                    *(undefined1 *)((longlong)puVar3 + 0x7d) = 1;
                    *(undefined1 *)((longlong)puVar3 + 0xf2) = 1;
                    plVar20 = puVar3 + 0x23;
                    pvVar4 = (void *)puVar3[0x24];
                    if ((void *)puVar3[0x25] == pvVar4) {
                      FUN_180013a20(plVar20,pvVar4,&local_res8);
                    }
                    else {
                      plVar21 = local_res8;
                      puVar12 = (undefined8 *)FUN_180001100(plVar20,pvVar4);
                      *puVar12 = plVar21;
                      plVar20[1] = plVar20[1] + 8;
                    }
                  }
                }
LAB_18000e6e2:
                plVar13 = (longlong *)*plVar13;
              } while (plVar13 != (longlong *)**(longlong **)(param_1 + 0xd0));
            }
            plVar21 = (longlong *)plVar8[2];
            uVar23 = local_res10;
            if (*(char *)((longlong)plVar21 + 0x19) == '\0') {
              cVar1 = *(char *)(*plVar21 + 0x19);
              plVar8 = (longlong *)*plVar21;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar8 + 0x19);
                plVar21 = plVar8;
                plVar8 = (longlong *)*plVar8;
              }
            }
            else {
              cVar1 = *(char *)(plVar8[1] + 0x19);
              plVar13 = (longlong *)plVar8[1];
              while ((plVar21 = plVar13, cVar1 == '\0' && (plVar8 == (longlong *)plVar21[2]))) {
                cVar1 = *(char *)(plVar21[1] + 0x19);
                plVar13 = (longlong *)plVar21[1];
                plVar8 = plVar21;
              }
            }
          }
        }
      }
LAB_18000e757:
      iVar25 = iVar25 + 1;
      plVar8 = plVar21;
    } while (plVar21 != *(longlong **)(param_1 + 0x140));
  }
  return;
}

