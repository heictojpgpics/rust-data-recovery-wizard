// Function: FUN_18002a700
// Address: 18002a700
// Size: 107 bytes


undefined8 * FUN_18002a700(undefined8 *param_1,uint param_2)

{
  *param_1 = BruteForce::MovAnalyzer::MovRawFileInfo::vftable;
  FUN_180001630(param_1 + 0x2b);
  FUN_180001630(param_1 + 0x27);
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

