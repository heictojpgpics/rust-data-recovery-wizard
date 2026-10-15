// Function: ~CAtlBaseModule
// Address: 18003f368
// Size: 52 bytes


/* Library Function - Single Match
    public: __cdecl ATL::CAtlBaseModule::~CAtlBaseModule(void) __ptr64
   
   Library: Visual Studio */

void __thiscall ATL::CAtlBaseModule::~CAtlBaseModule(CAtlBaseModule *this)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x28));
  if (*(void **)(this + 0x50) != (void *)0x0) {
    free(*(void **)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
  }
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  return;
}

