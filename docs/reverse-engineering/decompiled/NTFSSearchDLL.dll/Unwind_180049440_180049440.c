// Function: Unwind@180049440
// Address: 180049440
// Size: 41 bytes


void Unwind_180049440(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800228e0(param_2 + 0xa0);
  }
  return;
}

