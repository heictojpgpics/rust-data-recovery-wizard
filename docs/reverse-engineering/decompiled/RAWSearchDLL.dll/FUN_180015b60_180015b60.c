// Function: FUN_180015b60
// Address: 180015b60
// Size: 513 bytes


undefined8
FUN_180015b60(longlong param_1,int *param_2,int param_3,longlong param_4,longlong param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  uVar5 = 1;
  if (((param_2 != (int *)0x0) && (0x1ff < param_3)) && (-1 < param_4)) {
    if (*(char *)(param_1 + 0x110) != '\0') {
      iVar3 = 0;
      iVar8 = param_3 - *(int *)(param_5 + 0x14);
      if (*(int *)(param_5 + 0x14) < 0x20) {
        piVar6 = (int *)((longlong)param_2 + (longlong)iVar8 + -10);
        if (piVar6 != (int *)0x0) {
          iVar8 = 0;
          piVar7 = piVar6;
          do {
            if (*piVar7 == 0) {
              iVar8 = iVar8 + 3;
              piVar7 = (int *)((longlong)piVar7 + 3);
            }
            else if (*(longlong *)((longlong)iVar8 + (longlong)piVar6) == DAT_180067878) {
              bVar1 = true;
              goto LAB_180015cd6;
            }
            iVar8 = iVar8 + 1;
            piVar7 = (int *)((longlong)piVar7 + 1);
          } while (iVar8 < 2);
        }
        bVar1 = false;
LAB_180015cd6:
        if (piVar6 != (int *)0x0) {
          iVar8 = 0;
          piVar7 = piVar6;
          do {
            if (*piVar7 == 0) {
              iVar8 = iVar8 + 3;
              piVar7 = (int *)((longlong)piVar7 + 3);
            }
            else if (*(longlong *)((longlong)iVar8 + (longlong)piVar6) == DAT_180067868) {
              bVar2 = true;
              goto LAB_180015d12;
            }
            iVar8 = iVar8 + 1;
            piVar7 = (int *)((longlong)piVar7 + 1);
          } while (iVar8 < 2);
        }
        bVar2 = false;
LAB_180015d12:
        piVar7 = piVar6;
        if (piVar6 != (int *)0x0) {
          do {
            if (*piVar7 == 0) {
              iVar3 = iVar3 + 3;
              piVar7 = (int *)((longlong)piVar7 + 3);
            }
            else if (*(longlong *)((longlong)iVar3 + (longlong)piVar6) == DAT_180067858)
            goto LAB_180015d53;
            iVar3 = iVar3 + 1;
            piVar7 = (int *)((longlong)piVar7 + 1);
          } while (iVar3 < 2);
        }
      }
      else {
        if (7 < iVar8) {
          iVar4 = 0;
          piVar6 = param_2;
          if (0 < iVar8 + -8) {
            do {
              if (*piVar6 == 0) {
                iVar4 = iVar4 + 3;
                piVar6 = (int *)((longlong)piVar6 + 3);
              }
              else if (*(longlong *)((longlong)iVar4 + (longlong)param_2) == DAT_180067878) {
                bVar1 = true;
                goto LAB_180015bf7;
              }
              iVar4 = iVar4 + 1;
              piVar6 = (int *)((longlong)piVar6 + 1);
            } while (iVar4 < iVar8 + -8);
          }
        }
        bVar1 = false;
LAB_180015bf7:
        if (7 < iVar8) {
          iVar4 = 0;
          piVar6 = param_2;
          if (0 < iVar8 + -8) {
            do {
              if (*piVar6 == 0) {
                iVar4 = iVar4 + 3;
                piVar6 = (int *)((longlong)piVar6 + 3);
              }
              else if (*(longlong *)((longlong)iVar4 + (longlong)param_2) == DAT_180067868) {
                bVar2 = true;
                goto LAB_180015c3d;
              }
              iVar4 = iVar4 + 1;
              piVar6 = (int *)((longlong)piVar6 + 1);
            } while (iVar4 < iVar8 + -8);
          }
        }
        bVar2 = false;
LAB_180015c3d:
        if ((7 < iVar8) && (piVar6 = param_2, 0 < iVar8 + -8)) {
          do {
            if (*piVar6 == 0) {
              iVar3 = iVar3 + 3;
              piVar6 = (int *)((longlong)piVar6 + 3);
            }
            else if (*(longlong *)((longlong)iVar3 + (longlong)param_2) == DAT_180067858)
            goto LAB_180015d53;
            iVar3 = iVar3 + 1;
            piVar6 = (int *)((longlong)piVar6 + 1);
          } while (iVar3 < iVar8 + -8);
        }
      }
      if ((!bVar1) && (!bVar2)) {
        return 1;
      }
    }
LAB_180015d53:
    uVar5 = 0;
  }
  return uVar5;
}

