// Function: Unwind@18005fbd0
// Address: 18005fbd0
// Size: 38 bytes


void Unwind_18005fbd0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 4) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffb;
    FUN_180001630(*(longlong **)(param_2 + 0x40));
  }
  return;
}

