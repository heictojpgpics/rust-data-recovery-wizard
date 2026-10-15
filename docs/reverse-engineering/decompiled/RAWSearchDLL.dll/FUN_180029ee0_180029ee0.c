// Function: FUN_180029ee0
// Address: 180029ee0
// Size: 67 bytes


undefined8 * FUN_180029ee0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = BruteForce::CFH11Analyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

