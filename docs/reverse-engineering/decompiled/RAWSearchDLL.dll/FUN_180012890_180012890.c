// Function: FUN_180012890
// Address: 180012890
// Size: 78 bytes


undefined8 * FUN_180012890(undefined8 *param_1,uint param_2)

{
  *param_1 = RawSpeed::New3DSAnalyser::New3DSRawFileInfo::vftable;
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

