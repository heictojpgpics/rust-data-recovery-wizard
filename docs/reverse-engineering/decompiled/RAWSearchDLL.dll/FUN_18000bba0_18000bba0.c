// Function: FUN_18000bba0
// Address: 18000bba0
// Size: 272 bytes


undefined8 * FUN_18000bba0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = IFileSystemSearchController::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xe;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xd] = 0;
  *param_1 = ICompleteFileSystemSearchController::vftable;
  param_1[0x16] = 0;
  *param_1 = CRAWSearchController::vftable;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x200;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  lVar1 = FUN_1800077d0(param_1,0,0);
  param_1[0x1f] = lVar1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x21] = 0;
  return param_1;
}

