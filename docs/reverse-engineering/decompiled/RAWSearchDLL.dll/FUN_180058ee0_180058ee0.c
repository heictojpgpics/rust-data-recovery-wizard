// Function: FUN_180058ee0
// Address: 180058ee0
// Size: 62 bytes


undefined8 * FUN_180058ee0(undefined8 *param_1,uint param_2)

{
  *param_1 = tinyxml2::XMLText::vftable;
  FUN_180059990(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

