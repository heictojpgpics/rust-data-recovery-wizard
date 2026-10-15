// Function: FUN_180020df0
// Address: 180020df0
// Size: 75 bytes


undefined1 * FUN_180020df0(longlong param_1,undefined1 *param_2)

{
  if (*(undefined8 **)(param_1 + 0x110) == (undefined8 *)0x0) {
    FUN_180001690(param_2);
  }
  else {
    FUN_180007060((longlong)param_2,*(undefined8 **)(param_1 + 0x110));
  }
  return param_2;
}

