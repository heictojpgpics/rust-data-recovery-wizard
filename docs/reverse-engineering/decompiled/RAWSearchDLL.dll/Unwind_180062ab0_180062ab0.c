// Function: Unwind@180062ab0
// Address: 180062ab0
// Size: 38 bytes


void Unwind_180062ab0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;
    FUN_180001630(*(longlong **)(param_2 + 0x60));
  }
  return;
}

