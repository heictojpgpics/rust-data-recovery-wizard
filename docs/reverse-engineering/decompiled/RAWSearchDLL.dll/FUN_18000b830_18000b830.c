// Function: FUN_18000b830
// Address: 18000b830
// Size: 52 bytes


undefined8 * FUN_18000b830(undefined8 *param_1,uint param_2)

{
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

