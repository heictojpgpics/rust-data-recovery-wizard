// Function: FUN_18000f820
// Address: 18000f820
// Size: 199 bytes


ulonglong FUN_18000f820(longlong param_1,ulonglong param_2,ulonglong param_3,char *param_4,
                       ulonglong param_5)

{
  char cVar1;
  int iVar2;
  void *_Buf1;
  longlong lVar3;
  
  if ((param_5 <= param_2) && (param_3 <= param_2 - param_5)) {
    if (param_5 == 0) {
      return param_3;
    }
    cVar1 = *param_4;
    lVar3 = (param_1 - param_5) + param_2;
    for (_Buf1 = memchr((void *)(param_1 + param_3),(int)cVar1,
                        (lVar3 + 1) - (longlong)(param_1 + param_3)); _Buf1 != (void *)0x0;
        _Buf1 = memchr((void *)((longlong)_Buf1 + 1),(int)cVar1,(lVar3 + 1) - ((longlong)_Buf1 + 1))
        ) {
      iVar2 = memcmp(_Buf1,param_4,param_5);
      if (iVar2 == 0) {
        return (longlong)_Buf1 - param_1;
      }
    }
  }
  return 0xffffffffffffffff;
}

