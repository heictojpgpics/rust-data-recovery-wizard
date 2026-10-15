// Function: FUN_180026480
// Address: 180026480
// Size: 67 bytes


undefined8 * FUN_180026480(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileWMFAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

