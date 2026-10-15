// Function: FUN_180020110
// Address: 180020110
// Size: 628 bytes


ulonglong FUN_180020110(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  ulonglong local_50;
  ulonglong local_48;
  
  lVar6 = *(longlong *)(param_1 + 0x38);
  puVar9 = (undefined8 *)FUN_18003ec54(0x48);
  plVar17 = (longlong *)0x0;
  plVar10 = plVar17;
  if (puVar9 != (undefined8 *)0x0) {
    plVar10 = FUN_180034760(puVar9);
  }
  puVar9 = *(undefined8 **)(lVar6 + 0xa0);
  puVar16 = puVar9;
  if (*(char *)((longlong)puVar9[1] + 0x19) == '\0') {
    puVar14 = (undefined8 *)puVar9[1];
    do {
      if ((ulonglong)puVar14[4] < *param_2) {
        puVar15 = (undefined8 *)puVar14[2];
      }
      else {
        puVar15 = (undefined8 *)*puVar14;
        puVar16 = puVar14;
      }
      puVar14 = puVar15;
    } while (*(char *)((longlong)puVar15 + 0x19) == '\0');
  }
  if ((puVar16 == puVar9) || (*param_2 < (ulonglong)puVar16[4])) {
    puVar16 = puVar9;
  }
  if (puVar16 == puVar9) {
LAB_1800201c0:
    uVar11 = (ulonglong)puVar9 & 0xffffffffffffff00;
  }
  else {
    uVar11 = puVar16[5];
    lVar12 = (**(code **)(*(longlong *)param_2[4] + 0x18))();
    if (-1 < lVar12) {
      do {
        puVar9 = *(undefined8 **)(lVar6 + 0x50);
        cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
        puVar16 = puVar9;
        puVar14 = (undefined8 *)puVar9[1];
        while (cVar1 == '\0') {
          if ((ulonglong)puVar14[4] < uVar11) {
            puVar15 = (undefined8 *)puVar14[2];
            puVar14 = puVar16;
          }
          else {
            puVar15 = (undefined8 *)*puVar14;
          }
          puVar16 = puVar14;
          puVar14 = puVar15;
          cVar1 = *(char *)((longlong)puVar15 + 0x19);
        }
        if ((puVar16 == puVar9) || (uVar11 < (ulonglong)puVar16[4])) {
          puVar16 = puVar9;
        }
        if (((((puVar16 == puVar9) || (lVar12 = puVar16[8], lVar12 == 0)) ||
             (lVar7 = puVar16[7], lVar7 == 0)) ||
            (puVar9 = (undefined8 *)(ulonglong)*(ushort *)(lVar7 + 0x34),
            *(uint *)(lVar7 + 0x18) <
            (uint)*(ushort *)(lVar7 + 0x36) + (uint)*(ushort *)(lVar7 + 0x34))) ||
           ((*(int *)(puVar16 + 6) != 0x16 && (*(int *)((longlong)puVar16 + 0x34) != 0x15)))) break;
        iVar2 = *(int *)(lVar7 + 0x48);
        iVar3 = *(int *)(param_1 + 0x18);
        iVar4 = *(int *)((longlong)puVar9 + lVar12 + 0x30);
        uVar5 = *(uint *)((longlong)puVar9 + lVar12 + 0x34);
        if (*(longlong **)(param_1 + 8) == (longlong *)0x0) goto LAB_1800201c0;
        iVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
        if (iVar8 == 0) {
          iVar8 = 0x200;
        }
        if (*(int *)(param_1 + 0x18) == 0) {
          *(undefined4 *)(param_1 + 0x18) = 8;
        }
        if (uVar5 == 0) {
          uVar5 = 1;
        }
        local_48 = (ulonglong)uVar5;
        local_50 = (ulonglong)(uint)(iVar2 * iVar3 * 0x1000 + iVar4);
        FUN_180034ac0((longlong)plVar10,&local_50);
        plVar17 = (longlong *)
                  ((longlong)plVar17 + (ulonglong)(iVar8 * uVar5 * *(int *)(param_1 + 0x18)));
        puVar9 = *(undefined8 **)(lVar6 + 0xb0);
        cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
        puVar16 = puVar9;
        puVar14 = (undefined8 *)puVar9[1];
        while (cVar1 == '\0') {
          if ((ulonglong)puVar14[4] < uVar11) {
            puVar15 = (undefined8 *)puVar14[2];
            puVar14 = puVar16;
          }
          else {
            puVar15 = (undefined8 *)*puVar14;
          }
          puVar16 = puVar14;
          puVar14 = puVar15;
          cVar1 = *(char *)((longlong)puVar15 + 0x19);
        }
        if ((puVar16 == puVar9) || (uVar11 < (ulonglong)puVar16[4])) {
          puVar16 = puVar9;
        }
        if (puVar16 == puVar9) break;
        uVar11 = puVar16[5];
        lVar12 = (**(code **)(*(longlong *)param_2[4] + 0x18))();
      } while ((longlong)plVar17 <= lVar12);
    }
    uVar13 = FUN_180003250(param_2[4],plVar10);
    *(undefined4 *)(param_2 + 6) = 1;
    if (plVar10 != (longlong *)0x0) {
      uVar13 = (**(code **)*plVar10)(plVar10,1);
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = (longlong)plVar17;
    }
    uVar11 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
  }
  return uVar11;
}

