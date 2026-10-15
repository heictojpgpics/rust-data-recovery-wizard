// Function: FUN_18005cb00
// Address: 18005cb00
// Size: 154 bytes


void FUN_18005cb00(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  size_t sVar4;
  void *_Dst;
  
  iVar3 = *(int *)((longlong)param_1 + 0x5c);
  if (*(int *)(param_1 + 0xb) < iVar3 + 1) {
    uVar2 = (iVar3 + 1) * 2;
    auVar1 = ZEXT816(8) * ZEXT416(uVar2);
    sVar4 = auVar1._0_8_;
    if (auVar1._8_8_ != 0) {
      sVar4 = 0xffffffffffffffff;
    }
    _Dst = (void *)FUN_1800020c0(sVar4);
    memcpy(_Dst,(void *)*param_1,(longlong)*(int *)((longlong)param_1 + 0x5c) << 3);
    if ((undefined8 *)*param_1 != param_1 + 1) {
      free((undefined8 *)*param_1);
    }
    iVar3 = *(int *)((longlong)param_1 + 0x5c);
    *(uint *)(param_1 + 0xb) = uVar2;
    *param_1 = _Dst;
  }
  else {
    _Dst = (void *)*param_1;
  }
  *(undefined8 *)((longlong)_Dst + (longlong)iVar3 * 8) = param_2;
  *(int *)((longlong)param_1 + 0x5c) = *(int *)((longlong)param_1 + 0x5c) + 1;
  return;
}

