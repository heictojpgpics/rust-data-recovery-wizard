// Function: FUN_180026690
// Address: 180026690
// Size: 67 bytes


undefined8 * FUN_180026690(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = C7ZIPAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

