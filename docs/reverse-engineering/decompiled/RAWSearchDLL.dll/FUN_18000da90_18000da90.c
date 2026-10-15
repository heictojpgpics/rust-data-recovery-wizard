// Function: FUN_18000da90
// Address: 18000da90
// Size: 17 bytes


bool FUN_18000da90(longlong param_1)

{
  return **(longlong **)(param_1 + 8) == *(longlong *)(param_1 + 0x10);
}

