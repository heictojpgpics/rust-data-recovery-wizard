// Function: FUN_180015ff0
// Address: 180015ff0
// Size: 131 bytes


void FUN_180015ff0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)&local_28;
  if (param_2 != 0) {
    local_24 = 0x4da7d88c;
    uStack_20 = 0x7853b1ae;
    local_28 = 0x7b5c52e4;
    local_1c = 0xd39629d0;
    local_18 = 0;
    if ((*(longlong *)(param_2 + 4) == 0x7853b1ae4da7d88c) &&
       (*(int *)(param_2 + 0xc) == -0x2c69d630)) {
      *(undefined4 *)(param_3 + 0x18) = 0x31;
      __security_check_cookie(local_10 ^ (ulonglong)&local_28);
      return;
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)&local_28);
  return;
}

