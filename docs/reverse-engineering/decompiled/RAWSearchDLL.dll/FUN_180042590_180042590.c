// Function: FUN_180042590
// Address: 180042590
// Size: 47 bytes


longlong FUN_180042590(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[3];
  if (lVar1 == 0) {
    if ((undefined **)*param_1 == CRawFileCellTestStorageDevice::vftable) {
      return param_1[7];
    }
    lVar1 = (*(code *)((undefined **)*param_1)[3])();
  }
  return lVar1;
}

