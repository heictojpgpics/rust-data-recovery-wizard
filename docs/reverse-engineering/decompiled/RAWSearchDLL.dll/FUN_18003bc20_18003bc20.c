// Function: FUN_18003bc20
// Address: 18003bc20
// Size: 67 bytes


undefined8 * FUN_18003bc20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = FilePSDAnalyser::vftable;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

