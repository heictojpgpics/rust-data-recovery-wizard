// Function: FUN_18001ec70
// Address: 18001ec70
// Size: 673 bytes


ulonglong FUN_18001ec70(longlong param_1,longlong param_2,char param_3)

{
  byte *pbVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  ulonglong in_RAX;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int local_res20 [2];
  
  uVar12 = 0;
  plVar9 = *(longlong **)(param_2 + 0x20);
  if ((plVar9 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x38) == 0)) {
    uVar12 = in_RAX & 0xffffffffffffff00;
  }
  else {
    if ((undefined **)*plVar9 == CNTFSFileProperties::vftable) {
      if ((ushort *)plVar9[9] == (ushort *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        puVar5 = FUN_180033aa0((ushort *)plVar9[9]);
      }
    }
    else {
      puVar5 = (undefined8 *)(*(code *)((undefined **)*plVar9)[0xf])();
    }
    if ((puVar5 == (undefined8 *)0x0) || (param_3 != '\0')) {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x58);
      puVar15 = *(undefined8 **)(*(longlong *)(param_1 + 0x38) + 0x70);
      puVar8 = (undefined8 *)puVar15[1];
      puVar6 = puVar8;
      puVar13 = puVar15;
      if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
        do {
          if ((longlong)puVar6[4] < lVar2) {
            puVar7 = (undefined8 *)puVar6[2];
          }
          else {
            puVar7 = (undefined8 *)*puVar6;
            puVar13 = puVar6;
          }
          puVar6 = puVar7;
        } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
        do {
          if (lVar2 < (longlong)puVar8[4]) {
            puVar6 = (undefined8 *)*puVar8;
            puVar15 = puVar8;
          }
          else {
            puVar6 = (undefined8 *)puVar8[2];
          }
          puVar8 = puVar6;
        } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
      }
      while (puVar13 != puVar15) {
        if ((((((puVar13[8] != 0) && (lVar2 = puVar13[7], lVar2 != 0)) &&
              (*(int *)(puVar13 + 6) == 6)) &&
             ((*(int *)((longlong)puVar13 + 0x34) == 5 &&
              (lVar14 = (ulonglong)*(ushort *)(lVar2 + 0x38) + puVar13[8],
              *(int *)(lVar14 + 0x30) == 0x80)))) &&
            ((0x3f < *(uint *)(lVar14 + 0x34) ||
             (*(uint *)(lVar14 + 0x34) <= (uint)*(ushort *)(lVar2 + 0x3a))))) &&
           ((bVar3 = FUN_180045400(lVar14 + 0x30), (int)CONCAT71(extraout_var,bVar3) == 0 &&
            (bVar3 = FUN_180045440(lVar14 + 0x30), (int)CONCAT71(extraout_var_00,bVar3) == 0)))) {
          pbVar1 = (byte *)(lVar14 + 0x70);
          local_res20[0] = *(int *)(lVar14 + 0x34) + -0x40;
          if ((pbVar1 != (byte *)0x0) &&
             (cVar4 = FUN_18001d5f0(param_1,pbVar1,local_res20), cVar4 != '\0')) {
            puVar8 = (undefined8 *)FUN_18002be40(0x48);
            if (puVar8 == (undefined8 *)0x0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = FUN_180034760(puVar8);
            }
            uVar10 = FUN_1800347d0((longlong)plVar9,(longlong)pbVar1,*(int *)(lVar14 + 0x34) + -0x40
                                  );
            if ((int)uVar10 != 0) {
              plVar11 = FUN_1800340b0((longlong)plVar9);
              if ((plVar11 != (longlong *)0x0) && (-1 < *plVar11)) {
                FUN_180003250(*(longlong *)(param_2 + 0x20),plVar9);
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)*plVar9)(plVar9,1);
                }
                uVar12 = 1;
                break;
              }
              if (plVar9 != (longlong *)0x0) {
                (**(code **)*plVar9)(plVar9,1);
              }
            }
          }
        }
        puVar8 = (undefined8 *)puVar13[2];
        if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
          cVar4 = *(char *)((longlong)*puVar8 + 0x19);
          puVar13 = puVar8;
          puVar8 = (undefined8 *)*puVar8;
          while (cVar4 == '\0') {
            cVar4 = *(char *)((longlong)*puVar8 + 0x19);
            puVar13 = puVar8;
            puVar8 = (undefined8 *)*puVar8;
          }
        }
        else {
          cVar4 = *(char *)((longlong)puVar13[1] + 0x19);
          puVar6 = (undefined8 *)puVar13[1];
          puVar8 = puVar13;
          while ((puVar13 = puVar6, cVar4 == '\0' && (puVar8 == (undefined8 *)puVar13[2]))) {
            cVar4 = *(char *)((longlong)puVar13[1] + 0x19);
            puVar6 = (undefined8 *)puVar13[1];
            puVar8 = puVar13;
          }
        }
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  return uVar12;
}

