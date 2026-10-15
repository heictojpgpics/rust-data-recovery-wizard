// Function: FUN_1800276a0
// Address: 1800276a0
// Size: 99 bytes


void FUN_1800276a0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)&local_28;
  local_24 = 0xe11ab1a1;
  local_28 = 0xe011cfd0;
  local_20 = 0;
  if (*(int *)(param_2 + 4) != -0x1ee54e5f) {
    __security_check_cookie(local_18 ^ (ulonglong)&local_28);
    return;
  }
  *(undefined4 *)(param_3 + 0x18) = 0x30;
  __security_check_cookie(local_18 ^ (ulonglong)&local_28);
  return;
}

