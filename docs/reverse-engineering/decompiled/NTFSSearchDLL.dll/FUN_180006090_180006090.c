// Function: FUN_180006090
// Address: 180006090
// Size: 23 bytes


void FUN_180006090(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800060a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_2)(param_2,1);
    return;
  }
  return;
}

