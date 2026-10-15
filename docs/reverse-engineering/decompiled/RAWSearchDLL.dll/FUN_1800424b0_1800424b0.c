// Function: FUN_1800424b0
// Address: 1800424b0
// Size: 118 bytes


undefined8 * FUN_1800424b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_1801183c8) {
    _Init_thread_header(&DAT_1801183c8);
    if (DAT_1801183c8 == -1) {
      atexit((_func_5014 *)&DAT_180064d70);
      _Init_thread_footer(&DAT_1801183c8);
      return &DAT_1801183c0;
    }
  }
  return &DAT_1801183c0;
}

