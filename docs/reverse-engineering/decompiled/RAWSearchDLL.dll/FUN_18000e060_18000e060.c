// Function: FUN_18000e060
// Address: 18000e060
// Size: 49 bytes


void FUN_18000e060(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  if (param_2 != param_3) {
    do {
      FUN_180001630(param_2);
      param_2 = param_2 + 4;
    } while (param_2 != param_3);
  }
  return;
}

