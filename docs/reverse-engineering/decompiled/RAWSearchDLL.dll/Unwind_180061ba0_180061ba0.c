// Function: Unwind@180061ba0
// Address: 180061ba0
// Size: 38 bytes


void Unwind_180061ba0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 2) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffd;
    FUN_1800210a0((undefined8 *)(param_2 + 0x20));
  }
  return;
}

