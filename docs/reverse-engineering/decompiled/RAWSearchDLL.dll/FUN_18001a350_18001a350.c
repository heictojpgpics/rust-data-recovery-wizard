// Function: FUN_18001a350
// Address: 18001a350
// Size: 279 bytes


undefined8 FUN_18001a350(undefined8 param_1,void *param_2,longlong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *_Dst;
  undefined1 uVar4;
  undefined2 local_res20 [4];
  ushort local_28 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  uVar4 = 0xb;
  iVar1 = _memicmp(param_2,"{\"diagram\":",0xb);
  if (iVar1 != 0) {
    return 0;
  }
  *(undefined4 *)(param_3 + 0x18) = 0x8b;
  puVar2 = FUN_180001350();
  local_18 = 0;
  local_10 = 0;
  puVar3 = (undefined8 *)FUN_1800016b0(local_28);
  puVar3[2] = 0;
  puVar3[3] = 7;
  local_res20[0] = 0;
  FUN_180001790((undefined2 *)puVar3,local_res20);
  if ((ulonglong)puVar3[3] < 3) {
    FUN_18000f8f0((longlong)local_28,3,uVar4,&DAT_180067e00);
  }
  else {
    _Dst = puVar3;
    if (7 < (ulonglong)puVar3[3]) {
      _Dst = (undefined8 *)*puVar3;
    }
    puVar3[2] = 3;
    memmove(_Dst,&DAT_180067e00,6);
    local_res20[0] = 0;
    FUN_180001790((undefined2 *)((longlong)_Dst + 6),local_res20);
  }
  FUN_18000ed00((longlong)(puVar2 + 0x60),local_28);
  return 1;
}

