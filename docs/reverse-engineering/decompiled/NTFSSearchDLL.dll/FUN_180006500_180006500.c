// Function: FUN_180006500
// Address: 180006500
// Size: 65 bytes


void * FUN_180006500(void *param_1,uint param_2)

{
  ~_String_alloc<>((longlong *)((longlong)param_1 + 0x28));
  ~_String_alloc<>((longlong *)((longlong)param_1 + 8));
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

