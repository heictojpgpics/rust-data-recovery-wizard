// Function: FUN_180012030
// Address: 180012030
// Size: 67 bytes


undefined8 * FUN_180012030(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileEMFAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

