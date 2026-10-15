// Function: FUN_18003db20
// Address: 18003db20
// Size: 170 bytes


void FUN_18003db20(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 local_38;
  undefined1 local_33;
  undefined4 local_30;
  undefined1 local_2b;
  undefined4 local_28;
  undefined1 local_23;
  undefined4 local_20;
  undefined1 local_1b;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)&local_38;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 2);
    local_38 = 0x35686c2d;
    local_33 = 0;
    local_30 = 0x30686c2d;
    local_2b = 0;
    local_28 = 0x64686c2d;
    local_23 = 0;
    local_20 = 0x37686c2d;
    local_1b = 0;
    if (((((iVar1 == 0x35686c2d) && (*(char *)(param_2 + 6) == '-')) ||
         ((iVar1 == 0x30686c2d && (*(char *)(param_2 + 6) == '-')))) ||
        ((iVar1 == 0x64686c2d && (*(char *)(param_2 + 6) == '-')))) ||
       ((iVar1 == 0x37686c2d && (*(char *)(param_2 + 6) == '-')))) {
      *(undefined4 *)(param_3 + 0x18) = 0x24;
      __security_check_cookie(local_18 ^ (ulonglong)&local_38);
      return;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)&local_38);
  return;
}

