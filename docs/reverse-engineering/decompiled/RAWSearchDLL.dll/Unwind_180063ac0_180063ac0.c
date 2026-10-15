// Function: Unwind@180063ac0
// Address: 180063ac0
// Size: 46 bytes


void Unwind_180063ac0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffbfff;
    FUN_180001630((longlong *)(param_2 + 0x130));
  }
  return;
}

