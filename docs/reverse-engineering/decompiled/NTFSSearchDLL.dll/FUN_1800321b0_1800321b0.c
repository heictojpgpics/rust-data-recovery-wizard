// Function: FUN_1800321b0
// Address: 1800321b0
// Size: 126 bytes


void FUN_1800321b0(longlong param_1)

{
  undefined1 auStack_68 [32];
  int local_48 [11];
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180086010 ^ (ulonglong)auStack_68;
  local_48[10] = 0;
  local_1c = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  if (param_1 != 0) {
    FUN_180032cb0(param_1,local_48);
  }
  memmove((void *)(param_1 + 0x98),local_48,0x28);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}

