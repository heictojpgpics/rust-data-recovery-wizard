// Function: FUN_18003b820
// Address: 18003b820
// Size: 67 bytes


undefined8 * FUN_18003b820(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileBMPAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

