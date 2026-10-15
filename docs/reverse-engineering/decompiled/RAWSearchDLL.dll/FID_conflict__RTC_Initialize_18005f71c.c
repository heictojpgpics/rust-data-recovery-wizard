// Function: FID_conflict:_RTC_Initialize
// Address: 18005f71c
// Size: 60 bytes


/* Library Function - Multiple Matches With Different Base Names
    _RTC_Initialize
    _RTC_Terminate
   
   Library: Visual Studio 2017 Release */

void FID_conflict__RTC_Initialize(void)

{
  longlong *plVar1;
  
  for (plVar1 = &DAT_18007b748; plVar1 < &DAT_18007b748; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_180066648)();
    }
  }
  return;
}

