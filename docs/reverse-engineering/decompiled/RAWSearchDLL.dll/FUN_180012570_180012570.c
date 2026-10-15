// Function: FUN_180012570
// Address: 180012570
// Size: 333 bytes


void FUN_180012570(longlong param_1,void *param_2,int param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong _Size;
  undefined1 uVar5;
  undefined8 *_Dst;
  undefined1 auStack_178 [32];
  undefined1 local_158 [16];
  char local_148 [272];
  ulonglong local_38;
  ulonglong uVar4;
  
  local_38 = DAT_18008f028 ^ (ulonglong)auStack_178;
  if ((7 < *(int *)(param_5 + 0x14)) &&
     (*(longlong *)(param_1 + 0xe0) + *(longlong *)(param_1 + 0xd8) <=
      (param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3)) {
    iVar2 = FUN_180042b30(param_2,param_3);
    uVar5 = 4;
    memset(local_148,0,0x104);
    uVar4 = 0xffffffffffffffff;
    do {
      _Size = uVar4 + 1;
      lVar1 = uVar4 + 1;
      uVar4 = _Size;
    } while (local_148[lVar1] != '\0');
    puVar3 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
    if ((ulonglong)puVar3[3] < _Size) {
      FUN_1800086f0(param_1 + 0x20,_Size,uVar5,local_148);
    }
    else {
      _Dst = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        _Dst = (undefined8 *)*puVar3;
      }
      puVar3[2] = _Size;
      memmove(_Dst,local_148,_Size);
      local_158[0] = 0;
      FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_158);
    }
    *(longlong *)(param_1 + 0x10) =
         (param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3 + (longlong)iVar2;
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_178);
  return;
}

