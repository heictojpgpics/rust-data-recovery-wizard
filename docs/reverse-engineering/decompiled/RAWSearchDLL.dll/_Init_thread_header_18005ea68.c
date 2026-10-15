// Function: _Init_thread_header
// Address: 18005ea68
// Size: 103 bytes


/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180096400);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_18005eabc:
                    /* WARNING: Could not recover jumptable at 0x00018005eac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180096400);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18008f004;
      goto LAB_18005eabc;
    }
    _Init_thread_wait(100);
  } while( true );
}

