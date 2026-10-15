// Function: FUN_180042da0
// Address: 180042da0
// Size: 188 bytes


void FUN_180042da0(undefined8 param_1,void *param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined2 local_24;
  char local_20 [8];
  char local_18 [4];
  char local_14 [2];
  char local_12;
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)auStack_48;
  local_28 = DAT_1800671a0;
  local_24 = DAT_1800671a4;
  local_18 = (char  [4])s_<_DOCTYPE_HTML_1800671b8._8_4_;
  local_14 = (char  [2])s_<_DOCTYPE_HTML_1800671b8._12_2_;
  local_12 = s_<_DOCTYPE_HTML_1800671b8[0xe];
  local_20 = (char  [8])s_<_DOCTYPE_HTML_1800671b8._0_8_;
  iVar1 = _memicmp(param_2,&local_28,5);
  if ((iVar1 == 0) || (iVar1 = _memicmp(param_2,local_20,0xe), iVar1 == 0)) {
    *(undefined4 *)(param_3 + 0x18) = 0x21;
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_48);
  return;
}

