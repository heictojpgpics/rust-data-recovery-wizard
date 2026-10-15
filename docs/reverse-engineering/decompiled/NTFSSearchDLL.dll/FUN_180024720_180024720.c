// Function: FUN_180024720
// Address: 180024720
// Size: 125 bytes


ulonglong * FUN_180024720(ulonglong *param_1,longlong *param_2)

{
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  void *_Src;
  undefined1 local_res10 [8];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = FUN_180024800(param_1,param_2[1] - *param_2 >> 3);
  if ((char)uVar2 != '\0') {
    _Dst = (void *)*param_1;
    lVar1 = param_2[1];
    _Src = (void *)*param_2;
    FUN_180002ca0(local_res10);
    memmove(_Dst,_Src,lVar1 - (longlong)_Src);
    param_1[1] = (lVar1 - (longlong)_Src) + (longlong)_Dst;
  }
  return param_1;
}

