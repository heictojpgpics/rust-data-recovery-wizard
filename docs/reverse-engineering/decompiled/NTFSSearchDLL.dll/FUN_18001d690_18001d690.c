// Function: FUN_18001d690
// Address: 18001d690
// Size: 719 bytes


ulonglong FUN_18001d690(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong *plVar4;
  undefined **ppuVar5;
  char *pcVar6;
  longlong *plVar7;
  char *pcVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  longlong lVar14;
  
  if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
    pcVar8 = (char *)(ulonglong)*(ushort *)((longlong)param_2 + 0x23);
  }
  else {
    pcVar8 = (char *)(*(code *)((undefined **)*param_2)[7])(param_2);
  }
  if (((ulonglong)pcVar8 & 0x800) == 0) {
    pcVar3 = *(char **)(*(longlong *)(param_1 + 0x38) + 0x60);
    pcVar8 = *(char **)(pcVar3 + 8);
    cVar1 = pcVar8[0x19];
    pcVar13 = pcVar3;
    pcVar6 = pcVar8;
    cVar2 = cVar1;
    while (pcVar12 = pcVar3, cVar2 == '\0') {
      if (*(longlong *)(pcVar6 + 0x20) < param_2[0xb]) {
        pcVar12 = *(char **)(pcVar6 + 0x10);
        pcVar6 = pcVar13;
      }
      else {
        pcVar12 = *(char **)pcVar6;
      }
      pcVar13 = pcVar6;
      pcVar6 = pcVar12;
      cVar2 = pcVar12[0x19];
    }
    while (cVar1 == '\0') {
      if (param_2[0xb] < *(longlong *)(pcVar8 + 0x20)) {
        pcVar6 = *(char **)pcVar8;
        pcVar12 = pcVar8;
      }
      else {
        pcVar6 = *(char **)(pcVar8 + 0x10);
      }
      pcVar8 = pcVar6;
      cVar1 = pcVar6[0x19];
    }
    if (param_4 != '\0') {
      if (5000 < *(ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x68)) goto LAB_18001d8ff;
      pcVar13 = *(char **)pcVar3;
      pcVar12 = pcVar3;
    }
    uVar10 = 0;
    if (pcVar13 != pcVar12) {
      plVar9 = (longlong *)0x0;
      do {
        plVar4 = *(longlong **)(pcVar13 + 0x48);
        if (plVar4 != (longlong *)0x0) {
          if ((undefined **)*plVar4 == CNTFSFileProperties::vftable) {
            plVar7 = plVar9;
            if ((ushort *)plVar4[9] != (ushort *)0x0) {
              plVar7 = FUN_180033aa0((ushort *)plVar4[9]);
            }
          }
          else {
            plVar7 = (longlong *)(*(code *)((undefined **)*plVar4)[0xf])();
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)*plVar7)(plVar7,1);
            ppuVar5 = (undefined **)**(longlong **)(pcVar13 + 0x48);
            if (ppuVar5 == CNTFSFileProperties::vftable) {
              lVar14 = *(longlong *)((longlong)*(longlong **)(pcVar13 + 0x48) + 0x1b);
            }
            else {
              lVar14 = (*(code *)ppuVar5[3])();
            }
            if (lVar14 != 0) {
              if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
                lVar14 = *(longlong *)((longlong)param_2 + 0x11);
              }
              else {
                lVar14 = (*(code *)((undefined **)*param_2)[2])(param_2);
              }
              ppuVar5 = (undefined **)**(longlong **)(pcVar13 + 0x48);
              if (ppuVar5 == CNTFSFileProperties::vftable) {
                pcVar8 = *(char **)((longlong)*(longlong **)(pcVar13 + 0x48) + 0x11);
              }
              else {
                pcVar8 = (char *)(*(code *)ppuVar5[2])();
              }
              lVar14 = lVar14 - (longlong)pcVar8;
              do {
                cVar2 = *pcVar8;
                cVar1 = pcVar8[lVar14];
                if (cVar2 != cVar1) break;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              if ((cVar2 == cVar1) &&
                 (((param_4 != '\0' ||
                   (pcVar8 = (char *)param_2[0xb],
                   *(char **)(*(longlong *)(pcVar13 + 0x48) + 0x58) == pcVar8)) ||
                  ((param_3 != -1 && (*(longlong *)(pcVar13 + 0x50) == param_3)))))) {
                if (pcVar13 == pcVar12) {
                  return 0;
                }
                plVar4 = *(longlong **)(pcVar13 + 0x48);
                if (plVar4 != (longlong *)0x0) {
                  if ((undefined **)*plVar4 == CNTFSFileProperties::vftable) {
                    if ((ushort *)plVar4[9] != (ushort *)0x0) {
                      plVar9 = FUN_180033aa0((ushort *)plVar4[9]);
                    }
                  }
                  else {
                    plVar9 = (longlong *)(*(code *)((undefined **)*plVar4)[0xf])();
                  }
                  if (plVar9 == (longlong *)0x0) {
                    return 0;
                  }
                  FUN_180003250((longlong)param_2,plVar9);
                  ppuVar5 = (undefined **)**(longlong **)(pcVar13 + 0x48);
                  if (ppuVar5 == CNTFSFileProperties::vftable) {
                    uVar11 = *(undefined8 *)((longlong)*(longlong **)(pcVar13 + 0x48) + 0x1b);
                  }
                  else {
                    uVar11 = (*(code *)ppuVar5[3])();
                  }
                  *(undefined8 *)((longlong)param_2 + 0x1b) = uVar11;
                  (**(code **)*plVar9)(plVar9,1);
                  return 1;
                }
                goto LAB_18001d8ff;
              }
            }
          }
        }
        pcVar8 = *(char **)(pcVar13 + 0x10);
        if (pcVar8[0x19] == '\0') {
          cVar2 = (*(char **)pcVar8)[0x19];
          pcVar13 = pcVar8;
          pcVar8 = *(char **)pcVar8;
          while (cVar2 == '\0') {
            cVar2 = (*(char **)pcVar8)[0x19];
            pcVar13 = pcVar8;
            pcVar8 = *(char **)pcVar8;
          }
        }
        else {
          cVar2 = (*(char **)(pcVar13 + 8))[0x19];
          pcVar3 = *(char **)(pcVar13 + 8);
          pcVar8 = pcVar13;
          while ((pcVar13 = pcVar3, cVar2 == '\0' && (pcVar8 == *(char **)(pcVar13 + 0x10)))) {
            cVar2 = (*(char **)(pcVar13 + 8))[0x19];
            pcVar3 = *(char **)(pcVar13 + 8);
            pcVar8 = pcVar13;
          }
        }
      } while (pcVar13 != pcVar12);
    }
  }
  else {
LAB_18001d8ff:
    uVar10 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  }
  return uVar10;
}

