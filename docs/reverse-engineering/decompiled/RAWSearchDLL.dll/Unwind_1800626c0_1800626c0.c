// Function: Unwind@1800626c0
// Address: 1800626c0
// Size: 38 bytes


void Unwind_1800626c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;
    FUN_180001630(*(longlong **)(param_2 + 0x58));
  }
  return;
}

