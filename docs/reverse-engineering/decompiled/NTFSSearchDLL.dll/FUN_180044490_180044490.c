// Function: FUN_180044490
// Address: 180044490
// Size: 221 bytes


undefined1 FUN_180044490(longlong param_1,char param_2)

{
  char *_Str;
  size_t sVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 local_28;
  
  local_28 = 0;
  if (param_1 != 0) {
    _Str = FUN_1800319c0(param_1);
    sVar1 = strlen(_Str);
    if ((sVar1 < 4) || (((*_Str != 'S' && (*_Str != 's')) || (_Str[1] != '-')))) {
      local_28 = FUN_18002e6f0(param_1);
      lVar2 = FUN_180031730(param_1);
      lVar3 = FUN_180031720(param_1);
      if (((lVar3 < lVar2) && (param_2 != '\0')) ||
         (uVar4 = FUN_18002e5b0(param_1), (uVar4 & 0xff) != 0)) {
        local_28 = 1;
      }
    }
    else {
      local_28 = 1;
    }
  }
  return local_28;
}

