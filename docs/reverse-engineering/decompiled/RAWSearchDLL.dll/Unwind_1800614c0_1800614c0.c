// Function: Unwind@1800614c0
// Address: 1800614c0
// Size: 38 bytes


void Unwind_1800614c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    FUN_1800015c0(*(longlong **)(param_2 + 0x40));
  }
  return;
}

