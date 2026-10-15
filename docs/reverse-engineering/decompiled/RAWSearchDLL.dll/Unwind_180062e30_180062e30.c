// Function: Unwind@180062e30
// Address: 180062e30
// Size: 38 bytes


void Unwind_180062e30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 8) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffff7;
    FUN_180001630((longlong *)(param_2 + 0x68));
  }
  return;
}

