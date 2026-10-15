// Function: _Init_thread_footer
// Address: 18005ea08
// Size: 96 bytes


/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180096400);
  uVar1 = (ulonglong)_tls_index;
  DAT_18008f004 = DAT_18008f004 + 1;
  *param_1 = DAT_18008f004;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18008f004;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180096400);
  _Init_thread_notify();
  return;
}

