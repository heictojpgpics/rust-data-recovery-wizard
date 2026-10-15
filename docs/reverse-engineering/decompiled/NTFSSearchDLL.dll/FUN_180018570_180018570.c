// Function: FUN_180018570
// Address: 180018570
// Size: 184 bytes


undefined8 * FUN_180018570(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_1[4] = 0;
  param_1[5] = 0;
  lVar1 = FUN_180012fd0();
  param_1[4] = lVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar1 = FUN_180012fd0();
  param_1[6] = lVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar1 = FUN_180012fd0();
  param_1[0xd] = lVar1;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 2) = 8;
  uVar2 = FUN_18002be40(0x100000);
  param_1[0xb] = uVar2;
  param_1[0xc] = 0;
  return param_1;
}

