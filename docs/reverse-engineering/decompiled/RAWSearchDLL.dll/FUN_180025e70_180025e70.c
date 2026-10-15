// Function: FUN_180025e70
// Address: 180025e70
// Size: 112 bytes


undefined8 * FUN_180025e70(undefined8 *param_1,uint param_2)

{
  *param_1 = RawFormat_xjq::MOBIAnalyser::MOBIRawFileInfo::vftable;
  free((void *)param_1[0x28]);
  FUN_180001630(param_1 + 0x24);
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

