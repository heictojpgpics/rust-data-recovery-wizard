// Function: FUN_180042f50
// Address: 180042f50
// Size: 67 bytes


undefined8 * FUN_180042f50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = File3DSAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

