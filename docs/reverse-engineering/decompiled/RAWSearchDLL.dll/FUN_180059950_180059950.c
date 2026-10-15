// Function: FUN_180059950
// Address: 180059950
// Size: 52 bytes


undefined8 * FUN_180059950(undefined8 *param_1,uint param_2)

{
  FUN_180059990(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

