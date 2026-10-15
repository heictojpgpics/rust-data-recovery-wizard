// Function: Unwind@180063b30
// Address: 180063b30
// Size: 41 bytes


void Unwind_180063b30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    FUN_180001630((longlong *)(param_2 + 200));
  }
  return;
}

