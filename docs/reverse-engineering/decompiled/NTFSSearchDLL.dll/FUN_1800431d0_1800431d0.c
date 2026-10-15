// Function: FUN_1800431d0
// Address: 1800431d0
// Size: 343 bytes


longlong *
FUN_1800431d0(longlong *param_1,int *param_2,ulonglong param_3,longlong param_4,longlong *param_5,
             undefined8 *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar4 = (int)param_3;
  *param_1 = 0;
  *(int *)(param_1 + 1) = iVar4;
  param_1[2] = param_4;
  param_1[3] = (longlong)param_5;
  uVar5 = param_3;
  FUN_18002d930(param_1 + 4);
  FUN_1800025a0(param_1 + 6);
  if ((param_2 != (int *)0x0) && (uVar2 = FUN_180041bb0(param_2,iVar4), (int)uVar2 != 0)) {
    thunk_FUN_1800061a0(param_1 + 6,param_3 & 0xffffffff,uVar5);
    lVar3 = FUN_180005f90(param_1 + 6,0);
    *param_1 = lVar3;
    if (*param_1 != 0) {
      memcpy((void *)*param_1,param_2,param_3 & 0xffffffff);
      FUN_180041a20(*param_1,iVar4);
      uVar1 = (**(code **)(*param_5 + 0x28))(param_5);
      FUN_1800425d0((longlong)param_1,param_6,(param_3 & 0xffffffff) / (ulonglong)uVar1,
                    (longlong)param_5);
    }
  }
  return param_1;
}

