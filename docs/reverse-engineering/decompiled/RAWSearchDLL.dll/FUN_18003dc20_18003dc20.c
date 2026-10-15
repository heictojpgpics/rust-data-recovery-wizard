// Function: FUN_18003dc20
// Address: 18003dc20
// Size: 325 bytes


void FUN_18003dc20(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong _Size;
  undefined8 *_Dst;
  longlong lVar5;
  undefined1 auStack_178 [48];
  undefined1 local_148 [8];
  undefined8 local_140;
  char local_138 [272];
  ulonglong local_28;
  ulonglong uVar4;
  
  local_140 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_178;
  if (((param_2 != 0) &&
      (*(longlong *)(param_1 + 0xe0) + *(longlong *)(param_1 + 0xd8) <=
       (param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3)) &&
     (uVar2 = FUN_18003dd70(param_1,param_2,param_3,param_4), (int)uVar2 == 0)) {
    if ((ulonglong)((param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3) <
        (ulonglong)(*(longlong *)(param_1 + 0x130) * 10)) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x110);
    }
    else {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x130);
    }
    memset(local_138,0,0x104);
    lVar5 = param_1 + 0x20;
    uVar4 = 0xffffffffffffffff;
    do {
      _Size = uVar4 + 1;
      lVar1 = uVar4 + 1;
      uVar4 = _Size;
    } while (local_138[lVar1] != '\0');
    puVar3 = (undefined8 *)FUN_1800016b0(lVar5);
    if ((ulonglong)puVar3[3] < _Size) {
      FUN_1800086f0(lVar5,_Size,(char)lVar5,local_138);
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
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_178);
  return;
}

