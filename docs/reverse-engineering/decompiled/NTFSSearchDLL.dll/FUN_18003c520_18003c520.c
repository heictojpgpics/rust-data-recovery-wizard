// Function: FUN_18003c520
// Address: 18003c520
// Size: 771 bytes


undefined8 FUN_18003c520(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  longlong *plVar9;
  undefined *puVar10;
  ushort uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  
  if (param_2 == 0) {
    return 1;
  }
  plVar5 = (longlong *)
           __RTDynamicCast(*(undefined8 *)(param_2 + 0x30),0,&IFileProperties::RTTI_Type_Descriptor,
                           &CNTFSFileProperties::RTTI_Type_Descriptor,0);
  cVar2 = FUN_180044490(param_2,'\0');
  if (plVar5 == (longlong *)0x0) {
    return 1;
  }
  puVar16 = *(undefined8 **)(param_1 + 0x48);
  puVar12 = (undefined8 *)puVar16[1];
  puVar6 = puVar12;
  puVar14 = puVar16;
  if (*(char *)((longlong)puVar12 + 0x19) == '\0') {
    do {
      if ((longlong)puVar6[4] < param_3) {
        puVar7 = (undefined8 *)puVar6[2];
      }
      else {
        puVar7 = (undefined8 *)*puVar6;
        puVar14 = puVar6;
      }
      puVar6 = puVar7;
    } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
    do {
      if (param_3 < (longlong)puVar12[4]) {
        puVar6 = (undefined8 *)*puVar12;
        puVar16 = puVar12;
      }
      else {
        puVar6 = (undefined8 *)puVar12[2];
      }
      puVar12 = puVar6;
    } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
  }
  do {
    if (puVar14 == puVar16) {
      return 1;
    }
    lVar1 = puVar14[5];
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x40) == 0) {
        plVar9 = *(longlong **)(lVar1 + 0x30);
        if (plVar9 == (longlong *)0x0) {
          puVar10 = &DAT_18004c788;
        }
        else if ((undefined **)*plVar9 == CNTFSFileProperties::vftable) {
          puVar10 = *(undefined **)((longlong)plVar9 + 0x11);
        }
        else {
          puVar10 = (undefined *)(*(code *)((undefined **)*plVar9)[2])();
        }
        puVar8 = &DAT_18004c788;
        if (puVar10 != (undefined *)0x0) {
          puVar8 = puVar10;
        }
        if (puVar8 == (undefined *)0x0) goto LAB_18003c748;
      }
      if ((lVar1 != param_2) &&
         (plVar9 = (longlong *)
                   __RTDynamicCast(*(undefined8 *)(lVar1 + 0x30),0,
                                   &IFileProperties::RTTI_Type_Descriptor,
                                   &CNTFSFileProperties::RTTI_Type_Descriptor,0),
         plVar9 != (longlong *)0x0)) {
        if ((undefined **)*plVar9 == CNTFSFileProperties::vftable) {
          uVar11 = *(ushort *)(plVar9 + 0xd) - 1;
          if ((*(byte *)((longlong)plVar9 + 0x72) & 8) == 0) {
            uVar11 = *(ushort *)(plVar9 + 0xd);
          }
          uVar15 = plVar9[0xb] << 0x10 | (ulonglong)uVar11;
        }
        else {
          uVar15 = (*(code *)((undefined **)*plVar9)[0x1e])(plVar9);
        }
        if ((undefined **)*plVar5 == CNTFSFileProperties::vftable) {
          uVar13 = (ulonglong)(*(ushort *)(plVar5 + 0xd) - 1);
          if ((*(byte *)((longlong)plVar5 + 0x72) & 8) == 0) {
            uVar13 = (ulonglong)*(ushort *)(plVar5 + 0xd);
          }
          uVar13 = plVar5[0xb] << 0x10 | uVar13 & 0xffff;
        }
        else {
          uVar13 = (*(code *)((undefined **)*plVar5)[0x1e])(plVar5);
        }
        if ((uVar15 == uVar13) && (cVar3 = FUN_180044490(lVar1,'\0'), cVar3 == '\0')) {
          if ((undefined **)*plVar9 == CNTFSFileProperties::vftable) {
            bVar4 = *(byte *)((longlong)plVar9 + 0x72) & 1;
          }
          else {
            bVar4 = (*(code *)((undefined **)*plVar9)[0x1b])(plVar9);
          }
          if ((bVar4 == 0) || (cVar2 != '\0')) {
            FUN_18003cc20(param_1,param_2,param_3);
            return 0;
          }
        }
      }
    }
LAB_18003c748:
    puVar12 = (undefined8 *)puVar14[2];
    if (*(char *)((longlong)puVar12 + 0x19) == '\0') {
      cVar3 = *(char *)((longlong)*puVar12 + 0x19);
      puVar14 = puVar12;
      puVar12 = (undefined8 *)*puVar12;
      while (cVar3 == '\0') {
        cVar3 = *(char *)((longlong)*puVar12 + 0x19);
        puVar14 = puVar12;
        puVar12 = (undefined8 *)*puVar12;
      }
    }
    else {
      cVar3 = *(char *)((longlong)puVar14[1] + 0x19);
      puVar6 = (undefined8 *)puVar14[1];
      puVar12 = puVar14;
      while ((puVar14 = puVar6, cVar3 == '\0' && (puVar12 == (undefined8 *)puVar14[2]))) {
        cVar3 = *(char *)((longlong)puVar14[1] + 0x19);
        puVar6 = (undefined8 *)puVar14[1];
        puVar12 = puVar14;
      }
    }
  } while( true );
}

