// Function: FUN_180025b70
// Address: 180025b70
// Size: 67 bytes


undefined8 * FUN_180025b70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = RawFormat_xjq::MOBIAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

