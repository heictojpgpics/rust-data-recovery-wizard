// Function: Unwind@180062bc0
// Address: 180062bc0
// Size: 38 bytes


void Unwind_180062bc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 1) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffe;
    FUN_180001630((longlong *)(param_2 + 0x78));
  }
  return;
}

