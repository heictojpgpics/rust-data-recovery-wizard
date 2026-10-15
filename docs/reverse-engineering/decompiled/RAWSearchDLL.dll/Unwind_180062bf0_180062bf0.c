// Function: Unwind@180062bf0
// Address: 180062bf0
// Size: 38 bytes


void Unwind_180062bf0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 2) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffd;
    FUN_180001630((longlong *)(param_2 + 0x78));
  }
  return;
}

