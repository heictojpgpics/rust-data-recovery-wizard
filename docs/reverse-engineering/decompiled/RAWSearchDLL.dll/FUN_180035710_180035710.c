// Function: FUN_180035710
// Address: 180035710
// Size: 605 bytes


void FUN_180035710(undefined8 param_1,int *param_2,longlong param_3,uint param_4,longlong param_5,
                  longlong param_6,longlong param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ushort *puVar4;
  undefined8 *puVar5;
  char *_Str2;
  undefined8 *_Dst;
  undefined1 uVar6;
  undefined1 auStackY_238 [32];
  undefined2 local_208 [4];
  ushort local_200 [8];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined **local_1d8 [39];
  int *local_a0;
  int local_90;
  int local_58;
  undefined1 local_54;
  ushort *local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_1e0 = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStackY_238;
  local_58 = -0x24002701;
  local_54 = 0;
  local_50 = (ushort *)CONCAT35(local_50._5_3_,0xeeffd8ff);
  local_48 = DAT_18006c09c;
  local_44 = DAT_18006c0a0;
  local_40 = DAT_18006c094;
  local_3c = DAT_18006c098;
  uVar6 = 4;
  iVar1 = _strnicmp((char *)&local_48,(char *)((longlong)param_2 + 6),4);
  if (iVar1 != 0) {
    uVar6 = 4;
    _Str2 = (char *)((longlong)param_2 + 6);
    iVar1 = _strnicmp((char *)&local_40,_Str2,4);
    if (iVar1 != 0) {
      if ((*param_2 == local_58) || (*param_2 == (int)local_50)) {
        FUN_180033920(local_1d8);
        local_a0 = param_2;
        uVar2 = FUN_1800359e0((longlong)local_1d8,_Str2,param_5,param_4,param_6,param_7);
        local_90 = (int)uVar2;
        if (local_90 != 0) {
          puVar3 = FUN_180001350();
          local_50 = local_200;
          puVar4 = (ushort *)FUN_18000f4b0((longlong)local_200,&DAT_18006c0d8);
          FUN_18000ed00((longlong)(puVar3 + 0x60),puVar4);
        }
        local_1d8[0] = BruteForce::JpegAnalyzer::JpegRawFileInfo::vftable;
        FUN_18000b6b0(local_1d8);
      }
      goto LAB_180035950;
    }
  }
  *(undefined4 *)(param_3 + 0x18) = 0x23;
  puVar3 = FUN_180001350();
  local_50 = local_200;
  local_1f0 = 0;
  local_1e8 = 0;
  puVar5 = (undefined8 *)FUN_1800016b0(local_200);
  puVar5[2] = 0;
  puVar5[3] = 7;
  local_208[0] = 0;
  FUN_180001790((undefined2 *)puVar5,local_208);
  if ((ulonglong)puVar5[3] < 3) {
    FUN_18000f8f0((longlong)local_200,3,uVar6,&DAT_18006c0d8);
  }
  else {
    _Dst = puVar5;
    if (7 < (ulonglong)puVar5[3]) {
      _Dst = (undefined8 *)*puVar5;
    }
    puVar5[2] = 3;
    memmove(_Dst,&DAT_18006c0d8,6);
    local_208[0] = 0;
    FUN_180001790((undefined2 *)((longlong)_Dst + 6),local_208);
  }
  FUN_18000ed00((longlong)(puVar3 + 0x60),local_200);
LAB_180035950:
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_238);
  return;
}

