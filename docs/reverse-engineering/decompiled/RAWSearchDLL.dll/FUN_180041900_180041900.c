// Function: FUN_180041900
// Address: 180041900
// Size: 78 bytes


undefined8 * FUN_180041900(undefined8 *param_1,uint param_2)

{
  *param_1 = Brance::SVGAnalyser::SVGRawFileInfo::vftable;
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

