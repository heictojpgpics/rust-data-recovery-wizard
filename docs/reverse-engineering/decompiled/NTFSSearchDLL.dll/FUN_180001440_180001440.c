// Function: FUN_180001440
// Address: 180001440
// Size: 43 bytes


undefined8 * FUN_180001440(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0xe;
  *param_1 = IFileSystemSearchController::vftable;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xd] = 0;
  return param_1;
}

