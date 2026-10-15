// Function: Unwind@18005fba0
// Address: 18005fba0
// Size: 38 bytes


void Unwind_18005fba0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 2) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffd;
    FUN_180001630((longlong *)(param_2 + 0x68));
  }
  return;
}

