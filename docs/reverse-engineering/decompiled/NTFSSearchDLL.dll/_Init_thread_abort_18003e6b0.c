// Function: _Init_thread_abort
// Address: 18003e6b0
// Size: 48 bytes


/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800866c8);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800866c8);
  _Init_thread_notify();
  return;
}

