// Function: Unwind@180060180
// Address: 180060180
// Size: 41 bytes


void Unwind_180060180(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x40) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffffbf;
    FUN_180001630((longlong *)(param_2 + 0x250));
  }
  return;
}

