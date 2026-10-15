// Function: FUN_180005ae0
// Address: 180005ae0
// Size: 212 bytes


bool FUN_180005ae0(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong *)*param_1 == (longlong *)0x0) {
    return false;
  }
  lVar5 = param_3;
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  lVar4 = 0x14;
  if (0x3ff < uVar1) {
    lVar4 = 10;
  }
  lVar3 = (**(code **)(*(longlong *)*param_1 + 0x18))();
  if (lVar4 + param_3 < lVar3) {
    iVar2 = (**(code **)(*(longlong *)*param_1 + 0x28))();
    uVar1 = iVar2 * (int)lVar4;
    if (0x1ff < uVar1) {
      FUN_1800061a0(param_2,(ulonglong)uVar1,lVar5);
      iVar2 = (**(code **)(*(longlong *)*param_1 + 8))
                        ((longlong *)*param_1,*param_2,param_3,lVar4,0);
      return iVar2 != 0;
    }
  }
  return false;
}

