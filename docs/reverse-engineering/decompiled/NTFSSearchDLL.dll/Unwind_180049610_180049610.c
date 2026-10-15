// Function: Unwind@180049610
// Address: 180049610
// Size: 38 bytes


void Unwind_180049610(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180005f30(*(longlong *)(param_2 + 0x40));
  }
  return;
}

