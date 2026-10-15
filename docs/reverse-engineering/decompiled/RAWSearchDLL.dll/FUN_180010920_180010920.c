// Function: FUN_180010920
// Address: 180010920
// Size: 52 bytes


undefined8 *
FUN_180010920(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800109c0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

