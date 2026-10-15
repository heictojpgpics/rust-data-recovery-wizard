// Function: Unwind@1800612a0
// Address: 1800612a0
// Size: 41 bytes


void Unwind_1800612a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;
    FUN_180001630((longlong *)(param_2 + 0xd8));
  }
  return;
}

