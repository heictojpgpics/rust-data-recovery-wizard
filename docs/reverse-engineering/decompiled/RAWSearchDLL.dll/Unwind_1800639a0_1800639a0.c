// Function: Unwind@1800639a0
// Address: 1800639a0
// Size: 46 bytes


void Unwind_1800639a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x100) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffeff;
    FUN_180001630((longlong *)(param_2 + 0x1f0));
  }
  return;
}

