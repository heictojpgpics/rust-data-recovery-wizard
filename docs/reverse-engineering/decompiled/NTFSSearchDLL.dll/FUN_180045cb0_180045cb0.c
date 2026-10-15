// Function: FUN_180045cb0
// Address: 180045cb0
// Size: 97 bytes


ulonglong FUN_180045cb0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = FUN_180045690(param_1);
  FUN_1800456c0(param_1);
  return *(ulonglong *)(param_1 + (ulonglong)uVar1 + 0x10) & 0xffffffffffff;
}

