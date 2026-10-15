// Function: FUN_180042880
// Address: 180042880
// Size: 47 bytes


void FUN_180042880(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}

