// Function: Unwind@180062e00
// Address: 180062e00
// Size: 38 bytes


void Unwind_180062e00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 4) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffb;
    FUN_180001630((longlong *)(param_2 + 0x68));
  }
  return;
}

