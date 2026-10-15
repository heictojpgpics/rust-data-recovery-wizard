// Function: FUN_180042530
// Address: 180042530
// Size: 52 bytes


void FUN_180042530(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = IStorageDevice::vftable;
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[4] = 0;
  }
  return;
}

