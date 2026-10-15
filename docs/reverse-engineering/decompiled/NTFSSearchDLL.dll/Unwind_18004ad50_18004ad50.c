// Function: Unwind@18004ad50
// Address: 18004ad50
// Size: 38 bytes


void Unwind_18004ad50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    FUN_1800025f0((longlong *)(param_2 + 0x58));
  }
  return;
}

