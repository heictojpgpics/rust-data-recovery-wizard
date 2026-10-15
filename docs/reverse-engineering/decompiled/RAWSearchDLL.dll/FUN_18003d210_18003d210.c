// Function: FUN_18003d210
// Address: 18003d210
// Size: 371 bytes


void FUN_18003d210(longlong param_1,void *param_2,uint param_3,longlong param_4,longlong *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong _Size;
  ulonglong uVar4;
  undefined8 *_Dst;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [8];
  undefined8 local_140;
  char local_138 [272];
  ulonglong local_28;
  
  local_140 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStackY_178;
  if ((param_2 != (void *)0x0) &&
     (lVar3 = (param_4 - *(longlong *)(param_1 + 8)) * (longlong)(int)param_3,
     *(longlong *)(param_1 + 0xe0) + *(longlong *)(param_1 + 0xd8) <= lVar3)) {
    if (lVar3 < *(longlong *)(param_1 + 0x150)) {
      uVar2 = FUN_18003d390(param_1,param_2,param_3,param_4,param_5);
      if ((int)uVar2 != 0) goto LAB_18003d369;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x148);
      memset(local_138,0,0x104);
      uVar4 = 0xffffffffffffffff;
      do {
        _Size = uVar4 + 1;
        lVar3 = uVar4 + 1;
        uVar4 = _Size;
      } while (local_138[lVar3] != '\0');
    }
    else {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x150);
      memset(local_138,0,0x104);
      uVar4 = 0xffffffffffffffff;
      do {
        _Size = uVar4 + 1;
        lVar3 = uVar4 + 1;
        uVar4 = _Size;
      } while (local_138[lVar3] != '\0');
    }
    lVar3 = param_1 + 0x20;
    puVar1 = (undefined8 *)FUN_1800016b0(lVar3);
    if ((ulonglong)puVar1[3] < _Size) {
      FUN_1800086f0(lVar3,_Size,(char)lVar3,local_138);
    }
    else {
      _Dst = puVar1;
      if (0xf < (ulonglong)puVar1[3]) {
        _Dst = (undefined8 *)*puVar1;
      }
      puVar1[2] = _Size;
      memmove(_Dst,local_138,_Size);
      local_148[0] = 0;
      FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_148);
    }
  }
LAB_18003d369:
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_178);
  return;
}

