// Function: FUN_18001c400
// Address: 18001c400
// Size: 601 bytes


void FUN_18001c400(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined **ppuVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 local_res10;
  undefined1 local_res18 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  
  if ((*(int *)(param_2 + 0x14) == 0) &&
     (plVar2 = *(longlong **)(param_2 + 0x20), plVar2 != (longlong *)0x0)) {
    if ((undefined **)*plVar2 == CNTFSFileProperties::vftable) {
      lVar4 = *(longlong *)((longlong)plVar2 + 0x1b);
    }
    else {
      lVar4 = (*(code *)((undefined **)*plVar2)[3])();
    }
    if (0 < lVar4) {
      lVar4 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0xf0))();
      plVar2 = (longlong *)(param_1 + 0x60);
      puVar6 = (undefined8 *)((undefined8 *)*plVar2)[1];
      cVar1 = *(char *)((longlong)puVar6 + 0x19);
      puVar12 = (undefined8 *)*plVar2;
      while (cVar1 == '\0') {
        if ((longlong)puVar6[4] < lVar4) {
          puVar11 = (undefined8 *)puVar6[2];
          puVar6 = puVar12;
        }
        else {
          puVar11 = (undefined8 *)*puVar6;
        }
        puVar12 = puVar6;
        puVar6 = puVar11;
        cVar1 = *(char *)((longlong)puVar11 + 0x19);
      }
      while( true ) {
        puVar6 = (undefined8 *)*plVar2;
        cVar1 = *(char *)((longlong)puVar6[1] + 0x19);
        puVar11 = (undefined8 *)puVar6[1];
        while (cVar1 == '\0') {
          if (lVar4 < (longlong)puVar11[4]) {
            puVar5 = (undefined8 *)*puVar11;
            puVar6 = puVar11;
          }
          else {
            puVar5 = (undefined8 *)puVar11[2];
          }
          puVar11 = puVar5;
          cVar1 = *(char *)((longlong)puVar5 + 0x19);
        }
        if (puVar12 == puVar6) break;
        plVar8 = (longlong *)puVar12[5];
        if (plVar8 != (longlong *)0x0) {
          puVar6 = (undefined8 *)
                   (**(code **)(**(longlong **)(param_2 + 0x20) + 0x50))
                             (*(longlong **)(param_2 + 0x20),&local_res10);
          uVar7 = *puVar6;
          puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x50))(plVar8,local_res18);
          if (((int)((ulonglong)*puVar6 >> 0x20) == (int)((ulonglong)uVar7 >> 0x20)) &&
             ((int)*puVar6 == (int)uVar7)) {
            if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
              lVar9 = *(longlong *)((longlong)plVar8 + 0x1b);
            }
            else {
              lVar9 = (*(code *)((undefined **)*plVar8)[3])(plVar8);
            }
            ppuVar3 = (undefined **)**(longlong **)(param_2 + 0x20);
            if (ppuVar3 == CNTFSFileProperties::vftable) {
              lVar10 = *(longlong *)((longlong)*(longlong **)(param_2 + 0x20) + 0x1b);
            }
            else {
              lVar10 = (*(code *)ppuVar3[3])();
            }
            if (lVar9 == lVar10) {
              return;
            }
          }
        }
        puVar6 = (undefined8 *)puVar12[2];
        if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
          cVar1 = *(char *)((longlong)*puVar6 + 0x19);
          puVar12 = puVar6;
          puVar6 = (undefined8 *)*puVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((longlong)*puVar6 + 0x19);
            puVar12 = puVar6;
            puVar6 = (undefined8 *)*puVar6;
          }
        }
        else {
          cVar1 = *(char *)((longlong)puVar12[1] + 0x19);
          puVar11 = (undefined8 *)puVar12[1];
          puVar6 = puVar12;
          while ((puVar12 = puVar11, cVar1 == '\0' && (puVar6 == (undefined8 *)puVar12[2]))) {
            cVar1 = *(char *)((longlong)puVar12[1] + 0x19);
            puVar11 = (undefined8 *)puVar12[1];
            puVar6 = puVar12;
          }
        }
      }
      local_res10 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0xf0))();
      uVar7 = FUN_180002680(&local_res10);
      puVar6 = (undefined8 *)FUN_180002680(uVar7);
      local_58 = *puVar6;
      local_50 = *(undefined8 *)(param_2 + 0x20);
      plVar8 = (longlong *)FUN_1800151c0(plVar2,(longlong)&local_58);
      FUN_180015210(plVar2,local_48,param_3,plVar8 + 4,plVar8);
    }
  }
  return;
}

