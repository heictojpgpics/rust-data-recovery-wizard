// Function: FUN_18004e440
// Address: 18004e440
// Size: 115 bytes


undefined8 * FUN_18004e440(undefined8 *param_1,uint param_2)

{
  *param_1 = FileTIFAnalyser::vftable;
  FUN_180001630(param_1 + 0x14);
  FUN_180001630(param_1 + 0xf);
  FUN_180001630(param_1 + 0xb);
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

