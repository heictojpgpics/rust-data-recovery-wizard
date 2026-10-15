// Function: FUN_18001ae90
// Address: 18001ae90
// Size: 67 bytes


undefined8 * FUN_18001ae90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileFCPEVENTAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

