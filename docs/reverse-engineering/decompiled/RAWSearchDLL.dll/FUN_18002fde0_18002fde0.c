// Function: FUN_18002fde0
// Address: 18002fde0
// Size: 67 bytes


undefined8 * FUN_18002fde0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = BruteForce::CDWGAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

