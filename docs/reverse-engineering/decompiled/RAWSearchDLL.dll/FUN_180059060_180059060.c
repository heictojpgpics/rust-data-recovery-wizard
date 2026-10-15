// Function: FUN_180059060
// Address: 180059060
// Size: 138 bytes


void FUN_180059060(uint *param_1,void *param_2)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  
  if ((*param_1 & 0x200) != 0) {
    free(*(void **)(param_1 + 2));
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (*(char *)(lVar1 + (longlong)param_2) != '\0');
  _Dst = (void *)FUN_1800020c0(lVar2 + 2);
  *(void **)(param_1 + 2) = _Dst;
  memcpy(_Dst,param_2,lVar2 + 2);
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 2) + lVar1;
  *param_1 = 0x200;
  return;
}

