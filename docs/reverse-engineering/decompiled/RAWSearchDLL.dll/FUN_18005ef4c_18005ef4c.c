// Function: FUN_18005ef4c
// Address: 18005ef4c
// Size: 43 bytes


undefined8 * FUN_18005ef4c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

