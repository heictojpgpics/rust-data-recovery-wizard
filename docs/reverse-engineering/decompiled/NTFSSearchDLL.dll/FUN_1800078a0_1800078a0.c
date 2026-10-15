// Function: FUN_1800078a0
// Address: 1800078a0
// Size: 189 bytes


undefined8
FUN_1800078a0(undefined4 *param_1,int *param_2,int param_3,undefined8 param_4,undefined1 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined7 extraout_var;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong local_20 [3];
  
  FUN_180041cf0(local_20,param_2,param_3,0);
  bVar1 = FUN_180041c50(local_20);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar2 = FUN_180041b40(local_20);
    *param_1 = uVar2;
    iVar3 = FUN_180041b10(local_20);
    if (iVar3 != 0) {
      uVar4 = FUN_180041ae0(local_20);
      *(ulonglong *)(param_1 + 8) = (ulonglong)uVar4;
    }
    lVar5 = FUN_180044770(local_20);
    *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
    if (lVar5 != 0) {
      uVar6 = FUN_1800438b0(lVar5);
      *(ulonglong *)(param_1 + 4) = uVar6;
      if ((longlong)uVar6 < 5) {
        *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
      }
    }
    *(undefined8 *)(param_1 + 2) = param_4;
    *(undefined1 *)(param_1 + 10) = param_5;
    uVar7 = 1;
  }
  FUN_180041c70(local_20);
  return uVar7;
}

