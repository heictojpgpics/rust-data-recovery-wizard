// Function: FUN_180011340
// Address: 180011340
// Size: 42 bytes


undefined8 * FUN_180011340(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_2 + 2;
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_1800071e0((longlong)param_1,param_2,*puVar1);
  }
  return param_1;
}

