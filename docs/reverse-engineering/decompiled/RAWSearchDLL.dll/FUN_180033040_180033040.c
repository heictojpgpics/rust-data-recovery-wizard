// Function: FUN_180033040
// Address: 180033040
// Size: 67 bytes


undefined8 * FUN_180033040(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = BruteForce::CAPEAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

