// Function: FUN_18000efa0
// Address: 18000efa0
// Size: 290 bytes


void FUN_18000efa0(undefined8 param_1,int *param_2,longlong param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 uVar3;
  undefined1 auStack_68 [32];
  undefined2 local_48 [4];
  ushort local_40 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort *local_18;
  ulonglong local_10;
  
  local_20 = 0xfffffffffffffffe;
  local_10 = DAT_18008f028 ^ (ulonglong)auStack_68;
  local_18 = (ushort *)CONCAT35(local_18._5_3_,0x58464952);
  if (*param_2 == 0x58464952) {
    *(undefined4 *)(param_3 + 0x18) = 0x9c;
    puVar1 = FUN_180001350();
    uVar3 = (undefined1)param_3;
    local_18 = local_40;
    local_30 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_1800016b0(local_40);
    puVar2[2] = 0;
    puVar2[3] = 7;
    local_48[0] = 0;
    FUN_180001790((undefined2 *)puVar2,local_48);
    if ((ulonglong)puVar2[3] < 3) {
      FUN_18000f8f0((longlong)local_40,3,uVar3,&DAT_180067008);
    }
    else {
      _Dst = puVar2;
      if (7 < (ulonglong)puVar2[3]) {
        _Dst = (undefined8 *)*puVar2;
      }
      puVar2[2] = 3;
      memmove(_Dst,&DAT_180067008,6);
      local_48[0] = 0;
      FUN_180001790((undefined2 *)((longlong)_Dst + 6),local_48);
    }
    FUN_18000ed00((longlong)(puVar1 + 0x60),local_40);
  }
  __security_check_cookie(local_10 ^ (ulonglong)auStack_68);
  return;
}

