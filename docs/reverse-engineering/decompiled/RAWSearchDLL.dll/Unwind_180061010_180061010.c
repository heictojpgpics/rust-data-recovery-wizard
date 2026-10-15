// Function: Unwind@180061010
// Address: 180061010
// Size: 38 bytes


void Unwind_180061010(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x3c) & 1) != 0) {
    *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) & 0xfffffffe;
    FUN_180001630(*(longlong **)(param_2 + 0x50));
  }
  return;
}

