// Function: FUN_180017f40
// Address: 180017f40
// Size: 94 bytes


undefined8 * FUN_180017f40(undefined8 *param_1,uint param_2)

{
  *param_1 = FileZIPAnalyser::ZIPRawFileInfo::vftable;
  FUN_180018020((longlong *)((longlong)param_1 + 0x151));
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

