// Function: FUN_18001ef20
// Address: 18001ef20
// Size: 770 bytes


void FUN_18001ef20(undefined8 *param_1,ulonglong *param_2,uint *param_3,uint *param_4,
                  longlong *param_5)

{
  char cVar1;
  undefined **ppuVar2;
  byte bVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60 [4];
  ulonglong local_40;
  
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_180086010 ^ (ulonglong)auStack_88;
  pvVar4 = (void *)(**(code **)(*(longlong *)param_2[4] + 0x10))();
  FUN_180003be0(local_60,pvVar4);
  uVar5 = FUN_180020520(local_60,"~1.",0);
  if (uVar5 == 0xffffffffffffffff) {
    ppuVar2 = *(undefined ***)param_2[4];
    if (ppuVar2 == CNTFSFileProperties::vftable) {
      bVar3 = (byte)*(undefined2 *)((longlong)param_2[4] + 0x23);
    }
    else {
      bVar3 = (*(code *)ppuVar2[7])();
    }
    if ((bVar3 >> 4 & 1) == 0) {
      puVar6 = (undefined8 *)(**(code **)(*(longlong *)param_2[4] + 0x78))();
      if ((puVar6 == (undefined8 *)0x0) ||
         (lVar7 = (**(code **)(*(longlong *)param_2[4] + 0x18))(), lVar7 == 0)) {
        FUN_18001bf30(param_1,param_2,param_3,param_4);
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,1);
        }
        puVar6 = (undefined8 *)(**(code **)(*(longlong *)param_2[4] + 0x78))();
        if ((puVar6 != (undefined8 *)0x0) && (param_1[1] != 0)) {
          lVar7 = FUN_18001c340((longlong)param_1,(longlong)puVar6);
          lVar10 = (**(code **)(*(longlong *)param_2[4] + 0x18))();
          *(bool *)((longlong)param_2 + 0x34) = lVar7 < lVar10;
          if ((*(int *)((longlong)param_2 + 0x14) != 0) && ((0 < lVar7 && (lVar7 < lVar10)))) {
            *(longlong *)(param_2[4] + 0x1b) = lVar7;
          }
          (**(code **)*puVar6)(puVar6,1);
          puVar6 = (undefined8 *)0x0;
        }
      }
      else {
        plVar12 = (longlong *)param_2[4];
        if (plVar12 != (longlong *)0x0) {
          puVar16 = *(undefined8 **)(param_1[7] + 0x70);
          puVar8 = (undefined8 *)puVar16[1];
          puVar9 = puVar8;
          puVar15 = puVar16;
          puVar14 = puVar8;
          if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
            do {
              if ((longlong)puVar9[4] < plVar12[0xb]) {
                puVar14 = (undefined8 *)puVar9[2];
              }
              else {
                puVar14 = (undefined8 *)*puVar9;
                puVar15 = puVar9;
              }
              puVar9 = puVar14;
            } while (*(char *)((longlong)puVar14 + 0x19) == '\0');
            do {
              if (plVar12[0xb] < (longlong)puVar8[4]) {
                puVar9 = (undefined8 *)*puVar8;
                puVar16 = puVar8;
              }
              else {
                puVar9 = (undefined8 *)puVar8[2];
              }
              puVar8 = puVar9;
            } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
          }
          while ((puVar15 != puVar16 &&
                 ((puVar15[7] == 0 ||
                  (uVar5 = FUN_180020390(puVar14,plVar12,(longlong)(puVar15 + 5)),
                  (char)uVar5 == '\0'))))) {
            puVar8 = (undefined8 *)puVar15[2];
            if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
              cVar1 = *(char *)((longlong)*puVar8 + 0x19);
              puVar15 = puVar8;
              puVar8 = (undefined8 *)*puVar8;
              while (cVar1 == '\0') {
                cVar1 = *(char *)((longlong)*puVar8 + 0x19);
                puVar15 = puVar8;
                puVar8 = (undefined8 *)*puVar8;
              }
            }
            else {
              cVar1 = *(char *)((longlong)puVar15[1] + 0x19);
              puVar9 = (undefined8 *)puVar15[1];
              puVar8 = puVar15;
              while ((puVar15 = puVar9, cVar1 == '\0' && (puVar8 == (undefined8 *)puVar15[2]))) {
                cVar1 = *(char *)((longlong)puVar15[1] + 0x19);
                puVar9 = (undefined8 *)puVar15[1];
                puVar8 = puVar15;
              }
            }
          }
        }
        lVar7 = FUN_18001c340((longlong)param_1,(longlong)puVar6);
        lVar10 = (**(code **)(*(longlong *)param_2[4] + 0x18))();
        *(bool *)((longlong)param_2 + 0x34) = lVar7 < lVar10;
      }
      lVar7 = (**(code **)(*(longlong *)param_2[4] + 0x18))();
      if ((lVar7 != 0) && (puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    else {
      plVar12 = param_5;
      lVar7 = FUN_180002680(param_5);
      lVar7 = *(longlong *)(lVar7 + 8);
      plVar11 = (longlong *)FUN_180002810((longlong)plVar12);
      if (*plVar11 == lVar7) {
        puVar6 = (undefined8 *)FUN_180002670((longlong)plVar12);
        FUN_180020900(param_5,(void *)*puVar6,param_2);
      }
      else {
        plVar12 = (longlong *)FUN_180002670((longlong)plVar12);
        puVar13 = (ulonglong *)FUN_180001100(plVar12,*plVar12);
        uVar5 = param_2[1];
        *puVar13 = *param_2;
        puVar13[1] = uVar5;
        uVar5 = param_2[3];
        puVar13[2] = param_2[2];
        puVar13[3] = uVar5;
        uVar5 = param_2[5];
        puVar13[4] = param_2[4];
        puVar13[5] = uVar5;
        puVar13[6] = param_2[6];
        *plVar12 = *plVar12 + 0x38;
      }
    }
  }
  FUN_1800025f0(local_60);
  __security_check_cookie(local_40 ^ (ulonglong)auStack_88);
  return;
}

