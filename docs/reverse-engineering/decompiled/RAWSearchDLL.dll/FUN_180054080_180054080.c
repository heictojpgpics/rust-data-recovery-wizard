// Function: FUN_180054080
// Address: 180054080
// Size: 67 bytes


undefined8 * FUN_180054080(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FileSVGAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

