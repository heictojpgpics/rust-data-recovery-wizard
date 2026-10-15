// Function: Unwind@180061c50
// Address: 180061c50
// Size: 41 bytes


void Unwind_180061c50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_180021020(*(longlong **)(param_2 + 0x90));
  }
  return;
}

