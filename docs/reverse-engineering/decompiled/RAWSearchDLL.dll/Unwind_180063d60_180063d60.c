// Function: Unwind@180063d60
// Address: 180063d60
// Size: 38 bytes


void Unwind_180063d60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180001630((longlong *)(param_2 + 0x50));
  }
  return;
}

