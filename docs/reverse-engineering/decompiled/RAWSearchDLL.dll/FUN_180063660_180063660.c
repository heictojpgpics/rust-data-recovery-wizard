// Function: FUN_180063660
// Address: 180063660
// Size: 36 bytes


undefined8 FUN_180063660(undefined8 *param_1,longlong param_2)

{
  *(undefined8 **)(param_2 + 0x58) = param_1;
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)*param_1;
  *(undefined8 **)(param_2 + 0x60) = param_1;
  return 1;
}

