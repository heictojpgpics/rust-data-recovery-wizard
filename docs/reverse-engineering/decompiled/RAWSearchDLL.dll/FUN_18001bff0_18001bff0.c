// Function: FUN_18001bff0
// Address: 18001bff0
// Size: 99 bytes


undefined8 * FUN_18001bff0(undefined8 *param_1,uint param_2)

{
  *param_1 = RawFormat_xjq::M1VAnalyser::M1VRawFileInfo::vftable;
  free((void *)param_1[0x25]);
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

