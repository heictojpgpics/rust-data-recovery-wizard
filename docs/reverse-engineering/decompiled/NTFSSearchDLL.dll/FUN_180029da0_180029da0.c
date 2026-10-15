// Function: FUN_180029da0
// Address: 180029da0
// Size: 33 bytes


longlong FUN_180029da0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     ((ulonglong)*(uint *)(param_1 + 0x2c) <= (ulonglong)*(uint *)(param_1 + 0x28) - 0x58)) {
    return (ulonglong)*(uint *)(param_1 + 0x2c) + *(longlong *)(param_1 + 0x20);
  }
  return 0;
}

