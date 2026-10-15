// Function: Unwind@180061270
// Address: 180061270
// Size: 41 bytes


void Unwind_180061270(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;
    FUN_180001630((longlong *)(param_2 + 0xd8));
  }
  return;
}

