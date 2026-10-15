// Function: FUN_180013c70
// Address: 180013c70
// Size: 60 bytes


void * FUN_180013c70(void *param_1)

{
  ~_String_alloc<>((longlong *)((longlong)param_1 + 8));
  free(param_1);
  return param_1;
}

