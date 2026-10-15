// Function: FUN_180017b50
// Address: 180017b50
// Size: 406 bytes


void FUN_180017b50(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 local_res18;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  if (param_2 == (longlong *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 0x278);
    puVar9 = (undefined8 *)*puVar10;
  }
  else {
    iVar5 = (**(code **)(*param_2 + 8))(param_2);
    if ((iVar5 == 0) && ((*(byte *)((longlong)param_2 + 0x72) & 4) == 0)) {
      plVar3 = (longlong *)param_2[6];
      if (plVar3 == (longlong *)0x0) {
        return;
      }
      if ((undefined **)*plVar3 == CNTFSFileProperties::vftable) {
        bVar4 = (byte)*(undefined2 *)((longlong)plVar3 + 0x23);
      }
      else {
        bVar4 = (*(code *)((undefined **)*plVar3)[7])();
      }
      if ((bVar4 >> 4 & 1) == 0) {
        return;
      }
    }
    puVar10 = *(undefined8 **)(param_1 + 0x278);
    puVar6 = (undefined8 *)puVar10[1];
    puVar7 = puVar6;
    puVar9 = puVar10;
    if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
      do {
        if ((ulonglong)puVar7[4] < (ulonglong)param_2[10]) {
          puVar8 = (undefined8 *)puVar7[2];
        }
        else {
          puVar8 = (undefined8 *)*puVar7;
          puVar9 = puVar7;
        }
        puVar7 = puVar8;
      } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
      do {
        if ((ulonglong)param_2[10] < (ulonglong)puVar6[4]) {
          puVar7 = (undefined8 *)*puVar6;
          puVar10 = puVar6;
        }
        else {
          puVar7 = (undefined8 *)puVar6[2];
        }
        puVar6 = puVar7;
      } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
    }
  }
  local_res18 = 0;
  while (puVar9 != puVar10) {
    lVar2 = puVar9[5];
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(param_1 + 8);
      if ((plVar3 != (longlong *)0x0) &&
         (iVar5 = (**(code **)(*plVar3 + 0xa0))(plVar3,lVar2), iVar5 == 0)) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                  (*(longlong **)(param_1 + 8),lVar2,1,&local_res18);
      }
      puVar9[5] = 0;
    }
    puVar6 = (undefined8 *)puVar9[2];
    if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar6 + 0x19);
      puVar9 = puVar6;
      puVar6 = (undefined8 *)*puVar6;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)*puVar6 + 0x19);
        puVar9 = puVar6;
        puVar6 = (undefined8 *)*puVar6;
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
      puVar7 = (undefined8 *)puVar9[1];
      puVar6 = puVar9;
      while ((puVar9 = puVar7, cVar1 == '\0' && (puVar6 == (undefined8 *)puVar9[2]))) {
        cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
        puVar7 = (undefined8 *)puVar9[1];
        puVar6 = puVar9;
      }
    }
  }
  return;
}

