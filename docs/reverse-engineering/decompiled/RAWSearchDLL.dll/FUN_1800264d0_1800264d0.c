// Function: FUN_1800264d0
// Address: 1800264d0
// Size: 273 bytes


void FUN_1800264d0(undefined8 param_1,ushort *param_2,longlong param_3)

{
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)&local_28;
  local_20 = 0x90001;
  local_1c = 0;
  local_28 = 0x9ac6cdd7;
  local_24 = 0;
  local_22 = 0;
  if (*(int *)param_2 == 0x90001) {
    if (param_2[8] == 0) {
      *(ulonglong *)(param_3 + 0x10) = (ulonglong)(uint)(*(int *)(param_2 + 3) * 2);
      *(undefined4 *)(param_3 + 0x18) = 0x46;
      __security_check_cookie(local_18 ^ (ulonglong)&local_28);
      return;
    }
  }
  else if ((*(int *)param_2 == -0x65393229) && (param_2[2] == 0)) {
    if (((param_2[10] ==
          (ushort)(param_2[9] ^ param_2[7] ^ param_2[6] ^ param_2[5] ^ param_2[4] ^ param_2[3] ^
                   param_2[1] ^ *param_2 ^ param_2[2] ^ param_2[8])) &&
        (((param_2[2] == 0 && (*(int *)(param_2 + 8) == 0)) && (*(int *)(param_2 + 0xb) == 0x90001))
        )) && (param_2[0x13] == 0)) {
      *(ulonglong *)(param_3 + 0x10) = (ulonglong)(*(int *)(param_2 + 0xe) * 2 + 0x16);
      *(undefined4 *)(param_3 + 0x18) = 0x46;
      __security_check_cookie(local_18 ^ (ulonglong)&local_28);
      return;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)&local_28);
  return;
}

