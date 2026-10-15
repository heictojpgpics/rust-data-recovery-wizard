// Function: FUN_180002350
// Address: 180002350
// Size: 44 bytes


void FUN_180002350(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}

