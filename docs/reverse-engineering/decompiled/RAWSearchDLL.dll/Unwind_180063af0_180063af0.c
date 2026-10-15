// Function: Unwind@180063af0
// Address: 180063af0
// Size: 46 bytes


void Unwind_180063af0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffff7fff;
    FUN_180001630((longlong *)(param_2 + 0x110));
  }
  return;
}

