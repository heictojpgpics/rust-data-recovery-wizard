// Function: Unwind@180062da0
// Address: 180062da0
// Size: 38 bytes


void Unwind_180062da0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    FUN_180001630((longlong *)(param_2 + 0x68));
  }
  return;
}

