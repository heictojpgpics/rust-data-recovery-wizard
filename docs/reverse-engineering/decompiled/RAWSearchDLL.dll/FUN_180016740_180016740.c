// Function: FUN_180016740
// Address: 180016740
// Size: 309 bytes


void FUN_180016740(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)&local_88;
  if (param_2 != (longlong *)0x0) {
    local_70 = 0x36464d4a;
    uVar2 = 0;
    uStack_6c = 0x100003;
    local_68 = 0;
    local_58 = 0xfe12adcf;
    uStack_54 = 0x6f74fdc5;
    local_50 = 0x11d1e366;
    uStack_4c = 0xc0004e9a;
    local_48 = 0xfe12adcf;
    local_44 = 0x6f74fdc6;
    local_40 = 0x11d1e366;
    local_3c = 0xc0004e9a;
    local_38 = 0xfe12adcf;
    local_34 = 0x6f74fdc7;
    local_30 = 0x11d1e366;
    local_2c = 0xc0004e9a;
    local_28 = 0xfe12adcf;
    local_24 = 0x26fe9d30;
    local_20 = 0x11d21a8f;
    local_1c = 0x6000bfaa;
    local_88 = 0x2c3489f7;
    uStack_84 = 0x6deef0f7;
    local_80 = 0xd18922af;
    uStack_7c = 0xb0f0ff00;
    local_78 = 0;
    do {
      if ((*param_2 == *(longlong *)(&local_58 + uVar2 * 4)) &&
         (param_2[1] == *(longlong *)(&local_50 + uVar2 * 4))) goto LAB_18001684f;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < 4);
    if ((*param_2 == 0x10000336464d4a) ||
       ((*param_2 == 0x6deef0f72c3489f7 && (param_2[1] == -0x4f0f00ff2e76dd51)))) {
LAB_18001684f:
      *(undefined4 *)(param_3 + 0x18) = 0x15;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)&local_88);
  return;
}

