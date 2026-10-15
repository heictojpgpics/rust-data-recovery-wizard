// Function: FUN_180040d10
// Address: 180040d10
// Size: 78 bytes


undefined8 * FUN_180040d10(undefined8 *param_1,uint param_2)

{
  *param_1 = Brance::RIFFAnalyser::RIFFFileInfo::vftable;
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

