// Function: _Reset_back
// Address: 180009ad0
// Size: 48 bytes


/* Library Function - Single Match
    private: void __cdecl std::basic_filebuf<char,struct std::char_traits<char> >::_Reset_back(void)
   __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
std::basic_filebuf<char,struct_std::char_traits<char>_>::_Reset_back
          (basic_filebuf<char,struct_std::char_traits<char>_> *this)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((basic_filebuf<char,struct_std::char_traits<char>_> *)**(longlong **)(this + 0x18) ==
      this + 0x70) {
    lVar1 = *(longlong *)(this + 0x88);
    uVar2 = *(undefined8 *)(this + 0x90);
    **(longlong **)(this + 0x18) = lVar1;
    **(longlong **)(this + 0x38) = lVar1;
    **(int **)(this + 0x50) = (int)uVar2 - (int)lVar1;
  }
  return;
}

