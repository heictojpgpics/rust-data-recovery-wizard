// Function: FUN_180016020
// Address: 180016020
// Size: 52 bytes


undefined8 * FUN_180016020(undefined8 *param_1,ulonglong param_2,void *param_3,undefined8 param_4)

{
  FUN_180016060(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

