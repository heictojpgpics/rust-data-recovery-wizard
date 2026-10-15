// Function: FUN_18001bb20
// Address: 18001bb20
// Size: 480 bytes


undefined8 FUN_18001bb20(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  
  plVar3 = *(longlong **)(param_3 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    puVar12 = (undefined8 *)*param_2;
    puVar6 = (undefined8 *)puVar12[1];
    puVar5 = puVar6;
    puVar11 = puVar12;
    if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
      do {
        if ((longlong)puVar5[4] < plVar3[0xb]) {
          puVar10 = (undefined8 *)puVar5[2];
        }
        else {
          puVar10 = (undefined8 *)*puVar5;
          puVar11 = puVar5;
        }
        puVar5 = puVar10;
      } while (*(char *)((longlong)puVar10 + 0x19) == '\0');
      do {
        if (plVar3[0xb] < (longlong)puVar6[4]) {
          puVar5 = (undefined8 *)*puVar6;
          puVar12 = puVar6;
        }
        else {
          puVar5 = (undefined8 *)puVar6[2];
        }
        puVar6 = puVar5;
      } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
    }
    local_res8 = param_1;
    (**(code **)(*plVar3 + 0x50))(plVar3,&local_res8);
    ppuVar4 = (undefined **)**(longlong **)(param_3 + 0x20);
    if (ppuVar4 == CNTFSFileProperties::vftable) {
      pcVar8 = *(char **)((longlong)*(longlong **)(param_3 + 0x20) + 0x11);
    }
    else {
      pcVar8 = (char *)(*(code *)ppuVar4[2])();
    }
    while (puVar11 != puVar12) {
      puVar6 = (undefined8 *)
               (**(code **)(*(longlong *)puVar11[9] + 0x50))((longlong *)puVar11[9],local_res18);
      if (((int)((ulonglong)local_res8 >> 0x20) == (int)((ulonglong)*puVar6 >> 0x20)) &&
         ((int)local_res8 == (int)*puVar6)) {
        ppuVar4 = *(undefined ***)puVar11[9];
        if (ppuVar4 == CNTFSFileProperties::vftable) {
          lVar9 = *(longlong *)((longlong)puVar11[9] + 0x11);
        }
        else {
          lVar9 = (*(code *)ppuVar4[2])();
        }
        if ((pcVar8 != (char *)0x0) || (lVar9 != 0)) {
          pcVar7 = pcVar8;
          do {
            cVar1 = *pcVar7;
            cVar2 = pcVar7[lVar9 - (longlong)pcVar8];
            if (cVar1 != cVar2) break;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          if (cVar1 != cVar2) {
            (**(code **)(**(longlong **)(param_3 + 0x20) + 8))(*(longlong **)(param_3 + 0x20),lVar9)
            ;
            return 1;
          }
        }
      }
      puVar6 = (undefined8 *)puVar11[2];
      if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)*puVar6 + 0x19);
        puVar11 = puVar6;
        puVar6 = (undefined8 *)*puVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar6 + 0x19);
          puVar11 = puVar6;
          puVar6 = (undefined8 *)*puVar6;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar11[1] + 0x19);
        puVar5 = (undefined8 *)puVar11[1];
        puVar6 = puVar11;
        while ((puVar11 = puVar5, cVar1 == '\0' && (puVar6 == (undefined8 *)puVar11[2]))) {
          cVar1 = *(char *)((longlong)puVar11[1] + 0x19);
          puVar5 = (undefined8 *)puVar11[1];
          puVar6 = puVar11;
        }
      }
    }
  }
  return 0;
}

