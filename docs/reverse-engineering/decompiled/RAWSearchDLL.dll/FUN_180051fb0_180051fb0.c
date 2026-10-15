// Function: FUN_180051fb0
// Address: 180051fb0
// Size: 67 bytes


undefined8 * FUN_180051fb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileCRWAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

