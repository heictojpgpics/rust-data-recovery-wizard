// Function: FUN_180044400
// Address: 180044400
// Size: 67 bytes


undefined8 * FUN_180044400(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileMIDAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

