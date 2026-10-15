// Function: FUN_180044130
// Address: 180044130
// Size: 99 bytes


void FUN_180044130(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)&local_28;
  local_24 = 0xa1a0a0d;
  local_28 = 0x474e5089;
  local_20 = 0;
  if (*(int *)(param_2 + 4) != 0xa1a0a0d) {
    __security_check_cookie(local_18 ^ (ulonglong)&local_28);
    return;
  }
  *(undefined4 *)(param_3 + 0x18) = 0x33;
  __security_check_cookie(local_18 ^ (ulonglong)&local_28);
  return;
}

