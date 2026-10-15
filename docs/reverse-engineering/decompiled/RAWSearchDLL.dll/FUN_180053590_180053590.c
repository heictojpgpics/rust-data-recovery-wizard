// Function: FUN_180053590
// Address: 180053590
// Size: 22 bytes


undefined8 FUN_180053590(undefined8 param_1,longlong param_2,longlong param_3)

{
  if (param_2 == 0) {
    return 0;
  }
  *(undefined4 *)(param_3 + 0x18) = 0x6c;
  return 1;
}

