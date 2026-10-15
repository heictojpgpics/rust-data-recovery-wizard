// Function: FUN_180032230
// Address: 180032230
// Size: 150 bytes


void FUN_180032230(longlong param_1,void *param_2)

{
  uint uVar1;
  longlong lVar2;
  void *_Dst;
  
  if (*(void **)(param_1 + 0x1d8) != (void *)0x0) {
    free(*(void **)(param_1 + 0x1d8));
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  if (param_2 != (void *)0x0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)((longlong)param_2 + lVar2) != '\0');
    uVar1 = (uint)lVar2;
    if (400 < uVar1) {
      uVar1 = 400;
    }
    *(uint *)(param_1 + 0x1e0) = uVar1;
    _Dst = (void *)FUN_18002be40((ulonglong)(uVar1 + 1));
    *(void **)(param_1 + 0x1d8) = _Dst;
    memcpy(_Dst,param_2,(ulonglong)*(uint *)(param_1 + 0x1e0));
    *(undefined1 *)((ulonglong)*(uint *)(param_1 + 0x1e0) + *(longlong *)(param_1 + 0x1d8)) = 0;
  }
  return;
}

