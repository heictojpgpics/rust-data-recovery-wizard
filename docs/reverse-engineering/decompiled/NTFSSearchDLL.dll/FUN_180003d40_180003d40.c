// Function: FUN_180003d40
// Address: 180003d40
// Size: 16 bytes


undefined8 * FUN_180003d40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_2 = puVar1;
  *param_1 = *puVar1;
  return param_2;
}

