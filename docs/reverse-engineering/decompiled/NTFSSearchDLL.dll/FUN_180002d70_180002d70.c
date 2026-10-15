// Function: FUN_180002d70
// Address: 180002d70
// Size: 43 bytes


undefined8 * FUN_180002d70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IFileProperties::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

