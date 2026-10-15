// Function: FUN_180014e10
// Address: 180014e10
// Size: 131 bytes


void FUN_180014e10(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)&local_28;
  if (param_2 != 0) {
    local_24 = 0x6000000;
    local_28 = 0x6468544d;
    local_20 = 0;
    if (((*(int *)(param_2 + 4) == 0x6000000) &&
        ((ushort)(*(ushort *)(param_2 + 8) << 8 | *(ushort *)(param_2 + 8) >> 8) < 3)) &&
       ((*(ushort *)(param_2 + 10) & 0xff) != 0 || *(ushort *)(param_2 + 10) >> 8 != 0)) {
      *(undefined4 *)(param_3 + 0x18) = 0x26;
      __security_check_cookie(local_18 ^ (ulonglong)&local_28);
      return;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)&local_28);
  return;
}

