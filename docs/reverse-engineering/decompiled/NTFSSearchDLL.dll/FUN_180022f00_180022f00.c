// Function: FUN_180022f00
// Address: 180022f00
// Size: 434 bytes


bool FUN_180022f00(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  bool bVar11;
  double dVar12;
  
  bVar11 = false;
  if ((param_2 != (longlong *)0x0) && ((longlong *)param_1[1] != (longlong *)0x0)) {
    uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
    lVar10 = -0x8000000000000000;
    dVar12 = FUN_180044580(uVar6);
    if (DAT_180073198 < dVar12) {
      lVar10 = (longlong)((double)*param_2 - (double)param_2[6] * dVar12);
    }
    puVar2 = (undefined8 *)param_1[2];
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    puVar3 = puVar2;
    puVar9 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
      if ((longlong)puVar9[4] < lVar10) {
        puVar8 = (undefined8 *)puVar9[2];
        puVar9 = puVar3;
      }
      else {
        puVar8 = (undefined8 *)*puVar9;
      }
      puVar3 = puVar9;
      puVar9 = puVar8;
      cVar1 = *(char *)((longlong)puVar8 + 0x19);
    }
    if ((((puVar3 != puVar2) && ((longlong)puVar3[4] <= lVar10)) && (puVar3 != puVar2)) &&
       (*param_1 != 0)) {
      pvVar7 = FUN_180023b00(puVar9,param_1[7],lVar10,*param_2);
      if ((char)pvVar7 != '\0') {
        return true;
      }
      puVar2 = *(undefined8 **)*param_1;
      puVar3 = (undefined8 *)*puVar2;
      while ((puVar3 != puVar2 &&
             (((lVar4 = puVar3[4], lVar4 == 0 || (*(char *)(lVar4 + 0xf1) != '\0')) ||
              (pvVar7 = FUN_180023b00(puVar9,lVar4,lVar10,*param_2), (char)pvVar7 == '\0'))))) {
        puVar8 = (undefined8 *)puVar3[2];
        if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
          cVar1 = *(char *)((longlong)*puVar8 + 0x19);
          puVar3 = puVar8;
          puVar9 = (undefined8 *)*puVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((longlong)*puVar9 + 0x19);
            puVar3 = puVar9;
            puVar9 = (undefined8 *)*puVar9;
          }
        }
        else {
          cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
          puVar5 = (undefined8 *)puVar3[1];
          puVar8 = puVar3;
          while ((puVar3 = puVar5, cVar1 == '\0' && (puVar8 == (undefined8 *)puVar3[2]))) {
            cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
            puVar5 = (undefined8 *)puVar3[1];
            puVar8 = puVar3;
          }
        }
      }
      bVar11 = puVar3 != *(undefined8 **)*param_1;
      if (bVar11) {
        param_1[7] = puVar3[4];
      }
    }
    return bVar11;
  }
  return false;
}

