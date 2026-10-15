// Function: Unwind@1800627a0
// Address: 1800627a0
// Size: 41 bytes


void Unwind_1800627a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 4) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffb;
    FUN_180001630(*(longlong **)(param_2 + 0x148));
  }
  return;
}

