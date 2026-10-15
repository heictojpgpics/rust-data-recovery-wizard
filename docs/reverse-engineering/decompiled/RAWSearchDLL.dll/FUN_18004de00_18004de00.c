// Function: FUN_18004de00
// Address: 18004de00
// Size: 287 bytes


void FUN_18004de00(undefined8 param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  size_t _MaxCount;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_43;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  char local_28 [8];
  char acStack_20 [8];
  char local_18 [8];
  ulonglong local_10;
  size_t sVar4;
  
  local_10 = DAT_18008f028 ^ (ulonglong)auStack_68;
  local_30 = DAT_18006c138;
  local_2e = DAT_18006c13a;
  local_18._0_2_ = s_Adobe_Illustrator_18006c158._16_2_;
  local_40 = DAT_18006c150;
  local_3c = DAT_18006c154;
  local_3a = DAT_18006c156;
  local_38 = DAT_18006c130;
  local_48 = 0x46445025;
  local_43 = 0;
  local_28 = (char  [8])s_Adobe_Illustrator_18006c158._0_8_;
  acStack_20 = (char  [8])s_Adobe_Illustrator_18006c158._8_8_;
  if ((*param_2 == 0x46445025) && ((char)param_2[1] == '-')) {
    *(undefined4 *)(param_3 + 0x18) = 0x32;
  }
  else {
    sVar4 = 0xffffffffffffffff;
    do {
      _MaxCount = sVar4 + 1;
      lVar1 = sVar4 + 1;
      sVar4 = _MaxCount;
    } while (*(char *)((longlong)&local_38 + lVar1) != '\0');
    iVar2 = strncmp((char *)param_2,(char *)&local_38,_MaxCount);
    if (((iVar2 == 0) && (pcVar3 = strstr((char *)param_2,(char *)&local_40), pcVar3 == (char *)0x0)
        ) && (pcVar3 = strstr((char *)param_2,local_28), pcVar3 != (char *)0x0)) {
      *(undefined4 *)(param_3 + 0x18) = 5;
    }
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}

