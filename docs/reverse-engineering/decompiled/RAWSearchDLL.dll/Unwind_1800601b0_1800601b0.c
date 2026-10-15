// Function: Unwind@1800601b0
// Address: 1800601b0
// Size: 46 bytes


void Unwind_1800601b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x80) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffff7f;
    FUN_180001630((longlong *)(param_2 + 400));
  }
  return;
}

