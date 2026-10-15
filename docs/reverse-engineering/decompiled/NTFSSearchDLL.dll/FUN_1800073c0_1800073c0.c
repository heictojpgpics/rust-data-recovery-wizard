// Function: FUN_1800073c0
// Address: 1800073c0
// Size: 159 bytes


undefined8 * FUN_1800073c0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_180040cb0(param_1 + 1);
  FUN_180040cb0(param_1 + 5);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined2 *)((longlong)param_1 + 0x1a) = *(undefined2 *)((longlong)param_2 + 0x1a);
  *param_1 = *param_2;
  FUN_1800407d0(param_1 + 1,param_2 + 1);
  param_1[4] = param_2[4];
  FUN_1800407d0(param_1 + 5,param_2 + 5);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_2 + 0x39);
  return param_1;
}

