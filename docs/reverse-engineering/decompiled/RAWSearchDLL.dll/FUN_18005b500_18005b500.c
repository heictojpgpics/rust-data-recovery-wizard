// Function: FUN_18005b500
// Address: 18005b500
// Size: 52 bytes


undefined8 * FUN_18005b500(undefined8 *param_1,uint param_2)

{
  FUN_18005b540(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

