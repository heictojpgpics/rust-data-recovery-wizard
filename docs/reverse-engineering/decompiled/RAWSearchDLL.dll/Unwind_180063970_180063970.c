// Function: Unwind@180063970
// Address: 180063970
// Size: 43 bytes


void Unwind_180063970(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x80) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffff7f;
    FUN_180001630((longlong *)(param_2 + 0x70));
  }
  return;
}

