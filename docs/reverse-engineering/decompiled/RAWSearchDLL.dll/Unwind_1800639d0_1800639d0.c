// Function: Unwind@1800639d0
// Address: 1800639d0
// Size: 46 bytes


void Unwind_1800639d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x200) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffdff;
    FUN_180001630((longlong *)(param_2 + 0x1d0));
  }
  return;
}

