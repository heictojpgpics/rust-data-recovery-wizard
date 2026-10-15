// Function: Unwind@180062180
// Address: 180062180
// Size: 38 bytes


void Unwind_180062180(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    FUN_18001d8b0((void *)(param_2 + 0x40));
  }
  return;
}

