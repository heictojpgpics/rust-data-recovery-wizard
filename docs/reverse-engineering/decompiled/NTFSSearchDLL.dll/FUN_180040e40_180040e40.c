// Function: FUN_180040e40
// Address: 180040e40
// Size: 86 bytes


ulonglong FUN_180040e40(int *param_1,wchar_t *param_2)

{
  ulonglong uVar1;
  longlong local_18 [3];
  
  FUN_180041cf0(local_18,param_1,0x400,0);
  uVar1 = FUN_180040d70(local_18,param_2);
  FUN_180041c70(local_18);
  return uVar1 & 0xffffffff;
}

