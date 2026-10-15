// Function: FUN_180003100
// Address: 180003100
// Size: 131 bytes


void FUN_180003100(longlong param_1,char *param_2)

{
  ushort uVar1;
  longlong lVar2;
  void *_Dst;
  
  if (param_2 != (char *)0x0) {
    if (*(void **)(param_1 + 0x11) != (void *)0x0) {
      free(*(void **)(param_1 + 0x11));
      *(undefined8 *)(param_1 + 0x11) = 0;
    }
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != '\0');
    uVar1 = (short)lVar2 + 1;
    *(ushort *)(param_1 + 0x19) = uVar1;
    _Dst = (void *)FUN_18002be40((ulonglong)uVar1 + 1);
    *(void **)(param_1 + 0x11) = _Dst;
    memset(_Dst,0,(ulonglong)*(ushort *)(param_1 + 0x19) + 1);
    strcpy_s(*(char **)(param_1 + 0x11),(ulonglong)*(ushort *)(param_1 + 0x19) + 1,param_2);
  }
  return;
}

