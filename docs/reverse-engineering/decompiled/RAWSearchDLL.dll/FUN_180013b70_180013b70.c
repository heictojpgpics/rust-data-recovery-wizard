// Function: FUN_180013b70
// Address: 180013b70
// Size: 347 bytes


void FUN_180013b70(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong _Size;
  undefined8 *_Dst;
  undefined1 uVar5;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [8];
  undefined8 local_140;
  char local_138 [272];
  ulonglong local_28;
  ulonglong uVar4;
  
  local_140 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStackY_178;
  DAT_18008f040 = 0;
  if ((((param_2 != 0) && (0x1ff < param_3)) && (-1 < param_4)) &&
     (((*(ulonglong *)(param_1 + 0x118) <=
        (ulonglong)((param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3) &&
       (uVar2 = FUN_180013d80(param_1,param_2,param_3,param_4,param_5), (int)uVar2 == 0)) &&
      (*(longlong *)(param_1 + 0x118) != 0)))) {
    uVar5 = 4;
    memset(local_138,0,0x104);
    uVar4 = 0xffffffffffffffff;
    do {
      _Size = uVar4 + 1;
      lVar1 = uVar4 + 1;
      uVar4 = _Size;
    } while (local_138[lVar1] != '\0');
    puVar3 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
    if ((ulonglong)puVar3[3] < _Size) {
      FUN_1800086f0(param_1 + 0x20,_Size,uVar5,local_138);
    }
    else {
      _Dst = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        _Dst = (undefined8 *)*puVar3;
      }
      puVar3[2] = _Size;
      memmove(_Dst,local_138,_Size);
      local_148[0] = 0;
      FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_148);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x118) + 0x400;
    *(undefined4 *)(param_1 + 0x18) = 0x3f;
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_178);
  return;
}

