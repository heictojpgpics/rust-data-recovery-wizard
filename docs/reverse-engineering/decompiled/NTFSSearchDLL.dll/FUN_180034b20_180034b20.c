// Function: FUN_180034b20
// Address: 180034b20
// Size: 81 bytes


ulonglong FUN_180034b20(int *param_1,int param_2)

{
  ulonglong uVar1;
  longlong local_20 [3];
  
  if (param_2 < 0x400) {
    return 0;
  }
  FUN_180041cf0(local_20,param_1,param_2,0);
  uVar1 = FUN_180040ea0(local_20);
  FUN_180041c70(local_20);
  return uVar1 & 0xffffffff;
}

