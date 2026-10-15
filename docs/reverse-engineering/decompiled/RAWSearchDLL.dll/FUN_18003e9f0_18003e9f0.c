// Function: FUN_18003e9f0
// Address: 18003e9f0
// Size: 388 bytes


void FUN_18003e9f0(longlong param_1,char *param_2,uint param_3,longlong param_4,longlong *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong _Size;
  longlong lVar4;
  longlong lVar5;
  undefined8 *_Dst;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [8];
  undefined8 local_140;
  char local_138 [272];
  ulonglong local_28;
  ulonglong uVar3;
  
  local_140 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStackY_178;
  if ((((param_2 != (char *)0x0) && (0x1ff < (int)param_3)) && (-1 < param_4)) &&
     (((lVar4 = (longlong)(int)param_3,
       *(ulonglong *)(param_1 + 0x110) <=
       (ulonglong)(((param_4 - *(longlong *)(param_1 + 8)) + 1) * lVar4) &&
       (iVar1 = FUN_18003eb80(param_1,param_2,param_3,param_4,param_5), iVar1 == 0)) &&
      (*(longlong *)(param_1 + 0x110) != 0)))) {
    lVar5 = param_4 - *(longlong *)(param_1 + 8);
    if ((ulonglong)(lVar4 * lVar5) < (ulonglong)(*(longlong *)(param_1 + 0x128) * 0x14)) {
      *(longlong *)(param_1 + 0x10) = (lVar5 + 1) * lVar4;
    }
    else {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x128);
    }
    memset(local_138,0,0x104);
    *(uint *)(param_1 + 0x18) = 0x5f - (uint)(*(int *)(param_1 + 0x118) != 0);
    lVar4 = param_1 + 0x20;
    uVar3 = 0xffffffffffffffff;
    do {
      _Size = uVar3 + 1;
      lVar5 = uVar3 + 1;
      uVar3 = _Size;
    } while (local_138[lVar5] != '\0');
    puVar2 = (undefined8 *)FUN_1800016b0(lVar4);
    if ((ulonglong)puVar2[3] < _Size) {
      FUN_1800086f0(lVar4,_Size,(char)lVar4,local_138);
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
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_178);
  return;
}

