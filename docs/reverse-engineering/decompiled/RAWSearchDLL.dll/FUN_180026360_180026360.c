// Function: FUN_180026360
// Address: 180026360
// Size: 67 bytes


undefined8 * FUN_180026360(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileICOAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

