// Function: FUN_18003e528
// Address: 18003e528
// Size: 350 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18003e528(void)

{
  code *pcVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  undefined8 uVar6;
  byte bVar7;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_1800866c8,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) goto LAB_18003e67a;
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if ((pFVar3 == (FARPROC)0x0) || ((pFVar4 == (FARPROC)0x0 || (pFVar5 == (FARPROC)0x0)))) {
    DAT_1800866f8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_1800866f8 != (HANDLE)0x0) goto LAB_18003e618;
  }
  else {
    DAT_1800866f8 = (HANDLE)0x0;
    (*(code *)PTR__guard_dispatch_icall_18004c388)(&DAT_1800866f0);
    bVar7 = 0x40 - ((byte)DAT_180086010 & 0x3f);
    bVar2 = bVar7 & 0x3f;
    _DAT_180086700 = DAT_180086010 ^ ((ulonglong)pFVar4 >> bVar2 | (longlong)pFVar4 << 0x40 - bVar2)
    ;
    bVar7 = bVar7 & 0x3f;
    _DAT_180086708 = DAT_180086010 ^ ((ulonglong)pFVar5 >> bVar7 | (longlong)pFVar5 << 0x40 - bVar7)
    ;
LAB_18003e618:
    uVar6 = FUN_18003ea28(0);
    if ((char)uVar6 != '\0') {
      atexit(FUN_18003e688);
      return 0;
    }
    __scrt_fastfail(7);
  }
  __scrt_fastfail(7);
LAB_18003e67a:
  __scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}

