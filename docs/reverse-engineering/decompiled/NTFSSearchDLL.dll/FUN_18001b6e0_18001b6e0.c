// Function: FUN_18001b6e0
// Address: 18001b6e0
// Size: 200 bytes


void FUN_18001b6e0(uint param_1)

{
  longlong lVar1;
  uint local_48 [14];
  ulonglong local_10;
  
  local_10 = DAT_180086010 ^ (ulonglong)local_48;
  if ((param_1 < 0x2001) && ((param_1 == 1 || ((param_1 & 1) == 0)))) {
    local_48[0] = 1;
    lVar1 = 0;
    local_48[1] = 2;
    local_48[2] = 4;
    local_48[3] = 8;
    local_48[4] = 0x10;
    local_48[5] = 0x20;
    local_48[6] = 0x40;
    local_48[7] = 0x80;
    local_48[8] = 0x100;
    local_48[9] = 0x200;
    local_48[10] = 0x400;
    local_48[0xb] = 0x800;
    local_48[0xc] = 0x1000;
    do {
      if (param_1 == local_48[lVar1]) {
        __security_check_cookie(local_10 ^ (ulonglong)local_48);
        return;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < 0xd);
  }
  __security_check_cookie(local_10 ^ (ulonglong)local_48);
  return;
}

