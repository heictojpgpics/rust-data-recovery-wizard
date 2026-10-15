// Function: FUN_180033920
// Address: 180033920
// Size: 159 bytes


undefined8 * FUN_180033920(undefined8 *param_1)

{
  FUN_18000b520(param_1);
  *param_1 = BruteForce::JpegAnalyzer::JpegRawFileInfo::vftable;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0x400;
  param_1[0x25] = 0x7800000;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  param_1[1] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x29) = 1;
  *(undefined4 *)((longlong)param_1 + 0x154) = 1;
  *(undefined4 *)(param_1 + 3) = 0x23;
  return param_1;
}

