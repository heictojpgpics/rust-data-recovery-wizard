// Function: FUN_18003d670
// Address: 18003d670
// Size: 78 bytes


undefined8 * FUN_18003d670(undefined8 *param_1,uint param_2)

{
  *param_1 = Brance::OGGAnalyser::OGGRawFileInfo::vftable;
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

