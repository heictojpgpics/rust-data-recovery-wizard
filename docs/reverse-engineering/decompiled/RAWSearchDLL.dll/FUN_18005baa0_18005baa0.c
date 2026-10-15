// Function: FUN_18005baa0
// Address: 18005baa0
// Size: 598 bytes


undefined8 * FUN_18005baa0(longlong param_1)

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
    puVar5 = (undefined8 *)FUN_1800020c0(0xfd8);
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
    puVar5[0xd] = puVar5 + 0x1a;
    *puVar5 = puVar5 + 0xd;
    puVar5[0x1a] = puVar5 + 0x27;
    puVar5[0x27] = puVar5 + 0x34;
    puVar5[0x34] = puVar5 + 0x41;
    puVar5[0x41] = puVar5 + 0x4e;
    puVar5[0x4e] = puVar5 + 0x5b;
    puVar5[0x5b] = puVar5 + 0x68;
    puVar5[0x68] = puVar5 + 0x75;
    puVar5[0x75] = puVar5 + 0x82;
    puVar5[0x82] = puVar5 + 0x8f;
    puVar5[0x8f] = puVar5 + 0x9c;
    puVar5[0x9c] = puVar5 + 0xa9;
    puVar5[0xa9] = puVar5 + 0xb6;
    puVar5[0xb6] = puVar5 + 0xc3;
    puVar5[0xc3] = puVar5 + 0xd0;
    puVar5[0xd0] = puVar5 + 0xdd;
    puVar5[0xdd] = puVar5 + 0xea;
    puVar5[0xea] = puVar5 + 0xf7;
    puVar5[0xf7] = puVar5 + 0x104;
    puVar5[0x104] = puVar5 + 0x111;
    puVar5[0x111] = puVar5 + 0x11e;
    puVar5[0x11e] = puVar5 + 299;
    puVar5[299] = puVar5 + 0x138;
    puVar5[0x138] = puVar5 + 0x145;
    puVar5[0x145] = puVar5 + 0x152;
    puVar5[0x152] = puVar5 + 0x15f;
    puVar5[0x15f] = puVar5 + 0x16c;
    puVar5[0x16c] = puVar5 + 0x179;
    puVar5[0x179] = puVar5 + 0x186;
    puVar5[0x186] = puVar5 + 0x193;
    puVar5[0x193] = puVar5 + 0x1a0;
    puVar5[0x1a0] = puVar5 + 0x1ad;
    puVar5[0x1ad] = puVar5 + 0x1ba;
    puVar5[0x1ba] = puVar5 + 0x1c7;
    puVar5[0x1c7] = puVar5 + 0x1d4;
    puVar5[0x1e1] = puVar5 + 0x1ee;
    puVar5[0x1d4] = puVar5 + 0x1e1;
    puVar5[0x1ee] = 0;
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

