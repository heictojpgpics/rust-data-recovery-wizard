// Function: Unwind@1800494d0
// Address: 1800494d0
// Size: 41 bytes


void Unwind_1800494d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800117b0(*(longlong **)(param_2 + 0x88));
  }
  return;
}

