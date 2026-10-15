// Function: FUN_180041e60
// Address: 180041e60
// Size: 67 bytes


undefined8 * FUN_180041e60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FilePSTAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

