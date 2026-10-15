// Function: FUN_1800573e0
// Address: 1800573e0
// Size: 52 bytes


undefined8 *
FUN_1800573e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180057610(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

