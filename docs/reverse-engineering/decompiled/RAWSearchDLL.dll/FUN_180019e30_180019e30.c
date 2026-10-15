// Function: FUN_180019e30
// Address: 180019e30
// Size: 379 bytes


void FUN_180019e30(undefined8 param_1,void *param_2,longlong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *_Dst;
  undefined1 uVar4;
  undefined1 auStack_88 [32];
  undefined2 local_68 [4];
  ushort local_60 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  char local_38 [8];
  char local_30 [4];
  char local_2c;
  ushort *local_28;
  char acStack_20 [8];
  ulonglong local_18;
  
  local_40 = 0xfffffffffffffffe;
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_88;
  local_28 = (ushort *)s_<_xml_version___18006ef10._0_8_;
  acStack_20 = (char  [8])s_<_xml_version___18006ef10._8_8_;
  local_38 = (char  [8])s_<BiffProject_180067db8._0_8_;
  local_30 = (char  [4])s_<BiffProject_180067db8._8_4_;
  local_2c = s_<BiffProject_180067db8[0xc];
  iVar1 = memcmp(param_2,&local_28,0xf);
  if (iVar1 == 0) {
    uVar4 = 0xc;
    iVar1 = _memicmp((void *)((longlong)param_2 + 0x28),local_38,0xc);
    if (iVar1 == 0) {
      *(undefined4 *)(param_3 + 0x18) = 0x90;
      puVar2 = FUN_180001350();
      local_28 = local_60;
      local_50 = 0;
      local_48 = 0;
      puVar3 = (undefined8 *)FUN_1800016b0(local_60);
      puVar3[2] = 0;
      puVar3[3] = 7;
      local_68[0] = 0;
      FUN_180001790((undefined2 *)puVar3,local_68);
      if ((ulonglong)puVar3[3] < 3) {
        FUN_18000f8f0((longlong)local_60,3,uVar4,&DAT_180067db0);
      }
      else {
        _Dst = puVar3;
        if (7 < (ulonglong)puVar3[3]) {
          _Dst = (undefined8 *)*puVar3;
        }
        puVar3[2] = 3;
        memmove(_Dst,&DAT_180067db0,6);
        local_68[0] = 0;
        FUN_180001790((undefined2 *)((longlong)_Dst + 6),local_68);
      }
      FUN_18000ed00((longlong)(puVar2 + 0x60),local_60);
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_88);
  return;
}

