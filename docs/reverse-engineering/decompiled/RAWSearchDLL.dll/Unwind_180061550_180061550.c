// Function: Unwind@180061550
// Address: 180061550
// Size: 41 bytes


void Unwind_180061550(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
    FUN_180001630((longlong *)(param_2 + 0x1f0));
  }
  return;
}

