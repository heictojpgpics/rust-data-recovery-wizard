// Function: FUN_180053410
// Address: 180053410
// Size: 205 bytes


void FUN_180053410(longlong param_1,char *param_2)

{
  char *pcVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  char local_20 [8];
  char local_18 [4];
  char local_14;
  ulonglong local_10;
  
  local_20 = (char  [8])s_Video_Stream_18006ca40._0_8_;
  local_10 = DAT_18008f028 ^ (ulonglong)auStack_48;
  if (param_2 == (char *)0x0) {
    __security_check_cookie(local_10 ^ (ulonglong)auStack_48);
    return;
  }
  local_28 = DAT_18006ca28;
  local_24 = DAT_18006ca2c;
  local_18 = (char  [4])s_Video_Stream_18006ca40._8_4_;
  local_14 = s_Video_Stream_18006ca40[0xc];
  *(undefined4 *)(param_1 + 0x10) = 1;
  pcVar1 = FUN_180016fc0(param_2,0x400,(char *)&local_28,4);
  if (pcVar1 != (char *)0x0) {
    pcVar1 = FUN_180016fc0(pcVar1,0xa0,local_20,0xc);
    if (pcVar1 != (char *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_48);
  return;
}

