// Function: FUN_180034790
// Address: 180034790
// Size: 62 bytes


undefined8 * FUN_180034790(undefined8 *param_1,uint param_2)

{
  *param_1 = CNoneResidentNTFSDataRunList::vftable;
  FUN_180033fb0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

