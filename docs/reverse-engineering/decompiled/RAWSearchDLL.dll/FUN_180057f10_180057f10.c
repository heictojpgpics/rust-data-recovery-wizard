// Function: FUN_180057f10
// Address: 180057f10
// Size: 172 bytes


undefined8 * FUN_180057f10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = neb::CJsonObject::vftable;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = param_2;
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = FUN_1800582c0();
  param_1[0xe] = uVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar1 = FUN_180001d30();
  param_1[0x11] = uVar1;
  param_1[0x13] = 0;
  return param_1;
}

