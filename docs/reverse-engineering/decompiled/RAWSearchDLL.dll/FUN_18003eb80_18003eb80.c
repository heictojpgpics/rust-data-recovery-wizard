// Function: FUN_18003eb80
// Address: 18003eb80
// Size: 321 bytes


void FUN_18003eb80(longlong param_1,char *param_2,uint param_3,longlong param_4,longlong *param_5)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStackY_78 [32];
  undefined4 local_48;
  undefined1 local_44;
  char local_40 [8];
  char local_38 [4];
  char local_34;
  ulonglong local_30;
  
  local_30 = DAT_18008f028 ^ (ulonglong)auStackY_78;
  lVar2 = (longlong)(int)param_3;
  if ((((param_2 != (char *)0x0) && (0x1ff < (int)param_3)) && (-1 < param_4)) &&
     (lVar3 = param_4 - *(longlong *)(param_1 + 8),
     (ulonglong)(lVar2 * lVar3) < (ulonglong)(*(longlong *)(param_1 + 0x128) * 10))) {
    if (lVar3 == 0) {
      local_48 = DAT_18006ca28;
      local_44 = DAT_18006ca2c;
      local_38 = (char  [4])s_Video_Stream_18006ca40._8_4_;
      local_34 = s_Video_Stream_18006ca40[0xc];
      local_40 = (char  [8])s_Video_Stream_18006ca40._0_8_;
      if (param_5[1] * lVar2 < lVar2 * param_4 + 0x400) goto LAB_18003eca9;
      pcVar1 = FUN_18002a060(param_2,0x400,(char *)&local_48,4);
      if ((pcVar1 != (char *)0x0) &&
         (pcVar1 = FUN_18002a060(pcVar1,0xa0,local_40,0xc), pcVar1 != (char *)0x0)) {
        *(undefined4 *)(param_1 + 0x118) = 0;
      }
    }
    FUN_18003e6f0(param_1,(longlong)param_2,param_3,param_4,param_5);
  }
LAB_18003eca9:
  __security_check_cookie(local_30 ^ (ulonglong)auStackY_78);
  return;
}

