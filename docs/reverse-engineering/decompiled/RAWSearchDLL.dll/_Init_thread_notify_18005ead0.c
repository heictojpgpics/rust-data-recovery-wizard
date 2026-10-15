// Function: _Init_thread_notify
// Address: 18005ead0
// Size: 80 bytes


/* WARNING: Switch with 1 destination removed at 0x00018005eb01 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_notify
   
   Library: Visual Studio 2017 Release */

void _Init_thread_notify(void)

{
  byte bVar1;
  
  if (DAT_180096430 != (HANDLE)0x0) {
    SetEvent(DAT_180096430);
                    /* WARNING: Could not recover jumptable at 0x00018005eb19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_180096430);
    return;
  }
  bVar1 = (byte)DAT_18008f028 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x00018005faa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_18008f028 ^ _DAT_180096440) >> bVar1 |
            (DAT_18008f028 ^ _DAT_180096440) << 0x40 - bVar1))(&DAT_180096428);
  return;
}

