// Function: FUN_180007370
// Address: 180007370
// Size: 78 bytes


undefined8 * FUN_180007370(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  FUN_180040cb0(param_1 + 1);
  *(undefined1 *)(param_1 + 3) = 2;
  *(undefined2 *)((longlong)param_1 + 0x1a) = 0;
  param_1[4] = 0;
  FUN_180040cb0(param_1 + 5);
  *(undefined2 *)(param_1 + 7) = 0;
  return param_1;
}

