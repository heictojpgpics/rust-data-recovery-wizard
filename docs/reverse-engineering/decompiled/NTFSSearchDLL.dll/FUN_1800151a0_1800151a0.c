// Function: FUN_1800151a0
// Address: 1800151a0
// Size: 17 bytes


undefined8 * FUN_1800151a0(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *param_3;
  return param_1;
}

