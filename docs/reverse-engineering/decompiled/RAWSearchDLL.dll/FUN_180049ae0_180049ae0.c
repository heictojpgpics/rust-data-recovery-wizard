// Function: FUN_180049ae0
// Address: 180049ae0
// Size: 197 bytes


void FUN_180049ae0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  undefined **ppuVar5;
  longlong lVar6;
  longlong *plVar7;
  
  pvVar3 = (void *)*param_1;
  plVar7 = *(longlong **)((longlong)pvVar3 + -0x18);
  iVar2 = *(int *)((longlong)pvVar3 + -0x10);
  ppuVar5 = (undefined **)*plVar7;
  if (ppuVar5 != ATL::CAtlStringMgr::vftable) {
    plVar7 = (longlong *)(*(code *)ppuVar5[4])();
    ppuVar5 = (undefined **)*plVar7;
  }
  lVar6 = (*(code *)*ppuVar5)(plVar7,param_2,1);
  if (lVar6 != 0) {
    if (iVar2 < param_2) {
      param_2 = iVar2;
    }
    FUN_180049bc0((void *)(lVar6 + 0x18),(longlong)(param_2 + 1),pvVar3,param_2 + 1);
    *(int *)(lVar6 + 8) = iVar2;
    LOCK();
    piVar1 = (int *)((longlong)pvVar3 + -8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      (**(code **)(**(longlong **)((longlong)pvVar3 + -0x18) + 8))
                (*(longlong **)((longlong)pvVar3 + -0x18),(longlong)pvVar3 + -0x18);
    }
    *param_1 = (void *)(lVar6 + 0x18);
    return;
  }
  FUN_180049bb0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

