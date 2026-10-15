// Function: _Init_thread_notify
// Address: 18003e7a8
// Size: 80 bytes


/* WARNING: Switch with 1 destination removed at 0x00018003e7d9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _Init_thread_notify
   
   Library: Visual Studio 2017 Release */

void _Init_thread_notify(void)

{
  byte bVar1;
  
  if (DAT_1800866f8 != (HANDLE)0x0) {
    SetEvent(DAT_1800866f8);
                    /* WARNING: Could not recover jumptable at 0x00018003e7f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(DAT_1800866f8);
    return;
  }
  bVar1 = (byte)DAT_180086010 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x000180046c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((DAT_180086010 ^ _DAT_180086708) >> bVar1 |
            (DAT_180086010 ^ _DAT_180086708) << 0x40 - bVar1))(&DAT_1800866f0);
  return;
}

