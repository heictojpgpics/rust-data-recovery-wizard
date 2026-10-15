// Function: FUN_1800202e0
// Address: 1800202e0
// Size: 75 bytes


undefined8 * FUN_1800202e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = RawFormat_xjq::CommonRawAnalyser::vftable;
  param_1[2] = 0;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

