// Function: FUN_18002e830
// Address: 18002e830
// Size: 95 bytes


undefined8 * FUN_18002e830(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = BruteForce::CMTSAnalyser::vftable;
  param_1[2] = BruteForce::CMTSAnalyser::vftable;
  DAT_18008f044 = 0xffffffff;
  DAT_18008f065 = 1;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

