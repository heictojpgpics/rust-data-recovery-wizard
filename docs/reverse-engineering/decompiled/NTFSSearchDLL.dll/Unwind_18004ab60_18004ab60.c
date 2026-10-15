// Function: Unwind@18004ab60
// Address: 18004ab60
// Size: 38 bytes


void Unwind_18004ab60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 2) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffd;
    FUN_1800025f0(*(longlong **)(param_2 + 0x30));
  }
  return;
}

