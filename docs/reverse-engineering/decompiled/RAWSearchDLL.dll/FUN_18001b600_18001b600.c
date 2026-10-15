// Function: FUN_18001b600
// Address: 18001b600
// Size: 67 bytes


undefined8 * FUN_18001b600(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileLowDocAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

