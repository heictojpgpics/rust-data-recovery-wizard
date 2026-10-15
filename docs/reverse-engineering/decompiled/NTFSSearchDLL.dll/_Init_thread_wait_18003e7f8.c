// Function: _Init_thread_wait
// Address: 18003e7f8
// Size: 119 bytes


/* WARNING: Switch with 1 destination removed at 0x00018003e836 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_wait
   
   Library: Visual Studio 2017 Release */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_1800866f8 != (HANDLE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1800866c8);
    WaitForSingleObjectEx(DAT_1800866f8,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00018003e868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1800866c8);
    return;
  }
  bVar1 = (byte)DAT_180086010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180046c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180086010 ^ _DAT_180086700) >> bVar1 |
            (DAT_180086010 ^ _DAT_180086700) << 0x40 - bVar1))
            (&DAT_1800866f0,&DAT_1800866c8,param_1);
  return;
}

