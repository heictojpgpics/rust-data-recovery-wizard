// Function: _Init_thread_wait
// Address: 18005eb20
// Size: 119 bytes


/* WARNING: Switch with 1 destination removed at 0x00018005eb5e */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_180096430 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180096400);
    WaitForSingleObjectEx(DAT_180096430,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00018005eb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_180096400);
    return;
  }
  bVar1 = (byte)DAT_18008f028 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x00018005faa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18008f028 ^ _DAT_180096438) >> bVar1 |
            (DAT_18008f028 ^ _DAT_180096438) << 0x40 - bVar1))
            (&DAT_180096428,&DAT_180096400,param_1);
  return;
}

