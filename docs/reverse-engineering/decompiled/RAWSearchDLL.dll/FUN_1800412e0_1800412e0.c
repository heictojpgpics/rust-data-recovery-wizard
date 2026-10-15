// Function: FUN_1800412e0
// Address: 1800412e0
// Size: 341 bytes


void FUN_1800412e0(longlong param_1,int *param_2,int param_3,longlong param_4,longlong *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong _Size;
  undefined8 *_Dst;
  longlong lVar5;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [8];
  undefined8 local_140;
  char local_138 [272];
  ulonglong local_28;
  ulonglong uVar4;
  
  local_140 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStackY_178;
  if (((param_2 != (int *)0x0) &&
      (*(longlong *)(param_1 + 0xe0) + *(longlong *)(param_1 + 0xd8) <=
       (param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3)) &&
     (uVar2 = FUN_180041440(param_1,param_2,param_3,param_4,param_5), (int)uVar2 == 0)) {
    if ((param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3 <
        *(longlong *)(param_1 + 0x118) * 10) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x110);
    }
    else {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x118);
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
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_178);
  return;
}

