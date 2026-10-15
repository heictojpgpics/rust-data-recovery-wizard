// Function: FUN_180045b80
// Address: 180045b80
// Size: 62 bytes


undefined8 FUN_180045b80(int *param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180045510(param_1,param_2,'\x01');
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180045990((longlong)param_1,param_2);
  }
  return uVar1;
}

