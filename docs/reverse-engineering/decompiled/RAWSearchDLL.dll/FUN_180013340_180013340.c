// Function: FUN_180013340
// Address: 180013340
// Size: 67 bytes


undefined8 * FUN_180013340(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = RawSpeed::CPTAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

