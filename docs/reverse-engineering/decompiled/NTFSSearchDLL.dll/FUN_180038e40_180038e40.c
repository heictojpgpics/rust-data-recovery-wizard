// Function: FUN_180038e40
// Address: 180038e40
// Size: 120 bytes


undefined8 * FUN_180038e40(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = FUN_180013230(param_1,0,0);
  param_1[1] = lVar1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}

