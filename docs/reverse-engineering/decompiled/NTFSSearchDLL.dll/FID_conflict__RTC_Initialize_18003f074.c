// Function: FID_conflict:_RTC_Initialize
// Address: 18003f074
// Size: 60 bytes


/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  longlong *plVar1;
  
  for (plVar1 = &DAT_180078130; plVar1 < &DAT_180078130; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18004c388)();
    }
  }
  return;
}

