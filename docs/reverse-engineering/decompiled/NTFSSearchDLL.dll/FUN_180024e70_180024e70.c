// Function: FUN_180024e70
// Address: 180024e70
// Size: 33 bytes


void * FUN_180024e70(void *param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

