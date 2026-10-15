// Function: FUN_180043110
// Address: 180043110
// Size: 67 bytes


undefined8 * FUN_180043110(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileRARAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

