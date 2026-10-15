// Function: FUN_180013710
// Address: 180013710
// Size: 129 bytes


undefined8 * FUN_180013710(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = RawSpeed::TARAnalyser::vftable;
  param_1[2] = RawSpeed::TARAnalyser::vftable;
  DAT_18008f040 = 1;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
    param_1[3] = 0;
  }
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

