// Function: FUN_1800266e0
// Address: 1800266e0
// Size: 356 bytes


void FUN_1800266e0(undefined8 param_1,int *param_2,longlong param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *_Dst;
  undefined1 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined2 local_58 [4];
  ushort local_50 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ushort *local_28;
  ulonglong local_20;
  
  local_30 = 0xfffffffffffffffe;
  local_20 = DAT_18008f028 ^ (ulonglong)auStack_78;
  local_28 = (ushort *)CONCAT26(local_28._6_2_,0x1c27afbc7a37);
  if ((*param_2 == -0x504385c9) && ((short)param_2[1] == 0x1c27)) {
    *(undefined4 *)(param_3 + 0x18) = 0x96;
    lVar5 = param_3;
    puVar1 = FUN_180001350();
    uVar4 = (undefined1)lVar5;
    local_28 = local_50;
    local_40 = 0;
    local_38 = 0;
    puVar2 = (undefined8 *)FUN_1800016b0(local_50);
    puVar2[2] = 0;
    puVar2[3] = 7;
    local_58[0] = 0;
    FUN_180001790((undefined2 *)puVar2,local_58);
    if ((ulonglong)puVar2[3] < 2) {
      FUN_18000f8f0((longlong)local_50,2,uVar4,&DAT_18006b298);
    }
    else {
      _Dst = puVar2;
      if (7 < (ulonglong)puVar2[3]) {
        _Dst = (undefined8 *)*puVar2;
      }
      puVar2[2] = 2;
      memmove(_Dst,&DAT_18006b298,4);
      local_58[0] = 0;
      FUN_180001790((undefined2 *)((longlong)_Dst + 4),local_58);
    }
    FUN_18000ed00((longlong)(puVar1 + 0x60),local_50);
    uVar3 = *(longlong *)(param_2 + 3) + 0x20 + *(longlong *)(param_2 + 5);
    if (0x7d00000000 < uVar3) {
      uVar3 = 0x7d00000000;
    }
    *(ulonglong *)(param_3 + 0x10) = uVar3;
  }
  __security_check_cookie(local_20 ^ (ulonglong)auStack_78);
  return;
}

