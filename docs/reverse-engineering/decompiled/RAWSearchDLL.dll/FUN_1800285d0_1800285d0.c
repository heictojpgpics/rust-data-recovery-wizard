// Function: FUN_1800285d0
// Address: 1800285d0
// Size: 94 bytes


undefined8 * FUN_1800285d0(undefined8 *param_1,uint param_2)

{
  *param_1 = FileOLEAnalyser::OleRawFileInfo::vftable;
  FUN_180018020(param_1 + 0x22);
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

