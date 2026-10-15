// Function: FUN_180023350
// Address: 180023350
// Size: 1199 bytes


ulonglong FUN_180023350(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  TypeDescriptor *pTVar19;
  ulonglong uVar20;
  byte local_res20;
  undefined8 in_stack_ffffffffffffff58;
  uint uVar21;
  ulonglong local_80;
  longlong *local_78;
  undefined8 *local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  uVar21 = (uint)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  local_res20 = 1;
  if (param_2 == (longlong *)0x0) {
    return 1;
  }
  iVar8 = (**(code **)(*param_2 + 8))(param_2);
  if ((iVar8 == 0) && ((*(byte *)((longlong)param_2 + 0x72) & 4) == 0)) {
    plVar9 = (longlong *)param_2[6];
    if (plVar9 == (longlong *)0x0) {
      return 1;
    }
    if ((undefined **)*plVar9 == CNTFSFileProperties::vftable) {
      bVar6 = (byte)*(undefined2 *)((longlong)plVar9 + 0x23);
    }
    else {
      bVar6 = (*(code *)((undefined **)*plVar9)[7])();
    }
    if ((bVar6 >> 4 & 1) == 0) {
      return 1;
    }
  }
  pTVar19 = &IFileProperties::RTTI_Type_Descriptor;
  uVar15 = (ulonglong)uVar21 << 0x20;
  plVar9 = (longlong *)
           __RTDynamicCast(param_2[6],0,&IFileProperties::RTTI_Type_Descriptor,
                           &CNTFSFileProperties::RTTI_Type_Descriptor,uVar15);
  if (plVar9 == (longlong *)0x0) {
    return 0;
  }
  uVar3 = param_2[9];
  if ((undefined **)*plVar9 == CNTFSFileProperties::vftable) {
    uVar7 = *(ushort *)(plVar9 + 0xd) - 1;
    if ((*(byte *)((longlong)plVar9 + 0x72) & 8) == 0) {
      uVar7 = *(ushort *)(plVar9 + 0xd);
    }
    uVar20 = plVar9[0xb] << 0x10 | (ulonglong)uVar7;
  }
  else {
    uVar20 = (*(code *)((undefined **)*plVar9)[0x1e])(plVar9);
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  puVar11 = (undefined8 *)(*(undefined8 **)(param_1 + 0x50))[1];
  cVar5 = *(char *)((longlong)puVar11 + 0x19);
  puVar17 = *(undefined8 **)(param_1 + 0x50);
  while (cVar5 == '\0') {
    if ((longlong)puVar11[4] < (longlong)uVar20) {
      puVar16 = (undefined8 *)puVar11[2];
      puVar11 = puVar17;
    }
    else {
      puVar16 = (undefined8 *)*puVar11;
    }
    puVar17 = puVar11;
    puVar11 = puVar16;
    cVar5 = *(char *)((longlong)puVar16 + 0x19);
  }
  while( true ) {
    puVar11 = (undefined8 *)*plVar1;
    cVar5 = *(char *)((longlong)puVar11[1] + 0x19);
    puVar16 = (undefined8 *)puVar11[1];
    while (cVar5 == '\0') {
      if ((longlong)uVar20 < (longlong)puVar16[4]) {
        puVar10 = (undefined8 *)*puVar16;
        puVar11 = puVar16;
      }
      else {
        puVar10 = (undefined8 *)puVar16[2];
      }
      puVar16 = puVar10;
      cVar5 = *(char *)((longlong)puVar10 + 0x19);
    }
    local_70 = puVar17;
    if (puVar17 == puVar11) break;
    lVar4 = puVar17[5];
    if (lVar4 != 0) {
      plVar13 = (longlong *)param_2[6];
      local_68[0] = 0;
      if (plVar13 == (longlong *)0x0) {
        local_58 = 0;
        puVar11 = &local_58;
      }
      else {
        puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x50))(plVar13,local_48);
      }
      plVar13 = *(longlong **)(lVar4 + 0x30);
      uVar12 = *puVar11;
      local_80 = 0;
      if (plVar13 == (longlong *)0x0) {
        local_50 = 0;
        puVar11 = &local_50;
      }
      else {
        puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x50))(plVar13,local_40);
      }
      uVar12 = FUN_180043d00(*puVar11,uVar12);
      if ((int)uVar12 == 0) {
        pTVar19 = &IFileProperties::RTTI_Type_Descriptor;
        uVar15 = uVar15 & 0xffffffff00000000;
        plVar13 = (longlong *)
                  __RTDynamicCast(*(undefined8 *)(lVar4 + 0x30),0,
                                  &IFileProperties::RTTI_Type_Descriptor,
                                  &CNTFSFileProperties::RTTI_Type_Descriptor,uVar15);
        if (plVar13 != (longlong *)0x0) {
          uVar18 = uVar3;
          if ((0 < (longlong)uVar3) && (uVar3 != 5)) {
            if ((undefined **)*plVar13 == CNTFSFileProperties::vftable) {
              uVar18 = (ulonglong)*(ushort *)((longlong)plVar13 + 0x6a) | uVar3 << 0x10;
            }
            else {
              uVar7 = (*(code *)((undefined **)*plVar13)[0x29])(plVar13);
              uVar18 = (ulonglong)uVar7 | uVar3 << 0x10;
            }
          }
          uVar14 = uVar3;
          if ((0 < (longlong)uVar3) && (uVar3 != 5)) {
            if ((undefined **)*plVar9 == CNTFSFileProperties::vftable) {
              uVar14 = (ulonglong)*(ushort *)((longlong)plVar9 + 0x6a) | uVar3 << 0x10;
            }
            else {
              uVar7 = (*(code *)((undefined **)*plVar9)[0x29])(plVar9);
              uVar14 = (ulonglong)uVar7 | uVar3 << 0x10;
            }
          }
          if ((uVar18 == uVar14) && (cVar5 = FUN_180044490(lVar4,'\x01'), cVar5 == '\0')) {
            if ((undefined **)*plVar13 == CNTFSFileProperties::vftable) {
              bVar6 = *(byte *)((longlong)plVar13 + 0x72) & 1;
            }
            else {
              bVar6 = (*(code *)((undefined **)*plVar13)[0x1b])(plVar13);
            }
            if (bVar6 == 0) {
              if (param_3 == '\0') {
                return 0;
              }
              goto LAB_180023701;
            }
            if ((undefined **)*plVar9 == CNTFSFileProperties::vftable) {
              bVar6 = *(byte *)((longlong)plVar9 + 0x72) & 1;
            }
            else {
              bVar6 = (*(code *)((undefined **)*plVar9)[0x1b])(plVar9);
            }
            if (bVar6 != 0) {
              local_res20 = 0;
              break;
            }
            cVar5 = FUN_180044490((longlong)param_2,'\x01');
            if (cVar5 == '\0') {
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              uVar15 = (ulonglong)(iVar8 - 1U);
              if (iVar8 - 1U == 0) {
                uVar15 = (**(code **)(*plVar13 + 0x138))(plVar13,1);
              }
              param_2[6] = 0;
              *(longlong **)(lVar4 + 0x30) = plVar9;
              return uVar15 & 0xffffffffffffff00;
            }
          }
        }
      }
    }
    puVar11 = (undefined8 *)puVar17[2];
    if (*(char *)((longlong)puVar11 + 0x19) == '\0') {
      cVar5 = *(char *)((longlong)*puVar11 + 0x19);
      puVar17 = puVar11;
      puVar11 = (undefined8 *)*puVar11;
      while (cVar5 == '\0') {
        cVar5 = *(char *)((longlong)*puVar11 + 0x19);
        puVar17 = puVar11;
        puVar11 = (undefined8 *)*puVar11;
      }
    }
    else {
      cVar5 = *(char *)((longlong)puVar17[1] + 0x19);
      puVar16 = (undefined8 *)puVar17[1];
      puVar11 = puVar17;
      while ((puVar17 = puVar16, cVar5 == '\0' && (puVar11 == (undefined8 *)puVar17[2]))) {
        cVar5 = *(char *)((longlong)puVar17[1] + 0x19);
        puVar16 = (undefined8 *)puVar17[1];
        puVar11 = puVar17;
      }
    }
  }
  if (param_3 == '\0') goto LAB_180023733;
LAB_180023701:
  if ((undefined **)*plVar9 == CNTFSFileProperties::vftable) {
    bVar6 = *(byte *)((longlong)plVar9 + 0x72) & 1;
  }
  else {
    bVar6 = (*(code *)((undefined **)*plVar9)[0x1b])(plVar9);
  }
  if (bVar6 != 0) {
    return (ulonglong)local_res20;
  }
LAB_180023733:
  uVar15 = (ulonglong)local_res20;
  if (local_res20 == 0) {
    return uVar15;
  }
  if (param_3 != '\0') {
    return uVar15;
  }
  local_80 = uVar20;
  local_78 = param_2;
  plVar9 = (longlong *)FUN_1800151c0(plVar1,(longlong)&local_80);
  FUN_180015210(plVar1,local_68,pTVar19,plVar9 + 4,plVar9);
  return uVar15;
}

