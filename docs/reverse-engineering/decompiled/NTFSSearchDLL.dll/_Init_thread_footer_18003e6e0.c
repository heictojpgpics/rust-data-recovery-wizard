// Function: _Init_thread_footer
// Address: 18003e6e0
// Size: 96 bytes


/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800866c8);
  uVar1 = (ulonglong)_tls_index;
  DAT_180086000 = DAT_180086000 + 1;
  *param_1 = DAT_180086000;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_180086000;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800866c8);
  _Init_thread_notify();
  return;
}

