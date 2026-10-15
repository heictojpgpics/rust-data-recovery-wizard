// Function: end
// Address: 18002ec50
// Size: 106 bytes


/* Library Function - Single Match
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
   __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::end(void) __ptr64
   
   Library: Visual Studio 2017 Release */

undefined8 * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::end
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *in_RDX;
  
  uVar1 = FUN_180002680(this);
  puVar2 = (undefined8 *)FUN_180002680(uVar1);
  puVar3 = FUN_1800025e0(puVar2);
  lVar4 = FUN_18002d070(puVar3);
  FUN_18002db40(in_RDX,lVar4 + puVar2[2]);
  return in_RDX;
}

