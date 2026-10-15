// Function: FUN_180033ee0
// Address: 180033ee0
// Size: 137 bytes


undefined8 * FUN_180033ee0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = IDataRunList::vftable;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = (undefined8 *)FUN_18002be40(0x10);
  *puVar1 = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 **)*puVar1 = puVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_1[4];
  param_1[6] = *puVar1;
  return param_1;
}

