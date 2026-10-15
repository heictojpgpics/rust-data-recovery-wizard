// Function: FUN_180058f20
// Address: 180058f20
// Size: 130 bytes


undefined8 * FUN_180058f20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = tinyxml2::XMLAttribute::vftable;
  if ((*(uint *)(param_1 + 4) & 0x200) != 0) {
    free((void *)param_1[5]);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if ((*(uint *)(param_1 + 1) & 0x200) != 0) {
    free((void *)param_1[2]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

