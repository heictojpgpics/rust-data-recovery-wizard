// Function: FUN_18002a2a0
// Address: 18002a2a0
// Size: 121 bytes


undefined8 * FUN_18002a2a0(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = BruteForce::MovAnalyzer::vftable;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  param_1[2] = 0;
  FUN_180001630(param_1 + 3);
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

