// Function: FUN_180044ab0
// Address: 180044ab0
// Size: 142 bytes


undefined4 FUN_180044ab0(int *param_1,int param_2,longlong param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  longlong local_18 [3];
  
  FUN_180041cf0(local_18,param_1,param_2,0);
  bVar1 = FUN_180041c50(local_18);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    FUN_180041c70(local_18);
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_180044bd0(local_18,param_3,param_4,param_5);
    uVar2 = (undefined4)uVar3;
    FUN_180041c70(local_18);
  }
  return uVar2;
}

