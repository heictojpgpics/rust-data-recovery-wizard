// Function: FUN_18001b650
// Address: 18001b650
// Size: 107 bytes


void FUN_18001b650(undefined8 param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)&local_18;
  local_18 = 0xe011cfd0;
  local_14 = 0;
  if (*param_2 == -0x1fee3030) {
    uVar1 = (param_2[0xc] + 5) * 0x200;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 0x4a) + 0x1ff + param_2[0x49] & 0xfffffe00;
  }
  *(undefined4 *)(param_3 + 0x18) = 0x17;
  *(ulonglong *)(param_3 + 0x10) = (ulonglong)uVar1;
  __security_check_cookie(local_10 ^ (ulonglong)&local_18);
  return;
}

