// Function: Unwind@180060d00
// Address: 180060d00
// Size: 41 bytes


void Unwind_180060d00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 4) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfffffffb;
    FUN_180010f30((longlong *)(param_2 + 0xc0));
  }
  return;
}

