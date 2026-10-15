// Function: FUN_180027650
// Address: 180027650
// Size: 67 bytes


undefined8 * FUN_180027650(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileOLEAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

