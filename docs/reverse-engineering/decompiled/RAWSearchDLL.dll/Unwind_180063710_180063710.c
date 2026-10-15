// Function: Unwind@180063710
// Address: 180063710
// Size: 38 bytes


void Unwind_180063710(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    FUN_180001630((longlong *)(param_2 + 0x78));
  }
  return;
}

