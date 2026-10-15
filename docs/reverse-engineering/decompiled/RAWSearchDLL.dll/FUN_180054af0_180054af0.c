// Function: FUN_180054af0
// Address: 180054af0
// Size: 283 bytes


undefined4 FUN_180054af0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  _Dst = *(void **)(lVar1 + 0x38);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)(**(code **)(param_1 + 0x30))
                             (*(undefined8 *)(param_1 + 0x40),
                              1 << ((byte)*(undefined4 *)(lVar1 + 0x28) & 0x1f),1);
    *(void **)(lVar1 + 0x38) = _Dst;
    if (_Dst == (void *)0x0) {
      return 1;
    }
  }
  uVar5 = *(uint *)(lVar1 + 0x2c);
  if (uVar5 == 0) {
    uVar5 = 1 << ((byte)*(undefined4 *)(lVar1 + 0x28) & 0x1f);
    *(uint *)(lVar1 + 0x2c) = uVar5;
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  uVar6 = param_2 - *(int *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (uVar6 < uVar5) {
    uVar5 = uVar5 - *(uint *)(lVar1 + 0x34);
    uVar3 = uVar6;
    if (uVar5 <= uVar6) {
      uVar3 = uVar5;
    }
    memcpy((void *)((ulonglong)*(uint *)(lVar1 + 0x34) + (longlong)_Dst),
           (void *)(lVar2 - (ulonglong)uVar6),(ulonglong)uVar3);
    uVar6 = uVar6 - uVar3;
    if (uVar6 == 0) {
      *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + uVar3;
      iVar4 = *(int *)(lVar1 + 0x34);
      if (*(int *)(lVar1 + 0x34) == *(int *)(lVar1 + 0x2c)) {
        iVar4 = 0;
      }
      *(int *)(lVar1 + 0x34) = iVar4;
      if (*(uint *)(lVar1 + 0x2c) <= *(uint *)(lVar1 + 0x30)) {
        return 0;
      }
      iVar4 = *(uint *)(lVar1 + 0x30) + uVar3;
    }
    else {
      memcpy(*(void **)(lVar1 + 0x38),(void *)(lVar2 - (ulonglong)uVar6),(ulonglong)uVar6);
      iVar4 = *(int *)(lVar1 + 0x2c);
      *(uint *)(lVar1 + 0x34) = uVar6;
    }
    *(int *)(lVar1 + 0x30) = iVar4;
  }
  else {
    memcpy(_Dst,(void *)(lVar2 - (ulonglong)uVar5),(ulonglong)uVar5);
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar1 + 0x2c);
    *(undefined4 *)(lVar1 + 0x34) = 0;
  }
  return 0;
}

