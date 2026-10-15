// Function: FUN_1800445e0
// Address: 1800445e0
// Size: 382 bytes


void FUN_1800445e0(undefined8 *param_1)

{
  bool bVar1;
  ushort *puVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  ushort local_84;
  ulonglong local_80;
  __uint64 local_78;
  undefined4 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58 [4];
  longlong local_38 [4];
  ulonglong local_18;
  
  local_60 = 0xfffffffffffffffe;
  local_18 = DAT_180086010 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_70 = 8;
  bVar1 = FUN_1800025c0((longlong)param_1);
  if (!bVar1) {
    FUN_18002e4b0((longlong)local_58,param_1);
    local_78 = FUN_18002e9b0(local_58,0x2e,0xffffffffffffffff);
    if (local_78 != 0xffffffffffffffff) {
      local_68 = FUN_18002e940(local_58,local_38,0,local_78);
      FUN_18002eae0(local_58,local_68);
      FUN_180019de0(local_38);
    }
    local_80 = FUN_1800025d0((longlong)local_58);
    if ((local_80 < 9) && (1 < local_80)) {
      puVar2 = (ushort *)FUN_18002ea60(local_58,local_80 - 2);
      local_84 = *puVar2;
      if (local_84 == 0x7e) {
        puVar2 = (ushort *)FUN_18002ea20(local_58);
        local_84 = *puVar2;
        if ((local_84 < 0x31) || (0x39 < local_84)) {
          FUN_180019de0(local_58);
        }
        else {
          local_88 = 1;
          FUN_180019de0(local_58);
        }
      }
      else {
        FUN_180019de0(local_58);
      }
    }
    else {
      FUN_180019de0(local_58);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_a8);
  return;
}

