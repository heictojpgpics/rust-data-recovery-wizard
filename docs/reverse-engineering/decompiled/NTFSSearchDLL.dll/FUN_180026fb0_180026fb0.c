// Function: FUN_180026fb0
// Address: 180026fb0
// Size: 52 bytes


undefined8 * FUN_180026fb0(undefined8 *param_1,ulonglong param_2,void *param_3,undefined8 param_4)

{
  FUN_180026ff0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

