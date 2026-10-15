// Function: FUN_180046550
// Address: 180046550
// Size: 208 bytes


undefined8 FUN_180046550(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  void *_Dst;
  
  if ((((param_2 != 0) && (uVar3 = *(uint *)(param_3 + 0x16), uVar3 < 0x2800)) &&
      (uVar4 = *(uint *)(param_3 + 0x12), uVar4 < 0x2800)) &&
     (((uVar4 != 0 && (uVar3 != 0)) && (*(ushort *)(param_3 + 8) < 0xb)))) {
    puVar1 = (ushort *)(param_3 + 0x1c);
    puVar2 = (ushort *)(param_3 + 0x1a);
    _Dst = *(void **)(param_1 + 0x110);
    if (_Dst != (void *)0x0) {
      if (uVar3 == uVar4) {
        param_3 = (ulonglong)uVar3;
        memcpy(_Dst,(void *)((ulonglong)*puVar1 + 0x1e + (ulonglong)*puVar2 + param_2),param_3);
      }
      else {
        _Dst = (void *)((ulonglong)*puVar1 + (ulonglong)*puVar2 + 0x1e);
        uVar5 = FUN_180046630(param_1,param_2,param_3,(longlong)_Dst);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
      }
      FUN_1800467b0(param_1,param_4,param_3,_Dst);
      return 1;
    }
  }
  return 0;
}

