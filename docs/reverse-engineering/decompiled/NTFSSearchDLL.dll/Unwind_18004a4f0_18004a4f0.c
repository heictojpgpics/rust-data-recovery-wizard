// Function: Unwind@18004a4f0
// Address: 18004a4f0
// Size: 38 bytes


void Unwind_18004a4f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800025f0(*(longlong **)(param_2 + 0x48));
  }
  return;
}

