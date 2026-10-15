// Function: Unwind@180063900
// Address: 180063900
// Size: 38 bytes


void Unwind_180063900(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;
    FUN_180001630(*(longlong **)(param_2 + 0x50));
  }
  return;
}

