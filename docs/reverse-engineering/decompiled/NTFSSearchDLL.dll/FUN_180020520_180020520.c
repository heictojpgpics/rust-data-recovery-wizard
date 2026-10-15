// Function: FUN_180020520
// Address: 180020520
// Size: 244 bytes


ulonglong FUN_180020520(undefined8 param_1,char *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  size_t _Size;
  void *_Buf1;
  ulonglong uVar5;
  char *pcVar6;
  
  pcVar6 = param_2;
  puVar4 = (undefined8 *)FUN_180002680(param_1);
  _Size = FUN_180002cc0((longlong)pcVar6);
  puVar1 = puVar4 + 2;
  if (0xf < (ulonglong)puVar4[3]) {
    puVar4 = (undefined8 *)*puVar4;
  }
  if ((_Size <= *puVar1) && (uVar5 = *puVar1 - _Size, param_3 <= uVar5)) {
    if (_Size == 0) {
      return param_3;
    }
    cVar2 = *pcVar6;
    _Buf1 = memchr((void *)((longlong)puVar4 + param_3),(int)cVar2,
                   (longlong)puVar4 + ((uVar5 + 1) - (longlong)((longlong)puVar4 + param_3)));
    while( true ) {
      if (_Buf1 == (void *)0x0) {
        return 0xffffffffffffffff;
      }
      iVar3 = memcmp(_Buf1,param_2,_Size);
      if (iVar3 == 0) break;
      _Buf1 = memchr((void *)((longlong)_Buf1 + 1),(int)cVar2,
                     (longlong)puVar4 + ((uVar5 + 1) - ((longlong)_Buf1 + 1)));
    }
    return (longlong)_Buf1 - (longlong)puVar4;
  }
  return 0xffffffffffffffff;
}

