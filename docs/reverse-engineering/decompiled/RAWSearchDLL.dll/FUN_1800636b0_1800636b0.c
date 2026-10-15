// Function: FUN_1800636b0
// Address: 1800636b0
// Size: 36 bytes


undefined8 FUN_1800636b0(undefined8 *param_1,longlong param_2)

{
  *(undefined8 **)(param_2 + 0x28) = param_1;
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)*param_1;
  *(undefined8 **)(param_2 + 0x30) = param_1;
  return 1;
}

