// Function: Unwind@180060d40
// Address: 180060d40
// Size: 41 bytes


void Unwind_180060d40(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 8) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfffffff7;
    FUN_180010f30((longlong *)(param_2 + 0xe8));
  }
  return;
}

