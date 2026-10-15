// Function: FUN_180002650
// Address: 180002650
// Size: 23 bytes


undefined1 * FUN_180002650(undefined1 *param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = 0;
  return param_1;
}

