// Function: FUN_18000ef50
// Address: 18000ef50
// Size: 67 bytes


undefined8 * FUN_18000ef50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AEPAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

