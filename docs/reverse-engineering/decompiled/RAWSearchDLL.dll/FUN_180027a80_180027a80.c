// Function: FUN_180027a80
// Address: 180027a80
// Size: 351 bytes


ulonglong FUN_180027a80(longlong param_1,void *param_2,longlong param_3,longlong param_4,
                       longlong param_5,longlong *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  void *_Memory;
  undefined **ppuVar4;
  ulonglong uVar5;
  
  if ((undefined **)*param_6 == CRawFileCellTestStorageDevice::vftable) {
    iVar2 = *(int *)((longlong)param_6 + 0xc);
    ppuVar4 = CRawFileCellTestStorageDevice::vftable;
    if (iVar2 < 1) {
      iVar2 = 0x200;
    }
  }
  else {
    iVar2 = (*(code *)((undefined **)*param_6)[5])(param_6);
    ppuVar4 = (undefined **)*param_6;
  }
  if (iVar2 == 0x200) {
    uVar3 = (*(code *)ppuVar4[1])
                      (param_6,param_2,*(int *)(param_1 + 0x10) * param_4 + param_3,param_5,0);
  }
  else {
    if (ppuVar4 == CRawFileCellTestStorageDevice::vftable) {
      iVar2 = *(int *)((longlong)param_6 + 0xc);
      ppuVar4 = CRawFileCellTestStorageDevice::vftable;
      if (iVar2 < 1) {
        iVar2 = 0x200;
      }
    }
    else {
      iVar2 = (*(code *)ppuVar4[5])(param_6);
      ppuVar4 = (undefined **)*param_6;
    }
    uVar5 = (ulonglong)(uint)((int)((iVar2 >> 0x1f & 0x1ffU) + iVar2) >> 9);
    if (ppuVar4 == CRawFileCellTestStorageDevice::vftable) {
      iVar2 = *(int *)((longlong)param_6 + 0xc);
      if (iVar2 < 1) {
        iVar2 = 0x200;
      }
    }
    else {
      iVar2 = (*(code *)ppuVar4[5])(param_6);
    }
    _Memory = (void *)FUN_1800020c0(iVar2 * param_5);
    uVar1 = (**(code **)(*param_6 + 8))
                      (param_6,_Memory,
                       (longlong)*(int *)(param_1 + 0x10) * (param_4 / (longlong)uVar5) + param_3,
                       param_5,0);
    uVar3 = (ulonglong)uVar1;
    memcpy(param_2,(void *)((ulonglong)(uint)((int)(param_4 % (longlong)uVar5) << 9) +
                           (longlong)_Memory),param_5 << 9);
    free(_Memory);
  }
  return uVar3;
}

