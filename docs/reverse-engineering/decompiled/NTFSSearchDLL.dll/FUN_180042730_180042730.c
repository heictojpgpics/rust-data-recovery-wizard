// Function: FUN_180042730
// Address: 180042730
// Size: 63 bytes


void FUN_180042730(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    free(*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

