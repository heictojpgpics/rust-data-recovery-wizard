// Function: FUN_180017660
// Address: 180017660
// Size: 78 bytes


undefined8 * FUN_180017660(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileZIPAnalyser::vftable;
  param_1[2] = FileZIPAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

