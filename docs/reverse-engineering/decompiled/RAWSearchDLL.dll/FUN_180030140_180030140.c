// Function: FUN_180030140
// Address: 180030140
// Size: 78 bytes


undefined8 * FUN_180030140(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = BruteForce::CADTSAnalyser::vftable;
  param_1[2] = BruteForce::CADTSAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

