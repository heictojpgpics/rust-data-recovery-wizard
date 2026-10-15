// Function: FUN_18003f2a0
// Address: 18003f2a0
// Size: 233 bytes


void FUN_18003f2a0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong _Size;
  undefined8 *_Dst;
  undefined1 uVar4;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  char local_128 [272];
  ulonglong local_18;
  ulonglong uVar3;
  
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_158;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x110);
  uVar4 = 4;
  memset(local_128,0,0x104);
  uVar3 = 0xffffffffffffffff;
  do {
    _Size = uVar3 + 1;
    lVar1 = uVar3 + 1;
    uVar3 = _Size;
  } while (local_128[lVar1] != '\0');
  puVar2 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
  if ((ulonglong)puVar2[3] < _Size) {
    FUN_1800086f0(param_1 + 0x20,_Size,uVar4,local_128);
  }
  else {
    _Dst = puVar2;
    if (0xf < (ulonglong)puVar2[3]) {
      _Dst = (undefined8 *)*puVar2;
    }
    puVar2[2] = _Size;
    memmove(_Dst,local_128,_Size);
    local_138[0] = 0;
    FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_138);
  }
  *(undefined4 *)(param_1 + 0x18) = 0x78;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}

