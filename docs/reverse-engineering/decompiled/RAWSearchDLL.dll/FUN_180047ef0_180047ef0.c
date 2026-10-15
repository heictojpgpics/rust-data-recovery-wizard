// Function: FUN_180047ef0
// Address: 180047ef0
// Size: 122 bytes


undefined8 * FUN_180047ef0(undefined8 *param_1,uint param_2)

{
  *param_1 = FileMP3Analyser::vftable;
  DAT_180117f0c = 1;
  FUN_180001630(param_1 + 0xb);
  FUN_180001630(param_1 + 6);
  FUN_180001630(param_1 + 2);
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

