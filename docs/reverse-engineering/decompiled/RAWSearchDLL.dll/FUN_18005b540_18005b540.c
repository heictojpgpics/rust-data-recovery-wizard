// Function: FUN_18005b540
// Address: 18005b540
// Size: 167 bytes


void FUN_18005b540(undefined8 *param_1)

{
  *param_1 = tinyxml2::XMLDocument::vftable;
  FUN_18005b5f0((longlong)param_1);
  FUN_18005bd60(param_1 + 0x51);
  FUN_18005c080(param_1 + 0x41);
  FUN_18005c430(param_1 + 0x31);
  FUN_18005c6f0(param_1 + 0x21);
  if ((undefined8 *)param_1[0x15] != param_1 + 0x16) {
    free((undefined8 *)param_1[0x15]);
  }
  if ((*(uint *)(param_1 + 0xf) & 0x200) != 0) {
    free((void *)param_1[0x10]);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_180059990(param_1);
  return;
}

