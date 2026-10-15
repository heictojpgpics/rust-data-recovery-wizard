// Function: FUN_180027120
// Address: 180027120
// Size: 67 bytes


undefined8 * FUN_180027120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = File3GPAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

