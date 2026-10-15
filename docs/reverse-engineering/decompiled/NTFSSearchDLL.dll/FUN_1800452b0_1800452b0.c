// Function: FUN_1800452b0
// Address: 1800452b0
// Size: 95 bytes


longlong FUN_1800452b0(longlong param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined7 extraout_var;
  undefined6 extraout_var_01;
  undefined7 extraout_var_00;
  longlong lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    bVar1 = FUN_180045440(param_1);
    if ((int)CONCAT71(extraout_var,bVar1) == 0) {
      lVar4 = 0;
    }
    else {
      uVar3 = FUN_180045110(param_1);
      uVar2 = FUN_1800450d0(param_1);
      *param_2 = (int)CONCAT71(extraout_var_00,uVar2);
      lVar4 = param_1 + (CONCAT62(extraout_var_01,uVar3) & 0xffffffff);
    }
  }
  return lVar4;
}

