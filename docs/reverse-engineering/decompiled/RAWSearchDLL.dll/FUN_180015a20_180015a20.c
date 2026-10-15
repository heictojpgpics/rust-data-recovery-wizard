// Function: FUN_180015a20
// Address: 180015a20
// Size: 111 bytes


void FUN_180015a20(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)&local_18;
  if (param_2 != 0) {
    local_14 = 0x4966;
    local_18 = 0x66757453;
    local_11 = 0;
    if ((*(short *)(param_2 + 4) == 0x4966) && (*(char *)(param_2 + 6) == 't')) {
      *(undefined4 *)(param_3 + 0x18) = 0x5d;
      __security_check_cookie(local_10 ^ (ulonglong)&local_18);
      return;
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)&local_18);
  return;
}

