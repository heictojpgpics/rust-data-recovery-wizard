// Function: FUN_180002ed0
// Address: 180002ed0
// Size: 46 bytes


void * FUN_180002ed0(void *param_1)

{
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 8));
  }
  free(param_1);
  return param_1;
}

