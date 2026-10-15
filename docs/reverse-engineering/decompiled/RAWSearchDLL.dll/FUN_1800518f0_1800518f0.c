// Function: FUN_1800518f0
// Address: 1800518f0
// Size: 77 bytes


undefined8 * FUN_1800518f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileMPGAnalyser::vftable;
  DAT_180117f00 = 1;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

