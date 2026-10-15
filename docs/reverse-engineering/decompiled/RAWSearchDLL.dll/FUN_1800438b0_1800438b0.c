// Function: FUN_1800438b0
// Address: 1800438b0
// Size: 102 bytes


void FUN_1800438b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 local_18;
  undefined1 local_13;
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)&local_18;
  local_18 = 0x61747375;
  local_13 = 0;
  if ((*(int *)(param_2 + 0x101) == 0x61747375) && (*(char *)(param_2 + 0x105) == 'r')) {
    *(undefined4 *)(param_3 + 0x18) = 0x3f;
    __security_check_cookie(local_10 ^ (ulonglong)&local_18);
    return;
  }
  __security_check_cookie(local_10 ^ (ulonglong)&local_18);
  return;
}

