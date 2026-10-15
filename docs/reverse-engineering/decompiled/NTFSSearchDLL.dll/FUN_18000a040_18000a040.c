// Function: FUN_18000a040
// Address: 18000a040
// Size: 1404 bytes


void FUN_18000a040(void *param_1,TypeDescriptor *param_2,undefined8 param_3,uint *param_4)

{
  TypeDescriptor *pTVar1;
  char cVar2;
  uint uVar3;
  LPCRITICAL_SECTION p_Var4;
  longlong lVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  TypeDescriptor *pTVar11;
  undefined8 *puVar12;
  TypeDescriptor *pTVar13;
  TypeDescriptor *pTVar14;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  TypeDescriptor local_138;
  LPCRITICAL_SECTION local_128 [2];
  longlong local_118;
  undefined4 *local_110;
  longlong local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined4 local_e8 [44];
  ulonglong local_38;
  
  local_f8 = 0xfffffffffffffffe;
  local_38 = DAT_180086010 ^ (ulonglong)auStack_168;
  *(undefined1 *)((longlong)param_1 + 0x918) = 1;
  pTVar13 = (TypeDescriptor *)0x0;
  if ((*(longlong *)((longlong)param_1 + 0x148) == 0) &&
     ((*(longlong *)((longlong)param_1 + 0x8a0) != 0 ||
      (*(longlong *)((longlong)param_1 + 0x8d0) != 0)))) {
    p_Var4 = (LPCRITICAL_SECTION)FUN_18002be40(0x1a8);
    local_138.pVFTable = pTVar13;
    local_128[0] = p_Var4;
    if (p_Var4 != (LPCRITICAL_SECTION)0x0) {
      uVar3 = (**(code **)(**(longlong **)((longlong)param_1 + 0xb8) + 0x28))();
      param_2 = (TypeDescriptor *)(ulonglong)uVar3;
      local_138.pVFTable = FUN_180039390((undefined8 *)p_Var4,uVar3);
    }
    if ((TypeDescriptor *)local_138.pVFTable != (TypeDescriptor *)0x0) {
      ((TypeDescriptor *)((longlong)local_138.pVFTable + 0x10))->pVFTable =
           *(void **)((longlong)param_1 + 0x7d8);
      ((TypeDescriptor *)((longlong)local_138.pVFTable + 0x10))->spare =
           ((TypeDescriptor *)((longlong)local_138.pVFTable + 0x10))->pVFTable;
      iVar10 = 8;
      if (*(short *)((longlong)param_1 + 0x79c) != 0) {
        iVar10 = (int)*(short *)((longlong)param_1 + 0x79c);
      }
      *(int *)((longlong)&((TypeDescriptor *)local_138.pVFTable)->spare + 4) = iVar10;
      ((TypeDescriptor *)((longlong)local_138.pVFTable + 0x20))->spare = (void *)0x0;
      *(undefined1 *)
       ((longlong)&((TypeDescriptor *)((longlong)local_138.pVFTable + 0xf0))->pVFTable + 5) = 1;
      *(undefined4 *)&((TypeDescriptor *)local_138.pVFTable)->spare = 3;
      lVar5 = (**(code **)(**(longlong **)((longlong)param_1 + 0xb8) + 0x18))();
      pvVar6 = (void *)((lVar5 - (longlong)
                                 ((TypeDescriptor *)((longlong)local_138.pVFTable + 0x10))->pVFTable
                        ) / (longlong)
                            (ulonglong)*(uint *)((longlong)((longlong)local_138.pVFTable + 8) + 4));
      ((TypeDescriptor *)((longlong)local_138.pVFTable + 0xa0))->spare = pvVar6;
      ((TypeDescriptor *)((longlong)local_138.pVFTable + 0x60))->pVFTable =
           (void *)((ulonglong)*(uint *)((longlong)((longlong)local_138.pVFTable + 8) + 4) *
                   (longlong)pvVar6);
      *(undefined4 *)
       ((longlong)&((TypeDescriptor *)((longlong)local_138.pVFTable + 0x90))->spare + 4) = 0x100;
      param_2 = (TypeDescriptor *)local_138.pVFTable;
      if ((TypeDescriptor *)local_138.pVFTable != (TypeDescriptor *)0x0) {
        p_Var4 = (LPCRITICAL_SECTION)((longlong)param_1 + 0x7a8);
        local_128[0] = p_Var4;
        EnterCriticalSection(p_Var4);
        pTVar11 = (TypeDescriptor *)local_138.pVFTable;
        if ((((*(longlong *)((longlong)param_1 + 0xb8) == 0) ||
             ((TypeDescriptor *)local_138.pVFTable == (TypeDescriptor *)0x0)) ||
            (*(int *)((longlong)&((TypeDescriptor *)((longlong)local_138.pVFTable + 0x90))->spare +
                     4) != 0x20)) ||
           (((uVar3 = *(uint *)((longlong)((longlong)local_138.pVFTable + 8) + 4), uVar3 != 0 &&
             (-1 < (longlong)((TypeDescriptor *)((longlong)local_138.pVFTable + 0x10))->pVFTable))
            && ((longlong)((TypeDescriptor *)((longlong)local_138.pVFTable + 0x10))->pVFTable %
                (longlong)(ulonglong)uVar3 == 0)))) {
          puVar12 = (undefined8 *)((longlong)param_1 + 0x920);
          param_2 = &local_138;
          cVar2 = FUN_180043f60((longlong *)((longlong)param_1 + 0x140),(longlong *)param_2,puVar12)
          ;
          if (cVar2 != '\0') {
            FUN_180001690(local_e8);
            local_118 = *(longlong *)((longlong)param_1 + 0xb8);
            local_110 = local_e8;
            local_108 = (longlong)param_1 + 0x878;
            local_100 = 0;
            FUN_180003ed0(&local_118,(longlong)pTVar11,puVar12);
            FUN_180001700((longlong)local_e8);
            param_2 = pTVar11;
          }
        }
        else {
          param_2 = (TypeDescriptor *)0x1;
                    /* WARNING: Load size is inaccurate */
          (***(void **)local_138.pVFTable)(local_138.pVFTable);
        }
        LeaveCriticalSection(p_Var4);
      }
    }
  }
  local_138.pVFTable = (undefined8 *)0x0;
  pTVar11 = &local_138;
  FUN_18000dc70((longlong)param_1,param_2,(longlong *)pTVar11);
  FUN_1800099f0((longlong)param_1,(undefined8 *)local_138.pVFTable);
  FUN_18000fe10((longlong)param_1);
  plVar9 = (longlong *)**(longlong **)((longlong)param_1 + 0x140);
  if (plVar9 != *(longlong **)((longlong)param_1 + 0x140)) {
    do {
      pTVar1 = (TypeDescriptor *)plVar9[4];
      pTVar14 = pTVar13;
      if (pTVar1 != (TypeDescriptor *)0x0) {
        pTVar1[8].spare = param_1;
        local_148 = local_138.spare._0_1_;
        param_4 = (uint *)((longlong)&pTVar1->spare + 4);
        FUN_180014170((longlong *)((longlong)param_1 + 0x858),local_128,pTVar11,param_4);
        plVar7 = (longlong *)FUN_180002680((longlong)param_1 + 0x878);
        plVar7 = (longlong *)*plVar7;
        plVar8 = (longlong *)*plVar7;
        if (plVar7 != plVar8) {
          pTVar11 = (TypeDescriptor *)pTVar1[1].pVFTable;
          do {
            if ((pTVar11 == (TypeDescriptor *)plVar8[3]) &&
               (*(int *)((longlong)&pTVar1->spare + 4) == (int)plVar8[9])) break;
            plVar8 = (longlong *)*plVar8;
          } while (plVar8 != plVar7);
          if (plVar7 != plVar8) {
            *(undefined1 *)((longlong)&pTVar1[0xf].pVFTable + 6) = 1;
            *(undefined1 *)&pTVar1[0xf].pVFTable = 0;
          }
        }
        pTVar14 = pTVar1;
        if (pTVar13 != (TypeDescriptor *)0x0) {
          pTVar11 = (TypeDescriptor *)pTVar13[1].pVFTable;
          pTVar14 = pTVar13;
          if (((longlong)pTVar1[1].pVFTable <= (longlong)pTVar11) &&
             ((ulonglong)((longlong)&pTVar11->pVFTable + (longlong)pTVar13[6].pVFTable) <
              (ulonglong)((longlong)pTVar1[6].pVFTable + (longlong)pTVar1[1].pVFTable))) {
            pTVar14 = pTVar1;
          }
        }
      }
      plVar7 = (longlong *)plVar9[2];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar7 + 0x19);
        plVar9 = plVar7;
        plVar7 = (longlong *)*plVar7;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar7 + 0x19);
          plVar9 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar2 = *(char *)(plVar9[1] + 0x19);
        plVar8 = (longlong *)plVar9[1];
        plVar7 = plVar9;
        while ((plVar9 = plVar8, cVar2 == '\0' && (plVar7 == (longlong *)plVar9[2]))) {
          cVar2 = *(char *)(plVar9[1] + 0x19);
          plVar8 = (longlong *)plVar9[1];
          plVar7 = plVar9;
        }
      }
      pTVar13 = pTVar14;
    } while (plVar9 != *(longlong **)((longlong)param_1 + 0x140));
    if (pTVar14 != (TypeDescriptor *)0x0) {
      *(undefined1 *)((longlong)&pTVar14[0xf].pVFTable + 4) = 1;
    }
  }
  *(void **)((longlong)param_1 + 0x8e8) = param_1;
  FUN_180022130((longlong)param_1 + 0x888);
  FUN_180022910((longlong *)((longlong)param_1 + 0x888),(longlong *)((longlong)param_1 + 0x770),
                pTVar11,(undefined8 *)param_4);
  FUN_180010c00((longlong)param_1);
  if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0xc0));
    *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  }
  plVar9 = *(longlong **)((longlong)param_1 + 0xe8);
  if (plVar9 != (longlong *)0x0) {
    FUN_180026720(plVar9);
    free(plVar9);
    *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  }
  plVar9 = *(longlong **)((longlong)param_1 + 0xf0);
  if (plVar9 != (longlong *)0x0) {
    FUN_180026720(plVar9);
    free(plVar9);
    *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  }
  plVar9 = *(longlong **)((longlong)param_1 + 0xf8);
  if (plVar9 != (longlong *)0x0) {
    FUN_180028a00(plVar9);
    free(plVar9);
    *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  }
  if (*(void **)((longlong)param_1 + 0xe0) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0xe0));
    *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  }
  plVar9 = (longlong *)((longlong)param_1 + 0x930);
  lVar5 = *plVar9;
  FUN_180011c90(plVar9,*(longlong **)(lVar5 + 8),pTVar11,param_4);
  *(longlong *)(*plVar9 + 8) = lVar5;
  *(longlong *)*plVar9 = lVar5;
  *(longlong *)(*plVar9 + 0x10) = lVar5;
  *(undefined8 *)((longlong)param_1 + 0x938) = 0;
  FUN_180011140((longlong *)((longlong)param_1 + 0x920));
  FUN_180011140((longlong *)((longlong)param_1 + 0x7e8));
  FUN_180003c80((longlong *)((longlong)param_1 + 0x170));
  plVar9 = *(longlong **)((longlong)param_1 + 0x160);
  plVar7 = (longlong *)*plVar9;
  if (plVar7 != plVar9) {
    do {
      p_Var4 = (LPCRITICAL_SECTION)plVar7[2];
      if (p_Var4 != (LPCRITICAL_SECTION)0x0) {
        local_128[0] = p_Var4;
        ~_String_alloc<>((longlong *)&p_Var4->LockCount);
        free(p_Var4);
      }
      plVar7 = (longlong *)*plVar7;
      plVar9 = *(longlong **)((longlong)param_1 + 0x160);
    } while (plVar7 != plVar9);
    plVar7 = (longlong *)*plVar9;
  }
  *plVar9 = (longlong)plVar9;
  *(longlong *)(*(longlong *)((longlong)param_1 + 0x160) + 8) =
       *(longlong *)((longlong)param_1 + 0x160);
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  if (plVar7 != *(longlong **)((longlong)param_1 + 0x160)) {
    do {
      plVar9 = (longlong *)*plVar7;
      free(plVar7);
      plVar7 = plVar9;
    } while (plVar9 != (longlong *)*(longlong *)((longlong)param_1 + 0x160));
  }
  FUN_180008ae0((longlong)param_1);
  FUN_180008b90((longlong)param_1);
  FUN_180011760((longlong *)((longlong)param_1 + 0x1a0));
  *(undefined1 *)((longlong)param_1 + 0x1b0) = 0;
  __security_check_cookie(local_38 ^ (ulonglong)auStack_168);
  return;
}

