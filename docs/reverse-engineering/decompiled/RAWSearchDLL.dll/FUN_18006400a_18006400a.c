// Function: FUN_18006400a
// Address: 18006400a
// Size: 43 bytes


void FUN_18006400a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    __ArrayUnwind(*(void **)(param_2 + 0x50),*(__uint64 *)(param_2 + 0x58),
                  *(__uint64 *)(param_2 + 0x28),*(_func_void_void_ptr **)(param_2 + 0x70));
  }
  return;
}

