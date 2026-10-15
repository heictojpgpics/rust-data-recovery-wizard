// Function: FUN_180008bb0
// Address: 180008bb0
// Size: 20 bytes


void FUN_180008bb0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180008bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

