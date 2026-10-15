// Function: FUN_180032f40
// Address: 180032f40
// Size: 132 bytes


void FUN_180032f40(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)&local_28;
  if (param_2 != 0) {
    local_24 = 0x6137;
    local_28 = 0x38464947;
    local_22 = 0;
    local_20 = 0x38464947;
    local_1c = 0x6139;
    local_1a = 0;
    if ((*(short *)(param_2 + 4) == 0x6137) || (*(short *)(param_2 + 4) == 0x6139)) {
      *(undefined4 *)(param_3 + 0x18) = 0x1e;
      __security_check_cookie(local_18 ^ (ulonglong)&local_28);
      return;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)&local_28);
  return;
}

