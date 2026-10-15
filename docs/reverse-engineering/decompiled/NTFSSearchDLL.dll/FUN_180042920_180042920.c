// Function: FUN_180042920
// Address: 180042920
// Size: 77 bytes


undefined8 * FUN_180042920(undefined8 *param_1,undefined1 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_3;
  param_1[1] = 0;
  puVar2 = param_1 + 2;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  return param_1;
}

