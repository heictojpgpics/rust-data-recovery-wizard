// Function: FUN_1800138b0
// Address: 1800138b0
// Size: 78 bytes


undefined8 * FUN_1800138b0(undefined8 *param_1,uint param_2)

{
  *param_1 = RawSpeed::TARAnalyser::TARRawFileInfo::vftable;
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

