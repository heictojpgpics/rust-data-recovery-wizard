// Function: FID_conflict:end
// Address: 18002ee60
// Size: 110 bytes


/* Library Function - Multiple Matches With Different Base Names
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned
   short> > > __cdecl std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >::end(void) __ptr64
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<wchar_t> >
   > __cdecl std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> >::end(void) __ptr64
   
   Library: Visual Studio 2017 Release */

undefined8 * FID_conflict_end(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar1 = FUN_180002680(param_1);
  puVar2 = (undefined8 *)FUN_18002d070(uVar1);
  puVar3 = FUN_180019e90(puVar2);
  lVar4 = FUN_18002d070(puVar3);
  FUN_18002db40(param_2,lVar4 + puVar2[2] * 2);
  return param_2;
}

