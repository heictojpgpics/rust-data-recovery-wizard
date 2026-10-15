// Function: FUN_18000c650
// Address: 18000c650
// Size: 458 bytes


/* WARNING: Removing unreachable block (ram,0x00018000c7e1) */

undefined8
FUN_18000c650(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             int param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar6 = (param_5 - param_4) + 1;
  if ((((param_2 == 0) || (param_3 < 1)) || (param_5 < 1)) ||
     ((param_4 < 0 ||
      (iVar2 = (**(code **)(*param_1 + 0x110))(param_1,param_3,param_6,param_4,0xfffffffffffffffe),
      iVar2 == 0)))) {
    uVar4 = 0;
  }
  else {
    if (param_6 == 0) {
      FUN_180008290(param_1 + 0x1f);
    }
    iVar2 = 0;
    (**(code **)(*param_1 + 0x58))(param_1);
    uVar3 = uVar6 / *(uint *)(param_1 + 0x19);
    if (uVar6 % (ulonglong)*(uint *)(param_1 + 0x19) != 0) {
      uVar3 = uVar3 + 1;
    }
    if (0 < (longlong)uVar3) {
      do {
        uVar1 = *(uint *)(param_1 + 0x19);
        lVar5 = (ulonglong)(uVar1 * iVar2) + param_4;
        uVar6 = (ulonglong)uVar1;
        if (param_5 < (longlong)(((ulonglong)uVar1 - 1) + lVar5)) {
          uVar6 = (param_5 - lVar5) + 1;
        }
        (**(code **)(*param_1 + 0x98))(param_1,lVar5,uVar6,0);
        iVar2 = iVar2 + 1;
      } while ((longlong)iVar2 < (longlong)uVar3);
    }
    uVar4 = 1;
  }
  return uVar4;
}

