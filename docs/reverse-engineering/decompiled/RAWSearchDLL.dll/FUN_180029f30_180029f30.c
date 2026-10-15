// Function: FUN_180029f30
// Address: 180029f30
// Size: 132 bytes


void FUN_180029f30(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)&local_28;
  local_24 = 0x1c040002;
  uStack_20 = 0x2001401;
  local_28 = 0x11c;
  local_1c = 0x11c1400;
  if (((*(longlong *)(param_2 + 4) == 0x20014011c040002) && (*(int *)(param_2 + 0xc) == 0x11c1400))
     && (*(short *)(param_2 + 0x22) == 0x3131)) {
    *(undefined4 *)(param_3 + 0x18) = 0x1d;
    __security_check_cookie(local_18 ^ (ulonglong)&local_28);
    return;
  }
  __security_check_cookie(local_18 ^ (ulonglong)&local_28);
  return;
}

