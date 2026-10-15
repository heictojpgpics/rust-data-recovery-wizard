// Function: FUN_180031170
// Address: 180031170
// Size: 122 bytes


void FUN_180031170(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = CFileNode::vftable;
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x138))(plVar3,1);
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

