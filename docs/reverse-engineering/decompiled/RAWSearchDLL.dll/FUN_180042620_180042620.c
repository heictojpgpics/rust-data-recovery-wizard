// Function: FUN_180042620
// Address: 180042620
// Size: 85 bytes


undefined8 * FUN_180042620(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = IStorageDevice::vftable;
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[4] = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

