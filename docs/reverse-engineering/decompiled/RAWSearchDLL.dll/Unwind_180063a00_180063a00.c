// Function: Unwind@180063a00
// Address: 180063a00
// Size: 46 bytes


void Unwind_180063a00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x400) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffbff;
    FUN_180001630((longlong *)(param_2 + 0x1b0));
  }
  return;
}

