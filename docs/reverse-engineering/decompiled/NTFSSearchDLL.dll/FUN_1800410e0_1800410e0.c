// Function: FUN_1800410e0
// Address: 1800410e0
// Size: 83 bytes


ulonglong FUN_1800410e0(int *param_1)

{
  ulonglong uVar1;
  longlong local_18 [3];
  
  FUN_180041cf0(local_18,param_1,0x400,0);
  uVar1 = FUN_180040d70(local_18,L"$Bitmap");
  FUN_180041c70(local_18);
  return uVar1 & 0xffffffff;
}

