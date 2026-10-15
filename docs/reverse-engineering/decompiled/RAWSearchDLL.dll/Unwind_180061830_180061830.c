// Function: Unwind@180061830
// Address: 180061830
// Size: 38 bytes


void Unwind_180061830(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    thunk_FUN_1800211b0(*(longlong **)(param_2 + 0x48));
  }
  return;
}

