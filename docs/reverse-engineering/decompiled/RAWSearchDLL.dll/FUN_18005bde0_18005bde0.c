// Function: FUN_18005bde0
// Address: 18005bde0
// Size: 568 bytes


undefined8 * FUN_18005bde0(longlong param_1)

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
    puVar5 = (undefined8 *)FUN_1800020c0(0xfc0);
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
    puVar5[0xe] = puVar5 + 0x1c;
    *puVar5 = puVar5 + 0xe;
    puVar5[0x1c] = puVar5 + 0x2a;
    puVar5[0x2a] = puVar5 + 0x38;
    puVar5[0x38] = puVar5 + 0x46;
    puVar5[0x46] = puVar5 + 0x54;
    puVar5[0x54] = puVar5 + 0x62;
    puVar5[0x62] = puVar5 + 0x70;
    puVar5[0x70] = puVar5 + 0x7e;
    puVar5[0x7e] = puVar5 + 0x8c;
    puVar5[0x8c] = puVar5 + 0x9a;
    puVar5[0x9a] = puVar5 + 0xa8;
    puVar5[0xa8] = puVar5 + 0xb6;
    puVar5[0xb6] = puVar5 + 0xc4;
    puVar5[0xc4] = puVar5 + 0xd2;
    puVar5[0xd2] = puVar5 + 0xe0;
    puVar5[0xe0] = puVar5 + 0xee;
    puVar5[0xee] = puVar5 + 0xfc;
    puVar5[0xfc] = puVar5 + 0x10a;
    puVar5[0x10a] = puVar5 + 0x118;
    puVar5[0x118] = puVar5 + 0x126;
    puVar5[0x126] = puVar5 + 0x134;
    puVar5[0x134] = puVar5 + 0x142;
    puVar5[0x142] = puVar5 + 0x150;
    puVar5[0x150] = puVar5 + 0x15e;
    puVar5[0x15e] = puVar5 + 0x16c;
    puVar5[0x16c] = puVar5 + 0x17a;
    puVar5[0x17a] = puVar5 + 0x188;
    puVar5[0x188] = puVar5 + 0x196;
    puVar5[0x196] = puVar5 + 0x1a4;
    puVar5[0x1a4] = puVar5 + 0x1b2;
    puVar5[0x1b2] = puVar5 + 0x1c0;
    puVar5[0x1c0] = puVar5 + 0x1ce;
    puVar5[0x1ce] = puVar5 + 0x1dc;
    puVar5[0x1dc] = puVar5 + 0x1ea;
    puVar5[0x1ea] = 0;
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

