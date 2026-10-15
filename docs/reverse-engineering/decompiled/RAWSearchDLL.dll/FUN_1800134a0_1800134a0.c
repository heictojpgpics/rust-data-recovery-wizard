// Function: FUN_1800134a0
// Address: 1800134a0
// Size: 24 bytes


void FUN_1800134a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x10);
  }
  return;
}

