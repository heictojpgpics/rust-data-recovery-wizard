// Function: FUN_18000b6b0
// Address: 18000b6b0
// Size: 170 bytes


void FUN_18000b6b0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = CRawFileInfo::vftable;
  plVar4 = (longlong *)param_1[0x1f];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  FUN_180001630(param_1 + 0x16);
  FUN_180001630(param_1 + 0x11);
  FUN_180001630(param_1 + 0xd);
  FUN_180001630(param_1 + 8);
  FUN_180001630(param_1 + 4);
  return;
}

