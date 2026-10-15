// Function: FUN_180052740
// Address: 180052740
// Size: 67 bytes


undefined8 * FUN_180052740(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CFileOggAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

