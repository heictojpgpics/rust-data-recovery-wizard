// Function: FUN_1800224d0
// Address: 1800224d0
// Size: 648 bytes


void FUN_1800224d0(longlong param_1,void *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  ushort uVar11;
  TypeDescriptor *pTVar12;
  TypeDescriptor *pTVar13;
  TypeDescriptor *pTVar14;
  TypeDescriptor *pTVar15;
  TypeDescriptor *pTVar16;
  ulonglong local_res8;
  TypeDescriptor local_res10;
  ulonglong *local_res20;
  ulonglong in_stack_ffffffffffffffa8;
  TypeDescriptor *local_48;
  void *local_40;
  undefined8 local_38 [2];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  if (param_2 == (void *)0x0) {
    return;
  }
  plVar7 = *(longlong **)((longlong)param_2 + 0x30);
  pTVar15 = &IFileProperties::RTTI_Type_Descriptor;
  local_res10.pVFTable = param_2;
  plVar6 = (longlong *)
           __RTDynamicCast(plVar7,0,&IFileProperties::RTTI_Type_Descriptor,
                           &CNTFSFileProperties::RTTI_Type_Descriptor,
                           in_stack_ffffffffffffffa8 & 0xffffffff00000000);
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  if (param_3 != '\0') {
    if ((undefined **)*plVar6 == CNTFSFileProperties::vftable) {
      bVar4 = *(byte *)((longlong)plVar6 + 0x72) & 1;
    }
    else {
      plVar7 = plVar6;
      bVar4 = (*(code *)((undefined **)*plVar6)[0x1b])();
    }
    if (bVar4 == 0) {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      local_res8 = FUN_180021ef0((longlong)local_res10.pVFTable,uVar5);
      pTVar12 = *(TypeDescriptor **)(param_1 + 0x10);
      cVar1 = *(char *)((longlong)&((TypeDescriptor *)pTVar12->spare)[1].spare + 1);
      pTVar16 = pTVar12;
      pTVar14 = (TypeDescriptor *)pTVar12->spare;
      while (cVar1 == '\0') {
        if ((longlong)pTVar14[2].pVFTable < (longlong)local_res8) {
          pTVar13 = (TypeDescriptor *)pTVar14[1].pVFTable;
          pTVar14 = pTVar16;
        }
        else {
          pTVar13 = (TypeDescriptor *)pTVar14->pVFTable;
        }
        pTVar16 = pTVar14;
        pTVar14 = pTVar13;
        cVar1 = *(char *)((longlong)&pTVar13[1].spare + 1);
      }
      if ((pTVar16 == pTVar12) ||
         (pTVar13 = pTVar16, (longlong)local_res8 < (longlong)pTVar16[2].pVFTable)) {
        local_res20 = &local_res8;
        plVar7 = (longlong *)FUN_180025320((undefined8 *)(param_1 + 0x10),pTVar14,&local_res20);
        pTVar12 = (TypeDescriptor *)(param_1 + 0x10);
        FUN_180025390((longlong *)pTVar12,&local_48,(longlong *)pTVar16,plVar7 + 4,plVar7);
        pTVar13 = local_48;
        pTVar15 = pTVar16;
      }
      pvVar9 = pTVar13[3].pVFTable;
      if (pTVar13[3].spare == pvVar9) {
        pTVar15 = &local_res10;
        FUN_180013520((longlong *)&pTVar13[2].spare,pvVar9,&pTVar15->pVFTable);
      }
      else {
        puVar8 = (undefined8 *)FUN_180001100(pTVar12,pvVar9);
        *puVar8 = local_res10.pVFTable;
        pTVar13[3].pVFTable = (void *)((longlong)pTVar13[3].pVFTable + 8);
      }
      goto LAB_180022678;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  pTVar12 = *(TypeDescriptor **)(lVar2 + 8);
  pTVar15 = pTVar12;
  pvVar9 = (void *)FUN_1800143b0(plVar7,lVar2,(longlong)pTVar12,&local_res10.pVFTable);
  if (*(longlong *)(param_1 + 0x48) == 0xaaaaaaaaaaaaaa9) {
    std::_Xlength_error("list<T> too long");
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
  *(void **)(lVar2 + 8) = pvVar9;
  pTVar12->pVFTable = pvVar9;
LAB_180022678:
  if ((undefined **)*plVar6 == CNTFSFileProperties::vftable) {
    bVar4 = (byte)*(undefined2 *)((longlong)plVar6 + 0x23);
  }
  else {
    bVar4 = (*(code *)((undefined **)*plVar6)[7])(plVar6);
  }
  if ((bVar4 >> 4 & 1) != 0) {
    if ((undefined **)*plVar6 == CNTFSFileProperties::vftable) {
      uVar11 = *(ushort *)(plVar6 + 0xd) - 1;
      if ((*(byte *)((longlong)plVar6 + 0x72) & 8) == 0) {
        uVar11 = *(ushort *)(plVar6 + 0xd);
      }
      local_res8 = plVar6[0xb] << 0x10 | (ulonglong)uVar11;
    }
    else {
      local_res8 = (*(code *)((undefined **)*plVar6)[0x1e])(plVar6);
    }
    uVar10 = FUN_180002680(&local_res8);
    puVar8 = (undefined8 *)FUN_180002680(uVar10);
    local_48 = (TypeDescriptor *)*puVar8;
    local_40 = local_res10.pVFTable;
    plVar7 = (longlong *)FUN_1800151c0((undefined8 *)(param_1 + 0x50),(longlong)&local_48);
    FUN_180015210((longlong *)(param_1 + 0x50),local_38,pTVar15,plVar7 + 4,plVar7);
  }
  return;
}

