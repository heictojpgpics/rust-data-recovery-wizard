// Function: FUN_1800017c0
// Address: 1800017c0
// Size: 453 bytes


void FUN_1800017c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  void *_Memory;
  
  param_1[0x5b] = 0;
  *param_1 = CNTFSQuickSearch::vftable;
  param_1[0x11] = CNTFSQuickSearch::vftable;
  plVar3 = (longlong *)param_1[0x9a];
  plVar5 = (longlong *)*plVar3;
  *plVar3 = (longlong)plVar3;
  *(undefined8 *)(param_1[0x9a] + 8) = param_1[0x9a];
  param_1[0x9b] = 0;
  plVar3 = (longlong *)param_1[0x9a];
  if (plVar5 != plVar3) {
    do {
      plVar1 = (longlong *)*plVar5;
      FUN_180001700((longlong)(plVar5 + 2));
      free(plVar5);
      plVar3 = (longlong *)param_1[0x9a];
      plVar5 = plVar1;
    } while (plVar1 != plVar3);
  }
  plVar5 = (longlong *)*plVar3;
  *plVar3 = (longlong)plVar3;
  *(undefined8 *)(param_1[0x9a] + 8) = param_1[0x9a];
  param_1[0x9b] = 0;
  plVar3 = (longlong *)param_1[0x9a];
  if (plVar5 != plVar3) {
    do {
      plVar1 = (longlong *)*plVar5;
      FUN_180001700((longlong)(plVar5 + 2));
      free(plVar5);
      plVar3 = (longlong *)param_1[0x9a];
      plVar5 = plVar1;
    } while (plVar1 != plVar3);
  }
  uVar4 = 0xb8;
  free(plVar3);
  FUN_180001700((longlong)(param_1 + 0x85));
  pvVar2 = (void *)param_1[0x82];
  _Memory = pvVar2;
  if (pvVar2 != (void *)0x0) {
    uVar4 = ((param_1[0x84] - (longlong)pvVar2) / 0x38) * 0x38;
    if (0xfff < uVar4) {
      _Memory = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(_Memory);
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x84] = 0;
  }
  FUN_180016060(param_1 + 0x11,uVar4,_Memory,param_4);
  *param_1 = IQuickFileSystemSearchController::vftable;
  plVar3 = (longlong *)param_1[0xd];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != param_1 + 6);
    param_1[0xd] = 0;
  }
  return;
}

