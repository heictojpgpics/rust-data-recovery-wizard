// Function: FUN_180052970
// Address: 180052970
// Size: 146 bytes


void FUN_180052970(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 local_28;
  undefined1 local_23;
  undefined4 local_20;
  undefined1 local_1b;
  undefined4 local_18;
  undefined1 local_13;
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)&local_28;
  iVar1 = *(int *)(param_2 + 2);
  local_28 = 0x35686c2d;
  local_23 = 0;
  local_20 = 0x30686c2d;
  local_1b = 0;
  local_18 = 0x64686c2d;
  local_13 = 0;
  if ((((iVar1 != 0x35686c2d) || (*(char *)(param_2 + 6) != '-')) &&
      ((iVar1 != 0x30686c2d || (*(char *)(param_2 + 6) != '-')))) &&
     ((iVar1 != 0x64686c2d || (*(char *)(param_2 + 6) != '-')))) {
    __security_check_cookie(local_10 ^ (ulonglong)&local_28);
    return;
  }
  *(undefined4 *)(param_3 + 0x18) = 0x24;
  __security_check_cookie(local_10 ^ (ulonglong)&local_28);
  return;
}

