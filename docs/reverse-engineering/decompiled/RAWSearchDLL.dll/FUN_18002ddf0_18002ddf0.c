// Function: FUN_18002ddf0
// Address: 18002ddf0
// Size: 78 bytes


undefined8 * FUN_18002ddf0(undefined8 *param_1,uint param_2)

{
  *param_1 = BruteForce::CFCPEvtFileInfo::vftable;
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

