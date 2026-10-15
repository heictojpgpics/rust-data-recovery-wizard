// Function: FUN_180031130
// Address: 180031130
// Size: 52 bytes


undefined8 * FUN_180031130(undefined8 *param_1,uint param_2)

{
  FUN_180031170(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

