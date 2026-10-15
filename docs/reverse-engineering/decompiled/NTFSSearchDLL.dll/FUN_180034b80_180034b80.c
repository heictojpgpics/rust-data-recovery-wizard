// Function: FUN_180034b80
// Address: 180034b80
// Size: 152 bytes


undefined8 * FUN_180034b80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_180003c20(param_1,(longlong *)0x0,(longlong *)0x0);
  *param_1 = uVar1;
  FUN_180011670(param_1 + 2);
  param_1[4] = 0;
  param_1[5] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return param_1;
}

