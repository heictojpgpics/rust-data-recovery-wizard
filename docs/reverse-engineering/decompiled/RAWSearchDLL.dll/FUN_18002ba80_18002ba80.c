// Function: FUN_18002ba80
// Address: 18002ba80
// Size: 115 bytes


void FUN_18002ba80(longlong *param_1)

{
  basic_ios<char,struct_std::char_traits<char>_> *this;
  
  this = (basic_ios<char,struct_std::char_traits<char>_> *)(param_1 + 0x13);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0x98) =
       std::basic_stringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
       vftable;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0x9c) = *(int *)(*param_1 + 4) + -0x98;
  FUN_18000a5d0((basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 3));
  std::basic_iostream<char,struct_std::char_traits<char>_>::
  ~basic_iostream<char,struct_std::char_traits<char>_>
            ((basic_iostream<char,struct_std::char_traits<char>_> *)(param_1 + 4));
                    /* WARNING: Could not recover jumptable at 0x00018002baec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,struct_std::char_traits<char>_>::
  ~basic_ios<char,struct_std::char_traits<char>_>(this);
  return;
}

