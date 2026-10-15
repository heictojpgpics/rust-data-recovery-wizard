// Function: FID_conflict:begin
// Address: 18002ecc0
// Size: 97 bytes


/* Library Function - Multiple Matches With Different Base Names
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
   __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::begin(void) __ptr64
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned
   short> > > __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::begin(void) __ptr64
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> >
   > __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::begin(void) __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release */

undefined8 * FID_conflict_begin(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_180002680(param_1);
  puVar2 = (undefined8 *)FUN_180002680(uVar1);
  puVar2 = FUN_1800025e0(puVar2);
  uVar1 = FUN_18002d070(puVar2);
  FUN_18002db40(param_2,uVar1);
  return param_2;
}

