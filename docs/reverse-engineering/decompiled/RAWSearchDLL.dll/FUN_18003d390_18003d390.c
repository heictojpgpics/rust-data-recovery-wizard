// Function: FUN_18003d390
// Address: 18003d390
// Size: 429 bytes


undefined8
FUN_18003d390(longlong param_1,void *param_2,uint param_3,longlong param_4,longlong *param_5)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  
  plVar3 = param_5;
  lVar13 = (longlong)(int)param_3;
  if (*(int *)((longlong)param_5 + 0x14) < 9) {
LAB_18003d51f:
    uVar7 = 1;
  }
  else {
    pvVar5 = FUN_18003c900(param_2,param_3 - *(int *)((longlong)param_5 + 0x14),
                           (longlong *)(param_1 + 0x138),(int *)&param_5);
    if (pvVar5 == (void *)0x0) {
      if (((param_4 < 2) || (param_4 <= *plVar3)) ||
         (pvVar5 = FUN_18003c900((void *)((longlong)param_2 + -0x56),0xac,
                                 (longlong *)(param_1 + 0x138),(int *)&param_5),
         pvVar5 == (void *)0x0)) goto LAB_18003d51f;
      puVar2 = *(undefined8 **)(param_1 + 0x128);
      uVar12 = *(uint *)((longlong)pvVar5 + 2);
      uVar6 = 0;
      cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
      puVar11 = puVar2;
      puVar10 = (undefined8 *)puVar2[1];
      while (cVar1 == '\0') {
        if (*(uint *)((longlong)puVar10 + 0x1c) < uVar12) {
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
      if ((puVar11 == puVar2) || (uVar12 < *(uint *)((longlong)puVar11 + 0x1c))) {
        puVar11 = puVar2;
      }
      if (puVar11 != puVar2) {
        uVar6 = (ulonglong)*(uint *)(puVar11 + 4);
      }
      lVar8 = ((ulonglong)(((int)pvVar5 - (int)param_2) + 0x56) - 0x56) +
              (param_4 - *(longlong *)(param_1 + 8)) * lVar13 + uVar6;
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 0x128);
      uVar12 = *(uint *)((longlong)pvVar5 + 2);
      uVar4 = 0;
      cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
      puVar11 = puVar2;
      puVar10 = (undefined8 *)puVar2[1];
      while (cVar1 == '\0') {
        if (*(uint *)((longlong)puVar10 + 0x1c) < uVar12) {
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
      if ((puVar11 == puVar2) || (uVar12 < *(uint *)((longlong)puVar11 + 0x1c))) {
        puVar11 = puVar2;
      }
      if (puVar11 != puVar2) {
        uVar4 = *(uint *)(puVar11 + 4);
      }
      lVar8 = (ulonglong)uVar4 + (param_4 - *(longlong *)(param_1 + 8)) * lVar13 +
              (ulonglong)(uint)((int)pvVar5 - (int)param_2);
    }
    *(longlong *)(param_1 + 0x148) = lVar8;
    if (((uVar12 == 0xb2) && ((int)(lVar8 % lVar13) + 4U <= param_3)) &&
       (*(int *)((lVar8 % lVar13 & 0xffffffffU) + (longlong)param_2) != 0)) {
      *(longlong *)(param_1 + 0x148) = lVar8 + 10;
    }
    uVar7 = 0;
  }
  return uVar7;
}

