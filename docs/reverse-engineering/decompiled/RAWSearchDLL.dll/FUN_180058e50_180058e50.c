// Function: FUN_180058e50
// Address: 180058e50
// Size: 85 bytes


void FUN_180058e50(uint *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((*param_1 & 0x200) != 0) {
    free(*(void **)(param_1 + 2));
  }
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = param_3;
  *param_1 = param_4 | 0x100;
  return;
}

