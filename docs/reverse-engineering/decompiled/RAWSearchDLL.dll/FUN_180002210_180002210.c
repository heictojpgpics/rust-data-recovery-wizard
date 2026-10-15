// Function: FUN_180002210
// Address: 180002210
// Size: 39 bytes


void FUN_180002210(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}

