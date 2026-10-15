// Function: FUN_180061180
// Address: 180061180
// Size: 36 bytes


undefined8 FUN_180061180(undefined8 *param_1,longlong param_2)

{
  *(undefined8 **)(param_2 + 0x38) = param_1;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)*param_1;
  *(undefined8 **)(param_2 + 0x40) = param_1;
  return 1;
}

