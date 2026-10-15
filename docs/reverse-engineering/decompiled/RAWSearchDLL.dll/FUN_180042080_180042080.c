// Function: FUN_180042080
// Address: 180042080
// Size: 317 bytes


void FUN_180042080(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *_Dst;
  undefined1 uVar3;
  undefined1 auStack_78 [32];
  undefined2 local_58 [4];
  ushort local_50 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ushort *local_28;
  undefined2 local_20;
  ulonglong local_18;
  
  local_30 = 0xfffffffffffffffe;
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_78;
  local_28 = (ushort *)0x22646922200a0d7b;
  local_20 = 0x203a;
  if ((*param_2 == 0x22646922200a0d7b) && ((short)param_2[1] == 0x203a)) {
    *(undefined4 *)(param_3 + 0x18) = 0x8f;
    puVar1 = FUN_180001350();
    uVar3 = (undefined1)param_3;
    local_28 = local_50;
    local_40 = 0;
    local_38 = 0;
    puVar2 = (undefined8 *)FUN_1800016b0(local_50);
    puVar2[2] = 0;
    puVar2[3] = 7;
    local_58[0] = 0;
    FUN_180001790((undefined2 *)puVar2,local_58);
    if ((ulonglong)puVar2[3] < 3) {
      FUN_18000f8f0((longlong)local_50,3,uVar3,&DAT_18006d038);
    }
    else {
      _Dst = puVar2;
      if (7 < (ulonglong)puVar2[3]) {
        _Dst = (undefined8 *)*puVar2;
      }
      puVar2[2] = 3;
      memmove(_Dst,&DAT_18006d038,6);
      local_58[0] = 0;
      FUN_180001790((undefined2 *)((longlong)_Dst + 6),local_58);
    }
    FUN_18000ed00((longlong)(puVar1 + 0x60),local_50);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
  return;
}

