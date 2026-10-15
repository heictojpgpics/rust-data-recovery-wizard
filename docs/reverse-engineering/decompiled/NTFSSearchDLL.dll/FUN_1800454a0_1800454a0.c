// Function: FUN_1800454a0
// Address: 1800454a0
// Size: 110 bytes


undefined8 FUN_1800454a0(undefined4 *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 uVar3;
  
  if (param_2 < 0x10) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_180045480((longlong)param_1);
    if (param_2 < uVar2) {
      uVar3 = 0;
    }
    else {
      bVar1 = FUN_180045400((longlong)param_1);
      if ((int)CONCAT71(extraout_var,bVar1) == 0) {
        uVar3 = FUN_180045130(param_1);
        if ((int)uVar3 == 0) {
          return 0;
        }
      }
      else {
        bVar1 = FUN_1800451b0((longlong)param_1);
        if ((int)CONCAT71(extraout_var_00,bVar1) == 0) {
          return 0;
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

