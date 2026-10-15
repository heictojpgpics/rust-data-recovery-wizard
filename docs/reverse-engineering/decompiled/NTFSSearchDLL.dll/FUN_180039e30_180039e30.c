// Function: FUN_180039e30
// Address: 180039e30
// Size: 131 bytes


undefined8 FUN_180039e30(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 uVar2;
  
  bVar1 = FUN_180041c50(param_2);
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    FUN_180044bd0(param_2,(longlong)(param_1 + 1),0,(undefined8 *)0x0);
    bVar1 = FUN_180040b50((longlong)(param_1 + 1));
    if ((int)CONCAT71(extraout_var_00,bVar1) == 0) {
      *param_1 = param_3;
      uVar2 = FUN_180041640(param_2);
      param_1[3] = uVar2;
      return 1;
    }
  }
  return 0;
}

