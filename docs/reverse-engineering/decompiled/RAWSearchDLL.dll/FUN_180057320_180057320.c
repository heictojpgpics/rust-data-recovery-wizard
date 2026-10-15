// Function: FUN_180057320
// Address: 180057320
// Size: 186 bytes


undefined8 * FUN_180057320(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *param_1 = neb::CJsonObject::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar1 = param_1 + 0xe;
  *puVar1 = 0;
  param_1[0xf] = 0;
  uVar3 = FUN_1800582c0();
  *puVar1 = uVar3;
  param_1[0x10] = 0;
  puVar2 = param_1 + 0x11;
  *puVar2 = 0;
  param_1[0x12] = 0;
  uVar3 = FUN_180001d30();
  *puVar2 = uVar3;
  param_1[0x13] = 0;
  param_1[0x10] = *puVar1;
  param_1[0x13] = *puVar2;
  return param_1;
}

