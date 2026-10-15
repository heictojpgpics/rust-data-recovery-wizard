// Function: FUN_1800300e0
// Address: 1800300e0
// Size: 85 bytes


undefined8 * FUN_1800300e0(undefined8 *param_1,uint param_2)

{
  *param_1 = BruteForce::CADTSRawFileInfo::vftable;
  DAT_180117f05 = 1;
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

