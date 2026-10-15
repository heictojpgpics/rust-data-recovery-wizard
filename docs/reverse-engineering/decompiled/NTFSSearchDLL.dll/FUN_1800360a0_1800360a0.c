// Function: FUN_1800360a0
// Address: 1800360a0
// Size: 494 bytes


void FUN_1800360a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if ((*(longlong *)(param_1 + 0x50) != 0) && (param_2 != (longlong *)0x0)) {
    uVar8 = 0;
    lVar5 = __RTDynamicCast(param_2[6],0,&IFileProperties::RTTI_Type_Descriptor,
                            &CNTFSFileProperties::RTTI_Type_Descriptor,0);
    if ((lVar5 != 0) &&
       ((iVar4 = (**(code **)(*param_2 + 8))(param_2), iVar4 == 0 &&
        ((*(byte *)((longlong)param_2 + 0x72) & 4) == 0)))) {
      plVar1 = (longlong *)param_2[6];
      if (plVar1 != (longlong *)0x0) {
        if ((undefined **)*plVar1 == CNTFSFileProperties::vftable) {
          bVar3 = (byte)*(undefined2 *)((longlong)plVar1 + 0x23);
        }
        else {
          bVar3 = (*(code *)((undefined **)*plVar1)[7])();
        }
        if ((bVar3 >> 4 & 1) != 0) {
          return;
        }
      }
      plVar1 = (longlong *)param_2[6];
      if (plVar1 != (longlong *)0x0) {
        if ((undefined **)*plVar1 == CNTFSFileProperties::vftable) {
          uVar8 = *(undefined8 *)((longlong)plVar1 + 0x1b);
        }
        else {
          uVar8 = (*(code *)((undefined **)*plVar1)[3])();
        }
      }
      uVar10 = (uint)((longlong)uVar8 >> 0x3f) & 0xfff;
      if (((((int)uVar8 + uVar10 & 0xfff) == uVar10) &&
          (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x20), plVar1 != (longlong *)0x0)
          ) && (plVar1[1] != 0)) {
        puVar12 = (undefined8 *)*plVar1;
        puVar6 = (undefined8 *)puVar12[1];
        puVar7 = puVar6;
        puVar11 = puVar12;
        if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
          do {
            if ((longlong)puVar7[4] < param_2[10]) {
              puVar9 = (undefined8 *)puVar7[2];
            }
            else {
              puVar9 = (undefined8 *)*puVar7;
              puVar11 = puVar7;
            }
            puVar7 = puVar9;
          } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
          do {
            if (param_2[10] < (longlong)puVar6[4]) {
              puVar7 = (undefined8 *)*puVar6;
              puVar12 = puVar6;
            }
            else {
              puVar7 = (undefined8 *)puVar6[2];
            }
            puVar6 = puVar7;
          } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
        }
        while (puVar11 != puVar12) {
          if ((puVar11 + 5 != (longlong *)0x0) &&
             (cVar2 = FUN_180043c60((longlong)param_2,puVar11 + 5), cVar2 != '\0')) {
            *(undefined8 *)(lVar5 + 0x1b) = puVar11[7];
          }
          puVar6 = (undefined8 *)puVar11[2];
          if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
            cVar2 = *(char *)((longlong)*puVar6 + 0x19);
            puVar11 = puVar6;
            puVar6 = (undefined8 *)*puVar6;
            while (cVar2 == '\0') {
              cVar2 = *(char *)((longlong)*puVar6 + 0x19);
              puVar11 = puVar6;
              puVar6 = (undefined8 *)*puVar6;
            }
          }
          else {
            cVar2 = *(char *)((longlong)puVar11[1] + 0x19);
            puVar7 = (undefined8 *)puVar11[1];
            puVar6 = puVar11;
            while ((puVar11 = puVar7, cVar2 == '\0' && (puVar6 == (undefined8 *)puVar11[2]))) {
              cVar2 = *(char *)((longlong)puVar11[1] + 0x19);
              puVar7 = (undefined8 *)puVar11[1];
              puVar6 = puVar11;
            }
          }
        }
      }
    }
  }
  return;
}

