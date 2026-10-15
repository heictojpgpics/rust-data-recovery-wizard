// Function: FUN_18001e340
// Address: 18001e340
// Size: 895 bytes


void FUN_18001e340(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined **ppuVar4;
  ushort *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined7 extraout_var;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  
  puVar18 = *(undefined8 **)(*(longlong *)(param_1 + 0x38) + 0x60);
  puVar9 = (undefined8 *)puVar18[1];
  puVar10 = puVar9;
  puVar17 = puVar18;
  if (*(char *)((longlong)puVar9 + 0x19) == '\0') {
    do {
      if ((longlong)puVar10[4] < param_2[0xb]) {
        puVar16 = (undefined8 *)puVar10[2];
      }
      else {
        puVar16 = (undefined8 *)*puVar10;
        puVar17 = puVar10;
      }
      puVar10 = puVar16;
    } while (*(char *)((longlong)puVar16 + 0x19) == '\0');
    do {
      if (param_2[0xb] < (longlong)puVar9[4]) {
        puVar10 = (undefined8 *)*puVar9;
        puVar18 = puVar9;
      }
      else {
        puVar10 = (undefined8 *)puVar9[2];
      }
      puVar9 = puVar10;
    } while (*(char *)((longlong)puVar10 + 0x19) == '\0');
  }
  do {
    if (puVar17 == puVar18) {
      return;
    }
    plVar12 = (longlong *)puVar17[9];
    if (plVar12 != (longlong *)0x0) {
      if ((undefined **)*plVar12 == CNTFSFileProperties::vftable) {
        lVar19 = *(longlong *)((longlong)plVar12 + 0x11);
      }
      else {
        lVar19 = (*(code *)((undefined **)*plVar12)[2])();
      }
      if (lVar19 != 0) {
        if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
          lVar19 = *(longlong *)((longlong)param_2 + 0x11);
        }
        else {
          lVar19 = (*(code *)((undefined **)*param_2)[2])(param_2);
        }
        ppuVar4 = *(undefined ***)puVar17[9];
        if (ppuVar4 == CNTFSFileProperties::vftable) {
          pcVar11 = *(char **)((longlong)puVar17[9] + 0x11);
        }
        else {
          pcVar11 = (char *)(*(code *)ppuVar4[2])();
        }
        lVar19 = lVar19 - (longlong)pcVar11;
        do {
          cVar1 = *pcVar11;
          cVar2 = pcVar11[lVar19];
          if (cVar1 != cVar2) break;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
            if ((ushort *)param_2[9] == (ushort *)0x0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              plVar12 = FUN_180033aa0((ushort *)param_2[9]);
            }
          }
          else {
            plVar12 = (longlong *)(*(code *)((undefined **)*param_2)[0xf])(param_2);
          }
          if (plVar12 == (longlong *)0x0) {
            ppuVar4 = *(undefined ***)puVar17[9];
            if (ppuVar4 == CNTFSFileProperties::vftable) {
              puVar5 = (ushort *)((longlong *)puVar17[9])[9];
              if (puVar5 == (ushort *)0x0) {
                plVar12 = (longlong *)0x0;
              }
              else {
                plVar12 = FUN_180033aa0(puVar5);
              }
            }
            else {
              plVar12 = (longlong *)(*(code *)ppuVar4[0xf])();
            }
          }
          else {
            if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
              lVar19 = *(longlong *)((longlong)param_2 + 0x1b);
            }
            else {
              lVar19 = (*(code *)((undefined **)*param_2)[3])(param_2);
            }
            if (lVar19 == 0) {
              (**(code **)*plVar12)(plVar12,1);
              ppuVar4 = *(undefined ***)puVar17[9];
              if (ppuVar4 == CNTFSFileProperties::vftable) {
                puVar5 = (ushort *)((longlong *)puVar17[9])[9];
                if (puVar5 == (ushort *)0x0) {
                  plVar12 = (longlong *)0x0;
                }
                else {
                  plVar12 = FUN_180033aa0(puVar5);
                }
              }
              else {
                plVar12 = (longlong *)(*(code *)ppuVar4[0xf])();
              }
              FUN_18001f7b0(param_1,param_2);
              if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
                lVar19 = *(longlong *)((longlong)param_2 + 0x1b);
              }
              else {
                lVar19 = (*(code *)((undefined **)*param_2)[3])(param_2);
              }
              if (lVar19 == 0) {
                ppuVar4 = *(undefined ***)puVar17[9];
                if (ppuVar4 == CNTFSFileProperties::vftable) {
                  uVar14 = *(undefined8 *)((longlong)puVar17[9] + 0x1b);
                }
                else {
                  uVar14 = (*(code *)ppuVar4[3])();
                }
                *(undefined8 *)((longlong)param_2 + 0x1b) = uVar14;
              }
            }
          }
          if (plVar12 != (longlong *)0x0) {
            FUN_180003250((longlong)param_2,plVar12);
            lVar19 = 0;
            plVar13 = FUN_1800340b0((longlong)plVar12);
            while (plVar13 != (longlong *)0x0) {
              iVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
              lVar15 = plVar13[1];
              plVar13 = (longlong *)0x0;
              uVar3 = *(uint *)(param_1 + 0x18);
              plVar12[8] = plVar12[8] + 1;
              lVar19 = lVar19 + lVar15 * (ulonglong)uVar3 * (longlong)iVar8;
              bVar6 = FUN_1800341c0((longlong)plVar12);
              if ((int)CONCAT71(extraout_var,bVar6) == 0) {
                if ((longlong *)plVar12[6] == (longlong *)0x0) {
                  lVar15 = 0;
                }
                else {
                  lVar15 = *(longlong *)plVar12[6];
                }
                plVar13 = *(longlong **)
                           (*(longlong *)
                             (*(longlong *)(lVar15 + 8) +
                             ((ulonglong)plVar12[8] >> 1 & *(longlong *)(lVar15 + 0x10) - 1U) * 8) +
                           (ulonglong)((uint)plVar12[8] & 1) * 8);
              }
            }
            if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
              lVar15 = *(longlong *)((longlong)param_2 + 0x1b);
            }
            else {
              lVar15 = (*(code *)((undefined **)*param_2)[3])(param_2);
            }
            if (lVar19 < lVar15) {
              if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
                bVar7 = *(byte *)((longlong)param_2 + 0x72) & 1;
              }
              else {
                bVar7 = (*(code *)((undefined **)*param_2)[0x1b])(param_2);
              }
              if (bVar7 != 0) {
                *(longlong *)((longlong)param_2 + 0x1b) = lVar19;
              }
            }
            (**(code **)*plVar12)(plVar12,1);
            return;
          }
        }
      }
    }
    puVar9 = (undefined8 *)puVar17[2];
    if (*(char *)((longlong)puVar9 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar9 + 0x19);
      puVar17 = puVar9;
      puVar9 = (undefined8 *)*puVar9;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)*puVar9 + 0x19);
        puVar17 = puVar9;
        puVar9 = (undefined8 *)*puVar9;
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar17[1] + 0x19);
      puVar10 = (undefined8 *)puVar17[1];
      puVar9 = puVar17;
      while ((puVar17 = puVar10, cVar1 == '\0' && (puVar9 == (undefined8 *)puVar17[2]))) {
        cVar1 = *(char *)((longlong)puVar17[1] + 0x19);
        puVar10 = (undefined8 *)puVar17[1];
        puVar9 = puVar17;
      }
    }
  } while( true );
}

