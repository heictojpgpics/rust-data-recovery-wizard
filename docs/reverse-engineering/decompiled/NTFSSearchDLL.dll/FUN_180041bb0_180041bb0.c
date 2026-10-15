// Function: FUN_180041bb0
// Address: 180041bb0
// Size: 141 bytes


undefined8 FUN_180041bb0(int *param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 < 0x400) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_180046160(param_1);
    if ((uVar1 & 0xff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_180041a20((longlong)param_1,param_2);
      uVar3 = FUN_180041370((longlong)param_1,param_2);
      if ((int)uVar3 == 0) {
        uVar2 = 0;
      }
      else {
        if ((int)uVar2 != 0) {
          FUN_180041290((longlong)param_1,param_2);
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

