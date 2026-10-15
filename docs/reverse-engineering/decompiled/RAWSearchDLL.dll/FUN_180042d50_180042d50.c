// Function: FUN_180042d50
// Address: 180042d50
// Size: 67 bytes


undefined8 * FUN_180042d50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileHTMAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

