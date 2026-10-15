// Function: FUN_180017910
// Address: 180017910
// Size: 565 bytes


undefined8 FUN_180017910(longlong param_1,longlong *param_2,ulonglong param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 local_res10 [16];
  undefined8 local_res20;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  local_res20 = param_4;
  if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
    bVar5 = (byte)*(undefined2 *)((longlong)param_2 + 0x23);
  }
  else {
    bVar5 = (*(code *)((undefined **)*param_2)[7])(param_2);
  }
  if ((bVar5 >> 4 & 1) == 0) {
    return 0;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x318);
  puVar8 = (undefined8 *)puVar12[1];
  puVar6 = puVar8;
  puVar10 = puVar12;
  if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
    do {
      if ((ulonglong)puVar6[4] < param_3) {
        puVar9 = (undefined8 *)puVar6[2];
      }
      else {
        puVar9 = (undefined8 *)*puVar6;
        puVar10 = puVar6;
      }
      puVar6 = puVar9;
    } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
    do {
      if (param_3 < (ulonglong)puVar8[4]) {
        puVar6 = (undefined8 *)*puVar8;
        puVar12 = puVar8;
      }
      else {
        puVar6 = (undefined8 *)puVar8[2];
      }
      puVar8 = puVar6;
    } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
  }
  do {
    if (puVar10 == puVar12) {
      return 0;
    }
    plVar3 = (longlong *)puVar10[5];
    if (plVar3 != (longlong *)0x0) {
      if ((undefined **)*plVar3 == CNTFSFileProperties::vftable) {
        bVar5 = (byte)*(undefined2 *)((longlong)plVar3 + 0x23);
      }
      else {
        bVar5 = (*(code *)((undefined **)*plVar3)[7])(plVar3);
      }
      if ((bVar5 >> 4 & 1) != 0) {
        if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
          lVar11 = *(longlong *)((longlong)param_2 + 0x11);
        }
        else {
          lVar11 = (*(code *)((undefined **)*param_2)[2])(param_2);
        }
        if ((undefined **)*plVar3 == CNTFSFileProperties::vftable) {
          pcVar7 = *(char **)((longlong)plVar3 + 0x11);
        }
        else {
          pcVar7 = (char *)(*(code *)((undefined **)*plVar3)[2])(plVar3);
        }
        lVar11 = lVar11 - (longlong)pcVar7;
        do {
          cVar1 = *pcVar7;
          cVar2 = pcVar7[lVar11];
          if (cVar1 != cVar2) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          return 1;
        }
        puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,&local_res20);
        uVar4 = *puVar8;
        puVar8 = (undefined8 *)(**(code **)(*plVar3 + 0x50))(plVar3,local_res10);
        if (((int)((ulonglong)*puVar8 >> 0x20) == (int)((ulonglong)uVar4 >> 0x20)) &&
           ((int)*puVar8 == (int)uVar4)) {
          return 1;
        }
      }
    }
    puVar8 = (undefined8 *)puVar10[2];
    if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar8 + 0x19);
      puVar10 = puVar8;
      puVar8 = (undefined8 *)*puVar8;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)*puVar8 + 0x19);
        puVar10 = puVar8;
        puVar8 = (undefined8 *)*puVar8;
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar10[1] + 0x19);
      puVar6 = (undefined8 *)puVar10[1];
      puVar8 = puVar10;
      while ((puVar10 = puVar6, cVar1 == '\0' && (puVar8 == (undefined8 *)puVar10[2]))) {
        cVar1 = *(char *)((longlong)puVar10[1] + 0x19);
        puVar6 = (undefined8 *)puVar10[1];
        puVar8 = puVar10;
      }
    }
  } while( true );
}

