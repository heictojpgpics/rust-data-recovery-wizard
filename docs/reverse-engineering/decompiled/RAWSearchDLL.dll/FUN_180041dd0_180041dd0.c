// Function: FUN_180041dd0
// Address: 180041dd0
// Size: 140 bytes


void FUN_180041dd0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_48;
  local_28 = 0x5349534d;
  local_24 = 0x44204d41;
  local_20 = 0x62617461;
  local_1c = 0x657361;
  iVar1 = memcmp(&local_28,(void *)(param_2 + 4),0xf);
  if (iVar1 != 0) {
    __security_check_cookie(local_18 ^ (ulonglong)auStack_48);
    return;
  }
  *(undefined4 *)(param_3 + 0x18) = 0x28;
  *(undefined8 *)(param_3 + 0x10) = 0x100000;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_48);
  return;
}

