// Function: _Init_thread_abort
// Address: 18005e9d8
// Size: 48 bytes


/* Library Function - Single Match
    _Init_thread_abort
   
   Library: Visual Studio 2017 Release */

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180096400);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180096400);
  _Init_thread_notify();
  return;
}

