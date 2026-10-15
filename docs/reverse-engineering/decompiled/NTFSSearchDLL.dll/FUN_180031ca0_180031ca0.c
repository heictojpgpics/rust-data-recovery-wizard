// Function: FUN_180031ca0
// Address: 180031ca0
// Size: 427 bytes


void FUN_180031ca0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  void *_Memory;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  *param_1 = CFileSystemNode::vftable;
  uVar6 = 0;
  if ((void *)param_1[0x3b] != (void *)0x0) {
    free((void *)param_1[0x3b]);
    param_1[0x3b] = 0;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  memset(param_1 + 0x13,0,0x130);
  plVar7 = (longlong *)param_1[0x42];
  uVar5 = (ulonglong)((longlong)param_1[0x43] + (7 - (longlong)plVar7)) >> 3;
  if ((longlong *)param_1[0x43] < plVar7) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,1);
      }
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar5);
  }
  param_1[0x43] = param_1[0x42];
  _Mtx_destroy_in_situ(param_1 + 0x45);
  pvVar4 = (void *)param_1[0x42];
  if (pvVar4 != (void *)0x0) {
    _Memory = pvVar4;
    if ((0xfff < (param_1[0x44] - (longlong)pvVar4 & 0xfffffffffffffff8U)) &&
       (_Memory = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
  }
  plVar7 = (longlong *)param_1[6];
  *param_1 = CFileNode::vftable;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x138))(plVar7,1);
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  if ((void *)param_1[8] != (void *)0x0) {
    free((void *)param_1[8]);
    param_1[8] = 0;
  }
  return;
}

