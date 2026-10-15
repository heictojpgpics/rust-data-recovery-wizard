// Function: FUN_180016c20
// Address: 180016c20
// Size: 67 bytes


undefined8 * FUN_180016c20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileMKVAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

