// Function: FUN_180043160
// Address: 180043160
// Size: 106 bytes


void FUN_180043160(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)&local_18;
  local_14 = 0x71a;
  local_18 = 0x21726152;
  local_11 = 0;
  if ((*(short *)(param_2 + 4) == 0x71a) && (*(char *)(param_2 + 6) == '\0')) {
    *(undefined4 *)(param_3 + 0x18) = 0x3a;
    __security_check_cookie(local_10 ^ (ulonglong)&local_18);
    return;
  }
  __security_check_cookie(local_10 ^ (ulonglong)&local_18);
  return;
}

