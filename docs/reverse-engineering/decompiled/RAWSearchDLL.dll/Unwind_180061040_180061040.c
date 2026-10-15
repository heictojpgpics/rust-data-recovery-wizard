// Function: Unwind@180061040
// Address: 180061040
// Size: 41 bytes


void Unwind_180061040(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x3c) & 2) != 0) {
    *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) & 0xfffffffd;
    FUN_180001630((longlong *)(param_2 + 0xa0));
  }
  return;
}

