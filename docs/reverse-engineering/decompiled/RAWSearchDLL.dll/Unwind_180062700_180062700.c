// Function: Unwind@180062700
// Address: 180062700
// Size: 41 bytes


/* Library Function - Single Match
    int `private: class money_get<char,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > >::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > __cdecl std::money_get<char,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > >::_Getmfld(class money_get<char,class
   std::istreambuf_iterator<char,struct std::char_traits<char> > >::istreambuf_iterator<char,struct
   std::char_traits<char> > & __ptr64,class money_get<char,class
   std::istreambuf_iterator<char,struct std::char_traits<char> > >::istreambuf_iterator<char,struct
   std::char_traits<char> > & __ptr64,bool,class money_get<char,class
   std::istreambuf_iterator<char,struct std::char_traits<char> > >::ios_base & __ptr64)const
   __ptr64'::`1'::dtor$3
   
   Library: Visual Studio 2008 Release */

void Unwind_180062700(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    FUN_180001630(*(longlong **)(param_2 + 0x148));
  }
  return;
}

