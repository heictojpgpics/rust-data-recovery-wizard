// Function: FUN_180015b10
// Address: 180015b10
// Size: 78 bytes


undefined8 * FUN_180015b10(undefined8 *param_1,uint param_2)

{
  *param_1 = RawSpeed::SITAnalyser::SITRawFileInfo::vftable;
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

