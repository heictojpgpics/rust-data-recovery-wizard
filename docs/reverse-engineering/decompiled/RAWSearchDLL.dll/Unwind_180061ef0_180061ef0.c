// Function: Unwind@180061ef0
// Address: 180061ef0
// Size: 38 bytes


void Unwind_180061ef0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_18001d8b0((void *)(param_2 + 0x38));
  }
  return;
}

