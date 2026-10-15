// Function: FUN_1800428b0
// Address: 1800428b0
// Size: 117 bytes


undefined8 * FUN_1800428b0(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0xffffffffffffffff;
  if (param_2 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0x10000;
    return param_1;
  }
  if ((undefined **)*param_2 == CRawFileCellTestStorageDevice::vftable) {
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    if (iVar1 < 1) {
      iVar1 = 0x200;
    }
    *(int *)(param_1 + 3) = iVar1 << 7;
    return param_1;
  }
  iVar1 = (*(code *)((undefined **)*param_2)[5])(param_2);
  *(int *)(param_1 + 3) = iVar1 << 7;
  return param_1;
}

