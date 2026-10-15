// Function: FUN_180033f70
// Address: 180033f70
// Size: 52 bytes


undefined8 * FUN_180033f70(undefined8 *param_1,uint param_2)

{
  FUN_180033fb0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

