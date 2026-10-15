// Function: FUN_180026880
// Address: 180026880
// Size: 60 bytes


void * FUN_180026880(void *param_1)

{
  ~_String_alloc<>((longlong *)((longlong)param_1 + 8));
  free(param_1);
  return param_1;
}

