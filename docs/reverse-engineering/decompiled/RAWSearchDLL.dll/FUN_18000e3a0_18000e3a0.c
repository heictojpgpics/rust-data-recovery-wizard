// Function: FUN_18000e3a0
// Address: 18000e3a0
// Size: 115 bytes


longlong FUN_18000e3a0(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  if (param_2 != param_3) {
    do {
      param_1 = FUN_1800012e0(param_1,param_4);
      FUN_180007060(param_1,param_2);
      param_4 = param_4 + 0x20;
      param_2 = param_2 + 4;
    } while (param_2 != param_3);
  }
  return param_4;
}

