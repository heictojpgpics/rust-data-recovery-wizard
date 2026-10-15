// Function: Unwind@18004ad00
// Address: 18004ad00
// Size: 38 bytes


void Unwind_18004ad00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    FUN_1800025f0((longlong *)(param_2 + 0x50));
  }
  return;
}

