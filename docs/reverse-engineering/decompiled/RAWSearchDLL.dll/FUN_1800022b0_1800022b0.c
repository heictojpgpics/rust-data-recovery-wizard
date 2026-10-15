// Function: FUN_1800022b0
// Address: 1800022b0
// Size: 62 bytes


undefined8 * FUN_1800022b0(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}

