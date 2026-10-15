// Function: FUN_18005b790
// Address: 18005b790
// Size: 223 bytes


int FUN_18005b790(longlong *param_1,char *param_2)

{
  int iVar1;
  void *_Dst;
  size_t _Size;
  size_t sVar2;
  
  FUN_18005b5f0((longlong)param_1);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    FUN_18005b870((longlong)param_1,0xd,0,0);
    iVar1 = *(int *)((longlong)param_1 + 0x6c);
  }
  else {
    _Size = 0xffffffffffffffff;
    do {
      sVar2 = _Size;
      _Size = sVar2 + 1;
    } while (param_2[_Size] != '\0');
    _Dst = (void *)FUN_1800020c0(sVar2 + 2);
    param_1[0x13] = (longlong)_Dst;
    memcpy(_Dst,param_2,_Size);
    *(undefined1 *)(_Size + param_1[0x13]) = 0;
    FUN_18005b9a0(param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x6c);
    if (iVar1 != 0) {
      FUN_180059a70((longlong)param_1);
      FUN_18005c3e0((longlong)(param_1 + 0x21));
      FUN_18005c3e0((longlong)(param_1 + 0x31));
      FUN_18005c030((longlong)(param_1 + 0x41));
      FUN_18005bd10((longlong)(param_1 + 0x51));
      return *(int *)((longlong)param_1 + 0x6c);
    }
  }
  return iVar1;
}

