// Function: FUN_18002e370
// Address: 18002e370
// Size: 59 bytes


undefined8 * FUN_18002e370(undefined8 *param_1,uint param_2)

{
  FUN_180043aa0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

