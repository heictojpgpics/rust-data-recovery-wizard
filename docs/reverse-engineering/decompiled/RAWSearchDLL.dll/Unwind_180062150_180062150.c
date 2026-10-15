// Function: Unwind@180062150
// Address: 180062150
// Size: 38 bytes


void Unwind_180062150(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18001d8b0((void *)(param_2 + 0x40));
  }
  return;
}

