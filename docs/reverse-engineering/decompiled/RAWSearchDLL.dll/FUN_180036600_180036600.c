// Function: FUN_180036600
// Address: 180036600
// Size: 249 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180036600(longlong param_1,void *param_2,int param_3)

{
  longlong *_Str;
  char *pcVar1;
  int iVar2;
  undefined1 auStack_1078 [32];
  longlong local_1058;
  undefined2 local_1050;
  undefined1 local_104e;
  char local_1048 [8];
  char acStack_1040 [8];
  char local_1038 [16];
  longlong local_1028 [512];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x180036612;
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_1078;
  local_1050 = DAT_18006c138;
  local_104e = DAT_18006c13a;
  local_1038._0_2_ = s_Adobe_Illustrator_18006c158._16_2_;
  local_1058 = DAT_18006c130;
  local_1048 = (char  [8])s_Adobe_Illustrator_18006c158._0_8_;
  acStack_1040 = (char  [8])s_Adobe_Illustrator_18006c158._8_8_;
  memset(local_1028,0,0x1000);
  iVar2 = 0xfff;
  if (param_3 < 0x1000) {
    iVar2 = param_3;
  }
  memcpy(local_1028,param_2,(longlong)iVar2);
  _Str = FUN_180035da0(local_1028,iVar2,&local_1058);
  if (_Str != (longlong *)0x0) {
    pcVar1 = strstr((char *)_Str,local_1048);
    if (pcVar1 != (char *)0x0) {
      *(undefined1 *)(param_1 + 0x111) = 1;
      *(undefined4 *)(param_1 + 0x18) = 5;
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_1078);
  return;
}

