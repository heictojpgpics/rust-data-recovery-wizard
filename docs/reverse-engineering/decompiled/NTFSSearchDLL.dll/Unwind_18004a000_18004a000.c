// Function: Unwind@18004a000
// Address: 18004a000
// Size: 41 bytes


void Unwind_18004a000(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    FUN_1800025f0((longlong *)(param_2 + 0x98));
  }
  return;
}

