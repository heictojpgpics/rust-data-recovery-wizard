// Function: FUN_18002f2d0
// Address: 18002f2d0
// Size: 78 bytes


undefined8 * FUN_18002f2d0(undefined8 *param_1,uint param_2)

{
  *param_1 = BruteForce::CDWGRawInfo::vftable;
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

