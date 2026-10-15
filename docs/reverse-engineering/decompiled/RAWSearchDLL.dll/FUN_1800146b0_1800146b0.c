// Function: FUN_1800146b0
// Address: 1800146b0
// Size: 93 bytes


void FUN_1800146b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 local_18;
  undefined1 local_13;
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)&local_18;
  if (param_2 != 0) {
    local_18 = 0x74725c7b;
    local_13 = 0;
    if (*(char *)(param_2 + 4) == 'f') {
      *(undefined4 *)(param_3 + 0x18) = 0x3c;
      __security_check_cookie(local_10 ^ (ulonglong)&local_18);
      return;
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)&local_18);
  return;
}

