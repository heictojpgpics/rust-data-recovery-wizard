// Function: FUN_180059030
// Address: 180059030
// Size: 45 bytes


void FUN_180059030(uint *param_1)

{
  if ((*param_1 & 0x200) != 0) {
    free(*(void **)(param_1 + 2));
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

