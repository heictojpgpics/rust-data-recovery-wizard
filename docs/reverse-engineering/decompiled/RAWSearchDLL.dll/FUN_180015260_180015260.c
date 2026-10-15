// Function: FUN_180015260
// Address: 180015260
// Size: 248 bytes


void FUN_180015260(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)&local_48;
  if (param_2 != (longlong *)0x0) {
    local_48 = 0x100;
    uStack_44 = 0x6e617453;
    local_40 = 0x64726164;
    uStack_3c = 0x74654a20;
    local_38 = 0x424420;
    local_34 = 0;
    local_30 = 0x100;
    uStack_2c = 0x6e617453;
    local_28 = 0x64726164;
    uStack_24 = 0x45434120;
    local_20 = 0x424420;
    local_1c = 0;
    if (((*param_2 == 0x6e61745300000100) && (param_2[1] == 0x74654a2064726164)) &&
       ((int)param_2[2] == 0x424420)) {
      *(undefined4 *)(param_3 + 0x18) = 0x27;
      __security_check_cookie(local_18 ^ (ulonglong)&local_48);
      return;
    }
    if (((*param_2 == 0x6e61745300000100) && (param_2[1] == 0x4543412064726164)) &&
       ((int)param_2[2] == 0x424420)) {
      *(undefined4 *)(param_3 + 0x18) = 0x4c;
      __security_check_cookie(local_18 ^ (ulonglong)&local_48);
      return;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)&local_48);
  return;
}

