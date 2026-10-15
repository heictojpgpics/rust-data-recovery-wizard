// Function: FUN_180045d60
// Address: 180045d60
// Size: 129 bytes


bool FUN_180045d60(int *param_1,uint param_2,int param_3)

{
  undefined8 uVar1;
  bool bVar2;
  
  uVar1 = FUN_180045510(param_1,param_2,'\0');
  if ((int)uVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = FUN_180045720((longlong)param_1,param_2);
    if ((int)uVar1 == 0) {
      bVar2 = false;
    }
    else {
      uVar1 = FUN_180045990((longlong)param_1,param_2);
      bVar2 = (int)uVar1 != 0;
      if (param_3 != 0) {
        FUN_1800458a0((longlong)param_1,param_2);
      }
    }
  }
  return bVar2;
}

