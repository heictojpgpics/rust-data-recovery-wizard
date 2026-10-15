// Function: FUN_18000c430
// Address: 18000c430
// Size: 537 bytes


undefined8 FUN_18000c430(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  void *pvVar7;
  uint uVar8;
  undefined8 uVar9;
  
  plVar6 = (longlong *)(param_1 + 0xf8);
  lVar5 = param_2;
  uVar9 = param_3;
  FUN_180008290(plVar6);
  *(int *)(param_1 + 0xf0) = (int)param_2;
  plVar6 = (longlong *)FUN_180006a80(plVar6,lVar5,uVar9,param_4);
  FUN_180006b30(plVar6,(uint **)0x0,uVar9);
  if ((param_2 == 0) ||
     (uVar8 = (uint)(param_2 >> 0x3f) & 0x1ff, ((int)param_2 + uVar8 & 0x1ff) != uVar8)) {
    return 0;
  }
  if ((int)param_3 == 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = SUB168(SEXT816(0x400000),8);
    iVar3 = SUB164((auVar1 << 0x40 | ZEXT816(0x400000)) / SEXT816(param_2),0);
    *(int *)(param_1 + 200) = iVar3;
    iVar3 = iVar3 * *(int *)(param_1 + 0xf0) * 2;
    *(int *)(param_1 + 0xd8) = iVar3;
    if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
      free(*(void **)(param_1 + 0xe0));
      iVar3 = *(int *)(param_1 + 0xd8);
    }
  }
  else {
    if (*(int *)(param_1 + 200) == 0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = SUB168(SEXT816(0x400000),8);
      iVar3 = SUB164((auVar2 << 0x40 | ZEXT816(0x400000)) / SEXT816(param_2),0);
      *(int *)(param_1 + 200) = iVar3;
      *(int *)(param_1 + 0xd8) = iVar3 * *(int *)(param_1 + 0xf0) * 2;
    }
    pvVar4 = *(void **)(param_1 + 0xe0);
    if (pvVar4 != (void *)0x0) goto LAB_18000c52f;
    iVar3 = *(int *)(param_1 + 0xd8);
  }
  pvVar4 = (void *)FUN_1800020c0((ulonglong)(iVar3 + 0x1000));
  *(void **)(param_1 + 0xe0) = pvVar4;
LAB_18000c52f:
  memset(pvVar4,0,(ulonglong)(*(int *)(param_1 + 0xd8) + 0x1000));
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    pvVar4 = (void *)FUN_1800020c0(0x10048);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar7 = pvVar4;
      _eh_vector_constructor_iterator_(pvVar4,0x10,0x1000,FUN_18000db00,FUN_180006890);
      plVar6 = (longlong *)((longlong)pvVar4 + 0x10000);
      *plVar6 = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x10008) = 0;
      lVar5 = FUN_1800077d0(pvVar7,0,0);
      *plVar6 = lVar5;
      *(undefined8 *)((longlong)pvVar4 + 0x10010) = IIterator<class_CRawFileInfo*___ptr64>::vftable;
      *(undefined8 *)((longlong)pvVar4 + 0x10010) =
           ListIterator<class_CRawFileInfo*___ptr64>::vftable;
      *(longlong **)((longlong)pvVar4 + 0x10018) = plVar6;
      *(undefined8 *)((longlong)pvVar4 + 0x10020) = 0;
      plVar6 = (longlong *)((longlong)pvVar4 + 0x10028);
      *plVar6 = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x10030) = 0;
      lVar5 = FUN_180007710();
      *plVar6 = lVar5;
      *(longlong *)((longlong)pvVar4 + 0x10038) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x10040) = 0;
      lVar5 = FUN_180007710();
      *(longlong *)((longlong)pvVar4 + 0x10038) = lVar5;
      FUN_180007310(plVar6);
    }
    *(void **)(param_1 + 0xd0) = pvVar4;
  }
  return 1;
}

