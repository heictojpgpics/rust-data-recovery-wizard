// Function: FUN_180040110
// Address: 180040110
// Size: 78 bytes


undefined8 * FUN_180040110(undefined8 *param_1,uint param_2)

{
  *param_1 = Brance::X3FAnalyser::X3FRawFileInfo::vftable;
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

