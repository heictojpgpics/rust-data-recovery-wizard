// Function: FUN_1800027e0
// Address: 1800027e0
// Size: 33 bytes


void * FUN_1800027e0(void *param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

