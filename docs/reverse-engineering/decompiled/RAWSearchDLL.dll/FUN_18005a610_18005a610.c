// Function: FUN_18005a610
// Address: 18005a610
// Size: 62 bytes


undefined8 * FUN_18005a610(undefined8 *param_1,uint param_2)

{
  *param_1 = tinyxml2::XMLDeclaration::vftable;
  FUN_180059990(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

