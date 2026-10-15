// Function: Unwind@180060050
// Address: 180060050
// Size: 38 bytes


void Unwind_180060050(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180001630(*(longlong **)(param_2 + 0x48));
  }
  return;
}

