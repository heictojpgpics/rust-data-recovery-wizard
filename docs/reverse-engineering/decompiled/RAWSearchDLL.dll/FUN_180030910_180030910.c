// Function: FUN_180030910
// Address: 180030910
// Size: 111 bytes


undefined8 * FUN_180030910(undefined8 *param_1,uint param_2)

{
  *param_1 = BruteForce::MP3Analyzer::MP3RawFileInfo::vftable;
  if ((void *)param_1[0x28] != (void *)0x0) {
    free((void *)param_1[0x28]);
    param_1[0x28] = 0;
  }
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

