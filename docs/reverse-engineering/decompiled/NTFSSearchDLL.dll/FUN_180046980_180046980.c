// Function: FUN_180046980
// Address: 180046980
// Size: 80 bytes


undefined8 FUN_180046980(undefined8 param_1,int *param_2)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  
  bVar1 = FUN_180046850(param_1,param_2);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1800467a0(param_1,(longlong)param_2);
    if ((int)uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

