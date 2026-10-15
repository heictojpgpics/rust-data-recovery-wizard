// Function: FUN_18001bd00
// Address: 18001bd00
// Size: 556 bytes


void FUN_18001bd00(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (((*(longlong **)(param_1 + 8) != (longlong *)0x0) && (*(int *)(param_2 + 0x14) == 1)) &&
     (*(longlong *)(param_2 + 0x20) != 0)) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    plVar8 = *(longlong **)(param_2 + 0x20);
    lVar13 = (longlong)iVar4;
    if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
      lVar12 = *(longlong *)((longlong)plVar8 + 0x1b);
      ppuVar5 = CNTFSFileProperties::vftable;
    }
    else {
      lVar12 = (*(code *)((undefined **)*plVar8)[3])();
      plVar8 = *(longlong **)(param_2 + 0x20);
      ppuVar5 = (undefined **)*plVar8;
    }
    if (ppuVar5 == CNTFSFileProperties::vftable) {
      bVar3 = (byte)*(undefined2 *)((longlong)plVar8 + 0x23);
    }
    else {
      bVar3 = (*(code *)ppuVar5[7])();
    }
    if ((((bVar3 >> 4 & 1) == 0) && (lVar13 != 0)) && ((lVar13 <= lVar12 && (lVar12 % lVar13 == 0)))
       ) {
      lVar13 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0xf0))();
      puVar10 = (undefined8 *)(*(undefined8 **)(param_1 + 0x60))[1];
      cVar1 = *(char *)((longlong)puVar10 + 0x19);
      puVar11 = *(undefined8 **)(param_1 + 0x60);
      while (cVar1 == '\0') {
        if ((longlong)puVar10[4] < lVar13) {
          puVar9 = (undefined8 *)puVar10[2];
          puVar10 = puVar11;
        }
        else {
          puVar9 = (undefined8 *)*puVar10;
        }
        puVar11 = puVar10;
        puVar10 = puVar9;
        cVar1 = *(char *)((longlong)puVar9 + 0x19);
      }
      do {
        puVar10 = *(undefined8 **)(param_1 + 0x60);
        cVar1 = *(char *)((longlong)puVar10[1] + 0x19);
        puVar9 = (undefined8 *)puVar10[1];
        while (cVar1 == '\0') {
          if (lVar13 < (longlong)puVar9[4]) {
            puVar6 = (undefined8 *)*puVar9;
            puVar10 = puVar9;
          }
          else {
            puVar6 = (undefined8 *)puVar9[2];
          }
          puVar9 = puVar6;
          cVar1 = *(char *)((longlong)puVar6 + 0x19);
        }
        if (puVar11 == puVar10) {
          return;
        }
        plVar8 = (longlong *)puVar11[5];
        if (plVar8 != (longlong *)0x0) {
          if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
            lVar12 = *(longlong *)((longlong)plVar8 + 0x11);
          }
          else {
            lVar12 = (*(code *)((undefined **)*plVar8)[2])(plVar8);
          }
          ppuVar5 = (undefined **)**(longlong **)(param_2 + 0x20);
          if (ppuVar5 == CNTFSFileProperties::vftable) {
            pcVar7 = *(char **)((longlong)*(longlong **)(param_2 + 0x20) + 0x11);
          }
          else {
            pcVar7 = (char *)(*(code *)ppuVar5[2])();
          }
          lVar12 = lVar12 - (longlong)pcVar7;
          do {
            cVar1 = *pcVar7;
            cVar2 = pcVar7[lVar12];
            if (cVar1 != cVar2) break;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
              lVar12 = *(longlong *)((longlong)plVar8 + 0x1b);
            }
            else {
              lVar12 = (*(code *)((undefined **)*plVar8)[3])(plVar8);
            }
            if (0 < lVar12) {
              *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x1b) = lVar12;
              return;
            }
          }
        }
        puVar10 = (undefined8 *)puVar11[2];
        if (*(char *)((longlong)puVar10 + 0x19) == '\0') {
          cVar1 = *(char *)((longlong)*puVar10 + 0x19);
          puVar11 = puVar10;
          puVar10 = (undefined8 *)*puVar10;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((longlong)*puVar10 + 0x19);
            puVar11 = puVar10;
            puVar10 = (undefined8 *)*puVar10;
          }
        }
        else {
          cVar1 = *(char *)((longlong)puVar11[1] + 0x19);
          puVar9 = (undefined8 *)puVar11[1];
          puVar10 = puVar11;
          while ((puVar11 = puVar9, cVar1 == '\0' && (puVar10 == (undefined8 *)puVar11[2]))) {
            cVar1 = *(char *)((longlong)puVar11[1] + 0x19);
            puVar9 = (undefined8 *)puVar11[1];
            puVar10 = puVar11;
          }
        }
      } while( true );
    }
  }
  return;
}

