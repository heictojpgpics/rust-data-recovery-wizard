// Function: Unwind@180061b60
// Address: 180061b60
// Size: 38 bytes


void Unwind_180061b60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffe;
    FUN_1800210c0((undefined8 *)(param_2 + 0x20));
  }
  return;
}

