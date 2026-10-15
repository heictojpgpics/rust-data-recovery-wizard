// Function: FUN_1800212d0
// Address: 1800212d0
// Size: 91 bytes


void FUN_1800212d0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  if (param_2 != param_3) {
    do {
      FUN_180001630(param_2 + 4);
      FUN_180001630(param_2);
      param_2 = param_2 + 9;
    } while (param_2 != param_3);
  }
  return;
}

