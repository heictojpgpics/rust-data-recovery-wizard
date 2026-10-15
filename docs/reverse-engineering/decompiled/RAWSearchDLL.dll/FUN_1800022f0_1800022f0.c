// Function: FUN_1800022f0
// Address: 1800022f0
// Size: 83 bytes


undefined8 * FUN_1800022f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

