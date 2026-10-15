// Function: FUN_180043630
// Address: 180043630
// Size: 163 bytes


void FUN_180043630(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)&local_48;
  iVar1 = *(int *)(param_2 + 4);
  local_44 = 0x454c4946;
  local_48 = 0x37545043;
  local_40 = 0;
  local_38 = 0x38545043;
  local_34 = 0x454c4946;
  local_30 = 0;
  local_28 = 0x39545043;
  local_24 = 0x454c4946;
  local_20 = 0;
  if ((((iVar1 == 0x454c4946) || (iVar1 == 0x454c4946)) || (iVar1 == 0x454c4946)) &&
     (*(int *)(param_2 + 0x34) == 0x13c)) {
    *(undefined4 *)(param_3 + 0x18) = 0x11;
    *(undefined8 *)(param_3 + 0x10) = 0;
    __security_check_cookie(local_18 ^ (ulonglong)&local_48);
    return;
  }
  __security_check_cookie(local_18 ^ (ulonglong)&local_48);
  return;
}

