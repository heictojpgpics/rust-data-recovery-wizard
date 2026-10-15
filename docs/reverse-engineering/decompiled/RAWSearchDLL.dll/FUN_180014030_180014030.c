// Function: FUN_180014030
// Address: 180014030
// Size: 94 bytes


void FUN_180014030(undefined8 param_1,int *param_2,longlong param_3)

{
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)&local_18;
  if (param_2 != (int *)0x0) {
    local_18 = 0x677077;
    local_14 = 0;
    if (*param_2 == 0x677077) {
      *(undefined4 *)(param_3 + 0x18) = 0x45;
      __security_check_cookie(local_10 ^ (ulonglong)&local_18);
      return;
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)&local_18);
  return;
}

