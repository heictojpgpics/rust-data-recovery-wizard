// Function: FUN_1800341c0
// Address: 1800341c0
// Size: 37 bytes


bool FUN_1800341c0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x40) ==
         *(longlong *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20);
}

