// Function: Unwind@180060300
// Address: 180060300
// Size: 38 bytes


void Unwind_180060300(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180001630(*(longlong **)(param_2 + 0x40));
  }
  return;
}

