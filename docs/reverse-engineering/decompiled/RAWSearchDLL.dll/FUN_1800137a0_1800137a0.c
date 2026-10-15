// Function: FUN_1800137a0
// Address: 1800137a0
// Size: 150 bytes


void FUN_1800137a0(undefined8 param_1,uint *param_2,longlong param_3)

{
  int iVar1;
  int *_Str1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined1 local_13;
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)auStack_38;
  if (param_2 != (uint *)0x0) {
    _Str1 = (int *)((longlong)param_2 + 0x101);
    local_18 = 0x61747375;
    local_13 = 0;
    if ((((*_Str1 == 0x61747375) && (*(char *)((longlong)param_2 + 0x105) == 'r')) &&
        (((char)*param_2 < '!' || (iVar1 = strncmp((char *)_Str1,"ustar",5), iVar1 == 0)))) &&
       (iVar1 = FUN_180013920(_Str1,param_2), iVar1 != 0)) {
      *(undefined4 *)(param_3 + 0x18) = 0x3f;
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_38);
  return;
}

