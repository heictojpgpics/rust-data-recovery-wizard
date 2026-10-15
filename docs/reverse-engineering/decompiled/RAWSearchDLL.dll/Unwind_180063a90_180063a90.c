// Function: Unwind@180063a90
// Address: 180063a90
// Size: 46 bytes


void Unwind_180063a90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffdfff;
    FUN_180001630((longlong *)(param_2 + 0x150));
  }
  return;
}

