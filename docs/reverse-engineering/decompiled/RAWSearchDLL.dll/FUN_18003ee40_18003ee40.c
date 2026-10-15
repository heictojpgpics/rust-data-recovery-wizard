// Function: FUN_18003ee40
// Address: 18003ee40
// Size: 127 bytes


undefined8 * FUN_18003ee40(undefined8 *param_1,uint param_2)

{
  *param_1 = Brance::MXFAnalyser::MXFRawFileInfo::vftable;
  FUN_180007310(param_1 + 0x28);
  free((void *)param_1[0x28]);
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

