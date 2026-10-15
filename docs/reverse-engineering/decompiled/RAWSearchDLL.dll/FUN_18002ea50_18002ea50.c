// Function: FUN_18002ea50
// Address: 18002ea50
// Size: 186 bytes


void FUN_18002ea50(longlong param_1)

{
  undefined2 local_28;
  undefined1 local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)&local_28;
  local_24 = 0x10004047;
  local_28 = 0x4147;
  local_26 = 0;
  local_20 = 0x564d4448;
  local_1c = 0;
  local_18 = 0x332d4341;
  local_14 = 0;
  if ((((param_1 != 0) && (*(int *)(param_1 + 4) == 0x10004047)) &&
      (*(short *)(param_1 + 0xc4) == 0x4147)) &&
     (((*(int *)(param_1 + 0xd7) == 0x564d4448 && (*(int *)(param_1 + 0xe8) == 0x564d4448)) &&
      (*(int *)(param_1 + 0xd7) == 0x332d4341)))) {
    __security_check_cookie(local_10 ^ (ulonglong)&local_28);
    return;
  }
  __security_check_cookie(local_10 ^ (ulonglong)&local_28);
  return;
}

