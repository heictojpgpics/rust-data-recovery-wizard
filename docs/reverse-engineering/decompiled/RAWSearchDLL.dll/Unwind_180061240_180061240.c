// Function: Unwind@180061240
// Address: 180061240
// Size: 41 bytes


void Unwind_180061240(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;
    FUN_180001630(*(longlong **)(param_2 + 0x88));
  }
  return;
}

