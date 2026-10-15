// Function: FUN_18005c100
// Address: 18005c100
// Size: 718 bytes


undefined8 * FUN_18005c100(longlong param_1)

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
    puVar5[10] = puVar5 + 0x14;
    *puVar5 = puVar5 + 10;
    puVar5[0x14] = puVar5 + 0x1e;
    puVar5[0x1e] = puVar5 + 0x28;
    puVar5[0x28] = puVar5 + 0x32;
    puVar5[0x32] = puVar5 + 0x3c;
    puVar5[0x3c] = puVar5 + 0x46;
    puVar5[0x46] = puVar5 + 0x50;
    puVar5[0x50] = puVar5 + 0x5a;
    puVar5[0x5a] = puVar5 + 100;
    puVar5[100] = puVar5 + 0x6e;
    puVar5[0x6e] = puVar5 + 0x78;
    puVar5[0x78] = puVar5 + 0x82;
    puVar5[0x82] = puVar5 + 0x8c;
    puVar5[0x8c] = puVar5 + 0x96;
    puVar5[0x96] = puVar5 + 0xa0;
    puVar5[0xa0] = puVar5 + 0xaa;
    puVar5[0xaa] = puVar5 + 0xb4;
    puVar5[0xb4] = puVar5 + 0xbe;
    puVar5[0xbe] = puVar5 + 200;
    puVar5[200] = puVar5 + 0xd2;
    puVar5[0xd2] = puVar5 + 0xdc;
    puVar5[0xdc] = puVar5 + 0xe6;
    puVar5[0xe6] = puVar5 + 0xf0;
    puVar5[0xf0] = puVar5 + 0xfa;
    puVar5[0xfa] = puVar5 + 0x104;
    puVar5[0x104] = puVar5 + 0x10e;
    puVar5[0x10e] = puVar5 + 0x118;
    puVar5[0x118] = puVar5 + 0x122;
    puVar5[0x122] = puVar5 + 300;
    puVar5[300] = puVar5 + 0x136;
    puVar5[0x136] = puVar5 + 0x140;
    puVar5[0x140] = puVar5 + 0x14a;
    puVar5[0x14a] = puVar5 + 0x154;
    puVar5[0x154] = puVar5 + 0x15e;
    puVar5[0x15e] = puVar5 + 0x168;
    puVar5[0x168] = puVar5 + 0x172;
    puVar5[0x172] = puVar5 + 0x17c;
    puVar5[0x17c] = puVar5 + 0x186;
    puVar5[0x186] = puVar5 + 400;
    puVar5[400] = puVar5 + 0x19a;
    puVar5[0x19a] = puVar5 + 0x1a4;
    puVar5[0x1a4] = puVar5 + 0x1ae;
    puVar5[0x1ae] = puVar5 + 0x1b8;
    puVar5[0x1b8] = puVar5 + 0x1c2;
    puVar5[0x1c2] = puVar5 + 0x1cc;
    puVar5[0x1cc] = puVar5 + 0x1d6;
    puVar5[0x1d6] = puVar5 + 0x1e0;
    puVar5[0x1ea] = puVar5 + 500;
    puVar5[0x1e0] = puVar5 + 0x1ea;
    puVar5[500] = 0;
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

