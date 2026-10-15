// Function: FUN_180012270
// Address: 180012270
// Size: 513 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180012270(undefined8 param_1,int *param_2,longlong param_3)

{
  int iVar1;
  undefined *puVar2;
  ushort *puVar3;
  undefined8 *puVar4;
  undefined8 *_Dst;
  undefined1 uVar5;
  undefined1 auStack_a8 [32];
  undefined2 local_88 [4];
  ushort local_80 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ushort *local_58;
  undefined4 local_50;
  undefined2 local_4c;
  char local_48 [8];
  char local_40 [4];
  char local_3c [2];
  char local_3a;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  ulonglong local_28;
  
  local_60 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_a8;
  local_50 = DAT_1800671a0;
  local_4c = DAT_1800671a4;
  local_38 = _DAT_1800671a8;
  local_30 = DAT_1800671b0;
  local_2c = DAT_1800671b4;
  local_48 = (char  [8])s_<_DOCTYPE_HTML_1800671b8._0_8_;
  local_40 = (char  [4])s_<_DOCTYPE_HTML_1800671b8._8_4_;
  local_3c = (char  [2])s_<_DOCTYPE_HTML_1800671b8._12_2_;
  local_3a = s_<_DOCTYPE_HTML_1800671b8[0xe];
  local_58 = (ushort *)CONCAT35(local_58._5_3_,0x3cfeff);
  puVar2 = FUN_180001350();
  uVar5 = 5;
  iVar1 = _memicmp(param_2,&local_50,5);
  if (iVar1 == 0) {
LAB_1800123a3:
    *(undefined4 *)(param_3 + 0x18) = 0x21;
    local_58 = local_80;
    local_70 = 0;
    local_68 = 0;
    puVar4 = (undefined8 *)FUN_1800016b0(local_80);
    puVar4[2] = 0;
    puVar4[3] = 7;
    local_88[0] = 0;
    FUN_180001790((undefined2 *)puVar4,local_88);
    if ((ulonglong)puVar4[3] < 4) {
      FUN_18000f8f0((longlong)local_80,4,uVar5,L"HTML");
    }
    else {
      _Dst = puVar4;
      if (7 < (ulonglong)puVar4[3]) {
        _Dst = (undefined8 *)*puVar4;
      }
      puVar4[2] = 4;
      memmove(_Dst,L"HTML",8);
      local_88[0] = 0;
      FUN_180001790((undefined2 *)(_Dst + 1),local_88);
    }
    puVar3 = local_80;
  }
  else {
    uVar5 = 0xe;
    iVar1 = _memicmp(param_2,local_48,0xe);
    if (iVar1 == 0) goto LAB_1800123a3;
    if (((*param_2 != (int)local_58) || (param_2 == (int *)0x0)) ||
       ((iVar1 = _wcsnicmp((wchar_t *)((longlong)param_2 + 2),(wchar_t *)&local_38,6), iVar1 != 0 &&
        ((short)param_2[1] != 0x21)))) goto LAB_180012452;
    *(undefined4 *)(param_3 + 0x18) = 0x21;
    local_58 = local_80;
    puVar3 = (ushort *)FUN_18000f4b0((longlong)local_80,L"HTML");
  }
  FUN_18000ed00((longlong)(puVar2 + 0x60),puVar3);
LAB_180012452:
  __security_check_cookie(local_28 ^ (ulonglong)auStack_a8);
  return;
}

