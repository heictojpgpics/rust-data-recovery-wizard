// Function: FUN_18003c970
// Address: 18003c970
// Size: 675 bytes


undefined8 FUN_18003c970(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if (param_2 == (longlong *)0x0) {
    return 1;
  }
  iVar5 = (**(code **)(*param_2 + 8))(param_2);
  if ((iVar5 == 0) && ((*(byte *)((longlong)param_2 + 0x72) & 4) == 0)) {
    plVar6 = (longlong *)param_2[6];
    if (plVar6 == (longlong *)0x0) {
      return 1;
    }
    if ((undefined **)*plVar6 == CNTFSFileProperties::vftable) {
      bVar3 = (byte)*(undefined2 *)((longlong)plVar6 + 0x23);
    }
    else {
      bVar3 = (*(code *)((undefined **)*plVar6)[7])();
    }
    if ((bVar3 >> 4 & 1) == 0) {
      return 1;
    }
  }
  plVar6 = (longlong *)
           __RTDynamicCast(param_2[6],0,&IFileProperties::RTTI_Type_Descriptor,
                           &CNTFSFileProperties::RTTI_Type_Descriptor,0);
  if (plVar6 == (longlong *)0x0) {
    return 1;
  }
  if ((undefined **)*plVar6 == CNTFSFileProperties::vftable) {
    uVar10 = *(ushort *)(plVar6 + 0xd) - 1;
    if ((*(byte *)((longlong)plVar6 + 0x72) & 8) == 0) {
      uVar10 = (uint)*(ushort *)(plVar6 + 0xd);
    }
    uVar13 = plVar6[0xb] << 0x10 | (ulonglong)uVar10 & 0xffff;
  }
  else {
    uVar13 = (*(code *)((undefined **)*plVar6)[0x1e])(plVar6);
  }
  uVar12 = param_2[9];
  if ((0 < (longlong)uVar12) && (uVar12 != 5)) {
    if ((undefined **)*plVar6 == CNTFSFileProperties::vftable) {
      uVar4 = *(ushort *)((longlong)plVar6 + 0x6a);
    }
    else {
      uVar4 = (*(code *)((undefined **)*plVar6)[0x29])(plVar6);
    }
    uVar12 = uVar12 << 0x10 | (ulonglong)uVar4;
  }
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x68))[1];
  cVar2 = *(char *)((longlong)puVar9 + 0x19);
  puVar11 = *(undefined8 **)(param_1 + 0x68);
  while (cVar2 == '\0') {
    if ((longlong)puVar9[4] < (longlong)uVar13) {
      puVar7 = (undefined8 *)puVar9[2];
      puVar9 = puVar11;
    }
    else {
      puVar7 = (undefined8 *)*puVar9;
    }
    puVar11 = puVar9;
    puVar9 = puVar7;
    cVar2 = *(char *)((longlong)puVar7 + 0x19);
  }
  do {
    puVar9 = *(undefined8 **)(param_1 + 0x68);
    cVar2 = *(char *)((longlong)puVar9[1] + 0x19);
    puVar7 = (undefined8 *)puVar9[1];
    while (cVar2 == '\0') {
      if ((longlong)uVar13 < (longlong)puVar7[4]) {
        puVar8 = (undefined8 *)*puVar7;
        puVar9 = puVar7;
      }
      else {
        puVar8 = (undefined8 *)puVar7[2];
      }
      puVar7 = puVar8;
      cVar2 = *(char *)((longlong)puVar8 + 0x19);
    }
    if (puVar11 == puVar9) {
      return 1;
    }
    lVar1 = puVar11[5];
    if (((lVar1 != 0) && (cVar2 = FUN_180044490(lVar1,'\x01'), cVar2 == '\0')) &&
       (plVar6 = (longlong *)
                 __RTDynamicCast(*(undefined8 *)(lVar1 + 0x30),0,
                                 &IFileProperties::RTTI_Type_Descriptor,
                                 &CNTFSFileProperties::RTTI_Type_Descriptor,0),
       plVar6 != (longlong *)0x0)) {
      uVar14 = *(ulonglong *)(lVar1 + 0x48);
      if ((0 < (longlong)uVar14) && (uVar14 != 5)) {
        if ((undefined **)*plVar6 == CNTFSFileProperties::vftable) {
          uVar4 = *(ushort *)((longlong)plVar6 + 0x6a);
        }
        else {
          uVar4 = (*(code *)((undefined **)*plVar6)[0x29])(plVar6);
        }
        uVar14 = uVar14 << 0x10 | (ulonglong)uVar4;
      }
      if (uVar14 == uVar12) {
        return 0;
      }
    }
    puVar9 = (undefined8 *)puVar11[2];
    if (*(char *)((longlong)puVar9 + 0x19) == '\0') {
      cVar2 = *(char *)((longlong)*puVar9 + 0x19);
      puVar11 = puVar9;
      puVar9 = (undefined8 *)*puVar9;
      while (cVar2 == '\0') {
        cVar2 = *(char *)((longlong)*puVar9 + 0x19);
        puVar11 = puVar9;
        puVar9 = (undefined8 *)*puVar9;
      }
    }
    else {
      cVar2 = *(char *)((longlong)puVar11[1] + 0x19);
      puVar7 = (undefined8 *)puVar11[1];
      puVar9 = puVar11;
      while ((puVar11 = puVar7, cVar2 == '\0' && (puVar9 == (undefined8 *)puVar11[2]))) {
        cVar2 = *(char *)((longlong)puVar11[1] + 0x19);
        puVar7 = (undefined8 *)puVar11[1];
        puVar9 = puVar11;
      }
    }
  } while( true );
}

