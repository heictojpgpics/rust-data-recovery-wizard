// Function: FUN_18002e260
// Address: 18002e260
// Size: 67 bytes


undefined8 * FUN_18002e260(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = BruteForce::CFCPEvtAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

