// Function: FUN_18003d6c0
// Address: 18003d6c0
// Size: 396 bytes


void FUN_18003d6c0(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
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
  if (param_2 != 0) {
    if (param_4 == *(longlong *)(param_1 + 8)) {
      DAT_180096ef8 = param_4;
    }
    if (((*(ulonglong *)(param_1 + 0x110) != 0) &&
        ((ulonglong)(((param_4 - *(longlong *)(param_1 + 8)) + 1) * (longlong)param_3) <
         *(ulonglong *)(param_1 + 0x110))) ||
       (uVar1 = FUN_18003d850(param_1,param_2,param_3,param_4,param_5), (int)uVar1 != 0))
    goto LAB_18003d831;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x110);
      if ((ulonglong)(*(longlong *)(param_1 + 0x148) * 10) <=
          (ulonglong)((param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3)) {
        lVar3 = *(longlong *)(param_1 + 0x148);
      }
      *(longlong *)(param_1 + 0x10) = lVar3;
      uVar5 = 4;
      memset(local_138,0,0x104);
      uVar4 = 0xffffffffffffffff;
      do {
        _Size = uVar4 + 1;
        lVar3 = uVar4 + 1;
        uVar4 = _Size;
      } while (local_138[lVar3] != '\0');
      puVar2 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
      if ((ulonglong)puVar2[3] < _Size) {
        FUN_1800086f0(param_1 + 0x20,_Size,uVar5,local_138);
      }
      else {
        _Dst = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          _Dst = (undefined8 *)*puVar2;
        }
        puVar2[2] = _Size;
        memmove(_Dst,local_138,_Size);
        local_148[0] = 0;
        FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_148);
      }
      *(undefined4 *)(param_1 + 0x18) = 0x52;
    }
  }
  DAT_180096ef8 = 0;
LAB_18003d831:
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_178);
  return;
}

