// Function: Unwind@180063a60
// Address: 180063a60
// Size: 46 bytes


void Unwind_180063a60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffefff;
    FUN_180001630((longlong *)(param_2 + 0x170));
  }
  return;
}

