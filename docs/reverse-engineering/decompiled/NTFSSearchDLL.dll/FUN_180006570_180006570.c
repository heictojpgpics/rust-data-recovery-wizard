// Function: FUN_180006570
// Address: 180006570
// Size: 57 bytes


void FUN_180006570(longlong param_1)

{
  void *_Memory;
  
  _Memory = *(void **)(param_1 + 0x10);
  if (_Memory != (void *)0x0) {
    ~_String_alloc<>((longlong *)((longlong)_Memory + 0x28));
    ~_String_alloc<>((longlong *)((longlong)_Memory + 8));
    free(_Memory);
    return;
  }
  return;
}

