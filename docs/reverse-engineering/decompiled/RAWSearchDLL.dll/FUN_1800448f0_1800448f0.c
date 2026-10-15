// Function: FUN_1800448f0
// Address: 1800448f0
// Size: 67 bytes


undefined8 * FUN_1800448f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileSITAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

