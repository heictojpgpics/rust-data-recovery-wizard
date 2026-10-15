// Function: FUN_18004b0d0
// Address: 18004b0d0
// Size: 112 bytes


undefined8 * FUN_18004b0d0(undefined8 *param_1,uint param_2)

{
  *param_1 = FileJPGAnalyser::vftable;
  FUN_180001630(param_1 + 0xc);
  FUN_180001630(param_1 + 6);
  FUN_180001630(param_1 + 2);
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

