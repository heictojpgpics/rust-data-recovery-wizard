// Function: FUN_180019de0
// Address: 180019de0
// Size: 67 bytes


undefined8 * FUN_180019de0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CHFPAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

