// Function: Unwind@1800627d0
// Address: 1800627d0
// Size: 41 bytes


void Unwind_1800627d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 8) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffff7;
    FUN_180001630(*(longlong **)(param_2 + 0x148));
  }
  return;
}

