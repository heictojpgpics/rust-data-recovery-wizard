// Function: FUN_180039ec0
// Address: 180039ec0
// Size: 160 bytes


undefined8 FUN_180039ec0(undefined8 *param_1,int *param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined8 uVar2;
  longlong local_20 [3];
  
  FUN_180041cf0(local_20,param_2,param_3,0);
  bVar1 = FUN_180041c50(local_20);
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    bVar1 = FUN_180041c50(local_20);
    if ((int)CONCAT71(extraout_var_00,bVar1) != 0) {
      FUN_180044bd0(local_20,(longlong)(param_1 + 1),0,(undefined8 *)0x0);
      bVar1 = FUN_180040b50((longlong)(param_1 + 1));
      if ((int)CONCAT71(extraout_var_01,bVar1) == 0) {
        *param_1 = param_4;
        uVar2 = FUN_180041640(local_20);
        param_1[3] = uVar2;
        uVar2 = 1;
        goto LAB_180039f44;
      }
    }
  }
  uVar2 = 0;
LAB_180039f44:
  FUN_180041c70(local_20);
  return uVar2;
}

