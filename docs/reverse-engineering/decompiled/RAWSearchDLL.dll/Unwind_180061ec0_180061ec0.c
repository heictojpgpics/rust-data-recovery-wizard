// Function: Unwind@180061ec0
// Address: 180061ec0
// Size: 38 bytes


void Unwind_180061ec0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18001d8b0((void *)(param_2 + 0x38));
  }
  return;
}

