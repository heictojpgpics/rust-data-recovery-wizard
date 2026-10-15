// Function: Unwind@180061520
// Address: 180061520
// Size: 41 bytes


void Unwind_180061520(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    FUN_180001630((longlong *)(param_2 + 0x1d0));
  }
  return;
}

