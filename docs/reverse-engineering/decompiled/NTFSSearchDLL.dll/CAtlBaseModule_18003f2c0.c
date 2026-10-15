// Function: CAtlBaseModule
// Address: 18003f2c0
// Size: 165 bytes


/* Library Function - Single Match
    public: __cdecl ATL::CAtlBaseModule::CAtlBaseModule(void) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

CAtlBaseModule * __thiscall ATL::CAtlBaseModule::CAtlBaseModule(CAtlBaseModule *this)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD DVar3;
  
  memset(this + 0x28,0,0x28);
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x10) = 0x180000000;
  *(undefined8 *)(this + 8) = 0x180000000;
  *(undefined **)(this + 0x20) = &DAT_18004c540;
  *(undefined4 *)this = 0x60;
  *(undefined4 *)(this + 0x18) = 0xe00;
  BVar2 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(this + 0x28),0,0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    DVar1 = DVar3 & 0xffff | 0x80070000;
    if ((int)DVar3 < 1) {
      DVar1 = DVar3;
    }
    if ((int)DVar1 < 0) {
      BVar2 = IsDebuggerPresent();
      if (BVar2 != 0) {
        OutputDebugStringW(L"ERROR : Unable to initialize critical section in CAtlBaseModule\n");
      }
      DAT_1800881b4 = 1;
    }
  }
  return this;
}

