// Function: FUN_1800426f0
// Address: 1800426f0
// Size: 76 bytes


void FUN_1800426f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = CRawFileCellTestStorageDevice::vftable;
  *param_1 = IStorageDevice::vftable;
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
    param_1[4] = 0;
  }
  return;
}

