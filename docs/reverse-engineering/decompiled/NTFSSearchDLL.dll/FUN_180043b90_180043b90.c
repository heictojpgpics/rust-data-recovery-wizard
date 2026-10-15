// Function: FUN_180043b90
// Address: 180043b90
// Size: 190 bytes


undefined1 FUN_180043b90(longlong param_1,longlong *param_2)

{
  int iVar1;
  char *_Str1;
  char *_Str2;
  ulonglong uVar2;
  undefined1 local_28;
  
  local_28 = 0;
  if ((param_1 != 0) && (param_2 != (longlong *)0x0)) {
    _Str1 = FUN_1800319c0(param_1);
    _Str2 = (char *)(**(code **)(*param_2 + 0x10))(param_2);
    if ((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) {
      uVar2 = FUN_180031a40(param_1);
      iVar1 = (**(code **)*param_2)(param_2);
      if (((int)uVar2 == iVar1) && (iVar1 = strcmp(_Str1,_Str2), iVar1 == 0)) {
        local_28 = 1;
      }
    }
  }
  return local_28;
}

