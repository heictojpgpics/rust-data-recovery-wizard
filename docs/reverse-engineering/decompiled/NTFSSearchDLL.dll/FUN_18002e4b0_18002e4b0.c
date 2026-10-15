// Function: FUN_18002e4b0
// Address: 18002e4b0
// Size: 250 bytes


void FUN_18002e4b0(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  uint local_68;
  LPWSTR local_60;
  longlong local_58;
  longlong local_50;
  LPCSTR local_48;
  LPWSTR local_40;
  undefined8 local_38;
  longlong local_30 [4];
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_180086010 ^ (ulonglong)auStack_88;
  local_68 = 0;
  FUN_18002ec10((undefined2 *)local_30);
  local_58 = 0;
  local_50 = FUN_1800025d0((longlong)param_2);
  local_48 = (LPCSTR)FUN_1800025e0(param_2);
  local_60 = FUN_18002e3b0(local_48,local_50,&local_58);
  if (local_60 != (LPWSTR)0x0) {
    FUN_18002eab0(local_30,local_60);
    local_40 = local_60;
    free(local_60);
    local_60 = (LPWSTR)0x0;
  }
  FUN_18002eb80(param_1,local_30);
  local_68 = local_68 | 1;
  FUN_180019de0(local_30);
  __security_check_cookie(local_10 ^ (ulonglong)auStack_88);
  return;
}

