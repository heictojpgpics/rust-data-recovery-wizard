// Function: FUN_180044a00
// Address: 180044a00
// Size: 128 bytes


undefined4 FUN_180044a00(int *param_1,undefined8 param_2,undefined2 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  longlong local_18 [3];
  
  FUN_180041cf0(local_18,param_1,0x400,0);
  bVar1 = FUN_180041c50(local_18);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    FUN_180041c70(local_18);
    uVar2 = 0;
  }
  else {
    bVar1 = FUN_180044da0(local_18,param_3);
    uVar2 = (undefined4)CONCAT71(extraout_var_00,bVar1);
    FUN_180041c70(local_18);
  }
  return uVar2;
}

