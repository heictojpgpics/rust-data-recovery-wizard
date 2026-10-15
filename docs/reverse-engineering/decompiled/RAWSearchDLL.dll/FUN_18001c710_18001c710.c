// Function: FUN_18001c710
// Address: 18001c710
// Size: 78 bytes


undefined8 * FUN_18001c710(undefined8 *param_1,uint param_2)

{
  *param_1 = RawFormat_xjq::JP2Analyser::JP2RawFileInfo::vftable;
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

