// Function: FUN_1800411a0
// Address: 1800411a0
// Size: 122 bytes


void FUN_1800411a0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 local_20;
  undefined1 local_1e;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)&local_28;
  if (param_2 != (longlong *)0x0) {
    local_28 = 0x31685a42;
    uStack_24 = 0x26594131;
    local_20 = 0x5953;
    local_1e = 0;
    if ((*param_2 == 0x2659413131685a42) && ((short)param_2[1] == 0x5953)) {
      *(undefined4 *)(param_3 + 0x18) = 0x71;
      __security_check_cookie(local_18 ^ (ulonglong)&local_28);
      return;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)&local_28);
  return;
}

