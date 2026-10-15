// Function: Unwind@1800615a0
// Address: 1800615a0
// Size: 38 bytes


void Unwind_1800615a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    FUN_18001e940(*(longlong **)(param_2 + 0x60));
  }
  return;
}

