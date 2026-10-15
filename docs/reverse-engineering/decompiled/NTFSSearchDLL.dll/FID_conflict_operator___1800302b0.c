// Function: FID_conflict:operator!=
// Address: 1800302b0
// Size: 64 bytes


/* Library Function - Multiple Matches With Different Base Names
    public: bool __cdecl std::_String_const_iterator<char,struct std::char_traits<char>,class
   std::allocator<char> >::operator!=(class std::_String_const_iterator<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> >::operator!=(class
   std::_String_const_iterator<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::operator!=(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<char> > > const & __ptr64)const __ptr64
    public: bool __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<unsigned short> > >::operator!=(class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<unsigned short> > > const & __ptr64)const __ptr64
     8 names - too many to list
   
   Library: Visual Studio */

bool FID_conflict_operator__(longlong *param_1,longlong *param_2)

{
  bool local_18;
  
  local_18 = FID_conflict_operator__(param_1,param_2);
  local_18 = !local_18;
  return local_18;
}

