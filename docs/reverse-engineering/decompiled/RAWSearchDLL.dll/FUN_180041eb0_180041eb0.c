// Function: FUN_180041eb0
// Address: 180041eb0
// Size: 67 bytes


undefined8 FUN_180041eb0(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = 0x100000;
  if (*(char *)(param_2 + 10) == '\x0e') {
    *(ulonglong *)(param_3 + 0x10) = (ulonglong)*(uint *)(param_2 + 0xa8);
    *(undefined4 *)(param_3 + 0x18) = 0x38;
    return 1;
  }
  if (*(char *)(param_2 + 10) == '\x17') {
    uVar1 = (ulonglong)*(uint *)(param_2 + 0xb8);
  }
  *(ulonglong *)(param_3 + 0x10) = uVar1;
  *(undefined4 *)(param_3 + 0x18) = 0x38;
  return 1;
}

