// Function: FUN_180007600
// Address: 180007600
// Size: 99 bytes


ulonglong FUN_180007600(undefined8 *param_1,int *param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  undefined7 extraout_var;
  ulonglong uVar2;
  longlong local_20 [3];
  
  FUN_180041cf0(local_20,param_2,param_3,0);
  bVar1 = FUN_180041c50(local_20);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180007550(param_1,local_20,param_4);
    uVar2 = uVar2 & 0xffffffff;
  }
  FUN_180041c70(local_20);
  return uVar2;
}

