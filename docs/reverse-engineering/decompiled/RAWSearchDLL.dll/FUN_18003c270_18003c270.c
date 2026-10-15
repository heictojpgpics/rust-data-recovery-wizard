// Function: FUN_18003c270
// Address: 18003c270
// Size: 331 bytes


void FUN_18003c270(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
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
  
  local_18 = DAT_18008f028 ^ (ulonglong)&local_b8;
  iVar1 = *(int *)(param_2 + 4);
  local_b4 = 0x10021;
  local_b8 = 0xb3010000;
  local_b0 = 0;
  local_a8 = 0xba010000;
  local_a4 = 0x10021;
  local_a0 = 0;
  local_98 = 0xb3010000;
  local_94 = 0x6f710021;
  local_90 = 0;
  local_88 = 0xba010000;
  local_84 = 0x6f710021;
  local_80 = 0;
  local_78 = 0xb3010000;
  local_74 = 0x482c0044;
  local_70 = 0;
  local_68 = 0xba010000;
  local_64 = 0x482c0044;
  local_60 = 0;
  local_58 = 0xba010000;
  local_54 = 0x9010021;
  local_50 = 0;
  local_48 = 0xba010000;
  local_44 = 0x40044;
  local_40 = 0;
  local_38 = 0xba010000;
  local_34 = 0x13ffff2f;
  local_30 = 0;
  local_28 = 0xba010000;
  local_24 = 0x4040044;
  local_20 = 0;
  if ((((((iVar1 == 0x10021) || (iVar1 == 0x10021)) || (iVar1 == 0x6f710021)) ||
       ((iVar1 == 0x6f710021 || (iVar1 == 0x482c0044)))) ||
      ((iVar1 == 0x482c0044 || ((iVar1 == 0x9010021 || (iVar1 == 0x40044)))))) ||
     ((iVar1 == 0x13ffff2f || (iVar1 == 0x4040044)))) {
    if ((0x14 < (ulonglong)(*(longlong *)(param_3 + 8) - *(longlong *)(param_1 + 0x18))) ||
       (*(longlong *)(param_1 + 0x18) == 0)) {
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_3 + 8);
      *(undefined4 *)(param_3 + 0x18) = 0x6d;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)&local_b8);
  return;
}

