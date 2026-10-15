// Function: FUN_18005e850
// Address: 18005e850
// Size: 350 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005e850(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_180096400,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_18005e9a2;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_180096430 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_180096430 != (HANDLE)0x0) goto LAB_18005e940;
  }
  else {
    DAT_180096430 = (HANDLE)0x0;
    (*(code *)PTR__guard_dispatch_icall_180066648)(&DAT_180096428);
    bVar7 = 0x40 - ((byte)DAT_18008f028 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_180096438 = DAT_18008f028 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_180096440 = DAT_18008f028 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_18005e940:
    uVar6 = FUN_18005e624(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_18005e9b0);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_18005e9a2:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}

