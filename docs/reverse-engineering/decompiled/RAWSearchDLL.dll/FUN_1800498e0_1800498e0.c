// Function: FUN_1800498e0
// Address: 1800498e0
// Size: 59 bytes


void FUN_1800498e0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + -8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000180049912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar3 + -0x18) + 8))();
    return;
  }
  return;
}

