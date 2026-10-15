// Function: FUN_18005c4b0
// Address: 18005c4b0
// Size: 548 bytes


undefined8 * FUN_18005c4b0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  size_t sVar6;
  void *_Dst;
  
  puVar5 = *(undefined8 **)(param_1 + 0x68);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_1800020c0(0xff0);
    iVar4 = *(int *)(param_1 + 100);
    if (*(int *)(param_1 + 0x60) < iVar4 + 1) {
      uVar3 = (iVar4 + 1) * 2;
      auVar2 = ZEXT816(8) * ZEXT416(uVar3);
      sVar6 = auVar2._0_8_;
      if (auVar2._8_8_ != 0) {
        sVar6 = 0xffffffffffffffff;
      }
      _Dst = (void *)FUN_1800020c0(sVar6);
      memcpy(_Dst,*(void **)(param_1 + 8),(longlong)*(int *)(param_1 + 100) << 3);
      if (*(void **)(param_1 + 8) != (void *)(param_1 + 0x10)) {
        free(*(void **)(param_1 + 8));
      }
      iVar4 = *(int *)(param_1 + 100);
      *(uint *)(param_1 + 0x60) = uVar3;
      *(void **)(param_1 + 8) = _Dst;
    }
    else {
      _Dst = *(void **)(param_1 + 8);
    }
    *(undefined8 **)((longlong)_Dst + (longlong)iVar4 * 8) = puVar5;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    puVar5[0xf] = puVar5 + 0x1e;
    *puVar5 = puVar5 + 0xf;
    puVar5[0x1e] = puVar5 + 0x2d;
    puVar5[0x2d] = puVar5 + 0x3c;
    puVar5[0x3c] = puVar5 + 0x4b;
    puVar5[0x4b] = puVar5 + 0x5a;
    puVar5[0x5a] = puVar5 + 0x69;
    puVar5[0x69] = puVar5 + 0x78;
    puVar5[0x78] = puVar5 + 0x87;
    puVar5[0x87] = puVar5 + 0x96;
    puVar5[0x96] = puVar5 + 0xa5;
    puVar5[0xa5] = puVar5 + 0xb4;
    puVar5[0xb4] = puVar5 + 0xc3;
    puVar5[0xc3] = puVar5 + 0xd2;
    puVar5[0xd2] = puVar5 + 0xe1;
    puVar5[0xe1] = puVar5 + 0xf0;
    puVar5[0xf0] = puVar5 + 0xff;
    puVar5[0xff] = puVar5 + 0x10e;
    puVar5[0x10e] = puVar5 + 0x11d;
    puVar5[0x11d] = puVar5 + 300;
    puVar5[300] = puVar5 + 0x13b;
    puVar5[0x13b] = puVar5 + 0x14a;
    puVar5[0x14a] = puVar5 + 0x159;
    puVar5[0x159] = puVar5 + 0x168;
    puVar5[0x168] = puVar5 + 0x177;
    puVar5[0x177] = puVar5 + 0x186;
    puVar5[0x186] = puVar5 + 0x195;
    puVar5[0x195] = puVar5 + 0x1a4;
    puVar5[0x1a4] = puVar5 + 0x1b3;
    puVar5[0x1b3] = puVar5 + 0x1c2;
    puVar5[0x1c2] = puVar5 + 0x1d1;
    puVar5[0x1d1] = puVar5 + 0x1e0;
    puVar5[0x1e0] = puVar5 + 0x1ef;
    puVar5[0x1ef] = 0;
    *(undefined8 **)(param_1 + 0x68) = puVar5;
  }
  uVar1 = *puVar5;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  if (*(int *)(param_1 + 0x78) < *(int *)(param_1 + 0x70)) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x70);
  }
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  return puVar5;
}

