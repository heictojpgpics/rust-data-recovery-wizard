// Function: FUN_18001b0a0
// Address: 18001b0a0
// Size: 382 bytes


void FUN_18001b0a0(undefined8 param_1,void *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *_Dst;
  undefined1 uVar5;
  undefined1 auStack_68 [32];
  undefined2 local_48 [4];
  undefined8 local_40;
  ushort local_38 [4];
  char acStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  iVar1 = DAT_180067ec0;
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_18008f028 ^ (ulonglong)auStack_68;
  local_38 = (ushort  [4])s_<_xml_version___18006ef10._0_8_;
  acStack_30 = (char  [8])s_<_xml_version___18006ef10._8_8_;
  local_18._0_5_ = CONCAT14(DAT_180067ec4,(undefined4)local_18);
  uVar5 = 0xf;
  iVar2 = memcmp(param_2,local_38,0xf);
  if (iVar2 != 0) {
    uVar5 = 0xf;
    iVar2 = memcmp((void *)((longlong)param_2 + 3),local_38,0xf);
    if (iVar2 != 0) goto LAB_18001b1f9;
  }
  iVar2 = 0;
  do {
    if (*(int *)((longlong)iVar2 + 0x16 + (longlong)param_2) == iVar1) {
      *(undefined4 *)(param_3 + 0x18) = 0x97;
      puVar3 = FUN_180001350();
      local_18 = local_38;
      local_28 = 0;
      local_20 = 0;
      puVar4 = (undefined8 *)FUN_1800016b0(local_38);
      puVar4[2] = 0;
      puVar4[3] = 7;
      local_48[0] = 0;
      FUN_180001790((undefined2 *)puVar4,local_48);
      if ((ulonglong)puVar4[3] < 3) {
        FUN_18000f8f0((longlong)local_38,3,uVar5,&DAT_180067ec8);
      }
      else {
        _Dst = puVar4;
        if (7 < (ulonglong)puVar4[3]) {
          _Dst = (undefined8 *)*puVar4;
        }
        puVar4[2] = 3;
        memmove(_Dst,&DAT_180067ec8,6);
        local_48[0] = 0;
        FUN_180001790((undefined2 *)((longlong)_Dst + 6),local_48);
      }
      FUN_18000ed00((longlong)(puVar3 + 0x60),local_38);
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x200);
LAB_18001b1f9:
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}

