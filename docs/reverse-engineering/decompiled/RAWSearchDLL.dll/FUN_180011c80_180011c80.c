// Function: FUN_180011c80
// Address: 180011c80
// Size: 94 bytes


undefined8 * FUN_180011c80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_1 != param_2) {
    do {
      if (param_3 != param_1) {
        puVar1 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar1 = (undefined8 *)*param_1;
        }
        FUN_1800071e0((longlong)param_3,puVar1,param_1[2]);
      }
      param_3 = param_3 + 4;
      param_1 = param_1 + 4;
    } while (param_1 != param_2);
  }
  return param_3;
}

