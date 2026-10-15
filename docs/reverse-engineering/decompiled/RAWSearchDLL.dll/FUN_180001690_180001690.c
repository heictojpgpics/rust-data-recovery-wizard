// Function: FUN_180001690
// Address: 180001690
// Size: 23 bytes


undefined1 * FUN_180001690(undefined1 *param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = 0;
  return param_1;
}

