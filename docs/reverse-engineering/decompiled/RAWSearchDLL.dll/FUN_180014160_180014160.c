// Function: FUN_180014160
// Address: 180014160
// Size: 337 bytes


void FUN_180014160(longlong param_1,void *param_2,int param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong _Size;
  undefined8 *_Dst;
  undefined1 uVar4;
  longlong lVar5;
  undefined1 auStack_178 [32];
  undefined1 local_158 [16];
  char local_148 [272];
  ulonglong local_38;
  ulonglong uVar3;
  
  local_38 = DAT_18008f028 ^ (ulonglong)auStack_178;
  lVar5 = (param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3;
  if ((lVar5 + *(longlong *)(param_1 + 0x118) * -5 == 0 ||
       lVar5 < *(longlong *)(param_1 + 0x118) * 5) && (0xf < *(int *)(param_5 + 0x14))) {
    iVar1 = FUN_180042b30(param_2,param_3);
    uVar4 = 4;
    memset(local_148,0,0x104);
    uVar3 = 0xffffffffffffffff;
    do {
      _Size = uVar3 + 1;
      lVar5 = uVar3 + 1;
      uVar3 = _Size;
    } while (local_148[lVar5] != '\0');
    puVar2 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
    if ((ulonglong)puVar2[3] < _Size) {
      FUN_1800086f0(param_1 + 0x20,_Size,uVar4,local_148);
    }
    else {
      _Dst = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        _Dst = (undefined8 *)*puVar2;
      }
      puVar2[2] = _Size;
      memmove(_Dst,local_148,_Size);
      local_158[0] = 0;
      FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_158);
    }
    *(longlong *)(param_1 + 0x10) =
         (param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3 + (longlong)iVar1;
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_178);
  return;
}

