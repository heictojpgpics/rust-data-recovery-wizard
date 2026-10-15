// Function: FUN_18002fe30
// Address: 18002fe30
// Size: 230 bytes


void FUN_18002fe30(undefined8 param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int local_58;
  short local_54 [30];
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)&local_58;
  local_58 = 0x30314341;
  iVar1 = 0;
  local_54[0] = 0x3233;
  local_54[1] = 0x4341;
  local_54[2] = 0x3031;
  local_54[3] = 0x3732;
  local_54[4] = 0x4341;
  local_54[5] = 0x3031;
  local_54[6] = 0x3432;
  local_54[7] = 0x4341;
  local_54[8] = 0x3031;
  local_54[9] = 0x3132;
  local_54[10] = 0x4341;
  local_54[0xb] = 0x3031;
  local_54[0xc] = 0x3831;
  local_54[0xd] = 0x4341;
  local_54[0xe] = 0x3031;
  local_54[0xf] = 0x3531;
  local_54[0x10] = 0x4341;
  local_54[0x11] = 0x3031;
  local_54[0x12] = 0x3431;
  local_54[0x13] = 0x4341;
  local_54[0x14] = 0x3031;
  local_54[0x15] = 0x3331;
  local_54[0x16] = 0x4341;
  local_54[0x17] = 0x3031;
  local_54[0x18] = 0x3231;
  local_54[0x19] = 0x4341;
  local_54[0x1a] = 0x3031;
  local_54[0x1b] = 0x3930;
  while ((*param_2 != *(int *)((longlong)&local_58 + (longlong)iVar1 * 6) ||
         ((short)param_2[1] != local_54[(longlong)iVar1 * 3]))) {
    iVar1 = iVar1 + 1;
    if (9 < iVar1) {
      __security_check_cookie(local_18 ^ (ulonglong)&local_58);
      return;
    }
  }
  *(undefined4 *)(param_3 + 0x18) = 0x18;
  __security_check_cookie(local_18 ^ (ulonglong)&local_58);
  return;
}

