// Function: FID_conflict:operator-
// Address: 18002ed30
// Size: 68 bytes


/* Library Function - Multiple Matches With Different Base Names
    public: class std::_String_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> > __cdecl std::_String_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> >::operator-(__int64)const __ptr64
    public: class std::_String_iterator<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > __cdecl std::_String_iterator<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> >::operator-(__int64)const
   __ptr64
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> > >
   __cdecl std::_String_iterator<class std::_String_val<struct std::_Simple_types<char> >
   >::operator-(__int64)const __ptr64
    public: class std::_String_iterator<class std::_String_val<struct std::_Simple_types<unsigned
   short> > > __cdecl std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::operator-(__int64)const __ptr64
     6 names - too many to list
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release,
   Visual Studio 2017 Release */

undefined8 * FID_conflict_operator_(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong local_18 [3];
  
  local_18[0] = *param_1;
  puVar1 = (undefined8 *)FID_conflict_operator__(local_18,param_3);
  *param_2 = *puVar1;
  return param_2;
}

