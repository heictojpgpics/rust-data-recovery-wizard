// Function: FUN_18004e600
// Address: 18004e600
// Size: 133 bytes


void FUN_18004e600(undefined8 param_1,int *param_2,longlong param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)&local_28;
  local_28 = 0x494a5546;
  local_24 = 0x4d4c4946;
  uStack_20 = 0x2d444343;
  local_1c = 0x20574152;
  local_18 = 0;
  if ((*param_2 == 0x494a5546) &&
     ((*(longlong *)(param_2 + 1) != 0x2d4443434d4c4946 || (param_2[3] != 0x20574152)))) {
    __security_check_cookie(local_10 ^ (ulonglong)&local_28);
    return;
  }
  *(undefined4 *)(param_3 + 0x18) = 0x40;
  __security_check_cookie(local_10 ^ (ulonglong)&local_28);
  return;
}

