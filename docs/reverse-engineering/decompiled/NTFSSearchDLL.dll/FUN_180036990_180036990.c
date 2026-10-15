// Function: FUN_180036990
// Address: 180036990
// Size: 69 bytes


undefined8 * FUN_180036990(undefined8 *param_1)

{
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
    param_1[5] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  free(param_1);
  return param_1;
}

