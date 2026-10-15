// Function: FUN_180007550
// Address: 180007550
// Size: 165 bytes


undefined8 FUN_180007550(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined7 extraout_var;
  longlong lVar2;
  undefined7 extraout_var_00;
  
  FUN_180041b70(param_2,0x20,0);
  bVar1 = FUN_180044da0(param_2,(undefined2 *)((longlong)param_1 + 0x1a));
  if (((int)CONCAT71(extraout_var,bVar1) != 0) && (*(short *)((longlong)param_1 + 0x1a) != 0)) {
    lVar2 = FUN_180041b70(param_2,0x30,0);
    if ((lVar2 != 0) && (lVar2 != -0x18)) {
      param_1[4] = *(undefined8 *)(lVar2 + 0x20);
    }
    FUN_180044bd0(param_2,(longlong)(param_1 + 1),0,(undefined8 *)0x0);
    *param_1 = param_3;
    bVar1 = FUN_180040b50((longlong)(param_1 + 1));
    if ((int)CONCAT71(extraout_var_00,bVar1) == 0) {
      return 1;
    }
  }
  return 0;
}

