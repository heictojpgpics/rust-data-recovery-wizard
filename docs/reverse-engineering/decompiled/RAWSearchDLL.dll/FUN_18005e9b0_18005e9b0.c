// Function: FUN_18005e9b0
// Address: 18005e9b0
// Size: 40 bytes


void FUN_18005e9b0(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_180096400);
  if (DAT_180096430 != (HANDLE)0x0) {
    CloseHandle(DAT_180096430);
  }
  return;
}

