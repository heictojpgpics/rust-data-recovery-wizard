// Function: FUN_18001f7b0
// Address: 18001f7b0
// Size: 528 bytes


void FUN_18001f7b0(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  byte bVar5;
  LONG LVar6;
  char *pcVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  FILETIME local_res20;
  FILETIME local_28 [2];
  
  if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
    bVar5 = *(byte *)((longlong)param_2 + 0x72) & 1;
  }
  else {
    bVar5 = (*(code *)((undefined **)*param_2)[0x1b])(param_2);
  }
  if (bVar5 == 0) {
    lVar13 = param_2[0xb];
    if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
      lVar8 = *(longlong *)((longlong)param_2 + 0x1b);
    }
    else {
      lVar8 = (*(code *)((undefined **)*param_2)[3])(param_2);
    }
    puVar14 = *(undefined8 **)(*(longlong *)(param_1 + 0x38) + 0x60);
    puVar9 = (undefined8 *)puVar14[1];
    puVar10 = puVar9;
    puVar12 = puVar14;
    if (*(char *)((longlong)puVar9 + 0x19) == '\0') {
      do {
        if ((longlong)puVar10[4] < lVar13) {
          puVar11 = (undefined8 *)puVar10[2];
        }
        else {
          puVar11 = (undefined8 *)*puVar10;
          puVar12 = puVar10;
        }
        puVar10 = puVar11;
      } while (*(char *)((longlong)puVar11 + 0x19) == '\0');
      do {
        if (lVar13 < (longlong)puVar9[4]) {
          puVar10 = (undefined8 *)*puVar9;
          puVar14 = puVar9;
        }
        else {
          puVar10 = (undefined8 *)puVar9[2];
        }
        puVar9 = puVar10;
      } while (*(char *)((longlong)puVar10 + 0x19) == '\0');
    }
    (**(code **)(*param_2 + 0x50))(param_2,local_28);
    while (puVar12 != puVar14) {
      if ((*(int *)((longlong)puVar12 + 0x3c) == 0) &&
         (plVar3 = (longlong *)puVar12[9], plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x50))(plVar3,&local_res20);
        LVar6 = CompareFileTime(local_28,&local_res20);
        if (LVar6 == 0) {
          if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
            lVar13 = *(longlong *)((longlong)param_2 + 0x11);
          }
          else {
            lVar13 = (*(code *)((undefined **)*param_2)[2])(param_2);
          }
          ppuVar4 = *(undefined ***)puVar12[9];
          if (ppuVar4 == CNTFSFileProperties::vftable) {
            pcVar7 = *(char **)((longlong)puVar12[9] + 0x11);
          }
          else {
            pcVar7 = (char *)(*(code *)ppuVar4[2])();
          }
          lVar13 = lVar13 - (longlong)pcVar7;
          do {
            cVar1 = *pcVar7;
            cVar2 = pcVar7[lVar13];
            if (cVar1 != cVar2) break;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            ppuVar4 = *(undefined ***)puVar12[9];
            if (ppuVar4 == CNTFSFileProperties::vftable) {
              lVar13 = *(longlong *)((longlong)puVar12[9] + 0x1b);
            }
            else {
              lVar13 = (*(code *)ppuVar4[3])();
            }
            if ((lVar13 != 0) && ((lVar8 == 0 || (lVar13 < lVar8)))) {
              *(longlong *)((longlong)param_2 + 0x1b) = lVar13;
              return;
            }
          }
        }
      }
      puVar9 = (undefined8 *)puVar12[2];
      if (*(char *)((longlong)puVar9 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)*puVar9 + 0x19);
        puVar12 = puVar9;
        puVar9 = (undefined8 *)*puVar9;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar9 + 0x19);
          puVar12 = puVar9;
          puVar9 = (undefined8 *)*puVar9;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar12[1] + 0x19);
        puVar10 = (undefined8 *)puVar12[1];
        puVar9 = puVar12;
        while ((puVar12 = puVar10, cVar1 == '\0' && (puVar9 == (undefined8 *)puVar12[2]))) {
          cVar1 = *(char *)((longlong)puVar12[1] + 0x19);
          puVar10 = (undefined8 *)puVar12[1];
          puVar9 = puVar12;
        }
      }
    }
  }
  return;
}

