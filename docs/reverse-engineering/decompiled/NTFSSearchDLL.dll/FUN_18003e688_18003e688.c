// Function: FUN_18003e688
// Address: 18003e688
// Size: 40 bytes


void FUN_18003e688(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_1800866c8);
  if (DAT_1800866f8 != (HANDLE)0x0) {
    CloseHandle(DAT_1800866f8);
  }
  return;
}

