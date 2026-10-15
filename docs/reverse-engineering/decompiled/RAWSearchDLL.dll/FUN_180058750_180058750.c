// Function: FUN_180058750
// Address: 180058750
// Size: 59 bytes


void FUN_180058750(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x48);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}

