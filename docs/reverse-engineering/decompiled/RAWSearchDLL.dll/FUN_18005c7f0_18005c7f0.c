// Function: FUN_18005c7f0
// Address: 18005c7f0
// Size: 52 bytes


undefined8 * FUN_18005c7f0(undefined8 *param_1,uint param_2)

{
  FUN_18005c430(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

