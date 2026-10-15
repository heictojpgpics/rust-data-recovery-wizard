// Function: FUN_180013900
// Address: 180013900
// Size: 24 bytes


void FUN_180013900(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x18);
  }
  return;
}

