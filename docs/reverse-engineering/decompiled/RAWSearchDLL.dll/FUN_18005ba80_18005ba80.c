// Function: FUN_18005ba80
// Address: 18005ba80
// Size: 20 bytes


void FUN_18005ba80(longlong param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
    *param_2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 **)(param_1 + 0x68) = param_2;
  }
  return;
}

