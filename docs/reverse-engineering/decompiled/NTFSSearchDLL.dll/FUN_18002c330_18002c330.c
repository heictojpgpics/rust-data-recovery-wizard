// Function: FUN_18002c330
// Address: 18002c330
// Size: 93 bytes


undefined8 * FUN_18002c330(undefined8 *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x1c) = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_180019e50(param_1 + 6,&DAT_180072b9c);
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x5f400000;
  return param_1;
}

