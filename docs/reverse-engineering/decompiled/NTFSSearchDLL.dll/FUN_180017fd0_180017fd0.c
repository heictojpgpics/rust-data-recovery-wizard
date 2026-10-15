// Function: FUN_180017fd0
// Address: 180017fd0
// Size: 95 bytes


ulonglong * FUN_180017fd0(ulonglong *param_1)

{
  void *_Dst;
  ulonglong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN_180012b20(param_1,0x8000);
  if ((char)uVar1 != '\0') {
    _Dst = (void *)*param_1;
    memset(_Dst,0,0x20000);
    param_1[1] = (longlong)_Dst + 0x20000;
  }
  return param_1;
}

