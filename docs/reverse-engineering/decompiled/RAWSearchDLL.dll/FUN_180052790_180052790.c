// Function: FUN_180052790
// Address: 180052790
// Size: 22 bytes


undefined8 FUN_180052790(undefined8 param_1,longlong param_2,longlong param_3)

{
  if (param_2 == 0) {
    return 0;
  }
  *(undefined4 *)(param_3 + 0x18) = 0x52;
  return 1;
}

