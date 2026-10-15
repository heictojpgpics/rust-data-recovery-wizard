// Function: Unwind@180063a30
// Address: 180063a30
// Size: 46 bytes


void Unwind_180063a30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x800) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffff7ff;
    FUN_180001630((longlong *)(param_2 + 400));
  }
  return;
}

