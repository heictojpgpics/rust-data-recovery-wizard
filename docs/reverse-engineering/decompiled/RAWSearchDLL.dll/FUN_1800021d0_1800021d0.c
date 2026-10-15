// Function: FUN_1800021d0
// Address: 1800021d0
// Size: 64 bytes


undefined8 * FUN_1800021d0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}

