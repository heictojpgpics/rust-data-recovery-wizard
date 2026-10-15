// Function: FUN_1800427a0
// Address: 1800427a0
// Size: 369 bytes


undefined8 FUN_1800427a0(undefined8 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  longlong local_20 [2];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (param_1[1] == 0) {
    if ((longlong)param_1[2] < 0) {
      return 0;
    }
    uVar5 = FUN_180026e80((longlong *)*param_1);
    iVar3 = (int)uVar5;
    uVar5 = thunk_FUN_18002be40((longlong)iVar3);
    param_1[1] = uVar5;
    uVar5 = *param_1;
    pcVar1 = *(code **)(*(longlong *)*param_1 + 8);
    iVar4 = (**(code **)(*(longlong *)*param_1 + 0x28))(*param_1);
    (*pcVar1)(uVar5,param_1[1],param_1[2],(longlong)(iVar3 / iVar4),0);
    FUN_180041cf0(local_20,(int *)param_1[1],iVar3,1);
    bVar2 = FUN_180041c50(local_20);
    if ((int)CONCAT71(extraout_var,bVar2) != 0) {
      FUN_180041a20(param_1[1],iVar3);
    }
    FUN_180041c70(local_20);
  }
  return param_1[1];
}

