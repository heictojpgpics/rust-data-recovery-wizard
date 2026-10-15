// Function: FUN_18000dac0
// Address: 18000dac0
// Size: 33 bytes


void FUN_18000dac0(longlong param_1,longlong *param_2)

{
  *(longlong **)(param_1 + 0x790) = param_2;
  if ((param_2 != (longlong *)0x0) && ((*param_2 != 0 || (param_2[1] != 0)))) {
    *(undefined1 *)(param_1 + 0x7e0) = 1;
  }
  return;
}

