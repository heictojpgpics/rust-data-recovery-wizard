// Function: FUN_180037c10
// Address: 180037c10
// Size: 111 bytes


undefined8 * FUN_180037c10(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = BruteForce::TiffAnalyzer::vftable;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  param_1[2] = 0;
  *param_1 = IRawFileAnalyser::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

