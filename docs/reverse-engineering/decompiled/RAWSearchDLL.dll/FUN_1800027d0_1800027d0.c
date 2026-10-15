// Function: FUN_1800027d0
// Address: 1800027d0
// Size: 9 bytes


longlong FUN_1800027d0(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  UNLOCK();
  return param_1 + 0x10;
}

