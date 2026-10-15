// Function: FUN_180053540
// Address: 180053540
// Size: 67 bytes


undefined8 * FUN_180053540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileX3FAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

